/* IL2CPP: VideoRewardsSubMonitor$$OnWatchClicked
void VideoRewardsSubMonitor__OnWatchClicked (VideoRewardsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsSubMonitor$$OnWatchClicked
   void VideoRewardsSubMonitor__OnWatchClicked (VideoRewardsSubMonitor_o* __this, const MethodInfo*
   method); */

void VideoRewardsSubMonitor__OnWatchClicked_248b49c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  puVar1 = PTR_DAT_049c5d18;
  if ((bRam0000000004f4ba47 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049c5d20);
    FUN_021f03f8(PTR_DAT_049c5d18);
    FUN_021f03f8(PTR_DAT_049c5d28);
    bRam0000000004f4ba47 = 1;
  }
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar5 + 0x10),param_1);
    if (*(long *)(param_1 + 0x50) != 0) {
      iVar3 = VideoRewards__GetWatchedCount_2529cd0(*(long *)(param_1 + 0x50),0);
      lVar9 = *(long *)(param_1 + 0x50);
      *(int *)(lVar5 + 0x18) = iVar3;
      if (lVar9 != 0) {
        iVar4 = VideoRewards__get_Count_2529ad8(lVar9,0);
        if (iVar4 <= iVar3) {
          return;
        }
        lVar9 = *(long *)(param_1 + 0x58);
        uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5230);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar6,lVar5,*(undefined8 *)PTR_DAT_049c5d20,0);
        puVar1 = PTR_DAT_049ca428;
        if (lVar9 != 0) {
          uVar8 = *(undefined8 *)PTR_DAT_049c5d28;
          if ((bRam0000000004f4bf94 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_049b5230,uVar8,uVar6,0);
            FUN_021f03f8(PTR_DAT_049c8070);
            FUN_021f03f8(PTR_DAT_049ca430);
            FUN_021f03f8(PTR_DAT_049ca428);
            bRam0000000004f4bf94 = 1;
          }
          lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
          AdsModule___c__DisplayClass11_0___ctor_253de5c(lVar5,0);
          puVar2 = PTR_DAT_049ca430;
          puVar1 = PTR_DAT_049b5230;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          *(long *)(lVar5 + 0x10) = lVar9;
          thunk_FUN_021f190c((long *)(lVar5 + 0x10),lVar9);
          puVar13 = (undefined8 *)(lVar5 + 0x18);
          *puVar13 = uVar8;
          thunk_FUN_021f190c(puVar13,uVar8);
          uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
          System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                    (uVar8,lVar5,*(undefined8 *)puVar2,0);
          lVar5 = System_Delegate__Combine_3145640(uVar6,uVar8,0);
          if (lVar5 == 0) {
            lVar7 = 0;
          }
          else {
            uVar6 = *(undefined8 *)puVar1;
            lVar7 = thunk_FUN_0222c938(lVar5,uVar6);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f0a20(lVar5,uVar6);
            }
          }
          plVar12 = *(long **)(lVar9 + 0x10);
          if (plVar12 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar12;
          uVar6 = *puVar13;
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049c8070) {
                puVar13 = (undefined8 *)(lVar5 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_0263d380;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049c8070,2);
LAB_0263d380:
                    /* WARNING: Could not recover jumptable at 0x0263d3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar13)(plVar12,uVar6,lVar7,puVar13[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

