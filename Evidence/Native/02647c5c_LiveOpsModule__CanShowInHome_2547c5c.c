/* IL2CPP: LiveOpsModule$$CanShowInHome
bool LiveOpsModule__CanShowInHome (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$CanShowInHome
   bool LiveOpsModule__CanShowInHome (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo*
   method); */

uint LiveOpsModule__CanShowInHome_2547c5c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
                    /* catch() { ... } // from try @ 02647bf4 with catch @ 02647c5c */
                    /* catch() { ... } // from try @ 02647c40 with catch @ 02647c60 */
                    /* catch() { ... } // from try @ 02647bc8 with catch @ 02647c64 */
                    /* catch() { ... } // from try @ 02647be0 with catch @ 02647c68 */
                    /* catch() { ... } // from try @ 02647bac with catch @ 02647c6c */
                    /* catch() { ... } // from try @ 02647b20 with catch @ 02647c70 */
                    /* catch() { ... } // from try @ 02647b40 with catch @ 02647c74 */
  if ((bRam0000000004f4c01a & 1) == 0) {
                    /* try { // try from 02647c88 to 02747c8b has its CatchHandler @ 02647ca4 */
    FUN_021f03f8(PTR_DAT_049c5888);
                    /* try { // try from 02647c8c to 02747ca7 has its CatchHandler @ 02647a3c */
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* catch() { ... } // from try @ 02647c88 with catch @ 02647ca4 */
                    /* try { // try from 02647ca8 to 02747caf has its CatchHandler @ 02647cb8 */
    FUN_021f03f8(PTR_DAT_049c2f60);
                    /* try { // try from 02647cb0 to 02747cbb has its CatchHandler @ 02647a3c */
                    /* catch() { ... } // from try @ 02647ca8 with catch @ 02647cb8 */
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c01a = 1;
  }
  uVar3 = LiveOpsDevFilter__IsAllowed_2522614(param_2,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar4 == 0)) {
LAB_02647e34:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_40 = param_2;
    uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar4,&uStack_40,*(undefined8 *)PTR_DAT_049c2f60);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      plVar5 = (long *)Extensions__ToClassInstance_24e79d0(param_2,0);
      if (plVar5 == (long *)0x0) goto LAB_02647e34;
      uVar3 = (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
      if ((uVar3 & 1) != 0) {
        uVar3 = LiveOpsModule__IsJoined_2546cc0(param_1,param_2);
        if ((uVar3 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
            FUN_021f0574();
          }
          auVar6 = TimeProvider__get_UtcNow_24f95ec(0);
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar4 != 0)) {
            uStack_40 = param_2;
            lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                              (lVar4,&uStack_40,*(undefined8 *)PTR_DAT_049c2c68);
            if (lVar4 != 0) {
              uStack_68 = *(undefined8 *)(lVar4 + 0xa0);
              uStack_70 = *(undefined8 *)(lVar4 + 0x98);
              uStack_58 = *(undefined8 *)(lVar4 + 0xb0);
              uStack_60 = *(undefined8 *)(lVar4 + 0xa8);
              uStack_48 = *(undefined8 *)(lVar4 + 0xc0);
              uStack_50 = *(undefined8 *)(lVar4 + 0xb8);
              CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                        (&uStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049c5888);
              uVar1 = CONCAT44(uStack_3c,uStack_40);
              if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar2 = System_DateTimeOffset__op_GreaterThanOrEqual_30e496c
                                (auVar6._0_8_,auVar6._8_8_,uVar1,uStack_38,0);
              goto LAB_02647d64;
            }
          }
          goto LAB_02647e34;
        }
        uVar2 = 1;
        goto LAB_02647d64;
      }
    }
  }
  uVar2 = 0;
LAB_02647d64:
  return uVar2 & 1;
}

