/* IL2CPP: CellBase$$AddSizeElement
void CellBase__AddSizeElement (CellBase_o* __this, CellElementBase_o* element, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellBase$$AddSizeElement
   void CellBase__AddSizeElement (CellBase_o* __this, CellElementBase_o* element, const MethodInfo*
   method); */

void CellBase__AddSizeElement_2505964(long param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long alStack_90 [3];
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bd84 & 1) == 0) {
                    /* try { // try from 0260598c to 02705993 has its CatchHandler @ 02605c64 */
    FUN_021f03f8(PTR_DAT_049c8d70);
    FUN_021f03f8(PTR_DAT_049c8d78);
    FUN_021f03f8(PTR_DAT_049c8da0);
                    /* try { // try from 026059ac to 027059f7 has its CatchHandler @ 02605c68 */
    FUN_021f03f8(PTR_DAT_049c8dc8);
    FUN_021f03f8(PTR_DAT_049c8e00);
    FUN_021f03f8(PTR_DAT_049c8de0);
    bRam0000000004f4bd84 = 1;
  }
  puVar4 = PTR_DAT_049c8de0;
  if (*(long *)(param_1 + 0xa0) != 0) {
                    /* try { // try from 026059f8 to 02705a07 has its CatchHandler @ 02605848 */
    FUN_02333498(*(long *)(param_1 + 0xa0),param_2,*(undefined8 *)PTR_DAT_049c8da0);
    lVar5 = *(long *)puVar4;
    lVar10 = *(long *)(param_1 + 0xa0);
                    /* try { // try from 02605a08 to 02705a23 has its CatchHandler @ 02605c6c */
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar4;
    }
    puVar7 = *(undefined8 **)(lVar5 + 0xb8);
    lVar11 = puVar7[2];
    if (lVar11 == 0) {
                    /* try { // try from 02605a24 to 02705a4b has its CatchHandler @ 02605c70 */
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar13 = *puVar7;
      lVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c8d70);
                    /* try { // try from 02605a4c to 02705c57 has its CatchHandler @ 02605848 */
      System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                (lVar11,uVar13,*(undefined8 *)PTR_DAT_049c8e00,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar6 = lVar11;
      thunk_FUN_021f190c(plVar6,lVar11);
    }
    if ((lVar10 != 0) &&
       (System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                  (lVar10,lVar11,*(undefined8 *)PTR_DAT_049c8dc8), param_2 != (undefined8 ****)0x0))
    {
      lVar5 = *(long *)(param_1 + 0xe0);
      pppuStack_70 = (undefined8 ***)System_Object__GetType_3142aac(param_2,0);
      if (lVar5 != 0) {
        alStack_90[2] = tpidr_el0;
        lStack_68 = *(long *)(alStack_90[2] + 0x28);
        alStack_90[0] = *(long *)(*(long *)(*(long *)PTR_DAT_049c8d78 + 0x20) + 0xc0);
        lVar10 = *(long *)(alStack_90[0] + 0x78);
        uVar14 = (ulong)*(uint *)(*(long *)(alStack_90[0] + 0x70) + 0xfc);
        uVar9 = (ulong)*(uint *)(lVar10 + 0xfc);
        uVar8 = uVar14 + 0xf & 0x1fffffff0;
        plVar15 = (long *)((long)alStack_90 - uVar8);
        lVar11 = (long)plVar15 - uVar8;
        uVar8 = uVar9 + 0xf & 0x1fffffff0;
        plVar6 = (long *)(lVar11 - uVar8);
        lVar12 = (long)plVar6 - uVar8;
        iVar2 = *(int *)(*(long *)(alStack_90[0] + 0x70) + 0x28);
        ppppuVar1 = (undefined8 ****)pppuStack_70;
        if (-1 < iVar2) {
          ppppuVar1 = &pppuStack_70;
        }
        alStack_90[1] = lVar5;
        pppuStack_78 = param_2;
        func_0x04608620(plVar15,ppppuVar1,uVar14);
        iVar3 = *(int *)(lVar10 + 0x28);
        if (-1 < iVar3) {
          param_2 = &pppuStack_78;
        }
        func_0x04608620(plVar6,param_2,uVar9);
        if (iVar2 < 0) {
          func_0x04608620(lVar11,ppppuVar1,uVar14);
        }
        else {
          lVar11 = *plVar15;
        }
        if (iVar3 < 0) {
          func_0x04608620(lVar12,param_2,uVar9);
        }
        else {
          lVar12 = *plVar6;
        }
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryInsert_282d6e4
                  (alStack_90[1],lVar11,lVar12,2,*(undefined8 *)(alStack_90[0] + 0x118));
        if (*(long *)(alStack_90[2] + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

