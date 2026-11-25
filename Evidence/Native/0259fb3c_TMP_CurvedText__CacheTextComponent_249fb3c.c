/* IL2CPP: TMP_CurvedText$$CacheTextComponent
void TMP_CurvedText__CacheTextComponent (TMP_CurvedText_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TMP_CurvedText$$CacheTextComponent
   void TMP_CurvedText__CacheTextComponent (TMP_CurvedText_o* __this, const MethodInfo* method); */

ulong TMP_CurvedText__CacheTextComponent_249fb3c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bae4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6528);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bae4 = 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x28);
  uVar7 = *puVar6;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  lVar5 = *(long *)PTR_DAT_049c6528;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02229774(lVar5);
  }
  lStack_78 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
  lStack_70 = tpidr_el0;
  lStack_68 = *(long *)(lStack_70 + 0x28);
  plVar14 = *(long **)(lVar5 + 0x38);
  if (plVar14 == (long *)0x0) {
    FUN_02229774(lVar5);
    plVar14 = *(long **)(lVar5 + 0x38);
  }
  uVar8 = (ulong)*(uint *)(plVar14[3] + 0xfc);
  uVar10 = (ulong)*(uint *)(*plVar14 + 0xfc);
  uVar3 = uVar8 + 0xf & 0x1fffffff0;
  puVar11 = auStack_80 + -uVar3;
  lVar9 = (long)puVar11 - uVar3;
  uVar3 = uVar10 + 0xf & 0x1fffffff0;
  lVar16 = lVar9 - uVar3;
  lVar12 = lVar16 - uVar3;
  lVar13 = lVar12 - uVar3;
  func_0x04608670(lVar13,0,uVar10);
  func_0x04608670(lVar13,0,uVar10);
  lVar15 = plVar14[1];
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = System_Type__GetTypeFromHandle_310ebfc(lVar15,0);
  uVar4 = thunk_FUN_0224e54c(lVar13,*(long *)(**(long **)(lVar5 + 0x38) + 0x80) + 0x20);
  UnityEngine_GameObject__TryGetComponentFastPath_3c1ba20(lStack_78,uVar7,uVar4,0);
  func_0x04608620(lVar16,lVar13,uVar10);
  uVar7 = thunk_FUN_0224e54c(lVar16,*(undefined8 *)(**(long **)(lVar5 + 0x38) + 0x80));
  func_0x04608620(puVar11,uVar7,uVar8);
  func_0x04608650(puVar6,uVar7,uVar8);
  lVar15 = *(long *)(*(long *)(lVar5 + 0x38) + 0x18);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_02229718();
  }
  FUN_021f03a8(lVar15,puVar6,puVar11);
  func_0x04608620(lVar12,lVar13,uVar10);
  uVar7 = thunk_FUN_0224e54c(lVar12,*(undefined8 *)(**(long **)(lVar5 + 0x38) + 0x80));
  func_0x04608620(lVar9,uVar7,uVar8);
  uVar2 = FUN_021f0650(*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18),lVar9);
  if (*(long *)(lStack_70 + 0x28) == lStack_68) {
    return (ulong)(uVar2 & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

