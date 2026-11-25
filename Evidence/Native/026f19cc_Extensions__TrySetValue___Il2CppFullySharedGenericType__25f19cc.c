/* IL2CPP: Extensions$$TrySetValue<__Il2CppFullySharedGenericType>
bool Extensions__TrySetValue___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, int32_t index, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_25F19CC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$TrySetValue<__Il2CppFullySharedGenericType>
   bool Extensions__TrySetValue___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, int32_t index,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_25F19CC* method);
    */

void Extensions__TrySetValue___Il2CppFullySharedGenericType__25f19cc
               (long *param_1,uint param_2,undefined8 ****param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 ***pppuStack_60;
  long lStack_58;
  
                    /* try { // try from 026f19e4 to 027f19e7 has its CatchHandler @ 026f19f4 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 026f19e4 with catch @ 026f19f4 */
  lStack_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 026f19fc to 027f1a03 has its CatchHandler @ 026f2220 */
  lVar3 = *(long *)(param_4 + 0x38);
  pppuStack_60 = param_3;
  if (lVar3 == 0) {
    FUN_02229774(param_4);
    lVar3 = *(long *)(param_4 + 0x38);
  }
                    /* try { // try from 026f1a1c to 027f1a9b has its CatchHandler @ 026f2124 */
  uVar5 = (ulong)*(uint *)(*(long *)(lVar3 + 8) + 0xfc);
  lVar4 = (long)&pppuStack_60 - (uVar5 + 0xf & 0x1fffffff0);
  lVar2 = 0;
  if (((param_1 != (long *)0x0) && (-1 < (int)param_2)) && ((int)param_2 < (int)param_1[3])) {
    if (-1 < *(int *)(*(long *)(lVar3 + 8) + 0x28)) {
      param_3 = &pppuStack_60;
    }
    func_0x04608620(lVar4,param_3,uVar5);
    func_0x04608650((long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * (ulong)param_2 + 0x20,
                    param_3,uVar5);
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
                    /* try { // try from 026f1aac to 027f1ab3 has its CatchHandler @ 026f2120 */
    if (*(uint *)(param_1 + 3) <= param_2) {
      if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      goto LAB_026f1b14;
    }
    FUN_021f03a8(lVar2,(long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * (ulong)param_2 + 0x20,
                 lVar4);
    lVar2 = 1;
  }
                    /* try { // try from 026f1ad8 to 027f1b23 has its CatchHandler @ 026f212c */
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
LAB_026f1b14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}

