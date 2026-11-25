/* IL2CPP: CoinRush$$GetTotalReward
int32_t CoinRush__GetTotalReward (CoinRush_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRush$$GetTotalReward
   int32_t CoinRush__GetTotalReward (CoinRush_o* __this, const MethodInfo* method); */

int CoinRush__GetTotalReward_250e178(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bde5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9190);
    FUN_021f03f8(PTR_DAT_049c9198);
    FUN_021f03f8(PTR_DAT_049c91a0);
    FUN_021f03f8(PTR_DAT_049c91a8);
    bRam0000000004f4bde5 = 1;
  }
  puVar3 = PTR_DAT_049c91a0;
  puVar2 = PTR_DAT_049c9198;
  puVar1 = PTR_DAT_049c9190;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0), lVar4 != 0)) {
    auStack_40 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar4,*(undefined8 *)PTR_DAT_049c91a8);
    iVar6 = 0;
    while( true ) {
      uVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_40,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_40,*(undefined8 *)puVar1);
        return iVar6;
      }
      lVar4 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_40,*(undefined8 *)puVar3);
      if (lVar4 == 0) break;
      iVar6 = *(int *)(lVar4 + 0x1c) + iVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

