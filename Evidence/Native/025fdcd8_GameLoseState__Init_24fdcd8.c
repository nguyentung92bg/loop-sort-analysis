/* IL2CPP: GameLoseState$$Init
void GameLoseState__Init (GameLoseState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameLoseState$$Init
   void GameLoseState__Init (GameLoseState_o* __this, const MethodInfo* method); */

void GameLoseState__Init_24fdcd8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  
  puVar4 = PTR_DAT_049c8ae8;
  puVar3 = PTR_DAT_049c8ae0;
  puVar2 = PTR_DAT_049c2c30;
  puVar1 = PTR_DAT_049c2c20;
                    /* try { // try from 025fdd14 to 026fdd1f has its CatchHandler @ 025fe098 */
  if ((bRam0000000004f4bd5a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2c20);
                    /* try { // try from 025fdd2c to 026fdd2f has its CatchHandler @ 025fe0ac */
    FUN_021f03f8(PTR_DAT_049c2c30);
    FUN_021f03f8(PTR_DAT_049c8ae8);
                    /* try { // try from 025fdd3c to 026fdd63 has its CatchHandler @ 025fe0bc */
    FUN_021f03f8(PTR_DAT_049c8ae0);
    FUN_021f03f8(PTR_DAT_049c2c58);
    bRam0000000004f4bd5a = 1;
  }
  UnityHFSM_StateBase___Il2CppFullySharedGenericType___Init_29a6630(param_1,*(undefined8 *)puVar3);
  plVar12 = *(long **)(param_1 + 0xc0);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
                    /* try { // try from 025fdd88 to 026fdd8f has its CatchHandler @ 025fe09c */
  lVar13 = *(long *)puVar2;
  lVar9 = *(long *)(lVar13 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar13);
    lVar9 = *(long *)(lVar13 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c2c58;
                    /* try { // try from 025fddc0 to 026fddc7 has its CatchHandler @ 025fe0a8 */
                    /* try { // try from 025fddc8 to 026fdeaf has its CatchHandler @ 025fd23c */
  lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  lVar13 = *(long *)puVar1;
  uVar8 = **(undefined8 **)(lVar9 + 0xb8);
  lVar9 = *(long *)(lVar13 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar13);
    lVar9 = *(long *)(lVar13 + 0x38);
  }
  if ((*(ushort *)(*(long *)(lVar9 + 0x10) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar6 = thunk_FUN_0222ca34();
  MessagePipe_AnonymousMessageHandler___Il2CppFullySharedGenericType____ctor_27b286c
            (uVar6,uVar5,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = **(long **)(lVar13 + 0x38);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718(lVar9);
  }
  lVar13 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar9) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_027d671c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02229a4c(plVar12,lVar9,0);
LAB_027d671c:
                    /* WARNING: Could not recover jumptable at 0x027d6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar7)(plVar12,uVar6,uVar8,puVar7[1]);
  return;
}

