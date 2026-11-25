/* IL2CPP: Extensions$$GetRandom<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Extensions__GetRandom___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* collection, const MethodInfo_25EFBC4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Possible PIC construction at 0x026efd04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x026efd08) */
/* WARNING: Removing unreachable block (ram,0x026efd18) */
/* IL2CPP: Extensions$$GetRandom<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Extensions__GetRandom___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o*
   collection, const MethodInfo_25EFBC4* method); */

void Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
               (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puStack_60;
  long lStack_58;
  undefined4 uStack_4c;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_3 + 0x38);
  if (lVar5 == 0) {
    FUN_02229774(param_3);
    lVar5 = *(long *)(param_3 + 0x38);
  }
                    /* try { // try from 026efc08 to 027efc17 has its CatchHandler @ 026efc18 */
  uVar9 = (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0xfc);
                    /* catch() { ... } // from try @ 026efba0 with catch @ 026efc18
                       catch() { ... } // from try @ 026efc08 with catch @ 026efc18 */
                    /* try { // try from 026efc1c to 027efc1f has its CatchHandler @ 026efc28 */
  lVar10 = (long)&puStack_60 - (uVar9 + 0xf & 0x1fffffff0);
                    /* try { // try from 026efc20 to 027efc2b has its CatchHandler @ 026ef124 */
  if (param_1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 026efb38 with catch @ 026efc28
                       catch() { ... } // from try @ 026efb6c with catch @ 026efc28
                       catch() { ... } // from try @ 026efc1c with catch @ 026efc28 */
    lVar5 = *(long *)(lVar5 + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 026efc38 to 027efd3b has its CatchHandler @ 026efc38
                       catch() { ... } // from try @ 026efc38 with catch @ 026efc38
                       catch() { ... } // from try @ 026f0184 with catch @ 026efc38
                       catch() { ... } // from try @ 026f0214 with catch @ 026efc38
                       catch() { ... } // from try @ 026f0304 with catch @ 026efc38
                       catch() { ... } // from try @ 026f034c with catch @ 026efc38
                       catch() { ... } // from try @ 026f0384 with catch @ 026efc38
                       catch() { ... } // from try @ 026f03bc with catch @ 026efc38
                       catch() { ... } // from try @ 026f0424 with catch @ 026efc38 */
      lVar5 = FUN_02229718(lVar5);
    }
    lVar6 = *param_1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026efc8c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar5,0);
LAB_026efc8c:
    iVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (iVar2 != 0) {
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718(lVar5);
      }
      lVar6 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
                    /* try { // try from 026efd3c to 027efd63 has its CatchHandler @ 026f026c */
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_026efd48;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar5,0);
LAB_026efd48:
      uVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
      uStack_4c = UnityEngine_Random__Range_3c11c94(0,uVar3,0);
      lVar5 = **(long **)(param_3 + 0x38);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718(lVar5);
                    /* try { // try from 026efd84 to 027efd87 has its CatchHandler @ 026f0214 */
      }
                    /* try { // try from 026efd88 to 027efd8f has its CatchHandler @ 026f0224 */
      lVar6 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
                    /* try { // try from 026efd9c to 027efda3 has its CatchHandler @ 026f021c */
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
                    /* try { // try from 026efdcc to 027efdcf has its CatchHandler @ 026f0218 */
                    /* try { // try from 026efdd0 to 027efdd7 has its CatchHandler @ 026f0234 */
            lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_026efdd4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = FUN_02229a4c(param_1,lVar5,0);
LAB_026efdd4:
      puStack_60 = &uStack_4c;
                    /* try { // try from 026efddc to 027efdeb has its CatchHandler @ 026f0230 */
      lVar5 = *(long *)(lVar5 + 8);
      lStack_58 = lVar10;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,param_1,&puStack_60,lVar10);
      func_0x04608620(param_2,lVar10,uVar9);
      if (*(long *)(lVar1 + 0x28) == lStack_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  (*(code *)PTR_memset_04a701c8)(lVar10,0,uVar9);
  return;
}

