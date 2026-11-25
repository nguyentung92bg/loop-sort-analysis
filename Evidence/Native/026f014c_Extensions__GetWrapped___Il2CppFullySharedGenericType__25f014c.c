/* IL2CPP: Extensions$$GetWrapped<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Extensions__GetWrapped___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, int32_t index, const MethodInfo_25F014C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$GetWrapped<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Extensions__GetWrapped___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, int32_t index, const
   MethodInfo_25F014C* method); */

void Extensions__GetWrapped___Il2CppFullySharedGenericType__25f014c
               (long *param_1,int param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_4 + 0x38);
                    /* try { // try from 026f015c to 027f0167 has its CatchHandler @ 026f022c */
  if (lVar3 == 0) {
                    /* try { // try from 026f0174 to 027f0183 has its CatchHandler @ 026f0228 */
    FUN_02229774(param_4);
    lVar3 = *(long *)(param_4 + 0x38);
  }
                    /* try { // try from 026f0184 to 027f01ef has its CatchHandler @ 026efc38 */
  if (((param_1 == (long *)0x0) || (param_2 < 0)) || (param_1[3] == 0)) {
    (*(code *)PTR_memset_04a701c8)(param_3,0,*(undefined4 *)(*(long *)(lVar3 + 8) + 0xfc));
    return;
  }
  iVar2 = 0;
  uVar4 = (uint)param_1[3];
  if (uVar4 != 0) {
    iVar2 = param_2 / (int)uVar4;
  }
  uVar1 = param_2 - iVar2 * uVar4;
  if (uVar1 < uVar4) {
    (*(code *)PTR_memmove_04a701b8)
              (param_3,(long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * (ulong)uVar1 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

