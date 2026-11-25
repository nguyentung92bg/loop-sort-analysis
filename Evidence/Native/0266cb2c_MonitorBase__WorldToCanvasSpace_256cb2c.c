/* IL2CPP: MonitorBase$$WorldToCanvasSpace
UnityEngine_Vector3_o MonitorBase__WorldToCanvasSpace (MonitorBase_o* __this, UnityEngine_Vector3_o worldPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$WorldToCanvasSpace
   UnityEngine_Vector3_o MonitorBase__WorldToCanvasSpace (MonitorBase_o* __this,
   UnityEngine_Vector3_o worldPosition, const MethodInfo* method); */

undefined1  [16]
MonitorBase__WorldToCanvasSpace_256cb2c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 uVar6;
  undefined8 extraout_var_02;
  undefined1 auVar5 [16];
  
  if ((bRam0000000004f4c19b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4c19b = 1;
  }
  if (*(long *)(param_4 + 0x48) != 0) {
    iVar1 = UnityEngine_Canvas__get_renderMode_3ec6cbc(*(long *)(param_4 + 0x48),0);
    if (iVar1 == 1) {
      if (*(long *)(param_4 + 0x38) != 0) {
        uVar3 = UnityEngine_Camera__WorldToScreenPoint_3bce91c
                          (param_1,param_2,param_3,*(long *)(param_4 + 0x38),0);
        if (*(long *)(param_4 + 0x48) != 0) {
          lVar2 = *(long *)(param_4 + 0x38);
          uVar4 = UnityEngine_Canvas__get_planeDistance_3ec7424(*(long *)(param_4 + 0x48),0);
          if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Extensions__WithZ_3f0d5f4(uVar3,param_2,param_3,uVar4,0);
          if (lVar2 != 0) {
            UnityEngine_Camera__ScreenToWorldPoint_3bce934(lVar2,0);
            uVar3 = extraout_s0;
            uVar4 = extraout_var;
            uVar6 = extraout_var_01;
            goto LAB_0266cc74;
          }
        }
      }
    }
    else if (*(long *)(param_4 + 0x48) != 0) {
      iVar1 = UnityEngine_Canvas__get_renderMode_3ec6cbc(*(long *)(param_4 + 0x48),0);
      if (iVar1 == 0) {
        if (*(long *)(param_4 + 0x38) == 0) goto LAB_0266cc88;
        UnityEngine_Camera__WorldToScreenPoint_3bce91c
                  (param_1,param_2,param_3,*(long *)(param_4 + 0x38),0);
        uVar3 = extraout_s0_00;
        uVar4 = extraout_var_00;
        uVar6 = extraout_var_02;
      }
      else {
        if (cRam0000000004f4a233 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a233 = '\x01';
        }
        uVar3 = **(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar4 = 0;
        uVar6 = 0;
      }
LAB_0266cc74:
      auVar5._4_4_ = uVar4;
      auVar5._0_4_ = uVar3;
      auVar5._8_8_ = uVar6;
      return auVar5;
    }
  }
LAB_0266cc88:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

