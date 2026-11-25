/* IL2CPP: CameraInstaller$$Install
void CameraInstaller__Install (CameraInstaller_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CameraInstaller$$Install
   void CameraInstaller__Install (CameraInstaller_o* __this, VContainer_IContainerBuilder_o*
   builder, const MethodInfo* method); */

void CameraInstaller__Install_2508ca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c8f50;
  if ((bRam0000000004f4bdaf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8f58);
    FUN_021f03f8(PTR_DAT_049c8f60);
    FUN_021f03f8(PTR_DAT_049c8f68);
    FUN_021f03f8(PTR_DAT_049c8f50);
    FUN_021f03f8(PTR_DAT_049c8f70);
    bRam0000000004f4bdaf = 1;
  }
  lVar2 = VContainer_Unity_ContainerBuilderUnityExtensions__RegisterComponent___Il2CppFullySharedGenericType__25c7a64
                    (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar2,0);
    puVar1 = PTR_DAT_049c8f68;
    if (*(long *)(param_1 + 0x10) != 0) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                (*(long *)(param_1 + 0x10),&uStack_28,*(undefined8 *)PTR_DAT_049c8f58);
      lVar2 = VContainer_Unity_ContainerBuilderUnityExtensions__RegisterComponent___Il2CppFullySharedGenericType__25c7a64
                        (param_2,uStack_28,*(undefined8 *)puVar1);
      if (lVar2 != 0) {
        VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar2,0);
        puVar1 = PTR_DAT_049c8f70;
        if (*(long *)(param_1 + 0x10) != 0) {
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (*(long *)(param_1 + 0x10),&uStack_28,*(undefined8 *)PTR_DAT_049c8f60);
          lVar2 = VContainer_Unity_ContainerBuilderUnityExtensions__RegisterComponent___Il2CppFullySharedGenericType__25c7a64
                            (param_2,uStack_28,*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

