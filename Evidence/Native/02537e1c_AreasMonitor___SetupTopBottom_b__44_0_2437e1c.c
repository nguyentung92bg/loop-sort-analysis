/* IL2CPP: AreasMonitor$$<SetupTopBottom>b__44_0
void AreasMonitor___SetupTopBottom_b__44_0 (AreasMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0253545c) */
/* WARNING: Removing unreachable block (ram,0x02535464) */
/* IL2CPP: AreasMonitor$$<SetupTopBottom>b__44_0
   void AreasMonitor___SetupTopBottom_b__44_0 (AreasMonitor_o* __this, const MethodInfo* method); */

void AreasMonitor___SetupTopBottom_b__44_0_2437e1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b7f4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c3af8);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c1358);
    bRam0000000004f4b7f4 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  FUN_024f75b8(*(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x14c),
               *(undefined4 *)(param_1 + 0x154),1,0);
  plVar5 = *(long **)(param_1 + 0xd0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
    puVar4 = PTR_DAT_049c3af8;
    puVar3 = PTR_DAT_049c20a8;
    puVar2 = PTR_DAT_049c2058;
    puVar1 = PTR_DAT_049c1358;
    if (*(long *)(param_1 + 0xd0) != 0) {
      uVar7 = AreasScrollRect__get_DistanceFromTop_24137ec(*(long *)(param_1 + 0xd0),0);
      auStack_50 = LitMotion_LMotion__Create_2ea9f9c(uVar7,0,0x3f000000,0);
      auVar8 = FUN_024f4e50(auStack_50,8,*(undefined8 *)puVar1);
      auStack_50 = auVar8;
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar6,param_1,*(undefined8 *)puVar4,0);
      auVar9 = FUN_024f6d0c(auStack_50,uVar6,*(undefined8 *)puVar3);
      *(undefined1 (*) [12])(param_1 + 0x14c) = auVar9;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

