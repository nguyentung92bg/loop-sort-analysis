/* IL2CPP: Extensions.<>c__34<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>$$<BindToLocalScaleAround>b__34_0
void Extensions___c__34___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToLocalScaleAround_b__34_0 (Extensions___c__34_TOptions__TAdapter__o* __this, UnityEngine_Vector3_o v, System_ValueTuple_Transform__Vector3__o tuple, const MethodInfo_2779A3C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions.<>c__34<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>$$<BindToLocalScaleAround>b__34_0
   void 
   Extensions___c__34___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToLocalScaleAround_b__34_0
   (Extensions___c__34_TOptions__TAdapter__o* __this, UnityEngine_Vector3_o v,
   System_ValueTuple_Transform__Vector3__o tuple, const MethodInfo_2779A3C* method); */

void Extensions___c__34___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToLocalScaleAround_b__34_0_2779a3c
               (float param_1,float param_2,float param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_049b5480;
  if ((bRam0000000004f4c4cb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4c4cb = 1;
  }
  fVar10 = *(float *)(param_5 + 1);
  fVar11 = *(float *)((long)param_5 + 0xc);
  lVar3 = *param_5;
  fVar12 = *(float *)(param_5 + 2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar3 != 0) {
    fVar7 = fVar11;
    fVar8 = fVar12;
    fVar4 = (float)UnityEngine_Transform__get_position_3c2d540(lVar3,0);
    fVar5 = fVar7 - fVar11;
    fVar9 = fVar8 - fVar12;
    fVar6 = (float)UnityEngine_Transform__get_localScale_3c2dd20(lVar3,0);
    UnityEngine_Transform__get_localScale_3c2dd20(lVar3,0);
    UnityEngine_Transform__get_localScale_3c2dd20(lVar3,0);
    UnityEngine_Transform__set_position_3c2d61c
              (fVar10 + (fVar4 - fVar10) * (param_1 / fVar6),fVar11 + fVar5 * (param_2 / fVar7),
               fVar12 + fVar9 * (param_3 / fVar8),lVar3,0);
    if ((bRam0000000004f58a11 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a26ad0,0);
      bRam0000000004f58a11 = 1;
    }
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
      }
      if (pcRam0000000004f58a78 == (code *)0x0) {
        pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
      }
      (*pcRam0000000004f58a78)(lVar2,&stack0xffffffffffffffd4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(0,0);
}

