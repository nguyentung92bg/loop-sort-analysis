/* IL2CPP: GameDebugger$$SetupScreen
void GameDebugger__SetupScreen (GameDebugger_o* __this, Voodoo_Sauce_Debugger_Screen_o* screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023405d8) */
/* IL2CPP: GameDebugger$$SetupScreen
   void GameDebugger__SetupScreen (GameDebugger_o* __this, Voodoo_Sauce_Debugger_Screen_o* screen,
   const MethodInfo* method); */

void GameDebugger__SetupScreen_223fe2c(long param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  undefined8 uStack_88;
  long **pplStack_80;
  long **pplStack_78;
  long *plStack_70;
  long *plStack_68;
  
  puVar3 = PTR_DAT_049b5228;
  if ((bRam0000000004f49b06 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049b5238);
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049b5240);
    FUN_021f03f8(PTR_DAT_049b5248);
    FUN_021f03f8(PTR_DAT_049b5250);
    FUN_021f03f8(PTR_DAT_049b5258);
    FUN_021f03f8(PTR_DAT_049b5260);
    FUN_021f03f8(PTR_DAT_049b5268);
    FUN_021f03f8(PTR_DAT_049b5270);
    FUN_021f03f8(PTR_DAT_049b5278);
    FUN_021f03f8(PTR_DAT_049b5280);
    FUN_021f03f8(PTR_DAT_049b5288);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049b5290);
    FUN_021f03f8(PTR_DAT_049b5298);
    FUN_021f03f8(PTR_DAT_049b52a0);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b52b0);
    FUN_021f03f8(PTR_DAT_049b52b8);
    FUN_021f03f8(PTR_DAT_049b52c0);
    FUN_021f03f8(PTR_DAT_049b52c8);
    FUN_021f03f8(PTR_DAT_049b52d0);
    FUN_021f03f8(PTR_DAT_049b52d8);
    FUN_021f03f8(PTR_DAT_049b52e0);
    FUN_021f03f8(PTR_DAT_049b52e8);
    FUN_021f03f8(PTR_DAT_049b52f0);
    FUN_021f03f8(PTR_DAT_049b52f8);
    FUN_021f03f8(PTR_DAT_049b5300);
    FUN_021f03f8(PTR_DAT_049b5308);
    bRam0000000004f49b06 = 1;
  }
  puVar5 = PTR_DAT_049b52a0;
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 02340004 to 0244009b has its CatchHandler @ 02340004
                       catch() { ... } // from try @ 02340004 with catch @ 02340004
                       catch() { ... } // from try @ 02340188 with catch @ 02340004 */
    FUN_021f0574();
  }
  LifetimeScopeH__InjectIfNotScoped_object__26545b0(param_1,*(undefined8 *)puVar5);
  puVar11 = PTR_DAT_049b52d8;
  puVar10 = PTR_DAT_049b52d0;
  puVar9 = PTR_DAT_049b5288;
  puVar8 = PTR_DAT_049b5278;
  puVar4 = PTR_DAT_049b5268;
  puVar7 = PTR_DAT_049b5258;
  puVar6 = PTR_DAT_049b5248;
  puVar5 = PTR_DAT_049b5238;
  puVar3 = PTR_DAT_049b4308;
  if (param_2 != 0) {
    Voodoo_Sauce_Debugger_Screen__OpenFoldout_43eb29c(param_2,*(undefined8 *)PTR_DAT_049b52e8,1,0);
    uVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar13,param_1,*(undefined8 *)puVar8,0);
                    /* try { // try from 0234009c to 024400a7 has its CatchHandler @ 02340188 */
    uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar6);
    System_Func___Il2CppFullySharedGenericType____ctor_289217c
              (uVar14,param_1,*(undefined8 *)puVar7,0);
    Voodoo_Sauce_Debugger_Screen__ButtonWithIntegerInput_43eb068
              (param_2,*(undefined8 *)puVar10,1,uVar13,uVar14,0);
    uVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
    System_Action___ctor_306b98c(uVar13,param_1,*(undefined8 *)puVar9,0);
    Voodoo_Sauce_Debugger_Screen__Button_43eaf08(param_2,*(undefined8 *)puVar11,uVar13,0);
    uVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
    System_Action___ctor_306b98c(uVar13,param_1,*(undefined8 *)puVar4,0);
                    /* try { // try from 02340124 to 0244012f has its CatchHandler @ 0234018c */
    Voodoo_Sauce_Debugger_Screen__Button_43eaf08(param_2,*(undefined8 *)PTR_DAT_049b52c8,uVar13,0);
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar12 = PlayerPrefsBool__op_Implicit_3f0e9e8(uVar13,uVar14,0);
    puVar3 = PTR_DAT_049b5230;
                    /* try { // try from 02340168 to 02440187 has its CatchHandler @ 02340188 */
    uVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5230);
                    /* catch() { ... } // from try @ 0234009c with catch @ 02340188
                       catch() { ... } // from try @ 02340168 with catch @ 02340188
                       try { // try from 02340188 to 0244019f has its CatchHandler @ 02340004 */
                    /* catch() { ... } // from try @ 02340124 with catch @ 0234018c */
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar13,param_1,*(undefined8 *)PTR_DAT_049b5270,0);
    puVar5 = PTR_DAT_049b5240;
    uVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5240);
    System_Func___Il2CppFullySharedGenericType____ctor_289217c
              (uVar14,param_1,*(undefined8 *)PTR_DAT_049b5250,0);
    Voodoo_Sauce_Debugger_Screen__Toggle_43eb1e0
              (param_2,*(undefined8 *)PTR_DAT_049b5300,uVar12 & 1,uVar13,uVar14,0);
    Voodoo_Sauce_Debugger_Screen__CloseFoldout_43eb338(param_2,0);
    Voodoo_Sauce_Debugger_Screen__OpenFoldout_43eb29c(param_2,*(undefined8 *)PTR_DAT_049b52f0,1,0);
    uVar2 = *(undefined1 *)(param_1 + 0x30);
    uVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar13,param_1,*(undefined8 *)PTR_DAT_049b5280,0);
    uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
    System_Func___Il2CppFullySharedGenericType____ctor_289217c
              (uVar14,param_1,*(undefined8 *)PTR_DAT_049b5260,0);
    Voodoo_Sauce_Debugger_Screen__Toggle_43eb1e0
              (param_2,*(undefined8 *)PTR_DAT_049b5308,uVar2,uVar13,uVar14,0);
    Voodoo_Sauce_Debugger_Screen__CloseFoldout_43eb338(param_2,0);
                    /* try { // try from 0234029c to 024402df has its CatchHandler @ 0234029c
                       catch() { ... } // from try @ 0234029c with catch @ 0234029c
                       catch() { ... } // from try @ 023405d0 with catch @ 0234029c
                       catch() { ... } // from try @ 023406b4 with catch @ 0234029c
                       catch() { ... } // from try @ 02340804 with catch @ 0234029c */
    Voodoo_Sauce_Debugger_Screen__OpenFoldout_43eb29c(param_2,*(undefined8 *)PTR_DAT_049b52e0,1,0);
    puVar3 = PTR_DAT_049b3bd0;
    uVar13 = *(undefined8 *)PTR_DAT_049b5290;
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar13 = System_Type__GetTypeFromHandle_310ebfc(uVar13,0);
                    /* try { // try from 023402e0 to 024402e3 has its CatchHandler @ 02340898 */
    if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
      FUN_021f0574(*(long *)(puVar3 + 0x98));
    }
    lVar15 = System_Enum__GetValues_3134724(uVar13,0);
    if (lVar15 != 0) {
      plVar16 = (long *)System_Array__GetEnumerator_31257a0(lVar15,0);
      puVar7 = PTR_DAT_049b52c0;
      puVar6 = PTR_DAT_049b52b8;
      puVar5 = PTR_DAT_049b5298;
      puVar3 = PTR_DAT_049b4360;
                    /* try { // try from 02340308 to 02440317 has its CatchHandler @ 023408d0 */
      pplStack_80 = &plStack_68;
      uStack_88 = 0;
      pplStack_78 = &plStack_70;
      do {
        plStack_68 = plVar16;
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar20 = *plVar16;
        lVar15 = *(long *)puVar3;
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
                    /* try { // try from 02340360 to 0244039f has its CatchHandler @ 02340898 */
            if (*(long *)(piVar18 + -2) == lVar15) {
              puVar17 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02340394;
            }
            uVar22 = uVar22 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar22 != 0);
        }
        puVar17 = (undefined8 *)FUN_02229a4c(plVar16,lVar15,0);
