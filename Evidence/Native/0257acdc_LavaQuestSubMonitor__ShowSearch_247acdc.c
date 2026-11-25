/* IL2CPP: LavaQuestSubMonitor$$ShowSearch
void LavaQuestSubMonitor__ShowSearch (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$ShowSearch
   void LavaQuestSubMonitor__ShowSearch (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
    */

void LavaQuestSubMonitor__ShowSearch_247acdc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  if ((bRam0000000004f4b9e4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54a8);
    FUN_021f03f8(PTR_DAT_049c5900);
    FUN_021f03f8(PTR_DAT_049c5908);
    FUN_021f03f8(PTR_DAT_049c3b08);
    FUN_021f03f8(PTR_DAT_049c5968);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c5918);
    FUN_021f03f8(PTR_DAT_049c5920);
    FUN_021f03f8(PTR_DAT_049c5928);
    FUN_021f03f8(PTR_DAT_049c5930);
    FUN_021f03f8(PTR_DAT_049c5938);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b4540);
    bRam0000000004f4b9e4 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  lStack_38 = 0;
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x271db996,0);
  puVar2 = PTR_DAT_049b4540;
                    /* try { // try from 0257adcc to 0267af03 has its CatchHandler @ 0257adcc
                       catch() { ... } // from try @ 0257adcc with catch @ 0257adcc
                       catch() { ... } // from try @ 0257af70 with catch @ 0257adcc
                       catch() { ... } // from try @ 0257af90 with catch @ 0257adcc
                       catch() { ... } // from try @ 0257b080 with catch @ 0257adcc
                       catch() { ... } // from try @ 0257b0b0 with catch @ 0257adcc
                       catch() { ... } // from try @ 0257b0d4 with catch @ 0257adcc */
  if (*(long *)(param_1 + 0x48) != 0) {
    LavaQuest__GetNewGame_251acdc(&uStack_88,*(long *)(param_1 + 0x48),0);
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_50 = uStack_78;
    lVar6 = FUN_021f04e4(*(undefined8 *)puVar2,1);
    uVar7 = System_Int32__ToString_30fbaa0((long)&uStack_50 + 4,0);
    puVar3 = PTR_DAT_049b54a8;
    puVar2 = PTR_DAT_049b5310;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0257af04 with catch @ 0257b08c
                        */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      thunk_FUN_021f190c();
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                (uVar9,0x72c5b6c8,lVar6,0);
      uVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                        (*(undefined8 *)(param_1 + 0x70),0xa41ab296,0);
      lVar6 = *(long *)puVar2;
      lVar10 = *(long *)(param_1 + 0x58);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574(lVar6);
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      uStack_d8 = *(undefined8 *)(lVar6 + 0x1b8);
      uStack_e0 = *(undefined8 *)(lVar6 + 0x1b0);
      uStack_c8 = *(undefined8 *)(lVar6 + 0x1c8);
      uStack_d0 = *(undefined8 *)(lVar6 + 0x1c0);
      uStack_b8 = *(undefined8 *)(lVar6 + 0x1d8);
      uStack_c0 = *(undefined8 *)(lVar6 + 0x1d0);
      uStack_b0 = *(undefined8 *)(lVar6 + 0x1e0);
      CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                (&uStack_e0,&uStack_a0,*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_049c5908;
      puVar2 = PTR_DAT_049c5900;
      if (lVar10 != 0) {
        uStack_f8 = puStack_98;
        uStack_100 = uStack_a0;
        uStack_f0 = uStack_90;
        uVar9 = Avatars__GetProfileAvatar_256fe34(lVar10,&uStack_100,0);
                    /* try { // try from 0257af04 to 0267af0b has its CatchHandler @ 0257b08c */
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                  (uVar7,0xbd13b84d,uVar9,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        puVar3 = PTR_DAT_049c5938;
                    /* try { // try from 0257af24 to 0267af6f has its CatchHandler @ 0257b090 */
        auStack_70 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                               (&lStack_38,*(undefined8 *)puVar2);
        lVar6 = lStack_38;
        puStack_98 = auStack_70;
        uStack_a0 = 0;
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0257af24 with catch @ 0257b090
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0257af8c with catch @ 0257b090
                        */
          FUN_021f06a0();
        }
        lVar10 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar7 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_2895908
                          (lVar10,*(undefined8 *)PTR_DAT_049c5918);
        if (lVar6 != 0) {
                    /* try { // try from 0257af70 to 0267af8b has its CatchHandler @ 0257adcc */
          System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                    (lVar6,uVar7,*(undefined8 *)PTR_DAT_049c5920);
          lVar6 = lStack_38;
                    /* try { // try from 0257af8c to 0267af8f has its CatchHandler @ 0257b090 */
          if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
                    /* try { // try from 0257af90 to 0267b07b has its CatchHandler @ 0257adcc */
            FUN_021f0574();
          }
          Extensions__Shuffle___Il2CppFullySharedGenericType__25f01e8
                    (lVar6,*(undefined8 *)PTR_DAT_049c5968);
          lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                            (*(undefined8 *)(param_1 + 0x70),0xe0d1c46c,0);
          if (lVar6 != 0) {
            lVar6 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar6,0);
            puVar4 = PTR_DAT_049c5930;
            puVar2 = PTR_DAT_049c3b08;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            iVar8 = 0;
            while( true ) {
              iVar5 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar6,0);
              if (iVar5 <= iVar8) {
                UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                          (auStack_70,*(undefined8 *)puVar3);
                    /* try { // try from 0257b07c to 0267b07f has its CatchHandler @ 0257b088 */
                return;
              }
              lVar10 = UnityEngine_Transform__GetChild_3c2f8bc(lVar6,iVar8,0);
              if (lVar10 == 0) break;
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                        (lVar10,&uStack_88,*(undefined8 *)puVar2);
              uVar7 = uStack_88;
              if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              iVar5 = *(int *)(lStack_38 + 0x18);
              iVar1 = 0;
              if (iVar5 != 0) {
                iVar1 = iVar8 / iVar5;
              }
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (lStack_38,iVar8 - iVar1 * iVar5,&uStack_88,*(undefined8 *)puVar4);
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                        (uVar7,0xbd13b84d,uStack_88,0);
              iVar8 = iVar8 + 1;
            }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0257b080 to 0267b0ab has its CatchHandler @ 0257adcc */
            FUN_021f06a0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(uVar7,uVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0257b07c with catch @ 0257b088
                        */
  FUN_021f06a0();
}

