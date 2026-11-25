/* IL2CPP: SettingsModule$$SetHaptic
void SettingsModule__SetHaptic (SettingsModule_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsModule$$SetHaptic
   void SettingsModule__SetHaptic (SettingsModule_o* __this, bool isActive, const MethodInfo*
   method); */

void SettingsModule__SetHaptic_2539bf8(long param_1,byte param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bf7a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bf7a = 1;
  }
                    /* try { // try from 02639c34 to 02739c47 has its CatchHandler @ 0263a228 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 02639c50 to 02739c5b has its CatchHandler @ 0263a224 */
  PlayerPrefsBool__Set_3f0e92c(param_1 + 0x58,param_2 & 1,0);
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 02639c68 to 02739c6b has its CatchHandler @ 0263a220 */
    *(byte *)(*(long *)(param_1 + 0x18) + 0x2c) = (param_2 ^ 0xff) & 1;
                    /* try { // try from 02639c74 to 02739c7f has its CatchHandler @ 0263a21c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

