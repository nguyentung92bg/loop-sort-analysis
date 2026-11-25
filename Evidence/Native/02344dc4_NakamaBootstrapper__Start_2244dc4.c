/* IL2CPP: NakamaBootstrapper$$Start
void NakamaBootstrapper__Start (NakamaBootstrapper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$Start
   void NakamaBootstrapper__Start (NakamaBootstrapper_o* __this, const MethodInfo* method); */

void NakamaBootstrapper__Start_2244dc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_049b5670;
                    /* try { // try from 02344dd0 to 02444ddb has its CatchHandler @ 02344e0c */
                    /* try { // try from 02344ddc to 02444e27 has its CatchHandler @ 02344d5c */
  if ((bRam0000000004f49b3b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5678);
    FUN_021f03f8(PTR_DAT_049b5680);
                    /* catch() { ... } // from try @ 02344dd0 with catch @ 02344e0c */
    FUN_021f03f8(PTR_DAT_049b5688);
    FUN_021f03f8(PTR_DAT_049b5690);
                    /* try { // try from 02344e28 to 02444f23 has its CatchHandler @ 02344e28
                       catch() { ... } // from try @ 02344e28 with catch @ 02344e28
                       catch() { ... } // from try @ 02344f30 with catch @ 02344e28 */
    FUN_021f03f8(PTR_DAT_049b5698);
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49b3b = 1;
  }
  puVar6 = PTR_DAT_049b5698;
  puVar5 = PTR_DAT_049b5690;
  puVar4 = PTR_DAT_049b5688;
  puVar3 = PTR_DAT_049b5680;
  puVar2 = PTR_DAT_049b5678;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = VoodooSauce__GetItemOrDefault_object__272c2b8(*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  thunk_FUN_021f190c();
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Threading_CancellationTokenSource___ctor_3165668(uVar7,0);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar7);
  auStack_50 = UniTimer__CreateFromSeconds_3f0f2f4(0x41a00000,0);
  auVar8 = UniTimer__SetUnscaled_3f0f260(auStack_50,0);
  uVar7 = *(undefined8 *)puVar2;
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar8;
  uVar7 = thunk_FUN_0222ca34(uVar7);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar4,0);
  Voodoo_Sauce_Core_VoodooSauceServices__WhenServiceRegistered_object__272d82c
            (uVar7,*(undefined8 *)puVar5);
  return;
}

