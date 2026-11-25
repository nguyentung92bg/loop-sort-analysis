/* IL2CPP: GpuDetect$$GetRaw
GpuDetect_Raw_o GpuDetect__GetRaw (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GpuDetect$$GetRaw
   GpuDetect_Raw_o GpuDetect__GetRaw (const MethodInfo* method); */

void GpuDetect__GetRaw_2499904(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  lVar3 = UnityEngine_SystemInfo__get_graphicsDeviceName_3c286d4(0);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = System_String__Trim_2f8204c();
  }
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50);
  lVar3 = UnityEngine_SystemInfo__get_graphicsDeviceVendor_3c2879c(0);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = System_String__Trim_2f8204c();
  }
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8);
                    /* try { // try from 0259996c to 026999ff has its CatchHandler @ 0259996c
                       catch() { ... } // from try @ 0259996c with catch @ 0259996c
                       catch() { ... } // from try @ 02599ab4 with catch @ 0259996c
                       catch() { ... } // from try @ 02599b38 with catch @ 0259996c */
  lVar3 = UnityEngine_SystemInfo__get_graphicsDeviceVersion_3c28954(0);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = System_String__Trim_2f8204c();
  }
  uStack_40 = uVar4;
  thunk_FUN_021f190c(&uStack_40);
  uVar2 = UnityEngine_SystemInfo__get_graphicsDeviceType_3c28904(0);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar2);
  uVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel_3c28a1c(0);
  uStack_38 = CONCAT44(uVar2,(undefined4)uStack_38);
  uVar2 = UnityEngine_SystemInfo__get_supports32bitsIndexBuffer_3c28ddc(0);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar2) & 0xffffffff00000001;
  uVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders_3c28cec(0);
  uStack_30 = CONCAT35(uStack_30._5_3_,CONCAT14(uVar1,(undefined4)uStack_30)) & 0xffffff01ffffffff;
  uVar1 = UnityEngine_SystemInfo__get_supportsGeometryShaders_3c28d3c(0);
  uStack_30 = CONCAT26(uStack_30._6_2_,CONCAT15(uVar1,(undefined5)uStack_30)) & 0xffff01ffffffffff;
  uVar1 = UnityEngine_SystemInfo__get_supportsInstancing_3c28d8c(0);
  uStack_30 = CONCAT17(uStack_30._7_1_,CONCAT16(uVar1,(undefined6)uStack_30)) & 0xff01ffffffffffff;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[4] = uStack_30;
                    /* try { // try from 02599a00 to 02699a0b has its CatchHandler @ 02599afc */
  return;
}

