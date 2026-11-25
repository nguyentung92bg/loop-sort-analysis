/* IL2CPP: LavaQuestSubMonitor$$SetPlayerAvatars
void LavaQuestSubMonitor__SetPlayerAvatars (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0257a588) */
/* WARNING: Removing unreachable block (ram,0x0257a570) */
/* IL2CPP: LavaQuestSubMonitor$$SetPlayerAvatars
   void LavaQuestSubMonitor__SetPlayerAvatars (LavaQuestSubMonitor_o* __this, const MethodInfo*
   method); */

void LavaQuestSubMonitor__SetPlayerAvatars_247a1cc(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  long lStack_38;
  
  puVar3 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b9de & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54a8);
    FUN_021f03f8(PTR_DAT_049c56a0);
    FUN_021f03f8(PTR_DAT_049c5900);
    FUN_021f03f8(PTR_DAT_049c5908);
    FUN_021f03f8(PTR_DAT_049c5698);
    FUN_021f03f8(PTR_DAT_049c5910);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c5918);
    FUN_021f03f8(PTR_DAT_049c5920);
    FUN_021f03f8(PTR_DAT_049c5768);
    FUN_021f03f8(PTR_DAT_049c5780);
    FUN_021f03f8(PTR_DAT_049c4648);
    FUN_021f03f8(PTR_DAT_049c5928);
    FUN_021f03f8(PTR_DAT_049c5930);
    FUN_021f03f8(PTR_DAT_049c4660);
    FUN_021f03f8(PTR_DAT_049c5938);
    FUN_021f03f8(PTR_DAT_049c56b0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b9de = 1;
  }
  puVar4 = PTR_DAT_049b54a8;
  lVar5 = *(long *)puVar3;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  lVar9 = *(long *)(param_1 + 0x58);
  lStack_38 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  lStack_68 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  uStack_b8 = *(undefined8 *)(lVar5 + 0x1b8);
  uStack_c0 = *(undefined8 *)(lVar5 + 0x1b0);
  uStack_a8 = *(undefined8 *)(lVar5 + 0x1c8);
  uStack_b0 = *(undefined8 *)(lVar5 + 0x1c0);
  uStack_98 = *(undefined8 *)(lVar5 + 0x1d8);
  uStack_a0 = *(undefined8 *)(lVar5 + 0x1d0);
  uStack_90 = *(undefined8 *)(lVar5 + 0x1e0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
            (&uStack_c0,&uStack_80,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_049c56a0;
  puVar3 = PTR_DAT_049c5698;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_d0 = uStack_70;
  uVar6 = Avatars__GetProfileAvatar_256fe34(lVar9,&uStack_e0,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
            (uVar8,0xbd13b84d,uVar6,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_50 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_38,*(undefined8 *)puVar4);
  if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
            (lStack_38,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)PTR_DAT_049c5768);
  if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
            (lStack_38,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)PTR_DAT_049c5780);
  lVar5 = lStack_38;
  if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Extensions__Shuffle___Il2CppFullySharedGenericType__25f01e8(lVar5,*(undefined8 *)PTR_DAT_049c5910)
  ;
  if (*(int *)(*(long *)PTR_DAT_049c5908 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_60 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_68,*(undefined8 *)PTR_DAT_049c5900);
  lVar5 = lStack_68;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar8 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_2895908
                      (lVar9,*(undefined8 *)PTR_DAT_049c5918);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar8,uVar8);
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (lVar5,uVar8,*(undefined8 *)PTR_DAT_049c5920);
    puVar4 = PTR_DAT_049c5930;
    puVar3 = PTR_DAT_049c4660;
    if (lStack_38 != 0) {
      iVar7 = 0;
      do {
        if (*(int *)(lStack_38 + 0x18) <= iVar7) {
          UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                    (auStack_60,*(undefined8 *)PTR_DAT_049c5938);
          UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                    (auStack_50,*(undefined8 *)PTR_DAT_049c56b0);
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lStack_38,iVar7,&uStack_80,*(undefined8 *)puVar3);
        uVar8 = uStack_80;
        if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        iVar1 = *(int *)(lStack_68 + 0x18);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = iVar7 / iVar1;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lStack_68,iVar7 - iVar2 * iVar1,&uStack_80,*(undefined8 *)puVar4);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                  (uVar8,0xbd13b84d,uStack_80,0);
        iVar7 = iVar7 + 1;
      } while (lStack_38 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

