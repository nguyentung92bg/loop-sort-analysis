/* IL2CPP: MonitorInstaller$$PostBuild
Cysharp_Threading_Tasks_UniTask_o MonitorInstaller__PostBuild (MonitorInstaller_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorInstaller$$PostBuild
   Cysharp_Threading_Tasks_UniTask_o MonitorInstaller__PostBuild (MonitorInstaller_o* __this, const
   MethodInfo* method); */

undefined1  [16] MonitorInstaller__PostBuild_256dabc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_28;
  
  if ((bRam0000000004f4c1a3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5a50);
    FUN_021f03f8(PTR_DAT_049caf10);
    FUN_021f03f8(PTR_DAT_049b5228);
    bRam0000000004f4c1a3 = 1;
  }
  puVar2 = PTR_DAT_049caf10;
  puVar1 = PTR_DAT_049b5228;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x10),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    LifetimeScopeH__InjectIfNotScoped_object__26546e4(uVar3,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x10) != 0) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                (*(long *)(param_1 + 0x10),&lStack_28,*(undefined8 *)PTR_DAT_049c5a50);
      if (lStack_28 != 0) {
        VContainer_Unity_LifetimeScope__Build_3f2bfc0(lStack_28,0);
        return ZEXT816(0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

