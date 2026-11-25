/* IL2CPP: Extensions$$GetClamped<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Extensions__GetClamped___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, int32_t index, const MethodInfo_25EF7AC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Possible PIC construction at 0x026ef8f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x026ef8fc) */
/* WARNING: Removing unreachable block (ram,0x026ef90c) */
/* IL2CPP: Extensions$$GetClamped<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Extensions__GetClamped___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o*
   list, int32_t index, const MethodInfo_25EF7AC* method); */

void Extensions__GetClamped___Il2CppFullySharedGenericType__25ef7ac
               (long *param_1,uint param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_80 [12];
  int iStack_74;
  int *piStack_70;
  undefined1 *puStack_68;
  int iStack_5c;
  long lStack_58;
  
                    /* try { // try from 026ef7c0 to 027ef7cf has its CatchHandler @ 026efa50 */
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_4 + 0x38);
  if (lVar4 == 0) {
                    /* try { // try from 026ef7ec to 027ef7ef has its CatchHandler @ 026efa20 */
    FUN_02229774(param_4);
                    /* try { // try from 026ef7f4 to 027ef7ff has its CatchHandler @ 026efa38 */
    lVar4 = *(long *)(param_4 + 0x38);
  }
  uVar8 = (ulong)*(uint *)(*(long *)(lVar4 + 0x18) + 0xfc);
  puVar9 = auStack_80 + -(uVar8 + 0xf & 0x1fffffff0);
                    /* try { // try from 026ef814 to 027ef8a7 has its CatchHandler @ 026efa5c */
  iStack_74 = 0;
  if (param_1 != (long *)0x0) {
    lVar4 = *(long *)(lVar4 + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718(lVar4);
    }
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_026ef880;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(param_1,lVar4,0);
LAB_026ef880:
    iVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if (iVar2 != 0) {
      lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718(lVar4);
      }
      lVar5 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* try { // try from 026ef8cc to 027ef8cf has its CatchHandler @ 026efa28 */
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_026ef940;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 026ef8dc to 027ef8eb has its CatchHandler @ 026efa24 */
      puVar3 = (undefined8 *)FUN_02229a4c(param_1,lVar4,0);
LAB_026ef940:
                    /* try { // try from 026ef948 to 027ef953 has its CatchHandler @ 026efa08 */
      iVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
      if ((int)param_2 < iVar2) {
        iStack_74 = System_Index__op_Implicit_30f94e8
                              (param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU),0);
                    /* try { // try from 026ef960 to 027ef96f has its CatchHandler @ 026efa04 */
      }
      else {
        iStack_74 = -2;
      }
      lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 026ef984 to 027ef98f has its CatchHandler @ 026efa5c */
        lVar4 = FUN_02229718(lVar4);
      }
      lVar5 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* try { // try from 026ef9a8 to 027ef9b3 has its CatchHandler @ 026efa1c */
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_026ef9d4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 026ef9c0 to 027ef9cf has its CatchHandler @ 026efa18 */
      puVar3 = (undefined8 *)FUN_02229a4c(param_1,lVar4,0);
LAB_026ef9d4:
                    /* try { // try from 026ef9d8 to 027ef9db has its CatchHandler @ 026efa74 */
                    /* try { // try from 026ef9dc to 027ef9df has its CatchHandler @ 026efa58 */
      iVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
                    /* try { // try from 026ef9e0 to 027ef9e3 has its CatchHandler @ 026efa54 */
                    /* try { // try from 026ef9e4 to 027ef9e7 has its CatchHandler @ 026efa4c */
                    /* try { // try from 026ef9e8 to 027ef9eb has its CatchHandler @ 026efa78 */
                    /* try { // try from 026ef9ec to 027ef9ef has its CatchHandler @ 026efa48 */
      uVar6 = System_Index__get_IsFromEnd_30f9438(&iStack_74,0);
                    /* try { // try from 026ef9f0 to 027ef9f3 has its CatchHandler @ 026efa44 */
                    /* try { // try from 026ef9f4 to 027ef9f7 has its CatchHandler @ 026efa3c */
                    /* try { // try from 026ef9f8 to 027ef9fb has its CatchHandler @ 026efa2c */
                    /* try { // try from 026ef9fc to 027ef9ff has its CatchHandler @ 026efa14 */
      iStack_5c = 0;
      if ((uVar6 & 1) != 0) {
        iStack_5c = iVar2 + 1;
      }
                    /* catch() { ... } // from try @ 026ef908 with catch @ 026efa00
                       try { // try from 026efa00 to 027efa97 has its CatchHandler @ 026ef124 */
      lVar4 = **(long **)(param_4 + 0x38);
                    /* catch() { ... } // from try @ 026ef960 with catch @ 026efa04 */
      iStack_5c = iStack_74 + iStack_5c;
                    /* catch() { ... } // from try @ 026ef948 with catch @ 026efa08 */
                    /* catch() { ... } // from try @ 026ef924 with catch @ 026efa0c */
                    /* catch() { ... } // from try @ 026ef910 with catch @ 026efa10 */
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 026ef9fc with catch @ 026efa14 */
                    /* catch() { ... } // from try @ 026ef9c0 with catch @ 026efa18 */
        lVar4 = FUN_02229718(lVar4);
                    /* catch() { ... } // from try @ 026ef9a8 with catch @ 026efa1c */
      }
                    /* catch() { ... } // from try @ 026ef7ec with catch @ 026efa20 */
      lVar5 = *param_1;
                    /* catch() { ... } // from try @ 026ef8dc with catch @ 026efa24 */
                    /* catch() { ... } // from try @ 026ef8cc with catch @ 026efa28 */
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 026ef9f8 with catch @ 026efa2c */
      if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 026ef724 with catch @ 026efa30 */
                    /* catch() { ... } // from try @ 026ef70c with catch @ 026efa34 */
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 026ef7f4 with catch @ 026efa38 */
                    /* catch() { ... } // from try @ 026ef9f4 with catch @ 026efa3c */
                    /* catch() { ... } // from try @ 026ef5a0 with catch @ 026efa40 */
          if (*(long *)(piVar7 + -2) == lVar4) {
                    /* catch() { ... } // from try @ 026ef788 with catch @ 026efa60 */
                    /* catch() { ... } // from try @ 026ef6c4 with catch @ 026efa64 */
                    /* catch() { ... } // from try @ 026ef61c with catch @ 026efa68 */
            lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_026efa6c;
          }
                    /* catch() { ... } // from try @ 026ef9f0 with catch @ 026efa44 */
          uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 026ef9ec with catch @ 026efa48 */
          piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 026ef9e4 with catch @ 026efa4c */
        } while (uVar6 != 0);
      }
                    /* catch() { ... } // from try @ 026ef7c0 with catch @ 026efa50 */
                    /* catch() { ... } // from try @ 026ef9e0 with catch @ 026efa54 */
                    /* catch() { ... } // from try @ 026ef9dc with catch @ 026efa58 */
      lVar4 = FUN_02229a4c(param_1,lVar4,0);
                    /* catch() { ... } // from try @ 026ef814 with catch @ 026efa5c
                       catch() { ... } // from try @ 026ef984 with catch @ 026efa5c */
