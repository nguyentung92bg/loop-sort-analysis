/* IL2CPP: CloudPrefsBool$$.ctor
void CloudPrefsBool___ctor (CloudPrefsBool_o __this, System_String_o* key, bool defaultValue, bool monotonic, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsBool$$.ctor
   void CloudPrefsBool___ctor (CloudPrefsBool_o __this, System_String_o* key, bool defaultValue,
   bool monotonic, const MethodInfo* method); */

void CloudPrefsBool___ctor_24eafb8(undefined8 *param_1,undefined8 param_2,uint param_3,byte param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049c7f20;
                    /* try { // try from 025eafbc to 026eafd3 has its CatchHandler @ 025eb064 */
                    /* try { // try from 025eafd4 to 026eb00f has its CatchHandler @ 025eaa84 */
  if ((bRam0000000004f4bcc8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f90);
    FUN_021f03f8(PTR_DAT_049c7f20);
    bRam0000000004f4bcc8 = 1;
  }
                    /* try { // try from 025eb010 to 026eb013 has its CatchHandler @ 025eb08c */
                    /* try { // try from 025eb014 to 026eb017 has its CatchHandler @ 025eb088 */
                    /* try { // try from 025eb018 to 026eb01b has its CatchHandler @ 025eb07c */
                    /* try { // try from 025eb01c to 026eb01f has its CatchHandler @ 025eaa84 */
                    /* try { // try from 025eb020 to 026eb023 has its CatchHandler @ 025eb06c */
  uStack_60 = 0;
  uStack_58 = 0;
                    /* try { // try from 025eb024 to 026eb02b has its CatchHandler @ 025eaa84 */
  PlayerPrefsBool___ctor_3f0e6ac(&uStack_60,param_2,param_3 & 1,0);
                    /* try { // try from 025eb02c to 026eb02f has its CatchHandler @ 025eb070 */
                    /* try { // try from 025eb030 to 026eb033 has its CatchHandler @ 025eb05c */
                    /* try { // try from 025eb034 to 026eb03b has its CatchHandler @ 025eb058 */
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  thunk_FUN_021f190c(param_1 + 1,0);
                    /* catch() { ... } // from try @ 025eaf64 with catch @ 025eb03c */
                    /* try { // try from 025eb044 to 026eb04b has its CatchHandler @ 025eb104 */
  param_1[3] = param_2;
  *(byte *)(param_1 + 2) = param_4 & 1;
                    /* try { // try from 025eb04c to 026eb0b3 has its CatchHandler @ 025eaa84 */
  thunk_FUN_021f190c(param_1 + 3,param_2);
                    /* catch() { ... } // from try @ 025eaec4 with catch @ 025eb050 */
                    /* catch() { ... } // from try @ 025ead9c with catch @ 025eb054 */
                    /* catch() { ... } // from try @ 025eb034 with catch @ 025eb058 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 025eb030 with catch @ 025eb05c */
    FUN_021f0574();
  }
                    /* catch() { ... } // from try @ 025ead74 with catch @ 025eb060 */
                    /* catch() { ... } // from try @ 025eafbc with catch @ 025eb064 */
  uVar2 = CloudPrefsRegistry__IsRegistered_24e91dc(param_2);
                    /* catch() { ... } // from try @ 025eac64 with catch @ 025eb068 */
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 025eb020 with catch @ 025eb06c */
                    /* catch() { ... } // from try @ 025eaf8c with catch @ 025eb070
                       catch() { ... } // from try @ 025eb02c with catch @ 025eb070 */
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_48 = param_1[3];
    uStack_50 = param_1[2];
                    /* catch() { ... } // from try @ 025eb018 with catch @ 025eb07c */
                    /* catch() { ... } // from try @ 025ead5c with catch @ 025eb080 */
                    /* catch() { ... } // from try @ 025ead38 with catch @ 025eb084 */
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c7f90,&uStack_60);
                    /* catch() { ... } // from try @ 025eb014 with catch @ 025eb088 */
    lVar4 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 025eb010 with catch @ 025eb08c */
                    /* catch() { ... } // from try @ 025eacb0 with catch @ 025eb090 */
                    /* catch() { ... } // from try @ 025eacd0 with catch @ 025eb094 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
    }
    CloudPrefsRegistry__Register_24e925c(uVar3);
  }
                    /* try { // try from 025eb0b4 to 026eb0b7 has its CatchHandler @ 025eb0c0 */
  return;
}

