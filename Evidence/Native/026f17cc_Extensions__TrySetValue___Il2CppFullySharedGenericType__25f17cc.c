/* IL2CPP: Extensions$$TrySetValue<__Il2CppFullySharedGenericType>
bool Extensions__TrySetValue___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, int32_t index, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_25F17CC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$TrySetValue<__Il2CppFullySharedGenericType>
   bool Extensions__TrySetValue___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, int32_t index,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_25F17CC* method);
    */

void Extensions__TrySetValue___Il2CppFullySharedGenericType__25f17cc
               (long *param_1,int param_2,undefined8 ****param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lStack_90;
  undefined8 ***pppuStack_88;
  int *piStack_80;
  long lStack_78;
  int iStack_6c;
  long lStack_68;
  
                    /* catch() { ... } // from try @ 026f16c0 with catch @ 026f17cc */
                    /* catch() { ... } // from try @ 026f16b4 with catch @ 026f17d0 */
                    /* catch() { ... } // from try @ 026f166c with catch @ 026f17d4 */
                    /* catch() { ... } // from try @ 026f1654 with catch @ 026f17d8 */
                    /* catch() { ... } // from try @ 026f15c4 with catch @ 026f17dc */
                    /* catch() { ... } // from try @ 026f1764 with catch @ 026f17e0 */
                    /* catch() { ... } // from try @ 026f175c with catch @ 026f17e4 */
                    /* catch() { ... } // from try @ 026f1698 with catch @ 026f17e8 */
                    /* catch() { ... } // from try @ 026f151c with catch @ 026f17ec */
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 026f1808 to 027f181f has its CatchHandler @ 026f1998 */
  lVar5 = *(long *)(param_4 + 0x38);
  pppuStack_88 = param_3;
  if (lVar5 == 0) {
    FUN_02229774(param_4);
    lVar5 = *(long *)(param_4 + 0x38);
  }
  uVar10 = (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0xfc);
  plVar9 = (long *)((long)&lStack_90 - (uVar10 + 0xf & 0x1fffffff0));
                    /* try { // try from 026f183c to 027f183f has its CatchHandler @ 026f1994 */
  if (param_1 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
                    /* try { // try from 026f1840 to 027f1853 has its CatchHandler @ 026f1990 */
    lVar5 = *(long *)(lVar5 + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718(lVar5);
    }
    lVar6 = *param_1;
                    /* try { // try from 026f1860 to 027f187f has its CatchHandler @ 026f198c */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
                    /* try { // try from 026f18a4 to 027f18b3 has its CatchHandler @ 026f198c */
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_026f18ac;
        }
        uVar7 = uVar7 - 1;
                    /* try { // try from 026f1880 to 027f188f has its CatchHandler @ 026f0b08 */
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 026f1890 to 027f189f has its CatchHandler @ 026f1998 */
    puVar3 = (undefined8 *)FUN_02229a4c(param_1,lVar5,0);
LAB_026f18ac:
    iVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
                    /* try { // try from 026f18b8 to 027f18bb has its CatchHandler @ 026f1988 */
    uVar4 = 0;
                    /* try { // try from 026f18c4 to 027f18db has its CatchHandler @ 026f1984 */
    if ((-1 < param_2) && (param_2 < iVar2)) {
      plVar11 = *(long **)(param_4 + 0x38);
                    /* try { // try from 026f18dc to 027f18f7 has its CatchHandler @ 026f1980 */
      iVar2 = *(int *)(plVar11[3] + 0x28);
      if (-1 < iVar2) {
        param_3 = &pppuStack_88;
      }
      func_0x04608620(plVar9,param_3,uVar10);
      lVar5 = *plVar11;
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 026f1900 to 027f1917 has its CatchHandler @ 026f197c */
        lVar5 = FUN_02229718(lVar5);
        iVar2 = *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x18) + 0x28);
      }
                    /* try { // try from 026f1918 to 027f1933 has its CatchHandler @ 026f1978 */
      if (-1 < iVar2) {
        plVar9 = (long *)*plVar9;
      }
      lVar6 = *param_1;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      iStack_6c = param_2;
      if (uVar10 != 0) {
                    /* try { // try from 026f1934 to 027f1973 has its CatchHandler @ 026f1974 */
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar5 = lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138;
            goto LAB_026f1970;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      lVar5 = FUN_02229a4c(param_1,lVar5,1);
LAB_026f1970:
                    /* catch() { ... } // from try @ 026f1934 with catch @ 026f1974 */
      piStack_80 = &iStack_6c;
                    /* catch() { ... } // from try @ 026f1918 with catch @ 026f1978 */
                    /* catch() { ... } // from try @ 026f1900 with catch @ 026f197c */
      lVar5 = *(long *)(lVar5 + 8);
                    /* catch() { ... } // from try @ 026f18dc with catch @ 026f1980 */
                    /* catch() { ... } // from try @ 026f18c4 with catch @ 026f1984 */
                    /* catch() { ... } // from try @ 026f18b8 with catch @ 026f1988 */
                    /* catch() { ... } // from try @ 026f1860 with catch @ 026f198c
                       catch() { ... } // from try @ 026f18a4 with catch @ 026f198c */
      lStack_78 = (long)plVar9;
                    /* catch() { ... } // from try @ 026f1840 with catch @ 026f1990 */
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,param_1,&piStack_80,plVar9);
                    /* catch() { ... } // from try @ 026f183c with catch @ 026f1994 */
      uVar4 = 1;
    }
  }
                    /* catch() { ... } // from try @ 026f1808 with catch @ 026f1998
                       catch() { ... } // from try @ 026f1890 with catch @ 026f1998 */
                    /* try { // try from 026f19a0 to 027f19a3 has its CatchHandler @ 026f2220 */
                    /* try { // try from 026f19a4 to 027f19e3 has its CatchHandler @ 026f0b08 */
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
                    /* catch() { ... } // from try @ 026f1684 with catch @ 026f19a8
                       catch() { ... } // from try @ 026f1768 with catch @ 026f19a8 */
                    /* catch() { ... } // from try @ 026f15c0 with catch @ 026f19ac
                       catch() { ... } // from try @ 026f1760 with catch @ 026f19ac */
                    /* catch() { ... } // from try @ 026f10a8 with catch @ 026f19b0 */
                    /* catch() { ... } // from try @ 026f1208 with catch @ 026f19b4 */
                    /* catch() { ... } // from try @ 026f1168 with catch @ 026f19b8 */
                    /* catch() { ... } // from try @ 026f117c with catch @ 026f19bc */
                    /* catch() { ... } // from try @ 026f10dc with catch @ 026f19c0 */
                    /* catch() { ... } // from try @ 026f1100 with catch @ 026f19c4
                       catch() { ... } // from try @ 026f1164 with catch @ 026f19c4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

