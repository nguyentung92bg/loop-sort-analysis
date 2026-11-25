/* IL2CPP: SceneScope$$Awake
void SceneScope__Awake (SceneScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneScope$$Awake
   void SceneScope__Awake (SceneScope_o* __this, const MethodInfo* method); */

void SceneScope__Awake_2554534(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b5228;
  if ((bRam0000000004f4c099 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cafc0);
    FUN_021f03f8(PTR_DAT_049b5228);
    bRam0000000004f4c099 = 1;
  }
  puVar2 = PTR_DAT_049cafc0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  LifetimeScopeH__InjectIfNotScoped_object__26546e4(param_1,*(undefined8 *)puVar2);
  if ((bRam0000000004f5c50f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b7168,0);
    bRam0000000004f5c50f = 1;
  }
  uVar3 = VContainer_Unity_VContainerSettings__get_DiagnosticsEnabled_3f2bee8();
  if ((uVar3 & 1) != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x48);
    uVar3 = System_String__IsNullOrEmpty_2f7c924(*puVar7,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = UnityEngine_Object__get_name_3c232a8(param_1,0);
      lVar5 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_24 = UnityEngine_Object__GetInstanceID_3c22f1c(lVar5,0);
      uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
      uVar4 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049b7168,uVar4,uVar6,0);
      *puVar7 = uVar4;
      thunk_FUN_021f190c(puVar7,uVar4);
    }
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    VContainer_Unity_LifetimeScope__Build_3f2bfc0(param_1);
  }
  return;
}

