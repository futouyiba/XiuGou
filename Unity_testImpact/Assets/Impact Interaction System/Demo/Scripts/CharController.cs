using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharController : MonoBehaviour
{

    [Header("Movements")]
    [SerializeField] protected float moveSpeed;
    [SerializeField] private float movementSmoothing = 0.1f;

    [SerializeField] private Rigidbody characterRigidbody;
    private Vector3 targetMovement = Vector2.zero;
    private Vector3 smoothedMovement, smoothedMovementV;
    
    private Vector3 targetCharacterRotation = Vector2.zero;
    private Vector3 smoothedCharacterRotation, smoothedCharacterRotationV;
    [SerializeField] private float cameraSmoothing = 0.1f;
    
    private Vector3 previousPosition;
    private float distanceTravelled;
    
    
    [Header("Pick Up Objects")]
    [SerializeField]
    private float pickedUpDrag = 10f;
    [SerializeField]
    private float pickupHoldForce = 5f;
    [SerializeField]
    private float throwForce = 750f;
    
    private Rigidbody pickedUpObject;
    private float pickupDistance;

    [SerializeField] private Camera camera;
    [SerializeField] private Rigidbody cameraRigidbody;
    private void Awake()
    {
        previousPosition = transform.position;
        Cursor.lockState = CursorLockMode.None;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        targetMovement = getMovementInput();
        smoothedMovement = Vector3.SmoothDamp(smoothedMovement, targetMovement, ref smoothedMovementV, movementSmoothing);
        // camera.transform.position += targetMovement;
        if (targetMovement != Vector3.zero)
        {
            targetCharacterRotation = Quaternion.LookRotation(targetMovement).eulerAngles;
        }
        smoothedCharacterRotation = Vector3.SmoothDamp(smoothedCharacterRotation, targetCharacterRotation, ref smoothedCharacterRotationV, cameraSmoothing);

        if (Input.GetKeyDown(KeyCode.E))
        {
            if(pickedUpObject==null) TryPickup();
            else dropObject(throwForce);
        }
        

    }

    private void FixedUpdate()
    {
        characterRigidbody.MoveRotation(Quaternion.Euler(smoothedCharacterRotation));
        characterRigidbody.velocity = new Vector3(smoothedMovement.x, characterRigidbody.velocity.y, smoothedMovement.z);
        // cameraRigidbody.velocity = new Vector3(smoothedMovement.x, 0, smoothedMovement.z);
        updatePickedUpObject();
    }
    
    private void LateUpdate()
    {
        Vector3 currentPosition = transform.position;
        var deltaPos = currentPosition - previousPosition;
        camera.transform.position += new Vector3(deltaPos.x, 0, deltaPos.z);
        float distanceTravelledThisFrame = Vector3.Distance(previousPosition, currentPosition);

        distanceTravelled += distanceTravelledThisFrame;
        previousPosition = currentPosition;
    }

    #region Movement

    private Vector3 getMovementInput()
    {
        Vector3 movementInput = Vector3.zero;

        if (Input.GetKey(KeyCode.W))
            movementInput.x = 1;
        else if (Input.GetKey(KeyCode.S))
            movementInput.x = -1;

        if (Input.GetKey(KeyCode.A))
            movementInput.z = 1;
        else if (Input.GetKey(KeyCode.D))
            movementInput.z = -1;

        movementInput.Normalize();
        movementInput *= moveSpeed;

        // return transform.rotation * movementInput;
        return movementInput;
    }

    // private void updateGrounded()
    // {
    //     isGrounded = Physics.Raycast(transform.position - new Vector3(0, 0.99f, 0), Vector3.down, 0.1f);
    // }
    #endregion

    private void TryPickup()
    {
        Collider[] hitColliders = Physics.OverlapSphere(this.transform.position, 2);
        if (hitColliders.Length == 0)
        {
            return;
        }

        var minDist = 999f;
        GameObject minObj = null;
        foreach (var hitCollider in hitColliders)
        {
            if(!hitCollider.gameObject.CompareTag("Pickups")) continue;
            var dist = Vector3.Distance(hitCollider.transform.position, this.transform.position);
            if (dist < minDist)
            {
                minDist = dist;
                minObj = hitCollider.gameObject;
            }
        }

        if (!minObj)
        {
            // Debug.LogError($"obj does not exist");
            return;
        }
        
        this.pickedUpObject = minObj.GetComponent<Rigidbody>();
        pickupDistance = Mathf.Max(0.8f, minDist);
        pickedUpObject.useGravity = false;
        pickedUpObject.drag = pickedUpDrag;
        pickedUpObject.angularDrag = pickedUpDrag;
        Debug.Log($"successfully picked up {minObj.name}");
    }
    
    
    
    private void updatePickedUpObject()
    {
        if (pickedUpObject != null)
        {
            Vector3 target = transform.position + transform.forward * pickupDistance;
            Vector3 dir = target - pickedUpObject.position;

            pickedUpObject.AddForce(dir * pickupHoldForce, ForceMode.VelocityChange);
        }
    }

    private void dropObject(float force)
    {
        if (pickedUpObject != null)
        {
            pickedUpObject.useGravity = true;
            pickedUpObject.drag = 0;
            pickedUpObject.angularDrag = 0.05f;
            pickedUpObject.AddForce(transform.forward * force);
            pickedUpObject = null;
        }
    }
}
