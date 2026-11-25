/* IL2CPP: LiveOpsModule$$CanJoin
bool LiveOpsModule__CanJoin (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$CanJoin
   bool LiveOpsModule__CanJoin (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
    */

uint LiveOpsModule__CanJoin_2547318(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4c016 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049c5888);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c016 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar4 = LiveOpsDevFilter__IsAllowed_2522614(param_2,0);
  if (((uVar4 & 1) != 0) &&
     (uVar4 = LiveOpsModule__IsJoined_2546cc0(param_1,param_2), (uVar4 & 1) == 0)) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x90), lVar5 == 0)) goto LAB_02647570;
    lVar5 = HomeLiveOpsSheet__FindSlot_2560f84(lVar5,param_2,0);
    uVar3 = 0;
    if (lVar5 == 0) goto LAB_02647520;
    uVar4 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar5,0);
    if ((uVar4 & 1) == 0) {
      iVar2 = HomeLiveOpsSheet_Slot__GetCurrent_25613cc(lVar5,0);
                    /* try { // try from 02647404 to 027474db has its CatchHandler @ 02647404
                       catch() { ... } // from try @ 02647404 with catch @ 02647404
                       catch() { ... } // from try @ 0264754c with catch @ 02647404
                       catch() { ... } // from try @ 02647594 with catch @ 02647404
                       catch() { ... } // from try @ 0264760c with catch @ 02647404
                       catch() { ... } // from try @ 02647648 with catch @ 02647404 */
      if (iVar2 == param_2) {
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar5 == 0)) goto LAB_02647570;
        iStack_40 = param_2;
        uVar4 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                          (lVar5,&iStack_40,*(undefined8 *)PTR_DAT_049c2f60);
        if ((uVar4 & 1) != 0) {
          if ((*(long *)(param_1 + 0x18) == 0) ||
             (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar5 == 0)) goto LAB_02647570;
          iStack_40 = param_2;
          lVar5 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                            (lVar5,&iStack_40,*(undefined8 *)PTR_DAT_049c2c68);
          if (lVar5 == 0) goto LAB_02647570;
          uStack_68 = *(undefined8 *)(lVar5 + 0xa0);
          uStack_70 = *(undefined8 *)(lVar5 + 0x98);
          uStack_58 = *(undefined8 *)(lVar5 + 0xb0);
          uStack_60 = *(undefined8 *)(lVar5 + 0xa8);
          uStack_48 = *(undefined8 *)(lVar5 + 0xc0);
          uStack_50 = *(undefined8 *)(lVar5 + 0xb8);
          uVar4 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                            (&uStack_70,*(undefined8 *)PTR_DAT_049b5f98);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
              FUN_021f0574();
            }
            auVar7 = TimeProvider__get_UtcNow_24f95ec(0);
            uStack_98 = *(undefined8 *)(lVar5 + 0xa0);
            uStack_a0 = *(undefined8 *)(lVar5 + 0x98);
            uStack_88 = *(undefined8 *)(lVar5 + 0xb0);
            uStack_90 = *(undefined8 *)(lVar5 + 0xa8);
            uStack_78 = *(undefined8 *)(lVar5 + 0xc0);
            uStack_80 = *(undefined8 *)(lVar5 + 0xb8);
                    /* try { // try from 026474dc to 027474e3 has its CatchHandler @ 026475e8 */
            CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                      (&uStack_a0,&iStack_40,*(undefined8 *)PTR_DAT_049c5888);
            uVar1 = CONCAT44(uStack_3c,iStack_40);
            if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
              FUN_021f0574();
            }
                    /* try { // try from 02647500 to 0274754b has its CatchHandler @ 026475ec */
            uVar4 = System_DateTimeOffset__op_GreaterThan_30e48c8
                              (uVar1,uStack_38,auVar7._0_8_,auVar7._8_8_,0);
            if ((uVar4 & 1) != 0) goto LAB_0264751c;
          }
          if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
                    /* try { // try from 0264754c to 02747587 has its CatchHandler @ 02647404 */
            FUN_021f0574();
          }
          plVar6 = (long *)Extensions__ToClassInstance_24e79d0(param_2,0);
          if (plVar6 == (long *)0x0) {
LAB_02647570:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar3 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
          goto LAB_02647520;
        }
      }
    }
  }
LAB_0264751c:
  uVar3 = 0;
LAB_02647520:
  return uVar3 & 1;
}

