/* IL2CPP: ShuffleBoosterSystem$$HideGroupMeshBlocks
void ShuffleBoosterSystem__HideGroupMeshBlocks (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBoosterSystem$$HideGroupMeshBlocks
   void ShuffleBoosterSystem__HideGroupMeshBlocks (ShuffleBoosterSystem_o* __this, Carrier_o*
   carrier, const MethodInfo* method); */

void ShuffleBoosterSystem__HideGroupMeshBlocks_23ff4ac(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  if ((bRam0000000004f4b68f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b68f = 1;
  }
  puVar6 = PTR_DAT_049c14e8;
  puVar5 = PTR_DAT_049c14e0;
  puVar4 = PTR_DAT_049c14d8;
  puVar3 = PTR_DAT_049b3b98;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x1e0) != 0)) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_2 + 0x1e0),&uStack_78,*(undefined8 *)PTR_DAT_049c14f0);
    uStack_50 = uStack_68;
    uStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while( true ) {
      uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_60,*(undefined8 *)puVar5);
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_60,*(undefined8 *)puVar4);
        return;
      }
      lVar11 = *(long *)puVar6;
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar9 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
        lVar8 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
      }
      uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                  *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_38,uVar10,uVar1);
      lVar9 = lStack_38;
      if (lStack_38 == 0) break;
      uVar10 = *(undefined8 *)(lStack_38 + 0x118);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(uVar10,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(lVar9 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Renderer__set_enabled_3bdcab0(*(long *)(lVar9 + 0x138),0,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

