/* IL2CPP: Extensions$$GetClamped<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Extensions__GetClamped___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, int32_t index, const MethodInfo_25EFAD0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$GetClamped<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Extensions__GetClamped___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, int32_t index, const
   MethodInfo_25EFAD0* method); */

void Extensions__GetClamped___Il2CppFullySharedGenericType__25efad0
               (long *param_1,uint param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iStack_34;
  
                    /* try { // try from 026efad0 to 027efaf3 has its CatchHandler @ 026efb24 */
  lVar4 = *(long *)(param_4 + 0x38);
  if (lVar4 == 0) {
                    /* try { // try from 026efaf4 to 027efb0b has its CatchHandler @ 026ef124 */
    FUN_02229774(param_4);
    lVar4 = *(long *)(param_4 + 0x38);
  }
  iStack_34 = 0;
                    /* try { // try from 026efb0c to 027efb1b has its CatchHandler @ 026efb30 */
  uVar2 = *(undefined4 *)(*(long *)(lVar4 + 8) + 0xfc);
  if ((param_1 == (long *)0x0) || (uVar5 = param_1[3], uVar5 == 0)) {
    (*(code *)PTR_memset_04a701c8)(param_3,0,uVar2);
    return;
  }
                    /* catch() { ... } // from try @ 026efacc with catch @ 026efb20 */
  if ((int)param_2 < (int)uVar5) {
                    /* catch() { ... } // from try @ 026efad0 with catch @ 026efb24 */
    iStack_34 = System_Index__op_Implicit_30f94e8(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU),0);
                    /* catch() { ... } // from try @ 026efa98 with catch @ 026efb30
                       catch() { ... } // from try @ 026efb0c with catch @ 026efb30 */
    uVar5 = (ulong)*(uint *)(param_1 + 3);
  }
  else {
                    /* try { // try from 026efb58 to 027efb5b has its CatchHandler @ 026efb64 */
    iStack_34 = -2;
  }
                    /* catch() { ... } // from try @ 026efb58 with catch @ 026efb64 */
  uVar3 = System_Index__get_IsFromEnd_30f9438(&iStack_34,0);
                    /* try { // try from 026efb6c to 027efb73 has its CatchHandler @ 026efc28 */
                    /* try { // try from 026efb74 to 027efb9f has its CatchHandler @ 026ef124 */
                    /* catch() { ... } // from try @ 026ef294 with catch @ 026efb78
                       catch() { ... } // from try @ 026ef420 with catch @ 026efb78
                       catch() { ... } // from try @ 026ef6a8 with catch @ 026efb78
                       catch() { ... } // from try @ 026ef76c with catch @ 026efb78 */
  iVar1 = 0;
  if ((uVar3 & 1) != 0) {
    iVar1 = (int)uVar5 + 1;
  }
                    /* catch() { ... } // from try @ 026ef430 with catch @ 026efb84 */
  if ((uint)(iVar1 + iStack_34) < *(uint *)(param_1 + 3)) {
                    /* try { // try from 026efba0 to 027efbb7 has its CatchHandler @ 026efc18 */
    func_0x04608650(param_3,(long)param_1 +
                            (ulong)*(uint *)(*param_1 + 0x104) * (long)(iVar1 + iStack_34) + 0x20,
                    uVar2);
                    /* try { // try from 026efbb8 to 027efc07 has its CatchHandler @ 026ef124 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

