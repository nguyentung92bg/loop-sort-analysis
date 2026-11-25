/* IL2CPP: GiftsReward.<ClaimAndGrant>d__7$$MoveNext
void GiftsReward__ClaimAndGrant_d__7__MoveNext (GiftsReward__ClaimAndGrant_d__7_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GiftsReward.<ClaimAndGrant>d__7$$MoveNext
   void GiftsReward__ClaimAndGrant_d__7__MoveNext (GiftsReward__ClaimAndGrant_d__7_o __this, const
   MethodInfo* method); */

void GiftsReward__ClaimAndGrant_d__7__MoveNext_2519600(int *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4be32 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c94a0);
    FUN_021f03f8(PTR_DAT_049c94a8);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c94b0);
    FUN_021f03f8(PTR_DAT_049b5a90);
    FUN_021f03f8(PTR_DAT_049b5aa0);
    FUN_021f03f8(PTR_DAT_049b5aa8);
    FUN_021f03f8(PTR_DAT_049c4778);
    FUN_021f03f8(PTR_DAT_049c94b8);
    FUN_021f03f8(PTR_DAT_049c94c0);
    bRam0000000004f4be32 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar1 = ZEXT816(0);
  uStack_68 = 0;
  if (*param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xe);
    uStack_50 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar6 = *(long *)(param_1 + 4);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5aa8);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (lVar3,*(undefined8 *)PTR_DAT_049b5aa0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_88 = *(undefined8 *)(param_1 + 8);
    uStack_90 = *(undefined8 *)(param_1 + 6);
    uStack_80 = *(undefined8 *)(param_1 + 10);
    FUN_02333498(lVar3,&uStack_90,*(undefined8 *)PTR_DAT_049b5a90);
    uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c94a0);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar4,lVar6,*(undefined8 *)PTR_DAT_049c94b0,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_60 = GiftsModule__ClaimGifts_2543fd8(lVar5,lVar3,uVar4,0,0);
    FUN_0235b0c0(auStack_60,&cStack_40,*(undefined8 *)PTR_DAT_049c4778);
    uStack_50 = CONCAT71(uStack_3f,cStack_40);
    lVar3 = *(long *)PTR_DAT_049c4770;
    uStack_48 = uStack_38;
    lVar6 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    uVar4 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80));
    lVar6 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
    auVar1 = auStack_60;
    if (iVar2 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = uStack_48;
      *(undefined8 *)(param_1 + 0xc) = uStack_50;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235c420(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c94a8);
      return;
    }
  }
                    /* try { // try from 02619848 to 027198e7 has its CatchHandler @ 02619848
                       catch() { ... } // from try @ 02619848 with catch @ 02619848
                       catch() { ... } // from try @ 026199c8 with catch @ 02619848
                       catch() { ... } // from try @ 02619d04 with catch @ 02619848
                       catch() { ... } // from try @ 02619e24 with catch @ 02619848
                       catch() { ... } // from try @ 02619ed4 with catch @ 02619848
                       catch() { ... } // from try @ 02619f04 with catch @ 02619848
                       catch() { ... } // from try @ 02619f6c with catch @ 02619848 */
  auStack_60 = auVar1;
  FUN_0235b3fc(&uStack_50,&cStack_40,*(undefined8 *)PTR_DAT_049c4768);
  if (cStack_40 == '\0') {
    uVar4 = System_String__Concat_2f7d424
                      (*(undefined8 *)PTR_DAT_049c94c0,*(undefined8 *)(param_1 + 6),
                       *(undefined8 *)PTR_DAT_049c94b8,0);
    if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Debug__LogWarning_3bcf90c(uVar4,0);
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