LAB_026efa6c:
                    /* catch() { ... } // from try @ 026ef560 with catch @ 026efa6c */
                    /* catch() { ... } // from try @ 026ef684 with catch @ 026efa70
                       catch() { ... } // from try @ 026ef74c with catch @ 026efa70 */
      piStack_70 = &iStack_5c;
                    /* catch() { ... } // from try @ 026ef638 with catch @ 026efa74
                       catch() { ... } // from try @ 026ef9d8 with catch @ 026efa74 */
                    /* catch() { ... } // from try @ 026ef3fc with catch @ 026efa78
                       catch() { ... } // from try @ 026ef514 with catch @ 026efa78
                       catch() { ... } // from try @ 026ef9e8 with catch @ 026efa78 */
      lVar4 = *(long *)(lVar4 + 8);
                    /* catch() { ... } // from try @ 026ef5cc with catch @ 026efa7c */
      puStack_68 = puVar9;
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,param_1,&piStack_70,puVar9);
                    /* try { // try from 026efa98 to 027efaaf has its CatchHandler @ 026efb30 */
      func_0x04608620(param_3,puVar9,uVar8);
      if (*(long *)(lVar1 + 0x28) == lStack_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026efacc to 027efacf has its CatchHandler @ 026efb20 */
      __stack_chk_fail();
    }
  }
  (*(code *)PTR_memset_04a701c8)(puVar9,0,uVar8);
  return;
}

