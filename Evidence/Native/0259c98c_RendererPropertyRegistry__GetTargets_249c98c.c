/* IL2CPP: RendererPropertyRegistry$$GetTargets
System_Collections_Generic_List_RendererPropertyRegistry_ShaderPropertyTarget__o* RendererPropertyRegistry__GetTargets (RendererPropertyRegistry_o* __this, System_String_o* propertyKey, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RendererPropertyRegistry$$GetTargets
   System_Collections_Generic_List_RendererPropertyRegistry_ShaderPropertyTarget__o*
   RendererPropertyRegistry__GetTargets (RendererPropertyRegistry_o* __this, System_String_o*
   propertyKey, const MethodInfo* method); */

undefined8 RendererPropertyRegistry__GetTargets_249c98c(long param_1,undefined8 param_2)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000004f4bac1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c63b8);
    FUN_021f03f8(PTR_DAT_049c63c0);
    FUN_021f03f8(PTR_DAT_049c63c8);
    FUN_021f03f8(PTR_DAT_049c63d0);
    FUN_021f03f8(PTR_DAT_049c63d8);
    FUN_021f03f8(PTR_DAT_049c63e0);
    bRam0000000004f4bac1 = 1;
  }
  lVar12 = *(long *)(param_1 + 0x30);
  uStack_60 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (lVar12 != 0) {
    lVar11 = *(long *)PTR_DAT_049c63d8;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    uVar9 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar12 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
      }
    }
    puVar6 = PTR_DAT_049c63d0;
    puVar5 = PTR_DAT_049c63c8;
    puVar4 = PTR_DAT_049c63c0;
    puVar3 = PTR_DAT_049c63b8;
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_1 + 0x28),&uStack_c0,*(undefined8 *)PTR_DAT_049c63e0);
      uStack_60 = uStack_a0;
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      while( true ) {
        do {
          uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_80,*(undefined8 *)puVar4);
          if ((uVar9 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_80,*(undefined8 *)puVar3);
            return *(undefined8 *)(param_1 + 0x30);
          }
          lVar13 = *(long *)puVar5;
          lVar11 = *(long *)(lVar13 + 0x20);
          uVar2 = *(ushort *)(lVar11 + 0x135);
          lVar12 = lVar11;
          if ((uVar2 & 1) == 0) {
            lVar12 = FUN_02229718();
            lVar11 = *(long *)(lVar13 + 0x20);
            uVar2 = *(ushort *)(lVar11 + 0x135);
          }
          uVar8 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar11 = FUN_02229718();
          }
          uVar10 = thunk_FUN_0224e54c(&uStack_80,
                                      *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&uStack_c0,uVar10,uVar8);
          uVar7 = uStack_b0;
          uVar10 = uStack_b8;
          uVar9 = System_String__Equals_2f7b554(uStack_c0,param_2,4,0);
        } while ((uVar9 & 1) == 0);
        uVar8 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar10,0);
        uStack_88 = *(undefined8 *)(param_1 + 0x20);
        lVar12 = *(long *)(param_1 + 0x30);
        uStack_90 = CONCAT44((int)uVar7,uVar8);
        thunk_FUN_021f190c((ulong)&uStack_90 | 8);
        if (lVar12 == 0) break;
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        FUN_02333498(lVar12,&uStack_c0,*(undefined8 *)puVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

