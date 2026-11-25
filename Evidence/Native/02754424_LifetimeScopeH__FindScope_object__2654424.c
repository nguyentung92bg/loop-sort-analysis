/* IL2CPP: LifetimeScopeH$$FindScope<object>
VContainer_Unity_LifetimeScope_o* LifetimeScopeH__FindScope_object_ (const MethodInfo_2654424* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifetimeScopeH$$FindScope<object>
   VContainer_Unity_LifetimeScope_o* LifetimeScopeH__FindScope_object_ (const MethodInfo_2654424*
   method); */

undefined8 LifetimeScopeH__FindScope_object__2654424(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_28;
  
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_021f03f8(PTR_DAT_049cd9f0);
    FUN_021f03f8(PTR_DAT_049cd9f8);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049c8158);
    FUN_021f03f8(PTR_DAT_049b3b98);
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_02229774(param_1);
      puVar4 = *(undefined8 **)(param_1 + 0x38);
    }
  }
  uStack_28 = 0;
  uVar6 = *puVar4;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
  puVar1 = PTR_DAT_049b5228;
  lVar5 = *(long *)PTR_DAT_049b5228;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574(lVar5);
    lVar5 = *(long *)puVar1;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (**(long **)(lVar5 + 0xb8),uVar6,&uStack_28,*(undefined8 *)PTR_DAT_049cd9f0);
    uVar2 = uStack_28;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        return uStack_28;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_049c8158 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_28 = VContainer_Unity_LifetimeScope__Find_object__2654304
                          (*(undefined8 *)(*(long *)(param_1 + 0x38) + 8));
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574(lVar5);
      lVar5 = *(long *)puVar1;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (**(long **)(lVar5 + 0xb8),uVar6,uStack_28,*(undefined8 *)PTR_DAT_049cd9f8);
      return uStack_28;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

