/* IL2CPP: ProfileMonitor$$OnEditClicked
void ProfileMonitor__OnEditClicked (ProfileMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileMonitor$$OnEditClicked
   void ProfileMonitor__OnEditClicked (ProfileMonitor_o* __this, const MethodInfo* method); */

void ProfileMonitor__OnEditClicked_2456328(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049c3958;
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4b8e6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4988);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4b8e6 = 1;
  }
  lVar2 = *(long *)puVar1;
  lVar5 = *(long *)(lVar4 + 0x30);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  auStack_24[0] = **(undefined1 **)(lVar2 + 0xb8);
  uVar3 = thunk_FUN_0222c66c(lVar2,auStack_24);
  if (lVar5 != 0) {
    Monitors__Additive_object__26888e8(lVar5,uVar3,1,*(undefined8 *)PTR_DAT_049c4988);
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar4,0x7e599452,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