LAB_02340394:
        uVar22 = (*(code *)*puVar17)(plVar16,puVar17[1]);
        puVar4 = PTR_DAT_049b3cc8;
        if ((uVar22 & 1) == 0) {
          plVar16 = (long *)thunk_FUN_0222c938(plStack_68,*(undefined8 *)PTR_DAT_049b3cc8);
          plStack_70 = plVar16;
          if (plVar16 == (long *)0x0) goto LAB_02340594;
          lVar15 = *plVar16;
          uVar22 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar22 == 0) goto LAB_0234056c;
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_02340554;
        }
                    /* try { // try from 023403a8 to 024403b3 has its CatchHandler @ 02340894 */
        lVar15 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
        System_Object___ctor_3142338(lVar15,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023405d0 to 024405e3 has its CatchHandler @ 0234029c */
          FUN_021f06a0();
        }
        *(long *)(lVar15 + 0x18) = param_1;
        thunk_FUN_021f190c((long *)(lVar15 + 0x18),param_1);
        plVar16 = plStack_68;
        if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar21 = *plStack_68;
        lVar20 = *(long *)puVar3;
        uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar22 != 0) {
          piVar18 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar20) {
              puVar17 = (undefined8 *)(lVar21 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_02340424;
            }
            uVar22 = uVar22 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar22 != 0);
        }
        puVar17 = (undefined8 *)FUN_02229a4c(plStack_68,lVar20,1);
