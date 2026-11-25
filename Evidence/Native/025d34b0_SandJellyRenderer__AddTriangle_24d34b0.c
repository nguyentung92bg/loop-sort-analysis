/* IL2CPP: SandJellyRenderer$$AddTriangle
void SandJellyRenderer__AddTriangle (System_Collections_Generic_List_int__o* indices, System_Collections_Generic_List_Vector3__o* shape, UnityEngine_Vector3_o face, int32_t a, int32_t b, int32_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandJellyRenderer$$AddTriangle
   void SandJellyRenderer__AddTriangle (System_Collections_Generic_List_int__o* indices,
   System_Collections_Generic_List_Vector3__o* shape, UnityEngine_Vector3_o face, int32_t a, int32_t
   b, int32_t c, const MethodInfo* method); */

void SandJellyRenderer__AddTriangle_24d34b0
               (float param_1,float param_2,float param_3,long param_4,long param_5,float param_6,
               float param_7,float param_8)

{
  float fVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  if ((bRam0000000004f4bc26 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049be138);
    FUN_021f03f8(PTR_DAT_049bed78);
    bRam0000000004f4bc26 = 1;
  }
  puVar2 = PTR_DAT_049bed78;
  if (param_5 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (param_5,param_7,&fStack_80,*(undefined8 *)PTR_DAT_049bed78);
    fVar9 = fStack_78;
    fVar6 = fStack_7c;
    fVar3 = fStack_80;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (param_5,param_6,&fStack_80,*(undefined8 *)puVar2);
    fVar10 = fStack_78;
    fVar7 = fStack_7c;
    fVar4 = fStack_80;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (param_5,param_8,&fStack_80,*(undefined8 *)puVar2);
    fVar11 = fStack_78;
    fVar8 = fStack_7c;
    fVar5 = fStack_80;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (param_5,param_6,&fStack_80,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_049be138;
    if (param_4 != 0) {
      uVar12 = NEON_rev64(CONCAT44(fVar6 - fVar7,fVar3 - fVar4),4);
      fVar1 = param_7;
      if (0.0 <= param_3 * ((fVar3 - fVar4) * (fVar8 - fStack_7c) -
                           (float)uVar12 * (fVar5 - fStack_80)) +
                 param_1 * ((fVar6 - fVar7) * (fVar11 - fStack_78) -
                           (fVar9 - fVar10) * (fVar8 - fStack_7c)) +
                 param_2 * ((fVar9 - fVar10) * (fVar5 - fStack_80) -
                           (float)((ulong)uVar12 >> 0x20) * (fVar11 - fStack_78))) {
        fVar1 = param_8;
        param_8 = param_7;
      }
      fStack_80 = param_6;
      FUN_02333498(param_4,&fStack_80,*(undefined8 *)PTR_DAT_049be138);
      fStack_80 = param_8;
      FUN_02333498(param_4,&fStack_80,*(undefined8 *)puVar2);
      fStack_80 = fVar1;
      FUN_02333498(param_4,&fStack_80,*(undefined8 *)puVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

