/* IL2CPP: MonitorScope$$Configure
void MonitorScope__Configure (MonitorScope_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorScope$$Configure
   void MonitorScope__Configure (MonitorScope_o* __this, VContainer_IContainerBuilder_o* builder,
   const MethodInfo* method); */

void MonitorScope__Configure_256dea8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  if ((bRam0000000004f4c1a5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbfa0);
    FUN_021f03f8(PTR_DAT_049cbfa8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4c1a5 = 1;
  }
  VContainer_Unity_LifetimeScope__Configure_3f2c494(param_1,param_2,0);
  puVar3 = PTR_DAT_049cbfa8;
  puVar2 = PTR_DAT_049cbfa0;
  puVar1 = PTR_DAT_049b3b98;
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x70) + 0x18), lVar9 != 0)) {
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar10 = 0;
      uVar7 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar8 = *(undefined8 *)(lVar9 + 0x20 + uVar10 * 8);
        uVar4 = UnityEngine_Component__get_transform_3c18724(param_1,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar1);
        }
        uVar4 = UnityEngine_Object__Instantiate_object__2695b80(uVar8,uVar4,*(undefined8 *)puVar3);
        lVar5 = VContainer_Unity_ContainerBuilderUnityExtensions__RegisterComponent___Il2CppFullySharedGenericType__25c7a64
                          (param_2,uVar4,*(undefined8 *)puVar2);
        if ((lVar5 == 0) ||
           (plVar6 = (long *)VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar5,0),
           plVar6 == (long *)0x0)) goto LAB_0266dffc;
        (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_0266dffc;
        Monitors__Register_256e004(*(long *)(param_1 + 0x68),uVar4);
        uVar7 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    return;
  }
LAB_0266dffc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

