/* IL2CPP: CoreStreak$$Initialize
void CoreStreak__Initialize (CoreStreak_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreak$$Initialize
   void CoreStreak__Initialize (CoreStreak_o* __this, const MethodInfo* method); */

void CoreStreak__Initialize_2512a28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  
  if ((bRam0000000004f4bdff & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2c20);
    FUN_021f03f8(PTR_DAT_049c9250);
    FUN_021f03f8(PTR_DAT_049c2c08);
    FUN_021f03f8(PTR_DAT_049c2c30);
    FUN_021f03f8(PTR_DAT_049c2c18);
    FUN_021f03f8(PTR_DAT_049c9258);
    FUN_021f03f8(PTR_DAT_049c92a8);
    FUN_021f03f8(PTR_DAT_049c92b0);
    FUN_021f03f8(PTR_DAT_049c92b8);
    FUN_021f03f8(PTR_DAT_049c92c0);
    FUN_021f03f8(PTR_DAT_049c2c58);
    FUN_021f03f8(PTR_DAT_049c2c60);
    FUN_021f03f8(PTR_DAT_049c9270);
    bRam0000000004f4bdff = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar5 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049c92c0);
    plVar11 = (long *)(param_1 + 0x58);
    *plVar11 = lVar5;
    thunk_FUN_021f190c(plVar11,lVar5);
    puVar2 = PTR_DAT_049c92b0;
    puVar1 = PTR_DAT_049c2c18;
    if (*plVar11 != 0) {
      if (*(char *)(*plVar11 + 0x10) == '\0') {
        return;
      }
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2c08);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar6,param_1,*(undefined8 *)puVar2,0);
      lVar13 = *(long *)puVar1;
      lVar5 = *(long *)(lVar13 + 0x38);
      if (lVar5 == 0) {
        FUN_02229774(lVar13);
        lVar5 = *(long *)(lVar13 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar4 = PTR_DAT_049c92a8;
      puVar3 = PTR_DAT_049c2c60;
      puVar2 = PTR_DAT_049c2c30;
      puVar1 = PTR_DAT_049c2c20;
      lVar5 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                (uVar12,uVar6,**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)puVar3);
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar6,param_1,*(undefined8 *)puVar4,0);
      lVar13 = *(long *)puVar2;
      lVar5 = *(long *)(lVar13 + 0x38);
      if (lVar5 == 0) {
        FUN_02229774(lVar13);
        lVar5 = *(long *)(lVar13 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar4 = PTR_DAT_049c92b8;
      puVar3 = PTR_DAT_049c9258;
      puVar2 = PTR_DAT_049c9250;
      puVar1 = PTR_DAT_049c2c58;
      lVar5 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                (uVar12,uVar6,**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)puVar1);
      plVar11 = *(long **)(param_1 + 0x48);
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar6,param_1,*(undefined8 *)puVar4,0);
      lVar13 = *(long *)puVar3;
      lVar5 = *(long *)(lVar13 + 0x38);
      if (lVar5 == 0) {
        FUN_02229774(lVar13);
        lVar5 = *(long *)(lVar13 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar1 = PTR_DAT_049c9270;
      lVar5 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      lVar13 = *(long *)puVar1;
      uVar12 = **(undefined8 **)(lVar5 + 0xb8);
      lVar5 = *(long *)(lVar13 + 0x38);
      if (lVar5 == 0) {
        FUN_02229774(lVar13);
        lVar5 = *(long *)(lVar13 + 0x38);
      }
      if ((*(ushort *)(*(long *)(lVar5 + 0x10) + 0x135) & 1) == 0) {
        FUN_02229718();
      }
      uVar7 = thunk_FUN_0222ca34();
      MessagePipe_AnonymousMessageHandler___Il2CppFullySharedGenericType____ctor_27b286c
                (uVar7,uVar6,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar5 = **(long **)(lVar13 + 0x38);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718(lVar5);
      }
      lVar13 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_027d671c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plVar11,lVar5,0);
LAB_027d671c:
                    /* WARNING: Could not recover jumptable at 0x027d6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(plVar11,uVar7,uVar12,puVar8[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

