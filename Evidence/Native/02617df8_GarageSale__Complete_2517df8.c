/* IL2CPP: GarageSale$$Complete
void GarageSale__Complete (GarageSale_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSale$$Complete
   void GarageSale__Complete (GarageSale_o* __this, const MethodInfo* method); */

void GarageSale__Complete_2517df8(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  LiveOpsBase__Complete_2521cec(param_1,0);
  puVar1 = PTR_DAT_049c5aa8;
                    /* try { // try from 02617e0c to 02717e0f has its CatchHandler @ 02617e6c */
                    /* try { // try from 02617e10 to 02717e13 has its CatchHandler @ 02617e68 */
                    /* try { // try from 02617e14 to 02717e17 has its CatchHandler @ 02617e5c */
  if ((bRam0000000004f4bcb4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8,0);
    bRam0000000004f4bcb4 = 1;
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__DeleteValue_3f0db18(&uStack_30,0);
  return;
}

