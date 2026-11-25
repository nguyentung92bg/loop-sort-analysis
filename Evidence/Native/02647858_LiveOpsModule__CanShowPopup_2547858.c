/* IL2CPP: LiveOpsModule$$CanShowPopup
bool LiveOpsModule__CanShowPopup (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$CanShowPopup
   bool LiveOpsModule__CanShowPopup (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo*
   method); */

bool LiveOpsModule__CanShowPopup_2547858(long param_1,undefined4 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4c012 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2c68);
    bRam0000000004f4c012 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar2 = LiveOpsDevFilter__IsAllowed_2522614(param_2,0);
  if ((uVar2 & 1) == 0) {
LAB_026479a0:
    bVar1 = false;
  }
  else {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar3 == 0)) {
LAB_026479c4:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_24 = param_2;
    uVar2 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar3,&uStack_24,*(undefined8 *)PTR_DAT_049c2f60);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      plVar4 = (long *)Extensions__ToClassInstance_24e79d0(param_2,0);
      if (((*(long *)(param_1 + 0x18) == 0) ||
          (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar3 == 0)) ||
         (uStack_24 = param_2,
         lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                           (lVar3,&uStack_24,*(undefined8 *)PTR_DAT_049c2c68), plVar4 == (long *)0x0
         )) goto LAB_026479c4;
      uVar2 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      if ((uVar2 & 1) == 0) goto LAB_026479a0;
      if (lVar3 == 0) goto LAB_026479c4;
      uStack_58 = *(undefined8 *)(lVar3 + 0x40);
      uStack_60 = *(undefined8 *)(lVar3 + 0x38);
      uStack_48 = *(undefined8 *)(lVar3 + 0x50);
      uStack_50 = *(undefined8 *)(lVar3 + 0x48);
      uStack_38 = *(undefined8 *)(lVar3 + 0x60);
      uStack_40 = *(undefined8 *)(lVar3 + 0x58);
      uVar2 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                        (&uStack_60,*(undefined8 *)PTR_DAT_049b5f98);
      if ((uVar2 & 1) == 0) {
        return *(int *)(lVar3 + 0x18) == 0;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}

