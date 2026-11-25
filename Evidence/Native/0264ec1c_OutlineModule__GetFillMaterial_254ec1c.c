/* IL2CPP: OutlineModule$$GetFillMaterial
UnityEngine_Material_o* OutlineModule__GetFillMaterial (OutlineModule_o* __this, int32_t layer, int32_t renderMode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineModule$$GetFillMaterial
   UnityEngine_Material_o* OutlineModule__GetFillMaterial (OutlineModule_o* __this, int32_t layer,
   int32_t renderMode, const MethodInfo* method); */

long OutlineModule__GetFillMaterial_254ec1c(long param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_58;
  undefined8 uStack_50;
  int iStack_44;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049cabd0;
  if (4 < param_3) {
    thunk_FUN_02256840(PTR_DAT_049b5000);
    uVar7 = thunk_FUN_0222ca34();
    System_ArgumentOutOfRangeException___ctor_306d788(uVar7,0);
    uVar3 = thunk_FUN_02256840(PTR_DAT_049cabb8);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar7,uVar3);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  iVar1 = *(int *)(&UNK_013e9fb8 + (ulong)param_3 * 4);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
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
  uStack_38 = CONCAT44(uStack_38._4_4_,param_2);
  iStack_44 = iVar1;
  System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
            (&uStack_50,&uStack_38,&iStack_44,*(undefined8 *)puVar2);
  if (lVar6 != 0) {
    uStack_38 = uStack_50;
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar6,&uStack_38,&lStack_58,*(undefined8 *)PTR_DAT_049cabd8);
    if ((uVar4 & 1) != 0) {
      return lStack_58;
    }
    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b89f8);
    UnityEngine_Material___ctor_3be5d2c(lVar5,uVar7,0);
    puVar2 = PTR_DAT_049cabb0;
    lStack_58 = lVar5;
    if (*(int *)(*(long *)PTR_DAT_049cabb0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if ((lVar5 != 0) &&
       (UnityEngine_Material__SetFloat_3bed9e8
                  ((float)iVar1,lVar5,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0),
       lStack_58 != 0)) {
      UnityEngine_Material__SetFloat_3bed9e8
                ((float)param_2,lStack_58,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),0
                );
      uStack_38 = uStack_50;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar6,&uStack_38,lStack_58,*(undefined8 *)PTR_DAT_049cabe0);
      return lStack_58;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

