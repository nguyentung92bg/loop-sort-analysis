/* IL2CPP: CloudPrefsInt$$Set
void CloudPrefsInt__Set (CloudPrefsInt_o __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsInt$$Set
   void CloudPrefsInt__Set (CloudPrefsInt_o __this, int32_t value, const MethodInfo* method); */

void CloudPrefsInt__Set_24e9aa8(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c5aa8;
                    /* try { // try from 025e9ab0 to 026e9ab3 has its CatchHandler @ 025e9ac4 */
                    /* try { // try from 025e9ab4 to 026e9ab7 has its CatchHandler @ 025e9abc */
                    /* try { // try from 025e9ab8 to 026e9abb has its CatchHandler @ 025e9ac0 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e9ab4 with catch @ 025e9abc
                       try { // try from 025e9abc to 026e9adf has its CatchHandler @ 025e9924 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e9a84 with catch @ 025e9ac0
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025e9ab8 with catch @ 025e9ac0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e9a64 with catch @ 025e9ac4
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025e9ab0 with catch @ 025e9ac4
                        */
  if ((bRam0000000004f4bcb2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8);
                    /* try { // try from 025e9ae0 to 026e9ae3 has its CatchHandler @ 025e9b04 */
                    /* try { // try from 025e9ae4 to 026e9b07 has its CatchHandler @ 025e9924 */
    bRam0000000004f4bcb2 = 1;
  }
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* catch() { ... } // from try @ 025e9ae0 with catch @ 025e9b04 */
                    /* try { // try from 025e9b08 to 026e9b0f has its CatchHandler @ 025e9b18 */
  PlayerPrefsInt__Set_3f0dba4(&uStack_40,param_2,0);
                    /* try { // try from 025e9b10 to 026e9b1b has its CatchHandler @ 025e9924 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025e9b08 with catch @ 025e9b18
                        */
  return;
}

