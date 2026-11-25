/* IL2CPP: MonitorBase$$ScreenToCanvasSpace
UnityEngine_Vector3_o MonitorBase__ScreenToCanvasSpace (MonitorBase_o* __this, UnityEngine_Vector3_o screenPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$ScreenToCanvasSpace
   UnityEngine_Vector3_o MonitorBase__ScreenToCanvasSpace (MonitorBase_o* __this,
   UnityEngine_Vector3_o screenPosition, const MethodInfo* method); */

undefined4
MonitorBase__ScreenToCanvasSpace_256cd2c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((bRam0000000004f4c19c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4c19c = 1;
  }
  if (*(long *)(param_4 + 0x48) != 0) {
    iVar1 = UnityEngine_Canvas__get_renderMode_3ec6cbc(*(long *)(param_4 + 0x48),0);
    if (iVar1 == 1) {
      if (*(long *)(param_4 + 0x48) != 0) {
        lVar2 = *(long *)(param_4 + 0x38);
        uVar3 = UnityEngine_Canvas__get_planeDistance_3ec7424(*(long *)(param_4 + 0x48),0);
        if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
          FUN_021f0574();
        }
        Extensions__WithZ_3f0d5f4(param_1,param_2,param_3,uVar3,0);
        if (lVar2 != 0) {
          uVar3 = UnityEngine_Camera__ScreenToWorldPoint_3bce934(lVar2,0);
          return uVar3;
        }
      }
    }
    else if (*(long *)(param_4 + 0x48) != 0) {
      iVar1 = UnityEngine_Canvas__get_renderMode_3ec6cbc(*(long *)(param_4 + 0x48),0);
      if (iVar1 != 0) {
        if (cRam0000000004f4a233 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a233 = '\x01';
        }
        param_1 = **(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      }
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

