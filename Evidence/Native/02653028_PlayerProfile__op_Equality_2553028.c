/* IL2CPP: PlayerProfile$$op_Equality
bool PlayerProfile__op_Equality (PlayerProfile_o x, PlayerProfile_o y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerProfile$$op_Equality
   bool PlayerProfile__op_Equality (PlayerProfile_o x, PlayerProfile_o y, const MethodInfo* method);
    */

uint PlayerProfile__op_Equality_2553028(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049c49a0;
  if ((bRam0000000004f4c088 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c49a0);
    bRam0000000004f4c088 = 1;
  }
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_40 = param_1[2];
  uVar3 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_50);
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_60 = param_2[2];
                    /* try { // try from 02653098 to 027530fb has its CatchHandler @ 026533c8 */
  uVar4 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_70);
  uVar2 = System_Object__Equals_314f8e8(uVar3,uVar4,0);
  return uVar2 & 1;
}

