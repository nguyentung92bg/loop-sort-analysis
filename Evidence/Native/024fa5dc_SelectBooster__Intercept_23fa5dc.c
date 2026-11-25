/* IL2CPP: SelectBooster$$Intercept
void SelectBooster__Intercept (SelectBooster_o* __this, Lean_Touch_LeanFinger_o* finger, UnityEngine_RaycastHit_o hitInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SelectBooster$$Intercept
   void SelectBooster__Intercept (SelectBooster_o* __this, Lean_Touch_LeanFinger_o* finger,
   UnityEngine_RaycastHit_o hitInfo, const MethodInfo* method); */

void SelectBooster__Intercept_23fa5dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b673 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c23a8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b673 = 1;
  }
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  uStack_3c = *(undefined8 *)((long)param_3 + 0x24);
  uStack_48 = (undefined4)param_3[3];
  uStack_44 = (undefined4)*(undefined8 *)((long)param_3 + 0x1c);
  uStack_40 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x1c) >> 0x20);
  BoosterBase__Intercept_24e4dd8(param_1,param_2,&uStack_60,0);
  lVar2 = UnityEngine_RaycastHit__get_transform_3c89f0c(param_3,0);
  puVar1 = PTR_DAT_049b3b98;
  if (lVar2 == 0) goto LAB_024fa708;
  UnityEngine_Component__GetComponentInParent___Il2CppFullySharedGenericType__25c1f2c
            (lVar2,&uStack_28,*(undefined8 *)PTR_DAT_049c23a8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uStack_28,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_024fa708;
    uStack_88 = param_3[1];
    uStack_90 = *param_3;
    uStack_80 = param_3[2];
    uStack_6c = *(undefined8 *)((long)param_3 + 0x24);
    uStack_78 = (undefined4)param_3[3];
    uStack_74 = (undefined4)*(undefined8 *)((long)param_3 + 0x1c);
    uStack_70 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x1c) >> 0x20);
    uVar3 = SelectBoosterSystem__TrySelect_23fa70c(*(long *)(param_1 + 0xc0),uStack_28,&uStack_90);
    lVar2 = *(long *)(param_1 + 0xa0);
    if ((uVar3 & 1) != 0) {
      if (lVar2 != 0) {
        BoosterSystem__Complete_24e5b58(lVar2,0);
        return;
      }
      goto LAB_024fa708;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0xa0);
  }
  if (lVar2 != 0) {
    BoosterSystem__TryCancel_24e5938(lVar2,0);
    return;
  }
LAB_024fa708:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

