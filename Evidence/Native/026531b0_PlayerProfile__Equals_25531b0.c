/* IL2CPP: PlayerProfile$$Equals
bool PlayerProfile__Equals (PlayerProfile_o __this, Il2CppObject* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerProfile$$Equals
   bool PlayerProfile__Equals (PlayerProfile_o __this, Il2CppObject* obj, const MethodInfo* method);
    */

uint PlayerProfile__Equals_25531b0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
                    /* try { // try from 026531b4 to 027531bf has its CatchHandler @ 0265337c */
  if ((bRam0000000004f4c08a & 1) == 0) {
                    /* try { // try from 026531d4 to 027531d7 has its CatchHandler @ 0265336c */
    FUN_021f03f8(PTR_DAT_049c49a0);
                    /* try { // try from 026531dc to 027531e7 has its CatchHandler @ 02653374 */
    bRam0000000004f4c08a = 1;
  }
  puVar1 = PTR_DAT_049c49a0;
  if (param_2 != (long *)0x0) {
                    /* try { // try from 026531fc to 0275328f has its CatchHandler @ 02653394 */
    if (*param_2 == *(long *)PTR_DAT_049c49a0) {
      puVar3 = (undefined8 *)thunk_FUN_0222cb7c(param_2);
      uStack_38 = puVar3[1];
      uStack_40 = *puVar3;
      uStack_30 = puVar3[2];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar2 = PlayerProfile__Equals_2553164(param_1,&uStack_40);
      goto LAB_02653240;
    }
  }
  uVar2 = 0;
LAB_02653240:
  return uVar2 & 1;
}

