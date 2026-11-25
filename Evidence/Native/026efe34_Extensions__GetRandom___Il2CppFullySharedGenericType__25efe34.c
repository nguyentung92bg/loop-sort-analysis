/* IL2CPP: Extensions$$GetRandom<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Extensions__GetRandom___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* collection, const MethodInfo_25EFE34* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$GetRandom<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Extensions__GetRandom___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* collection, const
   MethodInfo_25EFE34* method); */

void Extensions__GetRandom___Il2CppFullySharedGenericType__25efe34
               (long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x38);
  if (lVar3 == 0) {
    FUN_02229774(param_3);
    lVar3 = *(long *)(param_3 + 0x38);
  }
  uVar1 = *(undefined4 *)(*(long *)(lVar3 + 8) + 0xfc);
  if ((param_1 != (long *)0x0) && (param_1[3] != 0)) {
    uVar2 = UnityEngine_Random__Range_3c11c94(0,param_1[3],0);
    if (uVar2 < *(uint *)(param_1 + 3)) {
                    /* try { // try from 026efe90 to 027efebf has its CatchHandler @ 026f0268 */
      (*(code *)PTR_memmove_04a701b8)
                (param_2,(long)param_1 +
                         (ulong)*(uint *)(*param_1 + 0x104) * (long)(int)uVar2 + 0x20,uVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  (*(code *)PTR_memset_04a701c8)(param_2,0,uVar1);
  return;
}

