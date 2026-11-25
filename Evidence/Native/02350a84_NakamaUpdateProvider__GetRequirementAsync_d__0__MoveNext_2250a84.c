/* IL2CPP: NakamaUpdateProvider.<GetRequirementAsync>d__0$$MoveNext
void NakamaUpdateProvider__GetRequirementAsync_d__0__MoveNext (NakamaUpdateProvider__GetRequirementAsync_d__0_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaUpdateProvider.<GetRequirementAsync>d__0$$MoveNext
   void NakamaUpdateProvider__GetRequirementAsync_d__0__MoveNext
   (NakamaUpdateProvider__GetRequirementAsync_d__0_o __this, const MethodInfo* method); */

void NakamaUpdateProvider__GetRequirementAsync_d__0__MoveNext_2250a84(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  long *plStack_38;
  uint uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f49b90 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049b5ed8);
    FUN_021f03f8(PTR_DAT_049b5ee0);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b5ee8);
    FUN_021f03f8(PTR_DAT_049b5ef0);
    FUN_021f03f8(PTR_DAT_049b5ef8);
    bRam0000000004f49b90 = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 10);
                    /* try { // try from 02350b9c to 02450bd3 has its CatchHandler @ 02350b9c
                       catch() { ... } // from try @ 02350b9c with catch @ 02350b9c
                       catch() { ... } // from try @ 02350bf0 with catch @ 02350b9c */
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = NakamaServices__TryGetApi_2243784(&plStack_38);
    plVar3 = plStack_38;
    if ((uVar4 & 1) == 0) {
      uStack_28 = 0;
      goto LAB_02350c44;
    }
    if (*(int *)(*(long *)PTR_DAT_049b3bf8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = UnityEngine_Application__get_version_3bc7854(0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02350cb8 to 02450cd3 has its CatchHandler @ 02350cec */
      FUN_021f06a0();
    }
    lVar7 = *plVar3;
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0x1a) * 0x10 + 0x138);
          goto LAB_02350bc4;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar3,*(long *)PTR_DAT_049b5578,0x1a);
LAB_02350bc4:
                    /* try { // try from 02350bd4 to 02450bef has its CatchHandler @ 02350c10 */
    lVar7 = (*(code *)*puVar6)(plVar3,0,uVar5,uVar9,puVar6[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_40 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar7,*(undefined8 *)PTR_DAT_049b5ef8);
                    /* try { // try from 02350bf0 to 02450c23 has its CatchHandler @ 02350b9c */
    uVar4 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_40,*(undefined8 *)PTR_DAT_049b5ef0);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 02350c84 to 02450cb7 has its CatchHandler @ 02350c84
                       catch() { ... } // from try @ 02350c84 with catch @ 02350c84
                       catch() { ... } // from try @ 02350cd4 with catch @ 02350c84 */
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_40;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049b5ed8);
      return;
    }
  }
                    /* catch() { ... } // from try @ 02350bd4 with catch @ 02350c10 */
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_40,&uStack_28,*(undefined8 *)PTR_DAT_049b5ee8);
  if (CONCAT44(uStack_24,uStack_28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar1 = *(int *)(CONCAT44(uStack_24,uStack_28) + 0x18);
  uStack_28 = 2;
  if (iVar1 != 0) {
    uStack_28 = (uint)(iVar1 == 1);
  }
LAB_02350c44:
  puVar2 = PTR_DAT_049b5ee0;
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,&uStack_28,*(undefined8 *)puVar2);
  return;
}

