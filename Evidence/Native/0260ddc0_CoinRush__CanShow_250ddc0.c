/* IL2CPP: CoinRush$$CanShow
bool CoinRush__CanShow (CoinRush_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRush$$CanShow
   bool CoinRush__CanShow (CoinRush_o* __this, const MethodInfo* method); */

uint CoinRush__CanShow_250ddc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bde2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9190);
    FUN_021f03f8(PTR_DAT_049c9198);
    FUN_021f03f8(PTR_DAT_049c91a0);
    FUN_021f03f8(PTR_DAT_049c91a8);
    bRam0000000004f4bde2 = 1;
  }
  puVar3 = PTR_DAT_049c91a0;
  puVar2 = PTR_DAT_049c9198;
  puVar1 = PTR_DAT_049c9190;
                    /* try { // try from 0260de18 to 0270de4b has its CatchHandler @ 0260dbd4 */
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0xd0), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0260de4c to 0270de57 has its CatchHandler @ 0260de7c */
  auStack_40 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                         (lVar5,*(undefined8 *)PTR_DAT_049c91a8);
  puStack_48 = auStack_40;
  uStack_50 = 0;
  do {
                    /* try { // try from 0260de64 to 0270de73 has its CatchHandler @ 0260de78 */
    uVar4 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                      (auStack_40,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) break;
                    /* try { // try from 0260de74 to 0270deab has its CatchHandler @ 0260dbd4 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260de64 with catch @ 0260de78
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260de4c with catch @ 0260de7c
                        */
    lVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                      (auStack_40,*(undefined8 *)puVar3);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260dc70 with catch @ 0260de80
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260dc94 with catch @ 0260de84
                        */
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260dc74 with catch @ 0260de88
                        */
    uStack_68 = *(undefined8 *)(lVar5 + 0x48);
    uStack_70 = *(undefined8 *)(lVar5 + 0x40);
    uStack_58 = *(undefined8 *)(lVar5 + 0x58);
    uStack_60 = *(undefined8 *)(lVar5 + 0x50);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260dc48 with catch @ 0260de8c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260dcb4 with catch @ 0260de90
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260dc44 with catch @ 0260de94
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0260dd90 with catch @ 0260de94
                        */
    uVar6 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_70,0);
    if ((uVar6 & 1) == 0) break;
    uStack_88 = *(undefined8 *)(lVar5 + 0x28);
    uStack_90 = *(undefined8 *)(lVar5 + 0x20);
    uStack_78 = *(undefined8 *)(lVar5 + 0x38);
    uStack_80 = *(undefined8 *)(lVar5 + 0x30);
                    /* try { // try from 0260deac to 0270dec3 has its CatchHandler @ 0260df24 */
    uVar6 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_90,0);
  } while ((uVar6 & 1) != 0);
  Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
            (auStack_40,*(undefined8 *)puVar1);
                    /* try { // try from 0260dec4 to 0270df13 has its CatchHandler @ 0260dbd4 */
  return uVar4 & 1;
}

