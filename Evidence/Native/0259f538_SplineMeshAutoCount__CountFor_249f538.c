/* IL2CPP: SplineMeshAutoCount$$CountFor
int32_t SplineMeshAutoCount__CountFor (SplineMeshAutoCount_o* __this, float length, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SplineMeshAutoCount$$CountFor
   int32_t SplineMeshAutoCount__CountFor (SplineMeshAutoCount_o* __this, float length, const
   MethodInfo* method); */

int SplineMeshAutoCount__CountFor_249f538(float param_1,long param_2)

{
  int iVar1;
  float afStack_28 [2];
  
  if ((bRam0000000004f4bae0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c64f0);
    bRam0000000004f4bae0 = 1;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (*(long *)(param_2 + 0x20),0,afStack_28,*(undefined8 *)PTR_DAT_049c64f0);
    if (cRam0000000004f4b79c == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4b79c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    iVar1 = -0x80000000;
    if ((float)(int)(afStack_28[0] * param_1) != INFINITY) {
      iVar1 = (int)(afStack_28[0] * param_1);
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

