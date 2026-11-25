/* IL2CPP: CoinRush$$GetFocusId
int32_t CoinRush__GetFocusId (CoinRush_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRush$$GetFocusId
   int32_t CoinRush__GetFocusId (CoinRush_o* __this, const MethodInfo* method); */

undefined4 CoinRush__GetFocusId_250e2cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [16];
  undefined4 uStack_44;
  
  if ((bRam0000000004f4bde6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9190);
    FUN_021f03f8(PTR_DAT_049c9198);
    FUN_021f03f8(PTR_DAT_049c91a0);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c91a8);
    bRam0000000004f4bde6 = 1;
  }
  puVar4 = PTR_DAT_049c91a0;
  puVar3 = PTR_DAT_049c9198;
  puVar2 = PTR_DAT_049c9190;
  puVar1 = PTR_DAT_049c2cf0;
  auStack_58._0_8_ = 0;
  auStack_58._8_8_ = 0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auStack_58 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                         (lVar5,*(undefined8 *)PTR_DAT_049c91a8);
  puStack_60 = auStack_58;
  uStack_68 = 0;
  uVar9 = 0;
  do {
    do {
      uVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_58,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
LAB_0260e444:
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_58,*(undefined8 *)puVar2);
        return uVar9;
      }
      lVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_58,*(undefined8 *)puVar4);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_88 = *(undefined8 *)(lVar5 + 0x48);
      uStack_90 = *(undefined8 *)(lVar5 + 0x40);
      uStack_78 = *(undefined8 *)(lVar5 + 0x58);
      uStack_80 = *(undefined8 *)(lVar5 + 0x50);
      uVar6 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_90,0);
    } while ((uVar6 & 1) == 0);
    uStack_a8 = *(undefined8 *)(lVar5 + 0x28);
    uStack_b0 = *(undefined8 *)(lVar5 + 0x20);
    uStack_98 = *(undefined8 *)(lVar5 + 0x38);
    uStack_a0 = *(undefined8 *)(lVar5 + 0x30);
    uVar6 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_b0,0);
    if ((uVar6 & 1) == 0) {
      plVar8 = *(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0);
      uVar9 = *(undefined4 *)(plVar8[1] + 0xfc);
      uVar7 = thunk_FUN_0224e54c(lVar5,*(undefined8 *)(*plVar8 + 0x80));
      func_0x04608620(&uStack_44,uVar7,uVar9);
      uVar9 = uStack_44;
      goto LAB_0260e444;
    }
    plVar8 = *(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0);
    uVar9 = *(undefined4 *)(plVar8[1] + 0xfc);
    uVar7 = thunk_FUN_0224e54c(lVar5,*(undefined8 *)(*plVar8 + 0x80));
    func_0x04608620(&uStack_44,uVar7,uVar9);
    uVar9 = uStack_44;
  } while( true );
}

