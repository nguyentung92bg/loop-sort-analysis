/* IL2CPP: MetalBlockSystem$$Dispose
void MetalBlockSystem__Dispose (MetalBlockSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$Dispose
   void MetalBlockSystem__Dispose (MetalBlockSystem_o* __this, const MethodInfo* method); */

void MetalBlockSystem__Dispose_23ec870(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long alStack_58 [2];
  
  SystemBase__Dispose_2555efc(param_1,0);
  if ((bRam0000000004f4b634 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1ed0);
    FUN_021f03f8(PTR_DAT_049c1ed8);
    FUN_021f03f8(PTR_DAT_049c1ee0);
    FUN_021f03f8(PTR_DAT_049c1ee8);
    FUN_021f03f8(PTR_DAT_049c1ef0);
    FUN_021f03f8(PTR_DAT_049c1ef8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b634 = 1;
  }
  puVar9 = PTR_DAT_049c1ef0;
  puVar8 = PTR_DAT_049c1ee8;
  puVar7 = PTR_DAT_049c1ee0;
  puVar6 = PTR_DAT_049c1ed8;
  puVar5 = PTR_DAT_049c1ed0;
  puVar4 = PTR_DAT_049b3b98;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x88) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x88),&uStack_88,*(undefined8 *)PTR_DAT_049c1ef8);
    uStack_60 = uStack_78;
    puStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_70,*(undefined8 *)puVar7), (uVar10 & 1) != 0) {
      lVar14 = *(long *)puVar8;
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar3 = *(ushort *)(lVar11 + 0x135);
      lVar12 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_02229718();
        lVar11 = *(long *)(lVar14 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_70,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(alStack_58,uVar13,uVar1);
      lVar12 = alStack_58[0];
      if (alStack_58[0] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar13 = *(undefined8 *)(alStack_58[0] + 0x10);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(uVar13,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar13 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar12 + 0x10),0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Object__Destroy_3c24380(uVar13,0);
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_70,*(undefined8 *)puVar6);
    lVar12 = *(long *)(param_1 + 0x88);
    if (lVar12 != 0) {
      lVar11 = *(long *)puVar9;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      uVar10 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(lVar12 + 0x18) = 0;
      }
      else {
        iVar2 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        if (0 < iVar2) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
        }
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                  (*(long *)(param_1 + 0x80),*(undefined8 *)puVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

