/* IL2CPP: Extensions.<>c__32<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>$$<BindToPropertyBlock>b__32_0
void Extensions___c__32___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToPropertyBlock_b__32_0 (Extensions___c__32_TOptions__TAdapter__o* __this, float v, System_ValueTuple_Renderer__string__int__o tuple, const MethodInfo_2778580* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions.<>c__32<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>$$<BindToPropertyBlock>b__32_0
   void 
   Extensions___c__32___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToPropertyBlock_b__32_0
   (Extensions___c__32_TOptions__TAdapter__o* __this, float v,
   System_ValueTuple_Renderer__string__int__o tuple, const MethodInfo_2778580* method); */

void Extensions___c__32___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToPropertyBlock_b__32_0_2778580
               (undefined4 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_50 [16];
  long lStack_38;
  
  puVar5 = PTR_DAT_049c1538;
  if ((bRam0000000004f4c4c6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1530);
    FUN_021f03f8(PTR_DAT_049c1538);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c72b8);
    FUN_021f03f8(PTR_DAT_049c1570);
    bRam0000000004f4c4c6 = 1;
  }
  puVar4 = PTR_DAT_049c1530;
  lVar1 = *param_3;
  lVar2 = param_3[1];
  lVar3 = param_3[2];
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_049c1570;
  auStack_50 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_38,*(undefined8 *)puVar4);
  if (lVar1 != 0) {
    UnityEngine_Renderer__GetSharedMaterials_3bddd80(lVar1,lStack_38,0);
    puVar4 = PTR_DAT_049b6110;
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if ((int)lVar3 < *(int *)(lStack_38 + 0x18)) {
      lVar6 = *(long *)PTR_DAT_049b6110;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar4;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_MaterialPropertyBlock__Clear_3bdb93c(lVar6,0);
      lVar6 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_MaterialPropertyBlock__SetFloat_3bdbcdc(param_1,lVar6,lVar2,0);
      UnityEngine_Renderer__SetPropertyBlock_3bdc9f0
                (lVar1,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),(int)lVar3,0);
    }
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (auStack_50,*(undefined8 *)puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

