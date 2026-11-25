/* IL2CPP: LevelEnvironmentSystem$$OnLevelEnvironmentUpdate
void LevelEnvironmentSystem__OnLevelEnvironmentUpdate (LevelEnvironmentSystem_o* __this, LevelEnvironmentUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelEnvironmentSystem$$OnLevelEnvironmentUpdate
   void LevelEnvironmentSystem__OnLevelEnvironmentUpdate (LevelEnvironmentSystem_o* __this,
   LevelEnvironmentUpdateMessage_o m, const MethodInfo* method); */

void LevelEnvironmentSystem__OnLevelEnvironmentUpdate_24df10c
               (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
               uint param_6)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong extraout_d0;
  ulong extraout_d0_00;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4bc5b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7940);
    FUN_021f03f8(PTR_DAT_049c6a90);
    FUN_021f03f8(PTR_DAT_049c6a80);
    param_1 = FUN_021f03f8(PTR_DAT_049c6a88);
    bRam0000000004f4bc5b = 1;
  }
  if ((*(long *)(param_5 + 0x40) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_5 + 0x40),0),
     puVar3 = PTR_DAT_049c7940, param_1 = extraout_d0, lVar4 != 0)) {
    uVar1 = param_6 & 1 ^ 1;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar4,uVar1,0);
    if (*(long *)(param_5 + 0x60) != 0) {
      UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(param_5 + 0x60),uVar1,0);
    }
    lVar6 = *(long *)puVar3;
    lVar4 = *(long *)(lVar6 + 0x20);
    uVar2 = *(ushort *)(lVar4 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_02229718();
      lVar4 = *(long *)(lVar6 + 0x20);
      uVar2 = *(ushort *)(lVar4 + 0x135);
    }
    puVar3 = PTR_DAT_049c6a80;
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    thunk_FUN_0224e54c(param_5 + 0x68,
                       *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) + 0x20);
    lVar4 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    pcVar5 = (char *)thunk_FUN_0224e54c(param_5 + 0x68,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80));
    if (*pcVar5 == '\0') {
      param_1 = extraout_d0_00;
      if (*(long *)(param_5 + 0x48) == 0) goto LAB_025df108;
      uStack_40 = UnityEngine_Camera__get_backgroundColor_3bcc1c8(*(long *)(param_5 + 0x48),0);
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_3c = param_2;
      uStack_38 = param_3;
      uStack_34 = param_4;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_58,&uStack_40,*(undefined8 *)PTR_DAT_049c6a90);
      *(ulong *)(param_5 + 0x70) = uStack_50;
      *(ulong *)(param_5 + 0x68) = uStack_58;
      *(undefined4 *)(param_5 + 0x78) = uStack_48;
    }
    lVar4 = *(long *)(param_5 + 0x48);
    if ((param_6 & 1) == 0) {
      System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                (param_5 + 0x68,&uStack_58,*(undefined8 *)PTR_DAT_049c6a88);
      param_1 = uStack_58 & 0xffffffff;
      uVar8 = uStack_50 & 0xffffffff;
      uVar7 = uStack_58._4_4_;
      uVar9 = uStack_50._4_4_;
    }
    else {
      param_1 = 0;
      uVar8 = 0;
      uVar7 = 0x3f800000;
      uVar9 = 0x3f800000;
    }
    if (lVar4 != 0) {
      UnityEngine_Camera__set_backgroundColor_3bcc2a0(param_1,uVar7,uVar8,uVar9,lVar4,0);
      return;
    }
  }
LAB_025df108:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(param_1);
}

