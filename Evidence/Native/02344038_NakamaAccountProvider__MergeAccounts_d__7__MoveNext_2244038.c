/* IL2CPP: NakamaAccountProvider.<MergeAccounts>d__7$$MoveNext
void NakamaAccountProvider__MergeAccounts_d__7__MoveNext (NakamaAccountProvider__MergeAccounts_d__7_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaAccountProvider.<MergeAccounts>d__7$$MoveNext
   void NakamaAccountProvider__MergeAccounts_d__7__MoveNext
   (NakamaAccountProvider__MergeAccounts_d__7_o __this, const MethodInfo* method); */

void NakamaAccountProvider__MergeAccounts_d__7__MoveNext_2244038(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uStack_50;
  long *plStack_48;
  uint uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f49b33 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b55f0);
    FUN_021f03f8(PTR_DAT_049b55f8);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b5600);
    FUN_021f03f8(PTR_DAT_049b5608);
    FUN_021f03f8(PTR_DAT_049b5610);
    FUN_021f03f8(PTR_DAT_049b5618);
    bRam0000000004f49b33 = 1;
  }
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  if (*param_1 == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = NakamaServices__TryGetApi_2243784(&plStack_48);
    plVar2 = plStack_48;
    if ((uVar4 & 1) == 0) {
      uStack_38 = 1;
                    /* catch() { ... } // from try @ 02344124 with catch @ 02344160 */
      goto LAB_02344260;
    }
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5600);
    System_Object___ctor_3142338(uVar5,0);
    plVar3 = plStack_48;
    puVar1 = PTR_DAT_049b5578;
    if (plStack_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *plStack_48;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 02344124 to 0244412f has its CatchHandler @ 02344160 */
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_02344174;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
                    /* try { // try from 02344130 to 0244417b has its CatchHandler @ 02344028 */
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plStack_48,*(long *)PTR_DAT_049b5578,3);
LAB_02344174:
                    /* try { // try from 0234417c to 024441ef has its CatchHandler @ 0234417c
                       catch() { ... } // from try @ 0234417c with catch @ 0234417c
                       catch() { ... } // from try @ 02344204 with catch @ 0234417c */
    uVar7 = (*(code *)*puVar6)(plVar3,puVar6[1]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *plVar2;
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0x34) * 0x10 + 0x138);
          goto LAB_023441dc;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar2,*(long *)puVar1,0x34);
LAB_023441dc:
                    /* try { // try from 023441f0 to 02444203 has its CatchHandler @ 02344218 */
    lVar8 = (*(code *)*puVar6)(plVar2,uVar5,uVar7,uVar10,puVar6[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02344204 to 0244422f has its CatchHandler @ 0234417c */
    uStack_50 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar8,*(undefined8 *)PTR_DAT_049b5618);
                    /* catch() { ... } // from try @ 023441f0 with catch @ 02344218 */
    uVar4 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_50,*(undefined8 *)PTR_DAT_049b5610);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_50;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049b55f0);
      return;
    }
  }
                    /* catch() { ... } // from try @ 02344278 with catch @ 02344230 */
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_50,&uStack_38,*(undefined8 *)PTR_DAT_049b5608);
  lVar8 = CONCAT44(uStack_34,uStack_38);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar8 + 0x14) == 2) {
    uStack_38 = 2;
  }
  else {
    uStack_38 = *(byte *)(lVar8 + 0x10) ^ 1;
  }
LAB_02344260:
  puVar1 = PTR_DAT_049b55f8;
                    /* try { // try from 0234426c to 02444277 has its CatchHandler @ 02344298 */
  *param_1 = -2;
                    /* try { // try from 02344278 to 024442c3 has its CatchHandler @ 02344230 */
  FUN_0235bed4(param_1 + 2,&uStack_38,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0234426c with catch @ 02344298 */
  return;
}

