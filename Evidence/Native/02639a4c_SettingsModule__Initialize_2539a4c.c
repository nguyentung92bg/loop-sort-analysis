/* IL2CPP: SettingsModule$$Initialize
void SettingsModule__Initialize (SettingsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsModule$$Initialize
   void SettingsModule__Initialize (SettingsModule_o* __this, const MethodInfo* method); */

void SettingsModule__Initialize_2539a4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  
                    /* try { // try from 02639a4c to 02739a67 has its CatchHandler @ 0263a1b4 */
  puVar3 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bf72 & 1) == 0) {
                    /* try { // try from 02639a6c to 02739a77 has its CatchHandler @ 0263a1b0 */
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bf72 = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
                    /* try { // try from 02639a8c to 02739b3f has its CatchHandler @ 0263a234 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = PlayerPrefsBool__op_Implicit_3f0e9e8(uVar1,uVar2,0);
  SettingsModule__SetSound_2539aec(param_1,uVar5 & 1);
  uVar5 = PlayerPrefsBool__op_Implicit_3f0e9e8
                    (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),0);
  SettingsModule__SetMusic_2539b6c(param_1,uVar5 & 1);
  bVar4 = PlayerPrefsBool__op_Implicit_3f0e9e8
                    (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),0);
  puVar3 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bf7a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bf7a = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(param_1 + 0x58,bVar4 & 1,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    *(byte *)(*(long *)(param_1 + 0x18) + 0x2c) = (bVar4 & 1 ^ 0xff) & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

