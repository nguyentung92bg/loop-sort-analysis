/* IL2CPP: Extensions$$ShuffleDeranged<__Il2CppFullySharedGenericType>
void Extensions__ShuffleDeranged___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, const MethodInfo_25F0D58* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ShuffleDeranged<__Il2CppFullySharedGenericType>
   void Extensions__ShuffleDeranged___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, const MethodInfo_25F0D58*
   method); */

void Extensions__ShuffleDeranged___Il2CppFullySharedGenericType__25f0d58(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  undefined8 uStack_a0;
  int iStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  char acStack_6c [4];
  long lStack_68;
  
  lStack_88 = tpidr_el0;
  lStack_68 = *(long *)(lStack_88 + 0x28);
  lVar10 = *(long *)(param_2 + 0x38);
  if (lVar10 == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    lVar10 = *(long *)(param_2 + 0x38);
    if (lVar10 == 0) {
      FUN_02229774(param_2);
      lVar10 = *(long *)(param_2 + 0x38);
    }
  }
  uVar9 = (ulong)*(uint *)(*(long *)(lVar10 + 0x10) + 0xfc);
  uVar7 = uVar9 + 0xf & 0x1fffffff0;
  puVar8 = (undefined8 *)((long)&uStack_a0 - uVar7);
  puVar11 = (undefined8 *)((long)puVar8 - uVar7);
  lStack_90 = (long)puVar11 - uVar7;
  func_0x04608670(lStack_90,0,uVar9);
  if ((param_1 == (long *)0x0) || (iVar12 = (int)param_1[3], iVar12 < 2)) {
LAB_026f1154:
                    /* try { // try from 026f1164 to 027f1167 has its CatchHandler @ 026f19c4 */
    if (*(long *)(lStack_88 + 0x28) == lStack_68) {
                    /* try { // try from 026f1168 to 027f116f has its CatchHandler @ 026f19b8 */
                    /* try { // try from 026f117c to 027f1183 has its CatchHandler @ 026f19bc */
      return;
    }
  }
  else {
    lVar10 = *(long *)(lVar10 + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
      iVar12 = (int)param_1[3];
    }
                    /* try { // try from 026f0e24 to 027f0ea3 has its CatchHandler @ 026f10a0 */
    plVar3 = (long *)FUN_021f04e4(lVar10,iVar12);
    if (0 < (int)param_1[3]) {
      uVar7 = 0;
      uVar6 = param_1[3] & 0xffffffff;
      do {
        if (uVar6 <= uVar7) goto LAB_026f1188;
        lVar10 = (long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20;
        func_0x04608620(puVar8,lVar10,uVar9);
        if (plVar3 == (long *)0x0) goto LAB_026f11a0;
        if (*(uint *)(plVar3 + 3) <= uVar7) goto LAB_026f1188;
        func_0x04608650((long)plVar3 + uVar7 * *(uint *)(*plVar3 + 0x104) + 0x20,lVar10,uVar9);
        lVar10 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
                    /* try { // try from 026f0ea4 to 027f0eab has its CatchHandler @ 026f1098 */
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        if (*(uint *)(plVar3 + 3) <= uVar7) goto LAB_026f1188;
                    /* try { // try from 026f0ec0 to 027f0edf has its CatchHandler @ 026f10a4 */
        FUN_021f03a8(lVar10,(long)plVar3 + uVar7 * *(uint *)(*plVar3 + 0x104) + 0x20,puVar8);
        uVar6 = (ulong)*(uint *)(param_1 + 3);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(param_1 + 3));
    }
    plVar1 = param_1 + 4;
    iVar12 = 0;
    do {
      iStack_94 = iVar12;
                    /* try { // try from 026f0f00 to 027f0f03 has its CatchHandler @ 026f1070 */
                    /* try { // try from 026f0f04 to 027f0f0f has its CatchHandler @ 026f1094 */
      if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__Shuffle___Il2CppFullySharedGenericType__25f0388
                (param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18));
                    /* try { // try from 026f0f28 to 027f0f2b has its CatchHandler @ 026f106c */
      if ((int)param_1[3] < 1) goto LAB_026f1154;
                    /* try { // try from 026f0f2c to 027f0f3b has its CatchHandler @ 026f1090 */
      uVar7 = 0;
      while( true ) {
        plVar4 = (long *)FUN_026b1a00(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x20));
                    /* try { // try from 026f0f44 to 027f0f4f has its CatchHandler @ 026f108c */
        if (*(uint *)(param_1 + 3) <= uVar7) goto LAB_026f1188;
        func_0x04608620(puVar8,(long *)((long)plVar1 + uVar7 * *(uint *)(*param_1 + 0x104)),uVar9);
        if (plVar3 == (long *)0x0) goto LAB_026f11a0;
        if (*(uint *)(plVar3 + 3) <= uVar7) goto LAB_026f1188;
        func_0x04608620(puVar11,(long)plVar3 + uVar7 * *(uint *)(*plVar3 + 0x104) + 0x20,uVar9);
        if (plVar4 == (long *)0x0) goto LAB_026f11a0;
                    /* try { // try from 026f0fa0 to 027f0fa7 has its CatchHandler @ 026f1078 */
        puStack_80 = puVar8;
        puStack_78 = puVar11;
        if (-1 < *(int *)(*(long *)(*(long *)(param_2 + 0x38) + 0x10) + 0x28)) {
          puStack_80 = (undefined8 *)*puVar8;
          puStack_78 = (undefined8 *)*puVar11;
        }
                    /* try { // try from 026f0fc4 to 027f0fcf has its CatchHandler @ 026f1074 */
        lVar10 = *(long *)(*plVar4 + 0x1c0);
        (**(code **)(lVar10 + 0x10))
                  (*(undefined8 *)(lVar10 + 8),lVar10,plVar4,&puStack_80,acStack_6c);
        if (acStack_6c[0] != '\0') break;
        uVar7 = uVar7 + 1;
        if ((long)(int)param_1[3] <= (long)uVar7) goto LAB_026f1154;
      }
      iVar12 = iStack_94 + 1;
    } while (iStack_94 + 1 != 100);
    uVar5 = *(uint *)(param_1 + 3);
    uVar7 = (ulong)uVar5;
    if (uVar7 != 0) {
      func_0x04608620(puVar8,plVar1,uVar9);
      lVar10 = lStack_90;
                    /* try { // try from 026f1030 to 027f103b has its CatchHandler @ 026f1064 */
      func_0x04608620(lStack_90,plVar1,uVar9);
      iVar12 = uVar5 - 1;
      if (0 < iVar12) {
        uVar6 = 0;
        do {
          uVar2 = uVar6 + 1;
                    /* try { // try from 026f104c to 027f1057 has its CatchHandler @ 026f1060 */
          if (uVar7 <= uVar2) goto LAB_026f1188;
          lVar13 = *param_1;
                    /* try { // try from 026f105c to 027f105f has its CatchHandler @ 026f107c */
                    /* catch() { ... } // from try @ 026f104c with catch @ 026f1060 */
                    /* catch() { ... } // from try @ 026f1030 with catch @ 026f1064 */
                    /* catch() { ... } // from try @ 026f0d18 with catch @ 026f1068 */
          plVar3 = (long *)((long)plVar1 + uVar2 * *(uint *)(lVar13 + 0x104));
                    /* catch() { ... } // from try @ 026f0f28 with catch @ 026f106c */
                    /* catch() { ... } // from try @ 026f0f00 with catch @ 026f1070 */
          func_0x04608620(puVar8,plVar3,uVar9);
                    /* catch() { ... } // from try @ 026f0fc4 with catch @ 026f1074 */
                    /* catch() { ... } // from try @ 026f0fa0 with catch @ 026f1078 */
                    /* catch() { ... } // from try @ 026f105c with catch @ 026f107c */
                    /* catch() { ... } // from try @ 026f0d38 with catch @ 026f1080 */
                    /* catch() { ... } // from try @ 026f0d1c with catch @ 026f1084 */
          func_0x04608650((long *)((long)plVar1 + uVar6 * *(uint *)(lVar13 + 0x104)),plVar3,uVar9);
                    /* catch() { ... } // from try @ 026f0cfc with catch @ 026f1088 */
                    /* catch() { ... } // from try @ 026f0f44 with catch @ 026f108c */
          lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 026f0f2c with catch @ 026f1090 */
                    /* catch() { ... } // from try @ 026f0f04 with catch @ 026f1094 */
                    /* catch() { ... } // from try @ 026f0ea4 with catch @ 026f1098 */
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 026f0d54 with catch @ 026f109c */
            lVar13 = FUN_02229718();
          }
                    /* catch() { ... } // from try @ 026f0e24 with catch @ 026f10a0 */
                    /* catch() { ... } // from try @ 026f0ec0 with catch @ 026f10a4 */
                    /* try { // try from 026f10a8 to 027f10d3 has its CatchHandler @ 026f19b0 */
          if (*(uint *)(param_1 + 3) <= uVar6) goto LAB_026f1188;
          FUN_021f03a8(lVar13,(long *)((long)plVar1 + uVar6 * *(uint *)(*param_1 + 0x104)),puVar8);
          uVar5 = (uint)param_1[3];
          iVar12 = uVar5 - 1;
          uVar7 = param_1[3] & 0xffffffff;
          uVar6 = uVar2;
        } while ((long)uVar2 < (long)iVar12);
      }
      func_0x04608620(puVar8,lVar10,uVar9);
      if (uVar5 != 0) {
                    /* try { // try from 026f1100 to 027f114b has its CatchHandler @ 026f19c4 */
        func_0x04608620((long *)((long)plVar1 + (ulong)*(uint *)(*param_1 + 0x104) * (long)iVar12),
                        lVar10,uVar9);
        lVar10 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        if ((int)param_1[3] != 0) {
                    /* try { // try from 026f114c to 027f1163 has its CatchHandler @ 026f0b08 */
          FUN_021f03a8(lVar10,(long *)((long)plVar1 +
                                      (long)((int)param_1[3] + -1) *
                                      (ulong)*(uint *)(*param_1 + 0x104)),puVar8);
          goto LAB_026f1154;
        }
      }
    }
LAB_026f1188:
    if (*(long *)(lStack_88 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
  }
LAB_026f11b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_026f11a0:
  if (*(long *)(lStack_88 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  goto LAB_026f11b8;
}

