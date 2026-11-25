/* IL2CPP: DailyChallenge.PlaySession$$OnWin
void DailyChallenge_PlaySession__OnWin (DailyChallenge_PlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge.PlaySession$$OnWin
   void DailyChallenge_PlaySession__OnWin (DailyChallenge_PlaySession_o* __this, const MethodInfo*
   method); */

void DailyChallenge_PlaySession__OnWin_2516b88(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  int iStack_34;
  
  lVar8 = param_1[2];
  lVar1 = param_1[3];
                    /* try { // try from 02616b9c to 02716c4b has its CatchHandler @ 02616d5c */
  uVar7 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4be14 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c7d60);
    bRam0000000004f4be14 = 1;
  }
  *(undefined1 *)(lVar8 + 0x58) = 1;
  DailyChallenge__Complete_2515b34(lVar8,lVar1);
  iVar6 = DailyChallenge__GetReward_2515c98(lVar8,uVar7);
  if (*(long *)(lVar8 + 0x30) != 0) {
    FulfillModule__FulfillFreePayout_254358c
              (*(long *)(lVar8 + 0x30),1,(double)iVar6,*(undefined8 *)PTR_DAT_049c7d60,0);
    lVar8 = *(long *)(lVar8 + 0x48);
    uVar7 = DailyChallenge__GetCompletedDays_25168ec();
    puVar2 = PTR_DAT_049b3c20;
    auStack_48[0] = 0;
    uVar10 = CONCAT13(POPCOUNT((char)((uint)uVar7 >> 0x18)),
                      CONCAT12(POPCOUNT((char)((uint)uVar7 >> 0x10)),
                               CONCAT11(POPCOUNT((char)((uint)uVar7 >> 8)),POPCOUNT((char)uVar7))));
    uVar9 = NEON_uaddlv((ulong)uVar10,1);
    uStack_50 = CONCAT44(uStack_50._4_4_,CONCAT22((short)(uVar10 >> 0x10),uVar9));
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (auStack_48,&uStack_50,*(undefined8 *)PTR_DAT_049b3c20);
    uVar5 = auStack_48[0];
    uStack_50 = 0;
    uStack_58 = CONCAT44(uStack_58._4_4_,1);
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_50,&uStack_58,*(undefined8 *)PTR_DAT_049c2ce8);
    uVar4 = uStack_50;
    uStack_58 = 0;
    uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_58,&uStack_60,*(undefined8 *)PTR_DAT_049c2ce0);
    uVar3 = uStack_58;
    uStack_60 = 0;
    iStack_34 = iVar6;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_60,&iStack_34,*(undefined8 *)puVar2);
    if (lVar8 != 0) {
      uStack_98 = uVar5;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = uVar4;
      uStack_78 = uVar3;
      uStack_70 = uStack_60;
      uStack_68 = 0;
      AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar8,0x1c,&uStack_98,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

