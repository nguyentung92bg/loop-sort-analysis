/* IL2CPP: NakamaAccountProvider.<Link>d__3$$MoveNext
void NakamaAccountProvider__Link_d__3__MoveNext (NakamaAccountProvider__Link_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaAccountProvider.<Link>d__3$$MoveNext
   void NakamaAccountProvider__Link_d__3__MoveNext (NakamaAccountProvider__Link_d__3_o __this, const
   MethodInfo* method); */

void NakamaAccountProvider__Link_d__3__MoveNext_22439fc(int *param_1)

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
  uint uStack_24;
  
  if ((bRam0000000004f49b2f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b55b0);
    FUN_021f03f8(PTR_DAT_049b55b8);
    FUN_021f03f8(PTR_DAT_049b5578);
                    /* catch() { ... } // from try @ 02343b48 with catch @ 02343a44 */
    FUN_021f03f8(PTR_DAT_049b55c0);
    FUN_021f03f8(PTR_DAT_049b55c8);
    FUN_021f03f8(PTR_DAT_049b55d0);
    bRam0000000004f49b2f = 1;
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
      uStack_24 = 1;
      goto LAB_02343b80;
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
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x1b) * 0x10 + 0x138);
          goto LAB_02343b18;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
                    /* try { // try from 02343ad4 to 02443adf has its CatchHandler @ 02343b88 */
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar2,*(long *)PTR_DAT_049b5578,0x1b);
LAB_02343b18:
                    /* try { // try from 02343b1c to 02443b27 has its CatchHandler @ 02343b74 */
    lVar6 = (*(code *)*puVar5)(plVar2,uVar3,uVar8,puVar5[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02343b3c to 02443b47 has its CatchHandler @ 02343b6c */
    uStack_40 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar6,*(undefined8 *)PTR_DAT_049b55d0);
                    /* try { // try from 02343b48 to 02443b97 has its CatchHandler @ 02343a44 */
    uVar4 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_40,*(undefined8 *)PTR_DAT_049b55c8);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_40;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049b55b0);
      return;
    }
  }
                    /* catch() { ... } // from try @ 02343b3c with catch @ 02343b6c */
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_40,&uStack_24,*(undefined8 *)PTR_DAT_049b55c0);
                    /* catch() { ... } // from try @ 02343b1c with catch @ 02343b74 */
  if (3 < uStack_24) {
    uStack_24 = 1;
  }
LAB_02343b80:
  puVar1 = PTR_DAT_049b55b8;
                    /* catch() { ... } // from try @ 02343ad4 with catch @ 02343b88 */
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,&uStack_24,*(undefined8 *)puVar1);
  return;
}

