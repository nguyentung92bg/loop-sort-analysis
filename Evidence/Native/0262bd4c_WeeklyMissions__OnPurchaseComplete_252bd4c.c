/* IL2CPP: WeeklyMissions$$OnPurchaseComplete
void WeeklyMissions__OnPurchaseComplete (WeeklyMissions_o* __this, PurchaseCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnPurchaseComplete
   void WeeklyMissions__OnPurchaseComplete (WeeklyMissions_o* __this, PurchaseCompleteMessage_o m,
   const MethodInfo* method); */

void WeeklyMissions__OnPurchaseComplete_252bd4c(undefined8 param_1,int *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_120 [76];
  int iStack_d4;
  undefined1 auStack_d0 [76];
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
                    /* try { // try from 0262bd4c to 0272bd53 has its CatchHandler @ 0262c3dc */
                    /* try { // try from 0262bd6c to 0272bdb7 has its CatchHandler @ 0262c440 */
  if ((bRam0000000004f4bed0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bed0 = 1;
  }
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uVar2 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar1 = PTR_DAT_049b5310;
  if (((uVar2 & 1) != 0) && (*param_2 == 1)) {
                    /* try { // try from 0262bdb8 to 0272bdd3 has its CatchHandler @ 0262bb48 */
    lVar3 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
                    /* try { // try from 0262bdd4 to 0272bddb has its CatchHandler @ 0262c3d0 */
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar3 + 0xb8) + 0x488,auStack_d0,*(undefined8 *)PTR_DAT_049c9bb0);
                    /* try { // try from 0262bdf8 to 0272bdff has its CatchHandler @ 0262beec */
    func_0x04608620(&uStack_80,auStack_d0,0x4c);
    func_0x04608620(auStack_120,&uStack_80,0x4c);
    iStack_d4 = iStack_84 + 1;
                    /* try { // try from 0262be18 to 0272be63 has its CatchHandler @ 0262bef0 */
    WeeklyMissions__SaveProgress_252ae2c(param_1,auStack_120);
  }
  return;
}

