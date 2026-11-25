/* IL2CPP: Boosters$$Get
Boosters_Data_o Boosters__Get (Boosters_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Boosters$$Get
   Boosters_Data_o Boosters__Get (Boosters_o* __this, int32_t boosterType, const MethodInfo*
   method); */

void Boosters__Get_24e5ab0(undefined8 *param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
                    /* catch() { ... } // from try @ 025e54a4 with catch @ 025e5ab0 */
                    /* catch() { ... } // from try @ 025e54d0 with catch @ 025e5ab4 */
                    /* catch() { ... } // from try @ 025e5a10 with catch @ 025e5ab8 */
                    /* catch() { ... } // from try @ 025e53fc with catch @ 025e5abc */
                    /* catch() { ... } // from try @ 025e5700 with catch @ 025e5ac0 */
                    /* catch() { ... } // from try @ 025e5a04 with catch @ 025e5ac4 */
                    /* catch() { ... } // from try @ 025e5a00 with catch @ 025e5ac8 */
                    /* catch() { ... } // from try @ 025e5360 with catch @ 025e5acc */
                    /* catch() { ... } // from try @ 025e532c with catch @ 025e5ad0 */
                    /* catch() { ... } // from try @ 025e5a0c with catch @ 025e5ad4 */
  if ((bRam0000000004f4bc83 & 1) == 0) {
                    /* catch() { ... } // from try @ 025e5a08 with catch @ 025e5ad8 */
                    /* catch() { ... } // from try @ 025e531c with catch @ 025e5adc */
                    /* catch() { ... } // from try @ 025e52e4 with catch @ 025e5ae0 */
    FUN_021f03f8(PTR_DAT_049c7b38);
    bRam0000000004f4bc83 = 1;
  }
                    /* catch() { ... } // from try @ 025e5424 with catch @ 025e5aec */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
                    /* try { // try from 025e5b0c to 026e5b0f has its CatchHandler @ 025e5b7c */
    uStack_24 = param_3;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_2 + 0x18),&uStack_24,&uStack_60,
                       *(undefined8 *)PTR_DAT_049c7b38);
    if ((uVar1 & 1) == 0) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
                    /* try { // try from 025e5b20 to 026e5b23 has its CatchHandler @ 025e5bc4 */
                    /* try { // try from 025e5b24 to 026e5b77 has its CatchHandler @ 025e4fcc */
      param_1[5] = uStack_38;
      param_1[4] = uStack_40;
      param_1[1] = uStack_58;
      *param_1 = uStack_60;
      param_1[3] = uStack_48;
      param_1[2] = uStack_50;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

