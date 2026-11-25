/* IL2CPP: PlayerProfile$$op_Inequality
bool PlayerProfile__op_Inequality (PlayerProfile_o x, PlayerProfile_o y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerProfile$$op_Inequality
   bool PlayerProfile__op_Inequality (PlayerProfile_o x, PlayerProfile_o y, const MethodInfo*
   method); */

uint PlayerProfile__op_Inequality_25530cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049c49a0;
  if ((bRam0000000004f4c089 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c49a0);
    bRam0000000004f4c089 = 1;
  }
  uStack_40 = param_1[2];
                    /* try { // try from 02653110 to 0275311b has its CatchHandler @ 02653390 */
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_60 = param_2[2];
                    /* try { // try from 02653128 to 02753137 has its CatchHandler @ 0265338c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = PlayerProfile__op_Equality_2553028(&uStack_50,&uStack_70);
                    /* try { // try from 02653150 to 0275315b has its CatchHandler @ 026533c8 */
  return (uVar2 ^ 0xffffffff) & 1;
}

