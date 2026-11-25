/* IL2CPP: ProfileEditMonitor$$RefreshAvatarElements
void ProfileEditMonitor__RefreshAvatarElements (ProfileEditMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$RefreshAvatarElements
   void ProfileEditMonitor__RefreshAvatarElements (ProfileEditMonitor_o* __this, const MethodInfo*
   method); */

void ProfileEditMonitor__RefreshAvatarElements_2454e58(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4b8ec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c49a8);
    FUN_021f03f8(PTR_DAT_049c49b0);
    FUN_021f03f8(PTR_DAT_049c49b8);
    FUN_021f03f8(PTR_DAT_049c49c0);
    FUN_021f03f8(PTR_DAT_049c49c8);
    bRam0000000004f4b8ec = 1;
  }
  puVar6 = PTR_DAT_049c49c8;
  puVar5 = PTR_DAT_049c49c0;
  puVar4 = PTR_DAT_049c49b8;
  puVar3 = PTR_DAT_049c49b0;
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_48 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
            (*(long *)(param_1 + 0xe8),&uStack_90,*(undefined8 *)PTR_DAT_049c49a8);
  while (uVar7 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                           (&uStack_90,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
    lVar11 = *(long *)puVar5;
    lVar8 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_90,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_60,uVar10,uVar1);
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
              (&uStack_a0,&uStack_48,&uStack_a8,*(undefined8 *)puVar6);
    uVar10 = uStack_a8;
    uVar7 = System_String__Equals_2f7b554(*(undefined8 *)(param_1 + 200),uStack_48,3,0);
    uVar1 = 0xf7b703e5;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0x5f10e269;
    }
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (uVar10,uVar1,0);
  }
  System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
            (&uStack_90,*(undefined8 *)puVar3);
  return;
}

