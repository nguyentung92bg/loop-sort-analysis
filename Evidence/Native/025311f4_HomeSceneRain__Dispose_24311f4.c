/* IL2CPP: HomeSceneRain$$Dispose
void HomeSceneRain__Dispose (HomeSceneRain_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneRain$$Dispose
   void HomeSceneRain__Dispose (HomeSceneRain_o* __this, const MethodInfo* method); */

void HomeSceneRain__Dispose_24311f4(long param_1)

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
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f4b7da & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3898);
    FUN_021f03f8(PTR_DAT_049c38a0);
    FUN_021f03f8(PTR_DAT_049c38a8);
    FUN_021f03f8(PTR_DAT_049c38b0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7da = 1;
  }
  puVar6 = PTR_DAT_049c38a8;
  puVar5 = PTR_DAT_049c38a0;
  puVar4 = PTR_DAT_049c3898;
  puVar3 = PTR_DAT_049b3b98;
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x10),&uStack_80,*(undefined8 *)PTR_DAT_049c38b0);
  uStack_90 = 0;
  puStack_88 = &uStack_80;
  while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&uStack_80,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
    lVar11 = *(long *)puVar6;
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
    uVar10 = thunk_FUN_0224e54c(&uStack_80,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(auStack_c8,uVar10,uVar1);
    uVar10 = uStack_c0;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Object__Destroy_3c24380(uVar10,0);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_80,*(undefined8 *)puVar4);
  return;
}

