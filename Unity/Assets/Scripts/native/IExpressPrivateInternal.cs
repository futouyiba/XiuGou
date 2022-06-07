﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace ZEGO
{
    class IExpressPrivateInternal
    {
        [DllImport(ZegoConstans.LIB_NAME, EntryPoint = "zego_express_custom_log", CallingConvention = ZegoConstans.ZEGO_CALLINGCONVENTION)]
        public static extern void zego_express_custom_log([In()][MarshalAs(UnmanagedType.CustomMarshaler, MarshalTypeRef = typeof(ZegoUtil.UTF8StringMarshaler))] string log, [In()][MarshalAs(UnmanagedType.CustomMarshaler, MarshalTypeRef = typeof(ZegoUtil.UTF8StringMarshaler))] string module);


        [DllImport(ZegoConstans.LIB_NAME, EntryPoint = "zego_express_get_print_debug_info", CallingConvention = ZegoConstans.ZEGO_CALLINGCONVENTION)]
        public static extern IntPtr zego_express_get_print_debug_info(int module, [In()][MarshalAs(UnmanagedType.LPStr)] string func_name, int error_code);


        [DllImport(ZegoConstans.LIB_NAME, EntryPoint = "zego_express_trigger_on_debug_error", CallingConvention = ZegoConstans.ZEGO_CALLINGCONVENTION)]
        public static extern void zego_express_trigger_on_debug_error(int error_code, [In()][MarshalAs(UnmanagedType.LPStr)] string func_name, [In()][MarshalAs(UnmanagedType.CustomMarshaler, MarshalTypeRef = typeof(ZegoUtil.UTF8StringMarshaler))] string info);


        [DllImport(ZegoConstans.LIB_NAME, EntryPoint = "zego_express_trigger_on_api_called_result", CallingConvention = ZegoConstans.ZEGO_CALLINGCONVENTION)]
        public static extern void zego_express_trigger_on_api_called_result(int error_code, [In()][MarshalAs(UnmanagedType.LPStr)] string func_name, [In()][MarshalAs(UnmanagedType.CustomMarshaler, MarshalTypeRef = typeof(ZegoUtil.UTF8StringMarshaler))] string info);
    }
    
}
