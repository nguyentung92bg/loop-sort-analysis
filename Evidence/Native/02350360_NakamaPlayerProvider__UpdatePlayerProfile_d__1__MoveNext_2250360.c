/* IL2CPP: NakamaPlayerProvider.<UpdatePlayerProfile>d__1$$MoveNext
void NakamaPlayerProvider__UpdatePlayerProfile_d__1__MoveNext (NakamaPlayerProvider__UpdatePlayerProfile_d__1_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPlayerProvider.<UpdatePlayerProfile>d__1$$MoveNext
   void NakamaPlayerProvider__UpdatePlayerProfile_d__1__MoveNext
   (NakamaPlayerProvider__UpdatePlayerProfile_d__1_o __this, const MethodInfo* method); */

void NakamaPlayerProvider__UpdatePlayerProfile_d__1__MoveNext_2250360(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if ((bRam0000000004f49b86 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5e78);
    FUN_021f03f8(PTR_DAT_049b5e80);
    FUN_021f03f8(PTR_DAT_049b5db0);
    FUN_021f03f8(PTR_DAT_049b5e88);
    FUN_021f03f8(PTR_DAT_049b5e90);
    FUN_021f03f8(PTR_DAT_049b5e98);
    FUN_021f03f8(PTR_DAT_049b5ea0);
    bRam0000000004f49b86 = 1;
  }
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_e8 = 0;
  if (*param_1 == 0) {
    uStack_a0 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
LAB_02350530:
    System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
              (&uStack_a0,&uStack_120,*(undefined8 *)PTR_DAT_049b5e90);
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    uStack_70 = uStack_100;
    uVar6 = Voodoo_Sauce_Core_Results_Result___Il2CppFullySharedGenericType____Il2CppFullySharedGenericStructType___TryGetValue_294627c
                      (&uStack_90,&lStack_98,*(undefined8 *)PTR_DAT_049b5e88);
    if ((uVar6 & 1) != 0) {
                    /* try { // try from 02350578 to 024505b7 has its CatchHandler @ 02350578
                       catch() { ... } // from try @ 02350578 with catch @ 02350578
                       catch() { ... } // from try @ 023505c4 with catch @ 02350578
                       catch() { ... } // from try @ 023505f0 with catch @ 02350578 */
      if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar8 = *(long *)(lStack_98 + 0x10);
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_b0 = *(undefined8 *)(lVar8 + 0x18);
      thunk_FUN_021f190c(&uStack_b0);
      uStack_a8 = *(undefined8 *)(lVar8 + 0x28);
      thunk_FUN_021f190c(&uStack_a8);
                    /* try { // try from 023505b8 to 024505c3 has its CatchHandler @ 023505f4 */
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 023505c4 to 024505e3 has its CatchHandler @ 02350578 */
      uStack_d8 = uStack_b0;
      uStack_e0 = uStack_b8;
      uVar3 = (uint)(*(int *)(lStack_98 + 0x18) == 1) << 1;
      uStack_d0 = uStack_a8;
                    /* try { // try from 023505e4 to 024505ef has its CatchHandler @ 023505f0 */
      if (*(int *)(lStack_98 + 0x18) == 0) {
        uVar3 = 1;
      }
      uStack_c8 = (ulong)uVar3;
                    /* catch() { ... } // from try @ 023505e4 with catch @ 023505f0
                       try { // try from 023505f0 to 0245060f has its CatchHandler @ 02350578 */
                    /* catch() { ... } // from try @ 023505b8 with catch @ 023505f4 */
      thunk_FUN_021f190c((ulong)&uStack_e0 | 8,0);
      uStack_58 = uStack_d8;
      uStack_60 = uStack_e0;
      uStack_48 = uStack_c8;
      uStack_50 = uStack_d0;
      goto LAB_02350610;
    }
  }
  else {
    uVar6 = NakamaServices__TryGetPlayerProfile_224f9fc(&plStack_68);
    plVar5 = plStack_68;
    if ((uVar6 & 1) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x12);
      if (cRam0000000004f49bff == '\0') {
        FUN_021f03f8(PTR_DAT_049b5ea8);
        cRam0000000004f49bff = '\x01';
      }
      if (**(long **)(*(long *)PTR_DAT_049b5ea8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar8 = *plVar5;
      uVar11 = *(undefined8 *)(**(long **)(*(long *)PTR_DAT_049b5ea8 + 0xb8) + 0x18);
      uVar10 = *(undefined8 *)(param_1 + 0x14);
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b5db0) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_023504d4;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049b5db0,4);
LAB_023504d4:
      lVar8 = (*(code *)*puVar7)(plVar5,uVar1,uVar2,0,uVar11,0,0,uVar10,puVar7[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_a0 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                            (lVar8,*(undefined8 *)PTR_DAT_049b5ea0);
      uVar6 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                        (&uStack_a0,*(undefined8 *)PTR_DAT_049b5e98);
      if ((uVar6 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x16) = uStack_a0;
        thunk_FUN_021f190c(param_1 + 0x16,0);
                    /* try { // try from 02350678 to 0245068f has its CatchHandler @ 023507b8 */
        FUN_0235bb44(param_1 + 2,&uStack_a0,param_1,*(undefined8 *)PTR_DAT_049b5e78);
        return;
      }
      goto LAB_02350530;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
LAB_02350610:
                    /* try { // try from 02350610 to 02450677 has its CatchHandler @ 02350610
                       catch() { ... } // from try @ 02350610 with catch @ 02350610
                       catch() { ... } // from try @ 023506b0 with catch @ 02350610
                       catch() { ... } // from try @ 023506e8 with catch @ 02350610
                       catch() { ... } // from try @ 02350728 with catch @ 02350610
                       catch() { ... } // from try @ 02350778 with catch @ 02350610 */
  puVar4 = PTR_DAT_049b5e80;
  *param_1 = -2;
  uStack_138 = uStack_58;
  uStack_140 = uStack_60;
  uStack_128 = uStack_48;
  uStack_130 = uStack_50;
  FUN_0235bed4(param_1 + 2,&uStack_140,*(undefined8 *)puVar4);
  return;
}

