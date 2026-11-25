/* IL2CPP: SheetInstaller.<BakeContainer>d__5$$MoveNext
void SheetInstaller__BakeContainer_d__5__MoveNext (SheetInstaller__BakeContainer_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetInstaller.<BakeContainer>d__5$$MoveNext
   void SheetInstaller__BakeContainer_d__5__MoveNext (SheetInstaller__BakeContainer_d__5_o __this,
   const MethodInfo* method); */

void SheetInstaller__BakeContainer_d__5__MoveNext_25664ac(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_40;
  undefined1 auStack_34 [4];
  
  if ((bRam0000000004f4c160 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbc40);
                    /* try { // try from 026664d8 to 027664df has its CatchHandler @ 026666f0 */
                    /* try { // try from 026664e0 to 027664e7 has its CatchHandler @ 026666ec */
    FUN_021f03f8(PTR_DAT_049cbc48);
    FUN_021f03f8(PTR_DAT_049b5580);
    FUN_021f03f8(PTR_DAT_049b5588);
                    /* try { // try from 02666504 to 02766507 has its CatchHandler @ 026666fc */
    FUN_021f03f8(PTR_DAT_049b5590);
    FUN_021f03f8(PTR_DAT_049bba60);
    bRam0000000004f4c160 = 1;
  }
                    /* try { // try from 02666520 to 0276654f has its CatchHandler @ 02666704 */
  lVar9 = *(long *)(param_1 + 6);
  uStack_40 = 0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
                    /* try { // try from 02666620 to 02766647 has its CatchHandler @ 02666868 */
    *param_1 = -1;
  }
  else {
    uVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bba60);
    Cathei_BakingSheet_Unity_UnityLogger___ctor_22ed0f0(uVar2,0);
    uVar8 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 02666558 to 0276655b has its CatchHandler @ 026666fc */
    lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cbc48);
                    /* try { // try from 0266656c to 0276657f has its CatchHandler @ 026666d0 */
    Cathei_BakingSheet_SheetContainerBase___ctor_22dd9f0(lVar3,uVar2,0);
    *(undefined8 *)(lVar3 + 0x28) = uVar8;
    thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x28),uVar8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 026666bc with catch @ 026666f8 */
      FUN_021f06a0();
    }
    plVar7 = (long *)(lVar9 + 0x10);
    *plVar7 = lVar3;
                    /* try { // try from 02666590 to 027665c3 has its CatchHandler @ 02666700 */
    thunk_FUN_021f190c(plVar7,lVar3);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02666400 with catch @ 026666fc
                       catch() { ... } // from try @ 02666504 with catch @ 026666fc
                       catch() { ... } // from try @ 02666558 with catch @ 026666fc */
      FUN_021f06a0();
    }
    lVar3 = Cathei_BakingSheet_SheetContainerBase__Bake_22dddcc
                      (*plVar7,*(undefined8 *)(param_1 + 8),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02666590 with catch @ 02666700 */
      FUN_021f06a0();
    }
    uStack_40 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar3,*(undefined8 *)PTR_DAT_049b5590);
    uVar4 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_40,*(undefined8 *)PTR_DAT_049b5588);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_40;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c25c(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049cbc40);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_40,auStack_34,*(undefined8 *)PTR_DAT_049b5580);
  cVar1 = cRam0000000004f49bfa;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0266641c with catch @ 026666f4 */
    FUN_021f06a0();
  }
  *(undefined1 *)(lVar9 + 0x20) = auStack_34[0];
  *param_1 = -2;
  if (cVar1 == '\0') {
                    /* try { // try from 02666660 to 02766667 has its CatchHandler @ 0266672c */
                    /* try { // try from 02666668 to 02766693 has its CatchHandler @ 02665ecc */
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
                    /* try { // try from 02666694 to 0276669b has its CatchHandler @ 02666868 */
      piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 0266669c to 0276669f has its CatchHandler @ 02666740 */
                    /* try { // try from 026666a0 to 027666a3 has its CatchHandler @ 02666728 */
                    /* try { // try from 026666a4 to 027666a7 has its CatchHandler @ 0266671c */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* try { // try from 026666c4 to 027666c7 has its CatchHandler @ 026666d4 */
                    /* catch() { ... } // from try @ 02666388 with catch @ 026666c8
                       try { // try from 026666c8 to 02766767 has its CatchHandler @ 02665ecc */
                    /* catch() { ... } // from try @ 0266636c with catch @ 026666cc */
                    /* catch() { ... } // from try @ 0266656c with catch @ 026666d0 */
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_026666d4;
        }
                    /* try { // try from 026666a8 to 027666ab has its CatchHandler @ 026667c0 */
        uVar4 = uVar4 - 1;
                    /* try { // try from 026666ac to 027666af has its CatchHandler @ 02666718 */
        piVar6 = piVar6 + 4;
                    /* try { // try from 026666b0 to 027666b3 has its CatchHandler @ 026667bc */
      } while (uVar4 != 0);
    }
                    /* try { // try from 026666b4 to 027666b7 has its CatchHandler @ 026667b8 */
                    /* try { // try from 026666b8 to 027666bb has its CatchHandler @ 026667ac */
                    /* try { // try from 026666bc to 027666bf has its CatchHandler @ 026666f8 */
    puVar5 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049b56d0,2);
                    /* try { // try from 026666c0 to 027666c3 has its CatchHandler @ 026666e8 */
LAB_026666d4:
                    /* catch() { ... } // from try @ 026666c4 with catch @ 026666d4 */
                    /* catch() { ... } // from try @ 02666154 with catch @ 026666d8 */
                    /* catch() { ... } // from try @ 02666348 with catch @ 026666dc */
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
                    /* catch() { ... } // from try @ 0266633c with catch @ 026666e0 */
                    /* catch() { ... } // from try @ 02666334 with catch @ 026666e4 */
                    /* catch() { ... } // from try @ 026666c0 with catch @ 026666e8 */
                    /* catch() { ... } // from try @ 026664e0 with catch @ 026666ec */
                    /* catch() { ... } // from try @ 026664d8 with catch @ 026666f0 */
  return;
}

