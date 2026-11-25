/* IL2CPP: SandFlowSystem$$RestoreJelly
void SandFlowSystem__RestoreJelly (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$RestoreJelly
   void SandFlowSystem__RestoreJelly (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__RestoreJelly_24d06c8(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bc01 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7180);
    FUN_021f03f8(PTR_DAT_049c7418);
    FUN_021f03f8(PTR_DAT_049c7190);
    FUN_021f03f8(PTR_DAT_049c7328);
    FUN_021f03f8(PTR_DAT_049c7330);
    FUN_021f03f8(PTR_DAT_049c7338);
    FUN_021f03f8(PTR_DAT_049c7340);
    FUN_021f03f8(PTR_DAT_049c2870);
    FUN_021f03f8(PTR_DAT_049c7348);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc01 = 1;
  }
  puVar11 = PTR_DAT_049c7418;
  puVar10 = PTR_DAT_049c7348;
  puVar9 = PTR_DAT_049c7340;
  puVar8 = PTR_DAT_049c7338;
  puVar7 = PTR_DAT_049c7330;
  puVar6 = PTR_DAT_049c7328;
  puVar5 = PTR_DAT_049c7190;
  puVar4 = PTR_DAT_049c2870;
  puVar3 = PTR_DAT_049b3b98;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x150) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
              (*(long *)(param_1 + 0x150),&uStack_98,*(undefined8 *)PTR_DAT_049c7348);
    uStack_70 = uStack_88;
    puStack_78 = puStack_90;
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while (uVar12 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                              (&uStack_80,*(undefined8 *)puVar7), (uVar12 & 1) != 0) {
      lVar16 = *(long *)puVar8;
      lVar13 = *(long *)(lVar16 + 0x20);
      uVar2 = *(ushort *)(lVar13 + 0x135);
      lVar14 = lVar13;
      if ((uVar2 & 1) == 0) {
        lVar14 = FUN_02229718();
        lVar13 = *(long *)(lVar16 + 0x20);
        uVar2 = *(ushort *)(lVar13 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar13 = FUN_02229718();
      }
      uVar15 = thunk_FUN_0224e54c(&uStack_80,
                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_68,uVar15,uVar1);
      lVar14 = lStack_68;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = UnityEngine_Object__op_Inequality_3c1b96c(lVar14,0,0);
      if ((uVar12 & 1) != 0) {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc(lVar14,0,0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
              (&uStack_80,*(undefined8 *)puVar6);
    if (*(long *)(param_1 + 0x158) != 0) {
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
                (*(long *)(param_1 + 0x158),&uStack_98,*(undefined8 *)puVar10);
      uStack_70 = uStack_88;
      puStack_78 = puStack_90;
      uStack_80 = uStack_98;
      uStack_98 = 0;
      puStack_90 = &uStack_80;
      while (uVar12 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                                (&uStack_80,*(undefined8 *)puVar7), (uVar12 & 1) != 0) {
        lVar16 = *(long *)puVar8;
        lVar13 = *(long *)(lVar16 + 0x20);
        uVar2 = *(ushort *)(lVar13 + 0x135);
        lVar14 = lVar13;
        if ((uVar2 & 1) == 0) {
          lVar14 = FUN_02229718();
          lVar13 = *(long *)(lVar16 + 0x20);
          uVar2 = *(ushort *)(lVar13 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar13 = FUN_02229718();
        }
        uVar15 = thunk_FUN_0224e54c(&uStack_80,
                                    *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_68,uVar15,uVar1);
        lVar14 = lStack_68;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar12 = UnityEngine_Object__op_Inequality_3c1b96c(lVar14,0,0);
        if ((uVar12 & 1) != 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc(lVar14,0,0);
        }
      }
      System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
                (&uStack_80,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 0x150) != 0) {
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                  (*(long *)(param_1 + 0x150),*(undefined8 *)puVar9);
        if (*(long *)(param_1 + 0x158) != 0) {
          System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                    (*(long *)(param_1 + 0x158),*(undefined8 *)puVar9);
          if (*(long *)(param_1 + 0x1d8) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                      (*(long *)(param_1 + 0x1d8),*(undefined8 *)puVar5);
            if (*(long *)(param_1 + 0x220) != 0) {
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                        (*(long *)(param_1 + 0x220),*(undefined8 *)puVar11);
              if (*(long *)(param_1 + 0x228) != 0) {
                System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                          (*(long *)(param_1 + 0x228),*(undefined8 *)puVar4);
                if (*(long *)(param_1 + 0x238) != 0) {
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                            (*(long *)(param_1 + 0x238),*(undefined8 *)PTR_DAT_049c7180);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

