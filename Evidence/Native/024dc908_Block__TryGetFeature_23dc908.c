/* IL2CPP: Block$$TryGetFeature
bool Block__TryGetFeature (Block_o* __this, int32_t feature, FeatureContainer_o* container, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$TryGetFeature
   bool Block__TryGetFeature (Block_o* __this, int32_t feature, FeatureContainer_o* container, const
   MethodInfo* method); */

uint Block__TryGetFeature_23dc908(long param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4b5be & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13b8);
    FUN_021f03f8(PTR_DAT_049c13c0);
    FUN_021f03f8(PTR_DAT_049c13c8);
    FUN_021f03f8(PTR_DAT_049c13d0);
    FUN_021f03f8(PTR_DAT_049c13d8);
    bRam0000000004f4b5be = 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x170) == 0) {
LAB_024dcab4:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iStack_50 = param_2;
  uVar6 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                    (*(long *)(param_1 + 0x170),&iStack_50,*(undefined8 *)PTR_DAT_049c13d0);
  if ((uVar6 & 1) == 0) {
    if (*(long *)(param_1 + 0xf0) == 0) goto LAB_024dcab4;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xf0),&uStack_70,*(undefined8 *)PTR_DAT_049c13d8);
    puVar4 = PTR_DAT_049c13c8;
    puVar3 = PTR_DAT_049c13c0;
    do {
      uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_70,*(undefined8 *)puVar3);
      if ((uVar5 & 1) == 0) goto LAB_024dca84;
      lVar10 = *(long *)puVar4;
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar8 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar7 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_70,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&iStack_50,uVar9,uVar1);
    } while (iStack_50 != param_2);
    param_3[1] = uStack_48;
    *param_3 = CONCAT44(uStack_4c,iStack_50);
    thunk_FUN_021f190c(param_3 + 1,0);
LAB_024dca84:
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_70,*(undefined8 *)PTR_DAT_049c13b8);
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 1;
}

