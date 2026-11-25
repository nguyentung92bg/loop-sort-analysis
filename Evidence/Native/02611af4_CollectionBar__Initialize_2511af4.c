/* IL2CPP: CollectionBar$$Initialize
void CollectionBar__Initialize (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$Initialize
   void CollectionBar__Initialize (CollectionBar_o* __this, const MethodInfo* method); */

void CollectionBar__Initialize_2511af4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  
  if ((bRam0000000004f4bdf3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9250);
    FUN_021f03f8(PTR_DAT_049c9258);
    FUN_021f03f8(PTR_DAT_049c9260);
    FUN_021f03f8(PTR_DAT_049c9268);
    FUN_021f03f8(PTR_DAT_049c9270);
    bRam0000000004f4bdf3 = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  puVar3 = PTR_DAT_049c9260;
  puVar2 = PTR_DAT_049c9258;
  puVar1 = PTR_DAT_049c9250;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar4 = RemoteConfigModule__GetDataClassNew_object__26a494c
                    (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_049c9268);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  thunk_FUN_021f190c();
  plVar11 = *(long **)(param_1 + 0x40);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar4,param_1,*(undefined8 *)puVar3,0);
  lVar12 = *(long *)puVar2;
  lVar8 = *(long *)(lVar12 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar12);
    lVar8 = *(long *)(lVar12 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c9270;
  lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  lVar12 = *(long *)puVar1;
  uVar7 = **(undefined8 **)(lVar8 + 0xb8);
  lVar8 = *(long *)(lVar12 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar12);
    lVar8 = *(long *)(lVar12 + 0x38);
  }
  if ((*(ushort *)(*(long *)(lVar8 + 0x10) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar5 = thunk_FUN_0222ca34();
  MessagePipe_AnonymousMessageHandler___Il2CppFullySharedGenericType____ctor_27b286c
            (uVar5,uVar4,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18));
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = **(long **)(lVar12 + 0x38);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718(lVar8);
  }
  lVar12 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_027d671c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(plVar11,lVar8,0);
LAB_027d671c:
                    /* WARNING: Could not recover jumptable at 0x027d6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar11,uVar5,uVar7,puVar6[1]);
  return;
}

