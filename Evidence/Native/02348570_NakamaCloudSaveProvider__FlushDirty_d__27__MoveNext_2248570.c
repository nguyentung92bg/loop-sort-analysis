/* IL2CPP: NakamaCloudSaveProvider.<FlushDirty>d__27$$MoveNext
void NakamaCloudSaveProvider__FlushDirty_d__27__MoveNext (NakamaCloudSaveProvider__FlushDirty_d__27_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider.<FlushDirty>d__27$$MoveNext
   void NakamaCloudSaveProvider__FlushDirty_d__27__MoveNext
   (NakamaCloudSaveProvider__FlushDirty_d__27_o __this, const MethodInfo* method); */

void NakamaCloudSaveProvider__FlushDirty_d__27__MoveNext_2248570(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_40;
  long lStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f49b5c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b58b0);
    FUN_021f03f8(PTR_DAT_049b58b8);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5840);
    FUN_021f03f8(PTR_DAT_049b5888);
    FUN_021f03f8(PTR_DAT_049b58c0);
    FUN_021f03f8(PTR_DAT_049b58c8);
    FUN_021f03f8(PTR_DAT_049b58d0);
    FUN_021f03f8(PTR_DAT_049b58d8);
    bRam0000000004f49b5c = 1;
  }
  uStack_40 = 0;
                    /* try { // try from 0234860c to 02448633 has its CatchHandler @ 0234860c
                       catch() { ... } // from try @ 0234860c with catch @ 0234860c
                       catch() { ... } // from try @ 02348654 with catch @ 0234860c */
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
    if (cRam0000000004f49bfd == '\0') {
      FUN_021f03f8(PTR_DAT_049b5018);
                    /* try { // try from 02348634 to 02448653 has its CatchHandler @ 0234866c */
      cRam0000000004f49bfd = '\x01';
    }
    puVar2 = PTR_DAT_049b5888;
    puVar1 = PTR_DAT_049b5018;
    if (*(char *)(*(long *)(*(long *)PTR_DAT_049b5018 + 0xb8) + 9) != '\0') {
                    /* try { // try from 02348654 to 0244867f has its CatchHandler @ 0234860c */
      lVar3 = *(long *)PTR_DAT_049b5888;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar2;
      }
                    /* catch() { ... } // from try @ 02348634 with catch @ 0234866c */
      uVar4 = System_String__Concat_2f72b28
                        (**(undefined8 **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_049b58d8,0);
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__LogWarning_3bcf90c(uVar4,0);
      if (cRam0000000004f49bef == '\0') {
        FUN_021f03f8(PTR_DAT_049b5018);
        cRam0000000004f49bef = '\x01';
      }
      *(undefined1 *)(*(long *)(*(long *)puVar1 + 0xb8) + 9) = 0;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar8 = *(long **)(lVar9 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *plVar8;
    uVar4 = *(undefined8 *)(param_1 + 10);
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b5840) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 0x19) * 0x10 + 0x138);
          goto LAB_0234875c;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 0234871c to 0244876f has its CatchHandler @ 0234871c
                       catch() { ... } // from try @ 0234871c with catch @ 0234871c
                       catch() { ... } // from try @ 023487c8 with catch @ 0234871c */
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b5840,0x19);
LAB_0234875c:
    lVar9 = (*(code *)*puVar5)(plVar8,uVar4,puVar5[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02348770 to 02448777 has its CatchHandler @ 02348808 */
    uStack_40 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar9,*(undefined8 *)PTR_DAT_049b58d0);
    uVar6 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_40,*(undefined8 *)PTR_DAT_049b58c8);
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_40;
      thunk_FUN_021f190c(param_1 + 0xc,0);
                    /* catch() { ... } // from try @ 023487a8 with catch @ 02348800 */
                    /* catch() { ... } // from try @ 02348770 with catch @ 02348808 */
      FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049b58b0);
      return;
    }
  }
                    /* try { // try from 023487a8 to 024487af has its CatchHandler @ 02348800 */
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_40,&lStack_38,*(undefined8 *)PTR_DAT_049b58c0);
  puVar1 = PTR_DAT_049b58b8;
                    /* try { // try from 023487b8 to 024487c7 has its CatchHandler @ 02348810 */
  if (lStack_38 != 0) {
    if (*(uint *)(lStack_38 + 0x10) < 6) {
                    /* try { // try from 023487c8 to 02448843 has its CatchHandler @ 0234871c */
      uStack_24 = *(undefined4 *)(&UNK_013aa9cc + (ulong)*(uint *)(lStack_38 + 0x10) * 4);
    }
    else {
      uStack_24 = 4;
    }
    *param_1 = -2;
    FUN_0235bed4(param_1 + 2,&uStack_24,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 023487b8 with catch @ 02348810 */
  FUN_021f06a0();
}

