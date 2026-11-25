/* IL2CPP: AreasMonitor.<>c__DisplayClass50_0$$<CreateElement>b__0
void AreasMonitor___c__DisplayClass50_0___CreateElement_b__0 (AreasMonitor___c__DisplayClass50_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor.<>c__DisplayClass50_0$$<CreateElement>b__0
   void AreasMonitor___c__DisplayClass50_0___CreateElement_b__0
   (AreasMonitor___c__DisplayClass50_0_o* __this, const MethodInfo* method); */

void AreasMonitor___c__DisplayClass50_0___CreateElement_b__0_2437ea8(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((*(long *)(lVar10 + 0x98) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar10 + 0x98) + 0x50), lVar9 != 0)) {
    AreaSheet__PickHomeArea_2558044(lVar9,*(undefined8 *)(param_1 + 0x18),0);
    if (*(long *)(lVar10 + 0xb0) != 0) {
      HomeMonitor__UpdateArea_2447670(*(long *)(lVar10 + 0xb0),0);
      if (*(long *)(lVar10 + 0xb0) != 0) {
        HomeMonitor__UpdateLiveOpsIcons_2447a3c(*(long *)(lVar10 + 0xb0),0);
        if ((bRam0000000004f4b7fd & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c3a90);
          FUN_021f03f8(PTR_DAT_049c3a98);
          FUN_021f03f8(PTR_DAT_049c3aa0);
          FUN_021f03f8(PTR_DAT_049c3aa8);
          FUN_021f03f8(PTR_DAT_049c3ab0);
          bRam0000000004f4b7fd = 1;
        }
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        if ((*(long *)(lVar10 + 0xc0) != 0) &&
           (lVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Keys_282b148
                              (*(long *)(lVar10 + 0xc0),*(undefined8 *)PTR_DAT_049c3a90),
           puVar5 = PTR_DAT_049c3aa8, puVar4 = PTR_DAT_049c3aa0, puVar3 = PTR_DAT_049c3a98,
           lVar9 != 0)) {
          System_Collections_Generic_Dictionary_KeyCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_28bbde4
                    (lVar9,&uStack_78,*(undefined8 *)PTR_DAT_049c3ab0);
          uStack_50 = uStack_68;
          uStack_58 = puStack_70;
          uStack_60 = uStack_78;
          uStack_78 = 0;
          puStack_70 = &uStack_60;
          while( true ) {
            uVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_28511fc
                              (&uStack_60,*(undefined8 *)puVar4);
            if ((uVar6 & 1) == 0) {
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_28511f8
                        (&uStack_60,*(undefined8 *)puVar3);
              return;
            }
            lVar11 = *(long *)puVar5;
            lVar7 = *(long *)(lVar11 + 0x20);
            uVar2 = *(ushort *)(lVar7 + 0x135);
            lVar9 = lVar7;
            if ((uVar2 & 1) == 0) {
              lVar9 = FUN_02229718();
              lVar7 = *(long *)(lVar11 + 0x20);
              uVar2 = *(ushort *)(lVar7 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar7 = FUN_02229718();
            }
            uVar8 = thunk_FUN_0224e54c(&uStack_60,
                                       *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) +
                                       0x60);
            func_0x04608620(&lStack_38,uVar8,uVar1);
            lVar9 = lStack_38;
            if (lStack_38 == 0) break;
            lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lStack_38,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uVar6 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar7,0);
            if ((uVar6 & 1) != 0) {
              AreasMonitor__RenderElement_243650c(lVar10,lVar9,0);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

