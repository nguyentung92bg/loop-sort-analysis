/* IL2CPP: PointerHoldElement$$OnDeselect
void PointerHoldElement__OnDeselect (PointerHoldElement_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PointerHoldElement$$OnDeselect
   void PointerHoldElement__OnDeselect (PointerHoldElement_o* __this,
   UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method); */

uint PointerHoldElement__OnDeselect_241d2f4(long param_1)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  short *psVar7;
  undefined1 auStack_24 [4];
  
  puVar2 = PTR_DAT_049cf670;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    if ((bRam0000000004f535f2 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049cf678,0);
      FUN_021f03f8(PTR_DAT_049cf680);
      FUN_021f03f8(PTR_DAT_049cf670);
      bRam0000000004f535f2 = 1;
    }
    sVar1 = *(short *)(lVar5 + 0x40);
    lVar6 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    psVar7 = (short *)thunk_FUN_0224e54c(lVar5 + 0x18,
                                         *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80)
                                         + 0x40);
    puVar3 = PTR_DAT_049cf680;
    puVar2 = PTR_DAT_049cf678;
    if (sVar1 == *psVar7) {
      lVar6 = *(long *)PTR_DAT_049cf678;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar2;
      }
      auStack_24[0] = **(undefined1 **)(lVar6 + 0xb8);
      uVar4 = Cysharp_Threading_Tasks_UniTaskCompletionSourceCore___Il2CppFullySharedGenericType___TrySetResult_29e0e30
                        (lVar5 + 0x18,auStack_24,*(undefined8 *)puVar3);
    }
    else {
      uVar4 = 0;
    }
    return uVar4 & 1;
  }
  return 0;
}

