/* IL2CPP: DailyRewardsSubMonitor.<ApplyRevealMotion>d__21$$MoveNext
void DailyRewardsSubMonitor__ApplyRevealMotion_d__21__MoveNext (DailyRewardsSubMonitor__ApplyRevealMotion_d__21_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: DailyRewardsSubMonitor.<ApplyRevealMotion>d__21$$MoveNext
   void DailyRewardsSubMonitor__ApplyRevealMotion_d__21__MoveNext
   (DailyRewardsSubMonitor__ApplyRevealMotion_d__21_o __this, const MethodInfo* method); */

void DailyRewardsSubMonitor__ApplyRevealMotion_d__21__MoveNext_24754ec(int *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [12];
  
  if ((bRam0000000004f4b9c9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5728);
    FUN_021f03f8(PTR_DAT_049c2ac0);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b9c9 = 1;
  }
  auStack_50._8_4_ = 0;
  auStack_60._8_8_ = 0;
  auStack_50._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_70._0_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [12])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_50 = *(undefined1 (*) [12])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      *param_1 = -1;
      auStack_60 = ZEXT816(0);
      goto LAB_0257572c;
    }
    lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                      (*(undefined8 *)(param_1 + 6),0xd4f509e7,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02575958 to 0267596b has its CatchHandler @ 025757ac */
      FUN_021f06a0();
    }
    uVar4 = UnityEngine_Component__get_transform_3c18724(lVar3,0);
    piVar8 = param_1 + 8;
    *(undefined8 *)piVar8 = uVar4;
    thunk_FUN_021f190c(piVar8);
    auVar13 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0x3f000000,_UNK_013aa5f0,0);
    auVar13 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672670
                        (auVar13._0_8_,auVar13._8_8_,*(undefined8 *)piVar8,
                         *(undefined8 *)PTR_DAT_049c2ac0);
    auStack_50 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                           (auVar13._0_8_,auVar13._8_8_ & 0xffffffff,0);
    uVar7 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_50,0);
    puVar1 = PTR_DAT_049c5728;
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
                    /* try { // try from 025758ec to 026758f3 has its CatchHandler @ 02575e68 */
      uVar4 = *(undefined8 *)puVar1;
      *(undefined1 (*) [12])(param_1 + 10) = auStack_50;
      FUN_0235c25c(param_1 + 2,auStack_50,param_1,uVar4);
      return;
    }
  }
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_50,0);
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 8),0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar3,0,0);
  lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (*(undefined8 *)(param_1 + 6),0xb2388b6d,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = UnityEngine_Component__get_transform_3c18724(lVar3,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar2,1,0);
  auStack_60 = LitMotion_LMotion__Create_2ea9f9c(0x3f000000,0x3f800000,_UNK_013aa838,0);
  auVar13 = FUN_024f4e50(auStack_60,0x1b,*(undefined8 *)PTR_DAT_049c1358);
  auVar13 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672670
                      (auVar13._0_8_,auVar13._8_8_,lVar3,*(undefined8 *)PTR_DAT_049c2ac0);
  auVar14 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                      (auVar13._0_8_,auVar13._8_8_ & 0xffffffff,0);
  auStack_50 = auVar14;
  uVar7 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_50,0);
  puVar1 = PTR_DAT_049c5728;
  if ((uVar7 & 1) == 0) {
    *param_1 = 1;
    uVar4 = *(undefined8 *)puVar1;
    *(undefined1 (*) [12])(param_1 + 10) = auStack_50;
    FUN_0235c25c(param_1 + 2,auStack_50,param_1,uVar4);
    return;
  }
LAB_0257572c:
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_50,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*(undefined8 *)(param_1 + 6),0x9a7cc5cd,0);
  lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (*(undefined8 *)(param_1 + 6),0xbcdc2f95,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar4 = UnityEngine_Component__get_transform_3c18724(lVar3,0);
  puVar1 = PTR_DAT_049c1690;
  lVar3 = *(long *)PTR_DAT_049c1690;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  puVar6 = *(undefined4 **)(lVar3 + 0xb8);
  uVar10 = *puVar6;
  uVar11 = puVar6[1];
  uVar12 = puVar6[2];
  if (cRam0000000004f4a190 == '\0') {
                    /* try { // try from 025757ac to 026758eb has its CatchHandler @ 025757ac
                       catch() { ... } // from try @ 025757ac with catch @ 025757ac
                       catch() { ... } // from try @ 02575958 with catch @ 025757ac
                       catch() { ... } // from try @ 025759a4 with catch @ 025757ac
                       catch() { ... } // from try @ 02575a70 with catch @ 025757ac
                       catch() { ... } // from try @ 02575abc with catch @ 025757ac
                       catch() { ... } // from try @ 02575b7c with catch @ 025757ac
                       catch() { ... } // from try @ 02575bc8 with catch @ 025757ac
                       catch() { ... } // from try @ 02575c80 with catch @ 025757ac
                       catch() { ... } // from try @ 02575ccc with catch @ 025757ac
                       catch() { ... } // from try @ 02575d84 with catch @ 025757ac
                       catch() { ... } // from try @ 02575dd0 with catch @ 025757ac
                       catch() { ... } // from try @ 02575e38 with catch @ 025757ac
                       catch() { ... } // from try @ 02575e9c with catch @ 025757ac
                       catch() { ... } // from try @ 02575ebc with catch @ 025757ac
                       catch() { ... } // from try @ 02575ee4 with catch @ 025757ac
                       catch() { ... } // from try @ 02575f04 with catch @ 025757ac
                       catch() { ... } // from try @ 02575f2c with catch @ 025757ac
                       catch() { ... } // from try @ 02575f4c with catch @ 025757ac
                       catch() { ... } // from try @ 02575f74 with catch @ 025757ac
                       catch() { ... } // from try @ 02575f98 with catch @ 025757ac
                       catch() { ... } // from try @ 02575fc0 with catch @ 025757ac
                       catch() { ... } // from try @ 02575fe4 with catch @ 025757ac */
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  auStack_70 = LitMotion_LMotion__Create_2eaa1b4
                         (uVar10,uVar11,uVar12,*(undefined4 *)(lVar3 + 0xc),
                          *(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x14),0x3f000000,0);
  auVar13 = FUN_024f4e50(auStack_70,0x1a,*(undefined8 *)PTR_DAT_049c1680);
  LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
            (auVar13._0_8_,auVar13._8_8_,uVar4,*(undefined8 *)PTR_DAT_049c1670);
  *param_1 = -2;
  piVar8 = param_1 + 8;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_021f190c(piVar8,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* try { // try from 0257590c to 02675957 has its CatchHandler @ 02575f54 */
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0257591c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b56d0,2);
LAB_0257591c:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  return;
}

