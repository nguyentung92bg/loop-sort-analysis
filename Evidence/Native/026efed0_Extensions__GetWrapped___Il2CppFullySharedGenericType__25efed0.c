/* IL2CPP: Extensions$$GetWrapped<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Extensions__GetWrapped___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, int32_t index, const MethodInfo_25EFED0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Possible PIC construction at 0x026f001c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x026f0020) */
/* WARNING: Removing unreachable block (ram,0x026f0030) */
/* IL2CPP: Extensions$$GetWrapped<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Extensions__GetWrapped___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o*
   list, int32_t index, const MethodInfo_25EFED0* method); */

void Extensions__GetWrapped___Il2CppFullySharedGenericType__25efed0
               (long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int *piStack_70;
  long lStack_68;
  int iStack_5c;
  long lStack_58;
  
                    /* try { // try from 026efed0 to 027efedb has its CatchHandler @ 026f0248 */
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 026efefc to 027eff3b has its CatchHandler @ 026f028c */
  lVar5 = *(long *)(param_4 + 0x38);
  if (lVar5 == 0) {
    FUN_02229774(param_4);
    lVar5 = *(long *)(param_4 + 0x38);
  }
  uVar9 = (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0xfc);
  lVar10 = (long)&piStack_70 - (uVar9 + 0xf & 0x1fffffff0);
  if (param_1 != (long *)0x0) {
    lVar5 = *(long *)(lVar5 + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 026eff4c to 027eff57 has its CatchHandler @ 026f0264 */
      lVar5 = FUN_02229718(lVar5);
    }
    lVar6 = *param_1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* try { // try from 026eff68 to 027eff6b has its CatchHandler @ 026f025c */
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026effa0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 026eff88 to 027eff8b has its CatchHandler @ 026f0244 */
    puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar5,0);
                    /* try { // try from 026eff90 to 027eff9b has its CatchHandler @ 026f0258 */
LAB_026effa0:
    iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
                    /* try { // try from 026effb0 to 027f0043 has its CatchHandler @ 026f0278 */
    if ((-1 < param_2) && (iVar3 != 0)) {
      lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718(lVar5);
      }
      lVar6 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
                    /* try { // try from 026f0060 to 027f006b has its CatchHandler @ 026f0240 */
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_026f0064;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(param_1,lVar5,0);
LAB_026f0064:
      iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
                    /* try { // try from 026f0078 to 027f0087 has its CatchHandler @ 026f023c */
      lVar5 = **(long **)(param_4 + 0x38);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718(lVar5);
      }
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = param_2 / iVar3;
      }
      lVar6 = *param_1;
                    /* try { // try from 026f009c to 027f00a7 has its CatchHandler @ 026f0278 */
      iStack_5c = param_2 - iVar1 * iVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 026f00b8 to 027f013f has its CatchHandler @ 026f0284 */
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_026f00e8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = FUN_02229a4c(param_1,lVar5,0);
LAB_026f00e8:
      piStack_70 = &iStack_5c;
      lVar5 = *(long *)(lVar5 + 8);
      lStack_68 = lVar10;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,param_1,&piStack_70,lVar10);
      func_0x04608620(param_3,lVar10,uVar9);
      if (*(long *)(lVar2 + 0x28) == lStack_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  (*(code *)PTR_memset_04a701c8)(lVar10,0,uVar9);
  return;
}

