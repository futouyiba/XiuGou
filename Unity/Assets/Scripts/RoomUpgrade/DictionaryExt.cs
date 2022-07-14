using System.Collections.Generic;
using Unity.VisualScripting;

public class DictionaryExt<K,V> :Dictionary<K,V>
{
    public void Add(K key, V value)
    {
        if (ContainsKey(key))
        {
            this[key] = value;
        }
        else
        {
            base.Add(key,value);
        }
    }
}