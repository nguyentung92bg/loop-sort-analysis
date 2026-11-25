/* IL2CPP: Extensions$$Swap<__Il2CppFullySharedGenericType>
void Extensions__Swap___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, int32_t i, int32_t j, const MethodInfo_25F11BC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$Swap<__Il2CppFullySharedGenericType>
   void Extensions__Swap___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o*
   list, int32_t i, int32_t j, const MethodInfo_25F11BC* method); */

void Extensions__Swap___Il2CppFullySharedGenericType__25f11bc
               (long *param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lStack_a0;
  undefined4 uStack_94;
  long *plStack_90;
  long lStack_88;
  undefined4 *puStack_80;
  long *plStack_78;
  undefined4 uStack_6c;
  long lStack_68;
  
  lStack_88 = tpidr_el0;
  lStack_68 = *(long *)(lStack_88 + 0x28);
  plVar12 = *(long **)(param_4 + 0x38);
  uStack_94 = param_3;
  if (plVar12 == (long *)0x0) {
                    /* try { // try from 026f1208 to 027f120f has its CatchHandler @ 026f19b4 */
    FUN_02229774(param_4);
    plVar12 = *(long **)(param_4 + 0x38);
  }
  uVar9 = (ulong)*(uint *)(plVar12[2] + 0xfc);
  uVar10 = uVar9 + 0xf & 0x1fffffff0;
  lVar3 = (long)&lStack_a0 - uVar10;
  lVar8 = lVar3 - uVar10;
  plVar4 = (long *)(lVar8 - uVar10);
  plStack_90 = (long *)((long)plVar4 - uVar10);
  lVar13 = (long)plStack_90 - uVar10;
                    /* try { // try from 026f126c to 027f1273 has its CatchHandler @ 026f17c0 */
  func_0x04608670(lVar13,0,uVar9);
  lVar11 = lVar13 - uVar10;
  func_0x04608670(lVar11,0,uVar9);
                    /* try { // try from 026f1294 to 027f129b has its CatchHandler @ 026f17b0 */
  if (param_1 == (long *)0x0) {
    if (*(long *)(lStack_88 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    lVar2 = *plVar12;
                    /* try { // try from 026f12a4 to 027f12af has its CatchHandler @ 026f17bc */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718(lVar2);
                    /* try { // try from 026f12b0 to 027f12b7 has its CatchHandler @ 026f17ac */
    }
    uVar1 = uStack_94;
    lVar5 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 026f12c8 to 027f12f7 has its CatchHandler @ 026f1798 */
    uStack_6c = uStack_94;
    if (uVar10 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          lVar2 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_026f130c;
        }
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar10 != 0);
    }
    lVar2 = FUN_02229a4c(param_1,lVar2,0);
LAB_026f130c:
    puStack_80 = &uStack_6c;
    lVar2 = *(long *)(lVar2 + 8);
    plStack_78 = (long *)lVar3;
                    /* try { // try from 026f132c to 027f1333 has its CatchHandler @ 026f17a8 */
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,param_1,&puStack_80,lVar3);
    func_0x04608620(lVar13,lVar3,uVar9);
    lVar3 = **(long **)(param_4 + 0x38);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 026f1354 to 027f135b has its CatchHandler @ 026f17a0 */
      lVar3 = FUN_02229718(lVar3);
    }
    plVar12 = plStack_90;
    lVar2 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
    uStack_6c = param_2;
    if (uVar10 != 0) {
                    /* try { // try from 026f1378 to 027f1383 has its CatchHandler @ 026f179c */
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          lVar3 = lVar2 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_026f13b0;
        }
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar10 != 0);
    }
    lVar3 = FUN_02229a4c(param_1,lVar3,0);
LAB_026f13b0:
    puStack_80 = &uStack_6c;
    lVar3 = *(long *)(lVar3 + 8);
    plStack_78 = (long *)lVar8;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,param_1,&puStack_80,lVar8);
                    /* try { // try from 026f13dc to 027f13df has its CatchHandler @ 026f1788 */
    func_0x04608620(lVar11,lVar8,uVar9);
                    /* try { // try from 026f13ec to 027f140f has its CatchHandler @ 026f17b4 */
    func_0x04608620(plVar4,lVar13,uVar9);
    plVar6 = *(long **)(param_4 + 0x38);
    lVar8 = *plVar6;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718(lVar8);
      plVar6 = *(long **)(param_4 + 0x38);
    }
    if (-1 < *(int *)(plVar6[2] + 0x28)) {
      plVar4 = (long *)*plVar4;
    }
                    /* try { // try from 026f1428 to 027f142f has its CatchHandler @ 026f1794 */
    lVar3 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar10 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 026f1444 to 027f1447 has its CatchHandler @ 026f178c */
        if (*(long *)(piVar7 + -2) == lVar8) {
                    /* try { // try from 026f1468 to 027f150f has its CatchHandler @ 026f17b8 */
          lVar8 = lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138;
          uStack_6c = param_2;
          goto LAB_026f1478;
        }
                    /* try { // try from 026f144c to 027f1457 has its CatchHandler @ 026f1790 */
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar10 != 0);
    }
    uStack_6c = param_2;
    lVar8 = FUN_02229a4c(param_1,lVar8,1);
LAB_026f1478:
    puStack_80 = &uStack_6c;
    lVar8 = *(long *)(lVar8 + 8);
    plStack_78 = plVar4;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,param_1,&puStack_80,plVar4);
    func_0x04608620(plVar12,lVar11,uVar9);
    plVar4 = *(long **)(param_4 + 0x38);
    lVar8 = *plVar4;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718(lVar8);
      plVar4 = *(long **)(param_4 + 0x38);
    }
    if (-1 < *(int *)(plVar4[2] + 0x28)) {
      plVar12 = (long *)*plVar12;
    }
    lVar3 = *param_1;
    uStack_6c = uVar1;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar8) {
          lVar8 = lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138;
          goto LAB_026f1530;
        }
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar9 != 0);
    }
    lVar8 = FUN_02229a4c(param_1,lVar8,1);
                    /* try { // try from 026f151c to 027f159b has its CatchHandler @ 026f17ec */
LAB_026f1530:
    puStack_80 = &uStack_6c;
    lVar8 = *(long *)(lVar8 + 8);
    plStack_78 = plVar12;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,param_1,&puStack_80,plVar12);
    if (*(long *)(lStack_88 + 0x28) == lStack_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

