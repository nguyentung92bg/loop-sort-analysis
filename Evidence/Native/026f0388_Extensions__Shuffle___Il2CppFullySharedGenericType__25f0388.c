/* IL2CPP: Extensions$$Shuffle<__Il2CppFullySharedGenericType>
void Extensions__Shuffle___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, const MethodInfo_25F0388* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$Shuffle<__Il2CppFullySharedGenericType>
   void Extensions__Shuffle___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, const MethodInfo_25F0388*
   method); */

void Extensions__Shuffle___Il2CppFullySharedGenericType__25f0388(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
                    /* catch() { ... } // from try @ 026f01f0 with catch @ 026f0388
                       catch() { ... } // from try @ 026f01f8 with catch @ 026f0388 */
                    /* try { // try from 026f03a4 to 027f03bb has its CatchHandler @ 026f041c */
  if ((*(long *)(param_2 + 0x38) == 0) &&
     (FUN_021f03f8(PTR_DAT_049b5480), *(long *)(param_2 + 0x38) == 0)) {
                    /* try { // try from 026f03bc to 027f040b has its CatchHandler @ 026efc38 */
    FUN_02229774(param_2);
  }
  puVar2 = PTR_DAT_049b5480;
  if ((param_1 != 0) && (uVar4 = *(uint *)(param_1 + 0x18), 1 < (int)uVar4)) {
    do {
      uVar3 = UnityEngine_Random__Range_3c11c94(0,uVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar2);
      }
                    /* try { // try from 026f040c to 027f041b has its CatchHandler @ 026f041c */
      Extensions__Swap___Il2CppFullySharedGenericType__25f15a4
                (param_1,uVar4 - 1,uVar3,*(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
                    /* catch() { ... } // from try @ 026f03a4 with catch @ 026f041c
                       catch() { ... } // from try @ 026f040c with catch @ 026f041c */
                    /* try { // try from 026f0420 to 027f0423 has its CatchHandler @ 026f042c */
                    /* try { // try from 026f0424 to 027f042f has its CatchHandler @ 026efc38 */
      bVar1 = 2 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
                    /* catch() { ... } // from try @ 026f0348 with catch @ 026f042c
                       catch() { ... } // from try @ 026f037c with catch @ 026f042c
                       catch() { ... } // from try @ 026f0420 with catch @ 026f042c */
  return;
}