LAB_02340424:
        plVar16 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023405cc to 024405cf has its CatchHandler @ 023408a0 */
          FUN_021f0a20();
        }
        piVar18 = (int *)thunk_FUN_0222cb7c();
        iVar1 = *piVar18;
        *(int *)(lVar15 + 0x10) = iVar1;
        plVar16 = plStack_68;
        if ((iVar1 != 0) && (iVar1 != 100)) {
          uStack_a0 = *(undefined8 *)puVar5;
          uStack_98 = 0xffffffffffffffff;
          iStack_90 = iVar1;
          uVar13 = System_Enum__ToString_3135e00(&uStack_a0,0);
                    /* try { // try from 0234048c to 02440493 has its CatchHandler @ 023408a0 */
          uVar13 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049b52f8,uVar13,0);
          uVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5238);
          System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                    (uVar14,lVar15,*(undefined8 *)PTR_DAT_049b52b0,0);
                    /* try { // try from 023404cc to 024404d3 has its CatchHandler @ 023408c0 */
          uVar19 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5248);
          System_Func___Il2CppFullySharedGenericType____ctor_289217c
                    (uVar19,lVar15,*(undefined8 *)puVar6,0);
          Voodoo_Sauce_Debugger_Screen__ButtonWithIntegerInput_43eb068
                    (param_2,uVar13,0,uVar14,uVar19,0);
          plVar16 = plStack_68;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar18 = piVar18 + 4;
    if (uVar22 == 0) break;
LAB_02340554:
    if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
      puVar17 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_02340588;
    }
  }
LAB_0234056c:
  puVar17 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)puVar4,0);
LAB_02340588:
  (*(code *)*puVar17)(plVar16,puVar17[1]);
LAB_02340594:
  Voodoo_Sauce_Debugger_Screen__CloseFoldout_43eb338(param_2,0);
  return;
}

