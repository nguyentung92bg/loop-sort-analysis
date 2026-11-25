/* IL2CPP: CoinRush$$SetCompletedStates
void CoinRush__SetCompletedStates (CoinRush_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRush$$SetCompletedStates
   void CoinRush__SetCompletedStates (CoinRush_o* __this, const MethodInfo* method); */

void CoinRush__SetCompletedStates_250d9b4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  int iStack_44;
  
  if ((bRam0000000004f4bde4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9190);
    FUN_021f03f8(PTR_DAT_049c9198);
    FUN_021f03f8(PTR_DAT_049c91a0);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c91a8);
    bRam0000000004f4bde4 = 1;
  }
  puVar5 = PTR_DAT_049c91a0;
  puVar4 = PTR_DAT_049c9198;
  puVar3 = PTR_DAT_049c9190;
  puVar2 = PTR_DAT_049c2cf0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0), lVar8 != 0)) {
    auStack_60 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar8,*(undefined8 *)PTR_DAT_049c91a8);
    puStack_88 = auStack_60;
    uStack_90 = 0;
    while( true ) {
      uVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_60,*(undefined8 *)puVar4);
      if ((uVar9 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_60,*(undefined8 *)puVar3);
        return;
      }
      lVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_60,*(undefined8 *)puVar5);
      iVar6 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x50,0);
      if (lVar8 == 0) break;
      plVar11 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar11[1] + 0xfc);
      uVar10 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar11 + 0x80));
      func_0x04608620(&iStack_44,uVar10,uVar1);
      if (iStack_44 <= iVar6) {
        uStack_78 = *(undefined8 *)(lVar8 + 0x48);
        uStack_80 = *(undefined8 *)(lVar8 + 0x40);
        uStack_68 = *(undefined8 *)(lVar8 + 0x58);
        uStack_70 = *(undefined8 *)(lVar8 + 0x50);
        CloudPrefsBool__Set_24eb1bc(&uStack_80,1,0);
        uStack_78 = *(undefined8 *)(lVar8 + 0x28);
        uStack_80 = *(undefined8 *)(lVar8 + 0x20);
        uStack_68 = *(undefined8 *)(lVar8 + 0x38);
        uStack_70 = *(undefined8 *)(lVar8 + 0x30);
        CloudPrefsBool__Set_24eb1bc(&uStack_80,1,0);
      }
      uStack_78 = *(undefined8 *)(lVar8 + 0x48);
      uStack_80 = *(undefined8 *)(lVar8 + 0x40);
      uStack_68 = *(undefined8 *)(lVar8 + 0x58);
      uStack_70 = *(undefined8 *)(lVar8 + 0x50);
      uVar9 = CloudPrefsBool__get_Value_24eb0d0(&uStack_80,0);
      if ((uVar9 & 1) == 0) {
        uStack_a8 = *(undefined8 *)(param_1 + 0x78);
        uStack_b0 = *(undefined8 *)(param_1 + 0x70);
        uStack_98 = *(undefined8 *)(param_1 + 0x88);
        uStack_a0 = *(undefined8 *)(param_1 + 0x80);
        iVar6 = *(int *)(lVar8 + 0x18);
        iVar7 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_b0,0);
        if (iVar6 <= iVar7) {
          uStack_78 = *(undefined8 *)(lVar8 + 0x48);
          uStack_80 = *(undefined8 *)(lVar8 + 0x40);
          uStack_68 = *(undefined8 *)(lVar8 + 0x58);
          uStack_70 = *(undefined8 *)(lVar8 + 0x50);
          CloudPrefsBool__Set_24eb1bc(&uStack_80,1,0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

