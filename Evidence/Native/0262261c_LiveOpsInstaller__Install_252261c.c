/* IL2CPP: LiveOpsInstaller$$Install
void LiveOpsInstaller__Install (LiveOpsInstaller_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02622894) */
/* IL2CPP: LiveOpsInstaller$$Install
   void LiveOpsInstaller__Install (LiveOpsInstaller_o* __this, VContainer_IContainerBuilder_o*
   builder, const MethodInfo* method); */

void LiveOpsInstaller__Install_252261c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_049c9870;
  if ((bRam0000000004f4be7c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8170);
    FUN_021f03f8(PTR_DAT_049c8178);
    FUN_021f03f8(PTR_DAT_049c8180);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c81a0);
    FUN_021f03f8(PTR_DAT_049c9870);
    FUN_021f03f8(PTR_DAT_049c81a8);
    FUN_021f03f8(PTR_DAT_049c9878);
    bRam0000000004f4be7c = 1;
  }
  puVar3 = PTR_DAT_049b5480;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uVar11 = *(undefined8 *)puVar4;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar11 = System_Type__GetTypeFromHandle_310ebfc(uVar11,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  auStack_50 = Extensions__GetDerivedClassTypes_3f0c910(uVar11,&lStack_58,0);
  puStack_78 = auStack_50;
  lStack_80 = 0;
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lStack_58,&uStack_98,*(undefined8 *)PTR_DAT_049c81a0);
  puVar6 = PTR_DAT_049c9878;
  puVar5 = PTR_DAT_049c8180;
  puVar3 = PTR_DAT_049c8178;
  puVar4 = PTR_DAT_049c8170;
  uStack_68 = puStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  puStack_90 = &uStack_70;
  uStack_98 = 0;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar3);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar4);
      lVar9 = lStack_80;
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (puStack_78,*(undefined8 *)PTR_DAT_049c81a8);
      if (lVar9 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar9);
    }
    lVar12 = *(long *)puVar5;
    lVar8 = *(long *)(lVar12 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar11 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_38,uVar11,uVar1);
    lVar9 = FUN_0235c5e4(param_2,uStack_38,1,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar10 = (long *)VContainer_RegistrationBuilder__As___Il2CppFullySharedGenericType__26a4310
                                (lVar9,*(undefined8 *)puVar6);
    if (plVar10 == (long *)0x0) break;
    (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

