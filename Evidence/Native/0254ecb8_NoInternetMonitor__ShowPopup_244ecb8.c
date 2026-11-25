/* IL2CPP: NoInternetMonitor$$ShowPopup
void NoInternetMonitor__ShowPopup (NoInternetMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NoInternetMonitor$$ShowPopup
   void NoInternetMonitor__ShowPopup (NoInternetMonitor_o* __this, const MethodInfo* method); */

void NoInternetMonitor__ShowPopup_244ecb8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_14 [4];
  
  if ((bRam0000000004f4b8be & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4750);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4b8be = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar2 != 0) {
    uVar3 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar2,0);
    puVar1 = PTR_DAT_049c3958;
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      lVar2 = *(long *)PTR_DAT_049c3958;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_021f0574();
        lVar2 = *(long *)puVar1;
      }
      auStack_14[0] = **(undefined1 **)(lVar2 + 0xb8);
      uVar4 = thunk_FUN_0222c66c(lVar2,auStack_14);
      if (lVar5 == 0) goto LAB_0254ed6c;
      Monitors__Additive_object__26888e8(lVar5,uVar4,1,*(undefined8 *)PTR_DAT_049c4750);
    }
    return;
  }
LAB_0254ed6c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

