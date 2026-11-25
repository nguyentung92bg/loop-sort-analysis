/* IL2CPP: HomeLiveOpsSheet.Slot$$.ctor
void HomeLiveOpsSheet_Slot___ctor (HomeLiveOpsSheet_Slot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeLiveOpsSheet.Slot$$.ctor
   void HomeLiveOpsSheet_Slot___ctor (HomeLiveOpsSheet_Slot_o* __this, const MethodInfo* method); */

undefined1  [16] HomeLiveOpsSheet_Slot___ctor_2561740(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_049cb460;
  puVar2 = PTR_DAT_049c91d8;
  puVar1 = PTR_DAT_049c91d0;
                    /* try { // try from 02661748 to 02761753 has its CatchHandler @ 02661b9c */
                    /* try { // try from 02661758 to 02761777 has its CatchHandler @ 02661bd4 */
  if ((bRam0000000004f4c124 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c91d8);
                    /* try { // try from 02661788 to 02761793 has its CatchHandler @ 02661b7c */
    FUN_021f03f8(PTR_DAT_049c91d0);
    FUN_021f03f8(PTR_DAT_049cb460);
                    /* try { // try from 02661798 to 027617b7 has its CatchHandler @ 02661bb8 */
    bRam0000000004f4c124 = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)puVar2);
                    /* try { // try from 026617bc to 027617d7 has its CatchHandler @ 02661bcc */
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar4);
  uVar4 = *(undefined8 *)puVar3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

