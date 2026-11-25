/* IL2CPP: StreakTowerSubMonitor$$UpdateStages
void StreakTowerSubMonitor__UpdateStages (StreakTowerSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSubMonitor$$UpdateStages
   void StreakTowerSubMonitor__UpdateStages (StreakTowerSubMonitor_o* __this, const MethodInfo*
   method); */

void StreakTowerSubMonitor__UpdateStages_2487a18(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4ba38 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5c48);
    FUN_021f03f8(PTR_DAT_049c5c50);
    FUN_021f03f8(PTR_DAT_049c5c58);
    FUN_021f03f8(PTR_DAT_049c5c60);
    FUN_021f03f8(PTR_DAT_049c5c68);
    bRam0000000004f4ba38 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x47f3df6b,0)
  ;
  if ((lVar6 != 0) && (lVar6 = UnityEngine_GameObject__get_transform_3c1ca74(lVar6,0), lVar6 != 0))
  {
    UnityEngine_Transform__SetAsLastSibling_3c2f0a4(lVar6,0);
    if ((*(long *)(param_1 + 0x98) != 0) &&
       (lVar7 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_282b2a4
                          (*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_049c5c48),
       puVar5 = PTR_DAT_049c5c60, puVar4 = PTR_DAT_049c5c58, puVar3 = PTR_DAT_049c5c50, lVar7 != 0))
    {
      System_Collections_Generic_Dictionary_ValueCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_29facc8
                (lVar7,&uStack_68,*(undefined8 *)PTR_DAT_049c5c68);
      uStack_40 = uStack_58;
      uStack_48 = puStack_60;
      uStack_50 = uStack_68;
      uStack_68 = 0;
      puStack_60 = &uStack_50;
      while( true ) {
        uVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_2851a64
                          (&uStack_50,*(undefined8 *)puVar4);
        if ((uVar8 & 1) == 0) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_2851a60
                    (&uStack_50,*(undefined8 *)puVar3);
          return;
        }
        lVar11 = *(long *)puVar5;
        lVar9 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
        lVar7 = lVar9;
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_02229718();
          lVar9 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&uStack_50,
                                    *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&uStack_38,uVar10,uVar1);
        lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                          (uStack_38,0x97f78800,0);
        if (lVar7 == 0) break;
        lVar7 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar7,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Transform__SetParent_3c2e01c(lVar7,lVar6,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

