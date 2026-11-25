/* IL2CPP: NakamaAccountProvider.<UnlinkEmail>d__6$$MoveNext
void NakamaAccountProvider__UnlinkEmail_d__6__MoveNext (NakamaAccountProvider__UnlinkEmail_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaAccountProvider.<UnlinkEmail>d__6$$MoveNext
   void NakamaAccountProvider__UnlinkEmail_d__6__MoveNext (NakamaAccountProvider__UnlinkEmail_d__6_o
   __this, const MethodInfo* method); */

void NakamaAccountProvider__UnlinkEmail_d__6__MoveNext_224473c(int *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  char cStack_28;
  undefined7 uStack_27;
  
                    /* try { // try from 02344758 to 0244475f has its CatchHandler @ 023447ac */
  if ((bRam0000000004f49b37 & 1) == 0) {
                    /* try { // try from 02344760 to 024447bf has its CatchHandler @ 0234470c */
    FUN_021f03f8(PTR_DAT_049b5638);
    FUN_021f03f8(PTR_DAT_049b5640);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049b5648);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b5580);
                    /* catch() { ... } // from try @ 02344758 with catch @ 023447ac */
    FUN_021f03f8(PTR_DAT_049b5650);
    FUN_021f03f8(PTR_DAT_049b5658);
    FUN_021f03f8(PTR_DAT_049b5588);
                    /* try { // try from 023447cc to 024447cf has its CatchHandler @ 023447d8 */
    FUN_021f03f8(PTR_DAT_049b5590);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023447cc with catch @ 023447d8
                        */
                    /* catch() { ... } // from try @ 02344820 with catch @ 023447dc */
    FUN_021f03f8(PTR_DAT_049b5660);
    bRam0000000004f49b37 = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0xc);
                    /* try { // try from 02344820 to 024448e3 has its CatchHandler @ 023447dc */
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_02344830:
    System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
              (&uStack_40,&cStack_28,*(undefined8 *)PTR_DAT_049b5650);
    if (CONCAT71(uStack_27,cStack_28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar6 = *(long **)(param_1 + 10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *plVar6;
    uVar7 = *(undefined8 *)(CONCAT71(uStack_27,cStack_28) + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x2a) * 0x10 + 0x138);
          goto LAB_0234492c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049b5578,0x2a);
LAB_0234492c:
    lVar4 = (*(code *)*puVar3)(plVar6,uVar7,uVar8,puVar3[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_48 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar4,*(undefined8 *)PTR_DAT_049b5590);
    uVar2 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_48,*(undefined8 *)PTR_DAT_049b5588);
    if ((uVar2 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0xe) = uStack_48;
      thunk_FUN_021f190c(param_1 + 0xe,0);
      FUN_0235bb44(param_1 + 2,&uStack_48,param_1,*(undefined8 *)PTR_DAT_049b5638);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      uVar2 = NakamaServices__TryGetApi_2243784(param_1 + 10);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = NakamaServices__TryGetAccount_2244bb8(&plStack_38), plVar6 = plStack_38,
         (uVar2 & 1) == 0)) {
        cStack_28 = false;
        goto LAB_02344994;
      }
                    /* catch() { ... } // from try @ 02344814 with catch @ 023448c4 */
      if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar4 = *plStack_38;
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b5648) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_02344a2c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)PTR_DAT_049b5648,1);
LAB_02344a2c:
      lVar4 = (*(code *)*puVar3)(plVar6,uVar7,puVar3[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_40 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                            (lVar4,*(undefined8 *)PTR_DAT_049b5660);
      uVar2 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                        (&uStack_40,*(undefined8 *)PTR_DAT_049b5658);
      if ((uVar2 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xc) = uStack_40;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049b5640);
        return;
      }
      goto LAB_02344830;
    }
    uStack_48 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
                    /* try { // try from 02344814 to 0244481f has its CatchHandler @ 023448c4 */
  }
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_48,&cStack_28,*(undefined8 *)PTR_DAT_049b5580);
  cStack_28 = cStack_28 != '\0';
LAB_02344994:
  puVar1 = PTR_DAT_049b5570;
  piVar5 = param_1 + 10;
  piVar5[0] = 0;
  piVar5[1] = 0;
  *param_1 = -2;
  thunk_FUN_021f190c(piVar5,0);
  FUN_0235bed4(param_1 + 2,&cStack_28,*(undefined8 *)puVar1);
  return;
}

