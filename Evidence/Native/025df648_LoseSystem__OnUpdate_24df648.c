/* IL2CPP: LoseSystem$$OnUpdate
void LoseSystem__OnUpdate (LoseSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LoseSystem$$OnUpdate
   void LoseSystem__OnUpdate (LoseSystem_o* __this, float deltaTime, const MethodInfo* method); */

ulong LoseSystem__OnUpdate_24df648(undefined4 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
                    /* try { // try from 025df64c to 026df65f has its CatchHandler @ 025df844 */
                    /* try { // try from 025df664 to 026df66b has its CatchHandler @ 025df840 */
  if ((bRam0000000004f4bc5e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6760);
    FUN_021f03f8(PTR_DAT_049c6768);
    FUN_021f03f8(PTR_DAT_049c6770);
    FUN_021f03f8(PTR_DAT_049c1ae0);
    FUN_021f03f8(PTR_DAT_049b5320);
                    /* try { // try from 025df6a8 to 026df6b3 has its CatchHandler @ 025df834 */
    FUN_021f03f8(PTR_DAT_049c6778);
                    /* try { // try from 025df6b4 to 026df6bf has its CatchHandler @ 025df818 */
    bRam0000000004f4bc5e = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  uVar2 = SystemBase__OnUpdate_2555ef8(param_1,param_2,0);
  if (*(char *)(param_2 + 0xe0) == '\0') {
    return uVar2;
  }
  if (*(long *)(param_2 + 0x30) == 0) goto LAB_025df8b0;
                    /* try { // try from 025df6ec to 026df703 has its CatchHandler @ 025df828 */
  uVar2 = GameMachine__IsInState_object__261a580
                    (*(long *)(param_2 + 0x30),*(undefined8 *)PTR_DAT_049c1ae0);
  uVar1 = (uint)uVar2 & 1;
  if (*(byte *)(param_2 + 0xe1) == uVar1) {
    if ((uVar2 & 1) == 0) {
      return uVar2;
    }
  }
  else {
    *(char *)(param_2 + 0xe1) = (char)uVar1;
    if ((uVar2 & 1) == 0) {
      return uVar2;
    }
    auVar9 = UniTimer__CreateFromSeconds_3f0f2f4(_UNK_013aa62c,0);
                    /* try { // try from 025df728 to 026df773 has its CatchHandler @ 025df81c */
    *(undefined1 (*) [16])(param_2 + 0xf4) = auVar9;
  }
  if ((*(float *)(param_2 + 0x114) <= 0.0) ||
     (uVar2 = UniTimer__get_IsExpired_3f0efb8(param_2 + 0x104,0), (uVar2 & 1) == 0)) {
    uVar2 = UniTimer__get_IsRunning_3f0efa0(param_2 + 0xf4,0);
    if ((uVar2 & 1) != 0) {
      return uVar2;
    }
                    /* try { // try from 025df774 to 026df78b has its CatchHandler @ 025df438 */
    auVar9 = UniTimer__CreateFromSeconds_3f0f2f4(_UNK_013aa62c,0);
    *(undefined1 (*) [16])(param_2 + 0xf4) = auVar9;
                    /* try { // try from 025df78c to 026df7a7 has its CatchHandler @ 025df830 */
    if (*(long *)(param_2 + 0x98) == 0) goto LAB_025df8b0;
    uVar2 = ElevatorHoleSystem__IsMoving_24a30f4(*(long *)(param_2 + 0x98),0);
    if ((uVar2 & 1) != 0) {
      auVar9 = UniTimer__CreateFromSeconds_3f0f2f4(0x40400000,0);
      *(undefined1 (*) [16])(param_2 + 0xe4) = auVar9;
                    /* try { // try from 025df89c to 026df8a7 has its CatchHandler @ 025df438 */
                    /* catch() { ... } // from try @ 025df894 with catch @ 025df8a4 */
                    /* try { // try from 025df8a8 to 026dfb67 has its CatchHandler @ 025df8a8
                       catch() { ... } // from try @ 025df8a8 with catch @ 025df8a8
                       catch() { ... } // from try @ 025dfe38 with catch @ 025df8a8
                       catch() { ... } // from try @ 025dff6c with catch @ 025df8a8
                       catch() { ... } // from try @ 025e001c with catch @ 025df8a8
                       catch() { ... } // from try @ 025e00f0 with catch @ 025df8a8 */
      return auVar9._0_8_;
                    /* try { // try from 025df7b0 to 026df7bb has its CatchHandler @ 025df82c */
    }
    uVar1 = LoseSystem__IsConveyorFull_24df8b4(param_2);
                    /* try { // try from 025df7bc to 026df7f7 has its CatchHandler @ 025df438 */
    uVar2 = LoseSystem__CanCompleteCarrier_24e0020(param_2);
    if ((uVar2 & 1) != 0) {
      auVar9 = UniTimer__CreateFromSeconds_3f0f2f4(0x40400000,0);
      *(undefined1 (*) [16])(param_2 + 0xe4) = auVar9;
    }
    uVar2 = UniTimer__get_IsExpired_3f0efb8(param_2 + 0xe4,0);
    if (((uVar1 | (uint)uVar2) & 1) == 0) {
      return uVar2;
    }
                    /* try { // try from 025df7f8 to 026df7fb has its CatchHandler @ 025df850 */
                    /* try { // try from 025df7fc to 026df7ff has its CatchHandler @ 025df84c */
    *(uint *)(param_2 + 0x118) = (uVar1 ^ 0xffffffff) & 1;
                    /* try { // try from 025df800 to 026df803 has its CatchHandler @ 025df83c */
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 025df804 to 026df807 has its CatchHandler @ 025df438 */
                    /* try { // try from 025df808 to 026df80b has its CatchHandler @ 025df820 */
      if (*(long *)(param_2 + 0x128) == 0) goto LAB_025df8b0;
                    /* try { // try from 025df80c to 026df80f has its CatchHandler @ 025df834 */
                    /* try { // try from 025df810 to 026df813 has its CatchHandler @ 025df830 */
      if (*(char *)(*(long *)(param_2 + 0x128) + 0x10) == '\0') {
                    /* catch() { ... } // from try @ 025df800 with catch @ 025df83c */
                    /* catch() { ... } // from try @ 025df664 with catch @ 025df840 */
        if (*(long *)(param_2 + 0xd8) != 0) {
                    /* catch() { ... } // from try @ 025df64c with catch @ 025df844 */
                    /* catch() { ... } // from try @ 025df62c with catch @ 025df848 */
                    /* catch() { ... } // from try @ 025df7fc with catch @ 025df84c */
                    /* catch() { ... } // from try @ 025df7f8 with catch @ 025df850 */
          FUN_0201d458(&uStack_38,*(long *)(param_2 + 0xd8),*(undefined8 *)PTR_DAT_049c6778);
          while( true ) {
            uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_38,0);
            if ((uVar2 & 1) == 0) {
              return uVar2;
            }
                    /* try { // try from 025df86c to 026df86f has its CatchHandler @ 025df890 */
                    /* try { // try from 025df870 to 026df893 has its CatchHandler @ 025df438 */
            lVar3 = *(long *)((long)plStack_28 +
                             (ulong)*(uint *)(*plStack_28 + 0x104) * (long)uStack_30._4_4_ + 0x20);
            if (lVar3 == 0) break;
            if (*(char *)(lVar3 + 0xc0) == '\0') {
                    /* catch() { ... } // from try @ 025df86c with catch @ 025df890 */
                    /* try { // try from 025df894 to 026df89b has its CatchHandler @ 025df8a4 */
              IceCarrier__Break_24a5a60(lVar3,0);
            }
          }
        }
        goto LAB_025df8b0;
      }
    }
                    /* try { // try from 025df814 to 026df817 has its CatchHandler @ 025df82c */
    lVar3 = *(long *)(param_2 + 0x30);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x118) = 2;
  }
                    /* catch() { ... } // from try @ 025df6b4 with catch @ 025df818
                       try { // try from 025df818 to 026df86b has its CatchHandler @ 025df438 */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 025df728 with catch @ 025df81c */
                    /* catch() { ... } // from try @ 025df808 with catch @ 025df820 */
                    /* catch() { ... } // from try @ 025df53c with catch @ 025df824 */
                    /* catch() { ... } // from try @ 025df6ec with catch @ 025df828 */
                    /* catch() { ... } // from try @ 025df7b0 with catch @ 025df82c
                       catch() { ... } // from try @ 025df814 with catch @ 025df82c */
                    /* catch() { ... } // from try @ 025df78c with catch @ 025df830
                       catch() { ... } // from try @ 025df810 with catch @ 025df830 */
    lVar4 = *(long *)PTR_DAT_049b5320;
    plVar5 = *(long **)(lVar4 + 0x38);
                    /* catch() { ... } // from try @ 025df6a8 with catch @ 025df834
                       catch() { ... } // from try @ 025df80c with catch @ 025df834 */
                    /* catch() { ... } // from try @ 025df564 with catch @ 025df838 */
    if (plVar5 == (long *)0x0) {
      FUN_021f03f8(PTR_DAT_049c4e90);
      FUN_021f03f8(PTR_DAT_049c4fe8);
      plVar5 = *(long **)(lVar4 + 0x38);
      if (plVar5 == (long *)0x0) {
        FUN_02229774(lVar4);
        plVar5 = *(long **)(lVar4 + 0x38);
      }
    }
    lVar7 = *plVar5;
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 == 0) {
      FUN_02229774(lVar7);
      lVar6 = *(long *)(lVar7 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    if (lVar3 != 0) {
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
                (lVar3,&plStack_28,*(undefined8 *)PTR_DAT_049c4fe8);
      uVar2 = System_String__op_Equality_2f7b7fc(plStack_28,uVar8,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = GameMachine__CanEnter_object__261a478
                          (lVar3,*(undefined8 *)(*(long *)(lVar4 + 0x38) + 8));
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        FUN_02568dec(lVar3,uVar8,0,0,*(undefined8 *)PTR_DAT_049c4e90);
      }
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_025df8b0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

