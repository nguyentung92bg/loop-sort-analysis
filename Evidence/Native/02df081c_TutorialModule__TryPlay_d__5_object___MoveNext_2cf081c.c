/* IL2CPP: TutorialModule.<TryPlay>d__5<object>$$MoveNext
void TutorialModule__TryPlay_d__5_object___MoveNext (TutorialModule__TryPlay_d__5_TTutorial__o __this, const MethodInfo_2CF081C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TutorialModule.<TryPlay>d__5<object>$$MoveNext
   void TutorialModule__TryPlay_d__5_object___MoveNext (TutorialModule__TryPlay_d__5_TTutorial__o
   __this, const MethodInfo_2CF081C* method); */

void TutorialModule__TryPlay_d__5_object___MoveNext_2cf081c(int *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  undefined8 uStack_b0;
  int *piStack_a8;
  int **ppiStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  int iStack_44;
  long lStack_40;
  int *piStack_38;
  char cStack_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  
                    /* try { // try from 02df0834 to 02ef0837 has its CatchHandler @ 02df17f0 */
                    /* try { // try from 02df083c to 02ef0847 has its CatchHandler @ 02df1850 */
  lStack_40 = param_2;
  piStack_38 = param_1;
  if ((bRam0000000004f4d005 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c4768);
                    /* try { // try from 02df085c to 02ef090f has its CatchHandler @ 02df18d4 */
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049c8158);
    FUN_021f03f8(PTR_DAT_049c2368);
    FUN_021f03f8(PTR_DAT_049d24a8);
    FUN_021f03f8(PTR_DAT_049c4778);
    FUN_021f03f8(PTR_DAT_049d24b0);
    bRam0000000004f4d005 = 1;
  }
  iStack_44 = *param_1;
  lStack_50 = *(long *)(param_1 + 8);
  uStack_58 = 0;
  auStack_70._8_8_ = 0;
  uStack_60 = 0;
  auStack_70._0_8_ = 0;
  uStack_78 = 0;
  if (iStack_44 == 0) {
LAB_02df0bd8:
    plStack_90 = &lStack_40;
    plStack_98 = &lStack_50;
    ppiStack_a0 = &piStack_38;
    piStack_a8 = &iStack_44;
    uStack_b0 = 0;
    uStack_58 = *(undefined8 *)(param_1 + 0x1c);
    uStack_60 = *(undefined8 *)(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    iStack_44 = -1;
    *param_1 = -1;
LAB_02df0bf0:
    FUN_0235b3fc(&uStack_60,&cStack_30,*(undefined8 *)PTR_DAT_049c4768);
    piVar3 = piStack_38;
    bVar8 = cStack_30 != '\0';
    if (bVar8) {
      iVar4 = CloudPrefsInt__get_Value_24e99c0(piStack_38 + 0x12,0);
      CloudPrefsInt__Set_24e9aa8(piVar3 + 0x12,iVar4 + 1,0);
    }
    iVar4 = 4;
LAB_02df0c44:
    FUN_02048440(&uStack_b0);
    auVar1 = auStack_70;
    if (iVar4 != 0xd) {
                    /* try { // try from 02df0c58 to 02ef0c73 has its CatchHandler @ 02df17ec */
      if (iVar4 == 4) goto LAB_02df0c64;
      if (iVar4 != 0) {
        return;
      }
    }
  }
  else {
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02df0ca8 to 02ef0cc3 has its CatchHandler @ 02df1900 */
      FUN_021f06a0();
    }
    auVar1 = ZEXT816(0);
    if (*(char *)(lStack_50 + 0x28) == '\0') {
      lVar9 = *(long *)(lStack_50 + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar5 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      uVar6 = Monitors__Get_object__26889d0(lVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 8));
      *(undefined8 *)(piStack_38 + 0x10) = uVar6;
      thunk_FUN_021f190c();
      lVar9 = *(long *)(piStack_38 + 10);
                    /* try { // try from 02df0920 to 02ef0983 has its CatchHandler @ 02df191c */
      if (lVar9 != 0) {
        lVar5 = *(long *)(lStack_40 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02229718();
        }
        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
          FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0xe0));
        }
        plVar7 = (long *)System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar6 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        uVar6 = System_String__Concat_2f72b28(uVar6,*(undefined8 *)PTR_DAT_049d24b0,0);
                    /* try { // try from 02df0998 to 02ef09a3 has its CatchHandler @ 02df17a4 */
        if (*(int *)(*(long *)PTR_DAT_049c8158 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* try { // try from 02df09b4 to 02ef09cf has its CatchHandler @ 02df17e4 */
        uVar6 = VContainer_Unity_LifetimeScope__Create_3f2b264(lVar9,uVar6,0);
        plVar7 = *(long **)(piStack_38 + 0x10);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(0,uVar6);
        }
        (**(code **)(*plVar7 + 0x268))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x270));
      }
      plVar7 = *(long **)(piStack_38 + 0x10);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 02df09e8 to 02ef09f3 has its CatchHandler @ 02df191c */
      uVar6 = (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
      piStack_a8 = (int *)0x0;
      uStack_b0 = 0;
      plStack_98 = (long *)0x0;
      ppiStack_a0 = (int **)0x0;
                    /* try { // try from 02df0a04 to 02ef0a1f has its CatchHandler @ 02df18f8 */
      CloudPrefsInt___ctor_24e98a8(&uStack_b0,uVar6,0,0,0);
      *(int **)(piStack_38 + 0x14) = piStack_a8;
      *(undefined8 *)(piStack_38 + 0x12) = uStack_b0;
      *(long **)(piStack_38 + 0x18) = plStack_98;
      *(int ***)(piStack_38 + 0x16) = ppiStack_a0;
      thunk_FUN_021f190c(piStack_38 + 0x14,0);
                    /* try { // try from 02df0a38 to 02ef0a53 has its CatchHandler @ 02df1904 */
      iVar4 = CloudPrefsInt__get_Value_24e99c0(piStack_38 + 0x12,0);
      auVar1._8_8_ = auStack_70._8_8_;
      auVar1._0_8_ = auStack_70._0_8_;
      if (iVar4 < piStack_38[0xc]) {
        piStack_a8 = &iStack_44;
        ppiStack_a0 = &piStack_38;
        plStack_98 = &lStack_50;
        uStack_b0 = 0;
        plStack_90 = &lStack_40;
        param_1 = piStack_38;
        if (iStack_44 == 0) goto LAB_02df0bd8;
        if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar9 = *(long *)(lStack_50 + 0x10);
        *(undefined1 *)(lStack_50 + 0x28) = 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 02df0a94 to 02ef0abb has its CatchHandler @ 02df18a4 */
        lVar5 = *(long *)(lStack_40 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02229718();
        }
        Monitors__Additive_object__26888e8
                  (lVar9,0,1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20));
        plVar7 = *(long **)(piStack_38 + 0x10);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 02df0ad8 to 02ef0adb has its CatchHandler @ 02df17fc */
        auStack_70 = (**(code **)(*plVar7 + 0x248))
                               (plVar7,*(undefined8 *)(piStack_38 + 0xe),
                                *(undefined8 *)(*plVar7 + 0x250));
                    /* try { // try from 02df0ae0 to 02ef0aeb has its CatchHandler @ 02df1858 */
        FUN_0235b0c0(auStack_70,&cStack_30,*(undefined8 *)PTR_DAT_049c4778);
                    /* try { // try from 02df0b00 to 02ef0bb3 has its CatchHandler @ 02df18d8 */
        uStack_60 = CONCAT71(uStack_2f,cStack_30);
        lVar5 = *(long *)PTR_DAT_049c4770;
        uStack_58 = uStack_28;
        lVar9 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar6 = thunk_FUN_0224e54c(&uStack_60,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0x80)
                                  );
        lVar9 = *(long *)(lVar5 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        iVar4 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18));
        if (iVar4 != 0) goto LAB_02df0bf0;
        iStack_44 = 0;
        *piStack_38 = 0;
        *(undefined8 *)(piStack_38 + 0x1c) = uStack_58;
        *(undefined8 *)(piStack_38 + 0x1a) = uStack_60;
        thunk_FUN_021f190c(piStack_38 + 0x1a,0);
        piVar3 = piStack_38;
        lVar9 = *(long *)(lStack_40 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        FUN_0235bb44(piVar3 + 2,&uStack_60,piVar3,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
        bVar8 = false;
        iVar4 = 8;
        goto LAB_02df0c44;
      }
    }
  }
  bVar8 = false;
LAB_02df0c64:
  *piStack_38 = -2;
  puVar2 = PTR_DAT_049b5570;
  piStack_38[0x18] = 0;
  piStack_38[0x19] = 0;
  piStack_38[0x12] = 0;
  piStack_38[0x13] = 0;
  piStack_38[0x10] = 0;
  piStack_38[0x11] = 0;
  piStack_38[0x16] = 0;
  piStack_38[0x17] = 0;
  piStack_38[0x14] = 0;
  piStack_38[0x15] = 0;
                    /* try { // try from 02df0c8c to 02ef0c97 has its CatchHandler @ 02df191c */
  uStack_b0 = CONCAT71(uStack_b0._1_7_,bVar8);
  auStack_70 = auVar1;
  FUN_0235bed4(piStack_38 + 2,&uStack_b0,*(undefined8 *)puVar2);
  return;
}

