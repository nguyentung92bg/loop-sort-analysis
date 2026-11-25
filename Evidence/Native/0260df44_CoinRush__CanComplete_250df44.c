/* IL2CPP: CoinRush$$CanComplete
bool CoinRush__CanComplete (CoinRush_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRush$$CanComplete
   bool CoinRush__CanComplete (CoinRush_o* __this, const MethodInfo* method); */

uint CoinRush__CanComplete_250df44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bde3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9190);
    FUN_021f03f8(PTR_DAT_049c9198);
    FUN_021f03f8(PTR_DAT_049c91a0);
    FUN_021f03f8(PTR_DAT_049c91a8);
    bRam0000000004f4bde3 = 1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uVar4 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_60,0);
  if ((uVar4 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_40 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar5,*(undefined8 *)PTR_DAT_049c91a8);
    puVar2 = PTR_DAT_049c91a0;
    puVar1 = PTR_DAT_049c9198;
    puStack_68 = auStack_40;
    uStack_70 = 0;
    do {
      do {
        uVar3 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                          (auStack_40,*(undefined8 *)puVar1);
        if ((uVar3 & 1) == 0) goto LAB_0260e04c;
        lVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                          (auStack_40,*(undefined8 *)puVar2);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_88 = *(undefined8 *)(lVar5 + 0x48);
        uStack_90 = *(undefined8 *)(lVar5 + 0x40);
        uStack_78 = *(undefined8 *)(lVar5 + 0x58);
        uStack_80 = *(undefined8 *)(lVar5 + 0x50);
        uVar4 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_90,0);
      } while ((uVar4 & 1) == 0);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x28);
      uStack_b0 = *(undefined8 *)(lVar5 + 0x20);
      uStack_98 = *(undefined8 *)(lVar5 + 0x38);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x30);
      uVar4 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_b0,0);
    } while ((uVar4 & 1) != 0);
LAB_0260e04c:
    uVar3 = uVar3 ^ 1;
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_40,*(undefined8 *)PTR_DAT_049c9190);
  }
  return uVar3 & 1;
}

