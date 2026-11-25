/* IL2CPP: GameMachineInstaller$$Install
void GameMachineInstaller__Install (GameMachineInstaller_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025fb928) */
/* IL2CPP: GameMachineInstaller$$Install
   void GameMachineInstaller__Install (GameMachineInstaller_o* __this,
   VContainer_IContainerBuilder_o* builder, const MethodInfo* method); */

void GameMachineInstaller__Install_24fb6a4(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049c8a10;
  if ((bRam0000000004f4bd4d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8a10);
    FUN_021f03f8(PTR_DAT_049c8170);
    FUN_021f03f8(PTR_DAT_049c8178);
    FUN_021f03f8(PTR_DAT_049c8180);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c89e8);
    FUN_021f03f8(PTR_DAT_049c81a0);
    FUN_021f03f8(PTR_DAT_049c81a8);
    bRam0000000004f4bd4d = 1;
  }
  auStack_48._0_8_ = 0;
  auStack_48._8_8_ = 0;
  lStack_50 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar6 = VContainer_Unity_ContainerBuilderUnityExtensions__RegisterEntryPoint___Il2CppFullySharedGenericType__25c81b0
                    (param_2,1,*(undefined8 *)puVar3);
  puVar4 = PTR_DAT_049c89e8;
  puVar3 = PTR_DAT_049b5480;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar6,0);
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar10 = System_Type__GetTypeFromHandle_310ebfc(uVar10,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  auStack_48 = Extensions__GetDerivedClassTypes_3f0c910(uVar10,&lStack_50,0);
  puStack_78 = auStack_48;
  lStack_80 = 0;
  if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lStack_50,&uStack_98,*(undefined8 *)PTR_DAT_049c81a0);
  puVar5 = PTR_DAT_049c8180;
  puVar4 = PTR_DAT_049c8178;
  puVar3 = PTR_DAT_049c8170;
  uStack_68 = puStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  puStack_90 = &uStack_70;
  uStack_98 = 0;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar3);
      lVar6 = lStack_80;
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (puStack_78,*(undefined8 *)PTR_DAT_049c81a8);
      if (lVar6 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar6);
    }
    lVar11 = *(long *)puVar5;
    lVar8 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar6 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_02229718();
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_38,uVar10,uVar1);
    lVar6 = FUN_0235c5e4(param_2,uStack_38,1,0);
    if (lVar6 == 0) break;
    plVar9 = (long *)VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar6,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

