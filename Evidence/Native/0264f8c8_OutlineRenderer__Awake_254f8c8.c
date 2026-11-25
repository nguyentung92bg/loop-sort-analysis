/* IL2CPP: OutlineRenderer$$Awake
void OutlineRenderer__Awake (OutlineRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineRenderer$$Awake
   void OutlineRenderer__Awake (OutlineRenderer_o* __this, const MethodInfo* method); */

void OutlineRenderer__Awake_254f8c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049cac90;
  if ((bRam0000000004f4c06f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cac98);
    FUN_021f03f8(PTR_DAT_049caca0);
    FUN_021f03f8(PTR_DAT_049caca8);
    FUN_021f03f8(PTR_DAT_049c2458);
    FUN_021f03f8(PTR_DAT_049cacb0);
    FUN_021f03f8(PTR_DAT_049cacb8);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049cac90);
    bRam0000000004f4c06f = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar5 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FUN_0235c744(*(undefined8 *)(lVar5 + 0x50),&uStack_38,*(undefined8 *)PTR_DAT_049cacb8);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uStack_38;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  }
  puVar2 = PTR_DAT_049cac98;
  puVar1 = PTR_DAT_049c2458;
  if (*(int *)(*(long *)PTR_DAT_049caca8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049cacb0;
  puVar3 = PTR_DAT_049caca0;
  uVar6 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_280447c
                    (*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  thunk_FUN_021f190c();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar6 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_280447c
                    (*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  thunk_FUN_021f190c();
  UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c22a8
            (param_1,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)puVar4);
  return;
}

