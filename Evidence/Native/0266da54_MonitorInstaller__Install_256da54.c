/* IL2CPP: MonitorInstaller$$Install
void MonitorInstaller__Install (MonitorInstaller_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorInstaller$$Install
   void MonitorInstaller__Install (MonitorInstaller_o* __this, VContainer_IContainerBuilder_o*
   builder, const MethodInfo* method); */

long * MonitorInstaller__Install_256da54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_049cbf70;
  if ((bRam0000000004f4c1a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbf70);
    bRam0000000004f4c1a2 = 1;
  }
  plVar2 = (long *)VContainer_Unity_ContainerBuilderUnityExtensions__RegisterComponent___Il2CppFullySharedGenericType__25c7a64
                             (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x198))(plVar2,plVar2[2],*(undefined8 *)(*plVar2 + 0x1a0));
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

