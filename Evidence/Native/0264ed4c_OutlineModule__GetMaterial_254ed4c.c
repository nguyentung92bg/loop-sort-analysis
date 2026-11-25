/* IL2CPP: OutlineModule$$GetMaterial
UnityEngine_Material_o* OutlineModule__GetMaterial (OutlineModule_o* __this, System_Collections_Generic_Dictionary_ValueTuple_OutlineLayer__CompareFunction___Material__o* cache, UnityEngine_Shader_o* shader, int32_t layer, int32_t zTest, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineModule$$GetMaterial
   UnityEngine_Material_o* OutlineModule__GetMaterial (OutlineModule_o* __this,
   System_Collections_Generic_Dictionary_ValueTuple_OutlineLayer__CompareFunction___Material__o*
   cache, UnityEngine_Shader_o* shader, int32_t layer, int32_t zTest, const MethodInfo* method); */

long OutlineModule__GetMaterial_254ed4c
               (undefined8 param_1,long param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lStack_58;
  undefined8 uStack_50;
  int iStack_44;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049cabd0;
  if ((bRam0000000004f4c066 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cabd8);
    FUN_021f03f8(PTR_DAT_049cabe0);
    FUN_021f03f8(PTR_DAT_049b89f8);
    FUN_021f03f8(PTR_DAT_049cabb0);
    FUN_021f03f8(PTR_DAT_049cabd0);
    bRam0000000004f4c066 = 1;
  }
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_38 = CONCAT44(uStack_38._4_4_,param_4);
  iStack_44 = param_5;
  System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
            (&uStack_50,&uStack_38,&iStack_44,*(undefined8 *)puVar1);
  if (param_2 != 0) {
    uStack_38 = uStack_50;
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (param_2,&uStack_38,&lStack_58,*(undefined8 *)PTR_DAT_049cabd8);
    if ((uVar2 & 1) != 0) {
      return lStack_58;
    }
    lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b89f8);
    UnityEngine_Material___ctor_3be5d2c(lVar3,param_3,0);
    puVar1 = PTR_DAT_049cabb0;
    lStack_58 = lVar3;
    if (*(int *)(*(long *)PTR_DAT_049cabb0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if ((lVar3 != 0) &&
       (UnityEngine_Material__SetFloat_3bed9e8
                  ((float)param_5,lVar3,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0),
       lStack_58 != 0)) {
      UnityEngine_Material__SetFloat_3bed9e8
                ((float)param_4,lStack_58,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),0
                );
                    /* try { // try from 0264ee9c to 0274ef17 has its CatchHandler @ 0264ee9c
                       catch() { ... } // from try @ 0264ee9c with catch @ 0264ee9c
                       catch() { ... } // from try @ 0264f030 with catch @ 0264ee9c
                       catch() { ... } // from try @ 0264f06c with catch @ 0264ee9c
                       catch() { ... } // from try @ 0264f0c4 with catch @ 0264ee9c
                       catch() { ... } // from try @ 0264f12c with catch @ 0264ee9c */
      uStack_38 = uStack_50;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (param_2,&uStack_38,lStack_58,*(undefined8 *)PTR_DAT_049cabe0);
      return lStack_58;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

