/* IL2CPP: NakamaAccountProvider.<IsLinked>d__2$$MoveNext
void NakamaAccountProvider__IsLinked_d__2__MoveNext (NakamaAccountProvider__IsLinked_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaAccountProvider.<IsLinked>d__2$$MoveNext
   void NakamaAccountProvider__IsLinked_d__2__MoveNext (NakamaAccountProvider__IsLinked_d__2_o
   __this, const MethodInfo* method); */

void NakamaAccountProvider__IsLinked_d__2__MoveNext_22434b8(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  long *plStack_38;
  char acStack_24 [4];
  
                    /* catch() { ... } // from try @ 02343490 with catch @ 023434cc */
  if ((bRam0000000004f49b2d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5568);
                    /* try { // try from 023434e8 to 024435e3 has its CatchHandler @ 023434e8
                       catch() { ... } // from try @ 023434e8 with catch @ 023434e8
                       catch() { ... } // from try @ 023435f0 with catch @ 023434e8 */
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b5580);
    FUN_021f03f8(PTR_DAT_049b5588);
    FUN_021f03f8(PTR_DAT_049b5590);
    bRam0000000004f49b2d = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = NakamaServices__TryGetApi_2243784(&plStack_38);
    plVar2 = plStack_38;
    if ((uVar4 & 1) == 0) {
      acStack_24[0] = false;
      goto LAB_0234363c;
    }
    uVar3 = Extensions__ToNakamaType_223d864(param_1[8]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar2;
    uVar8 = *(undefined8 *)(param_1 + 10);
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x1f) * 0x10 + 0x138);
          goto LAB_023435d4;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar2,*(long *)PTR_DAT_049b5578,0x1f);
LAB_023435d4:
                    /* try { // try from 023435e4 to 024435ef has its CatchHandler @ 02343620 */
    lVar6 = (*(code *)*puVar5)(plVar2,uVar3,uVar8,puVar5[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023436b0 to 024436c3 has its CatchHandler @ 023436d8 */
      FUN_021f06a0();
    }
                    /* try { // try from 023435f0 to 0244363b has its CatchHandler @ 023434e8 */
    uStack_40 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar6,*(undefined8 *)PTR_DAT_049b5590);
    uVar4 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_40,*(undefined8 *)PTR_DAT_049b5588);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_40;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049b5568);
      return;
    }
  }
                    /* catch() { ... } // from try @ 023435e4 with catch @ 02343620 */
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_40,acStack_24,*(undefined8 *)PTR_DAT_049b5580);
  acStack_24[0] = acStack_24[0] != '\0';
LAB_0234363c:
                    /* try { // try from 0234363c to 024436af has its CatchHandler @ 0234363c
                       catch() { ... } // from try @ 0234363c with catch @ 0234363c
                       catch() { ... } // from try @ 023436c4 with catch @ 0234363c */
  puVar1 = PTR_DAT_049b5570;
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,acStack_24,*(undefined8 *)puVar1);
  return;
}

