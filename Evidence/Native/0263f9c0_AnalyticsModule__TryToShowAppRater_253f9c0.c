/* IL2CPP: AnalyticsModule$$TryToShowAppRater
bool AnalyticsModule__TryToShowAppRater (AnalyticsModule_o* __this, System_Action_bool__o* rated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$TryToShowAppRater
   bool AnalyticsModule__TryToShowAppRater (AnalyticsModule_o* __this, System_Action_bool__o* rated,
   const MethodInfo* method); */

undefined8 AnalyticsModule__TryToShowAppRater_253f9c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049ca4e0;
                    /* try { // try from 0263f9d0 to 0273f9d3 has its CatchHandler @ 0263fd8c */
                    /* try { // try from 0263f9e4 to 0273fa03 has its CatchHandler @ 0263fe28 */
  if ((bRam0000000004f4bfb3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049b4308);
                    /* try { // try from 0263fa0c to 0273fa0f has its CatchHandler @ 0263fe24 */
    FUN_021f03f8(PTR_DAT_049ca4e8);
                    /* try { // try from 0263fa10 to 0273fa1f has its CatchHandler @ 0263fe20 */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 0263fa20 to 0273fa33 has its CatchHandler @ 0263fe1c */
    FUN_021f03f8(PTR_DAT_049ca4f0);
    FUN_021f03f8(PTR_DAT_049ca4f8);
                    /* try { // try from 0263fa3c to 0273fa3f has its CatchHandler @ 0263fe18 */
    FUN_021f03f8(PTR_DAT_049ca4e0);
                    /* try { // try from 0263fa40 to 0273fa4f has its CatchHandler @ 0263fe14 */
    bRam0000000004f4bfb3 = 1;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 0263fa54 to 0273fa5f has its CatchHandler @ 0263fe0c */
  System_Object___ctor_3142338(lVar3,0);
  puVar1 = PTR_DAT_049b5310;
  if (lVar3 == 0) {
LAB_0263fbc8:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0263fa70 to 0273fa73 has its CatchHandler @ 0263fd88 */
  *(undefined8 *)(lVar3 + 0x10) = param_2;
                    /* try { // try from 0263fa74 to 0273fa8f has its CatchHandler @ 0263fe08 */
  thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x10),param_2);
  *(long *)(lVar3 + 0x18) = param_1;
  thunk_FUN_021f190c((long *)(lVar3 + 0x18),param_1);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 0263fa94 to 0273fa9f has its CatchHandler @ 0263fe04 */
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(lVar4 + 0xb8);
  uStack_48 = *(undefined8 *)(lVar4 + 0x5a0);
  uStack_50 = *(undefined8 *)(lVar4 + 0x598);
  uStack_38 = *(undefined8 *)(lVar4 + 0x5b0);
  uStack_40 = *(undefined8 *)(lVar4 + 0x5a8);
                    /* try { // try from 0263fab4 to 0273fb67 has its CatchHandler @ 0263fe40 */
  uVar5 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_50,0);
  if ((uVar5 & 1) == 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    iVar2 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar4 + 0xb8) + 0x60,0);
    if ((((iVar2 * -0x3d70a3d7 + 0x51eb850U >> 1 | iVar2 * -0x80000000) < 0x51eb851) ||
        (iVar2 == 0x19)) || (iVar2 == 0xf)) {
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar4 = Monitors__Get_object__26889d0
                          (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_049ca4e8);
        uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5230);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar6,lVar3,*(undefined8 *)PTR_DAT_049ca4f0,0);
                    /* try { // try from 0263fb74 to 0273fbfb has its CatchHandler @ 0263fe48 */
        uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
        System_Action___ctor_306b98c(uVar7,lVar3,*(undefined8 *)PTR_DAT_049ca4f8,0);
        if (lVar4 != 0) {
          RateUsMonitor__Show_245af50(lVar4,uVar6,uVar7,0);
          return 1;
        }
      }
      goto LAB_0263fbc8;
    }
  }
  return 0;
}

