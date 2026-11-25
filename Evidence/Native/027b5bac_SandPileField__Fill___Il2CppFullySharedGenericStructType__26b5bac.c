/* IL2CPP: SandPileField$$Fill<__Il2CppFullySharedGenericStructType>
void SandPileField__Fill___Il2CppFullySharedGenericStructType_ (Unity_Collections_NativeArray_T__o array, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o value, const MethodInfo_26B5BAC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField$$Fill<__Il2CppFullySharedGenericStructType>
   void SandPileField__Fill___Il2CppFullySharedGenericStructType_
   (Unity_Collections_NativeArray_T__o array,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o value, const MethodInfo_26B5BAC*
   method); */

void SandPileField__Fill___Il2CppFullySharedGenericStructType__26b5bac
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_4 + 0x38);
  uStack_68 = param_1;
  uStack_60 = param_2;
  if (lVar2 == 0) {
    FUN_02229774(param_4);
    lVar2 = *(long *)(param_4 + 0x38);
  }
  uVar3 = (ulong)*(uint *)(*(long *)(lVar2 + 8) + 0xfc);
  if (0 < (int)param_2) {
    iVar4 = 0;
    do {
      lVar2 = *(long *)(param_4 + 0x38);
      func_0x04608620(auStack_70 + -(uVar3 + 0xf & 0x1fffffff0),param_3,uVar3);
      FUN_026b0e44(&uStack_68,iVar4,auStack_70 + -(uVar3 + 0xf & 0x1fffffff0),
                   *(undefined8 *)(lVar2 + 0x10));
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

