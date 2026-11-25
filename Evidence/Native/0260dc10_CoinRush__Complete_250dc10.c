/* IL2CPP: CoinRush$$Complete
void CoinRush__Complete (CoinRush_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRush$$Complete
   void CoinRush__Complete (CoinRush_o* __this, const MethodInfo* method); */

void CoinRush__Complete_250dc10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bde1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9190);
                    /* try { // try from 0260dc44 to 0270dc47 has its CatchHandler @ 0260de94 */
    FUN_021f03f8(PTR_DAT_049c9198);
                    /* try { // try from 0260dc48 to 0270dc57 has its CatchHandler @ 0260de8c */
    FUN_021f03f8(PTR_DAT_049c91a0);
    FUN_021f03f8(PTR_DAT_049c91a8);
    bRam0000000004f4bde1 = 1;
  }
                    /* try { // try from 0260dc70 to 0270dc73 has its CatchHandler @ 0260de80 */
                    /* try { // try from 0260dc74 to 0270dc8f has its CatchHandler @ 0260de88 */
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  LiveOpsBase__Complete_2521cec(param_1,0);
  CloudPrefsBool__DeleteValue_24eb2a8(param_1 + 0x30,0);
                    /* try { // try from 0260dc94 to 0270dc9f has its CatchHandler @ 0260de84 */
  CloudPrefsInt__DeleteValue_24e9b94(param_1 + 0x50,0);
  CloudPrefsInt__DeleteValue_24e9b94(param_1 + 0x70,0);
  puVar3 = PTR_DAT_049c91a0;
  puVar2 = PTR_DAT_049c9198;
  puVar1 = PTR_DAT_049c9190;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0), lVar4 != 0)) {
                    /* try { // try from 0260dcb4 to 0270dd7f has its CatchHandler @ 0260de90 */
    auStack_40 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar4,*(undefined8 *)PTR_DAT_049c91a8);
    while( true ) {
      uVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_40,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_40,*(undefined8 *)puVar1);
        return;
      }
      lVar4 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_40,*(undefined8 *)puVar3);
      if (lVar4 == 0) break;
      uStack_58 = *(undefined8 *)(lVar4 + 0x28);
      uStack_60 = *(undefined8 *)(lVar4 + 0x20);
      uStack_48 = *(undefined8 *)(lVar4 + 0x38);
      uStack_50 = *(undefined8 *)(lVar4 + 0x30);
      CloudPrefsBool__DeleteValue_24eb2a8(&uStack_60,0);
      uStack_58 = *(undefined8 *)(lVar4 + 0x48);
      uStack_60 = *(undefined8 *)(lVar4 + 0x40);
      uStack_48 = *(undefined8 *)(lVar4 + 0x58);
      uStack_50 = *(undefined8 *)(lVar4 + 0x50);
      CloudPrefsBool__DeleteValue_24eb2a8(&uStack_60,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

