/* IL2CPP: BoosterSheet.Booster$$AddCount
void BoosterSheet_Booster__AddCount (BoosterSheet_Booster_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSheet.Booster$$AddCount
   void BoosterSheet_Booster__AddCount (BoosterSheet_Booster_o* __this, int32_t count, const
   MethodInfo* method); */

void BoosterSheet_Booster__AddCount_2559ea8(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 02659ea8 to 02759eab has its CatchHandler @ 02659f98 */
                    /* try { // try from 02659eac to 02759eaf has its CatchHandler @ 02659f94 */
                    /* try { // try from 02659eb0 to 02759eb3 has its CatchHandler @ 02659fb8 */
                    /* try { // try from 02659eb4 to 02759eb7 has its CatchHandler @ 02659f8c */
                    /* try { // try from 02659eb8 to 02759ebb has its CatchHandler @ 02659f88 */
                    /* try { // try from 02659ebc to 02759ebf has its CatchHandler @ 02659f80 */
                    /* try { // try from 02659ec0 to 02759ec3 has its CatchHandler @ 02659f7c */
  iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x28,0);
  puVar1 = PTR_DAT_049c5aa8;
                    /* try { // try from 02659ec4 to 02759ec7 has its CatchHandler @ 0265a0f4 */
                    /* try { // try from 02659ec8 to 02759ecb has its CatchHandler @ 02659f78 */
                    /* try { // try from 02659ecc to 02759ecf has its CatchHandler @ 02659f6c */
                    /* try { // try from 02659ed0 to 02759ed3 has its CatchHandler @ 02659f50 */
                    /* try { // try from 02659ed4 to 02759ed7 has its CatchHandler @ 02659f40 */
                    /* try { // try from 02659ed8 to 02759edb has its CatchHandler @ 02659f3c */
                    /* try { // try from 02659edc to 02759edf has its CatchHandler @ 02659f30 */
  if ((bRam0000000004f4bcb2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8,iVar2 + param_2,0);
    bRam0000000004f4bcb2 = 1;
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__Set_3f0dba4(&uStack_40,iVar2 + param_2,0);
  return;
}

