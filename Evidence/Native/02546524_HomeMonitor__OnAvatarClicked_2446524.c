/* IL2CPP: HomeMonitor$$OnAvatarClicked
void HomeMonitor__OnAvatarClicked (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$OnAvatarClicked
   void HomeMonitor__OnAvatarClicked (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__OnAvatarClicked_2446524(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_24;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b868 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b868 = 1;
  }
  puVar2 = PTR_DAT_049b54a8;
  lVar3 = *(long *)puVar1;
  iStack_24 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  uStack_48 = *(undefined8 *)(lVar3 + 0x68);
  uStack_50 = *(undefined8 *)(lVar3 + 0x60);
  uStack_38 = *(undefined8 *)(lVar3 + 0x78);
  uStack_40 = *(undefined8 *)(lVar3 + 0x70);
  iStack_24 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_50,0);
  iStack_24 = iStack_24 + 1;
  lVar5 = *(long *)(param_1 + 0x110);
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  uStack_98 = *(undefined8 *)(lVar3 + 0x1b8);
  uStack_a0 = *(undefined8 *)(lVar3 + 0x1b0);
  uStack_88 = *(undefined8 *)(lVar3 + 0x1c8);
  uStack_90 = *(undefined8 *)(lVar3 + 0x1c0);
  uStack_78 = *(undefined8 *)(lVar3 + 0x1d8);
  uStack_80 = *(undefined8 *)(lVar3 + 0x1d0);
  uStack_70 = *(undefined8 *)(lVar3 + 0x1e0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
            (&uStack_a0,&uStack_68,*(undefined8 *)puVar2);
  uVar4 = System_Int32__ToString_30fbaa0(&iStack_24,0);
  if (lVar5 != 0) {
    uStack_b8 = uStack_60;
    uStack_c0 = uStack_68;
    uStack_b0 = uStack_58;
    ProfileMonitor__ShowProfile_2456134(lVar5,&uStack_c0,1,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

