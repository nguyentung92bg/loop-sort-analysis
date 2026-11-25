/* IL2CPP: LiveOpsDeepLink$$HandleDeepLink
void LiveOpsDeepLink__HandleDeepLink (LiveOpsDeepLink_o* __this, DeepLinkInfo_o info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsDeepLink$$HandleDeepLink
   void LiveOpsDeepLink__HandleDeepLink (LiveOpsDeepLink_o* __this, DeepLinkInfo_o info, const
   MethodInfo* method); */

void LiveOpsDeepLink__HandleDeepLink_2521efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  if ((bRam0000000004f4be79 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9818);
    FUN_021f03f8(PTR_DAT_049c9140);
    bRam0000000004f4be79 = 1;
  }
  puVar1 = PTR_DAT_049c9818;
  uStack_24 = 0;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                    (param_3,1,&uStack_24,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x90), lVar3 == 0)) goto LAB_02622014;
    lVar3 = HomeLiveOpsSheet__FindSlot_2560f84(lVar3,uStack_24,0);
    if ((lVar3 != 0) && (uVar2 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar3,0), (uVar2 & 1) == 0)
       ) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_02622014;
      uVar2 = LiveOpsModule__CanShowInHome_2547c5c(*(long *)(param_1 + 0x18),uStack_24,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          LiveOpsModule__Show_253e230(auStack_40,*(long *)(param_1 + 0x18),uStack_24,1,0);
          return;
        }
        goto LAB_02622014;
      }
    }
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar3 = Monitors__Get_object__26889d0
                          (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_049c9140), lVar3 == 0))
    {
LAB_02622014:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LiveOpsUnavailableMonitor__Show_244ded0(lVar3,uStack_24,0);
  }
  return;
}

