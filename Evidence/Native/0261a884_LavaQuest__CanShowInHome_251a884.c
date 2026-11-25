/* IL2CPP: LavaQuest$$CanShowInHome
bool LavaQuest__CanShowInHome (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$CanShowInHome
   bool LavaQuest__CanShowInHome (LavaQuest_o* __this, const MethodInfo* method); */

uint LavaQuest__CanShowInHome_251a884(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 auStack_24 [3];
  
                    /* catch() { ... } // from try @ 0261a390 with catch @ 0261a884
                       catch() { ... } // from try @ 0261a7dc with catch @ 0261a884 */
                    /* catch() { ... } // from try @ 0261a338 with catch @ 0261a888
                       catch() { ... } // from try @ 0261a7d4 with catch @ 0261a888 */
                    /* catch() { ... } // from try @ 0261a2fc with catch @ 0261a88c
                       catch() { ... } // from try @ 0261a7cc with catch @ 0261a88c */
  if (*(long *)(param_1 + 0xa0) == 0) {
LAB_0261a8d0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0261a374 with catch @ 0261a8d0
                       catch() { ... } // from try @ 0261a7d8 with catch @ 0261a8d0 */
    FUN_021f06a0();
  }
                    /* catch() { ... } // from try @ 0261a280 with catch @ 0261a890
                       catch() { ... } // from try @ 0261a7c8 with catch @ 0261a890 */
                    /* catch() { ... } // from try @ 0261a1fc with catch @ 0261a894
                       catch() { ... } // from try @ 0261a7c0 with catch @ 0261a894 */
  if (*(char *)(*(long *)(param_1 + 0xa0) + 0x10) == '\0') {
                    /* catch() { ... } // from try @ 0261a5a4 with catch @ 0261a8bc */
    uVar1 = 0;
                    /* catch() { ... } // from try @ 0261a680 with catch @ 0261a8c0 */
  }
  else {
                    /* catch() { ... } // from try @ 0261a194 with catch @ 0261a898
                       catch() { ... } // from try @ 0261a7bc with catch @ 0261a898 */
                    /* catch() { ... } // from try @ 0261a160 with catch @ 0261a89c
                       catch() { ... } // from try @ 0261a7b8 with catch @ 0261a89c */
    uVar2 = LavaQuest__IsStreakTournamentWindow_251a6e4();
                    /* catch() { ... } // from try @ 0261a110 with catch @ 0261a8a0
                       catch() { ... } // from try @ 0261a7b4 with catch @ 0261a8a0 */
    if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 0261a0d4 with catch @ 0261a8a4 */
      lVar3 = *(long *)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 0261a0c8 with catch @ 0261a8a8 */
      if (lVar3 == 0) goto LAB_0261a8d0;
      if ((bRam0000000004f4c015 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b5f98,0xc,0);
        FUN_021f03f8(PTR_DAT_049c2f60);
        FUN_021f03f8(PTR_DAT_049c2c68);
        bRam0000000004f4c015 = 1;
      }
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if ((*(long *)(lVar3 + 0x18) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar3 + 0x18) + 0x88), lVar4 != 0)) {
        auStack_24[0] = 0xc;
        uVar2 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                          (lVar4,auStack_24,*(undefined8 *)PTR_DAT_049c2f60);
        if ((uVar2 & 1) == 0) {
          uVar1 = 0;
LAB_02646da0:
          return uVar1 & 1;
        }
        if ((*(long *)(lVar3 + 0x18) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar3 + 0x18) + 0x88), lVar3 != 0)) {
          auStack_24[0] = 0xc;
          lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                            (lVar3,auStack_24,*(undefined8 *)PTR_DAT_049c2c68);
          if (lVar3 != 0) {
            uStack_58 = *(undefined8 *)(lVar3 + 0x40);
            uStack_60 = *(undefined8 *)(lVar3 + 0x38);
            uStack_48 = *(undefined8 *)(lVar3 + 0x50);
            uStack_50 = *(undefined8 *)(lVar3 + 0x48);
            uStack_38 = *(undefined8 *)(lVar3 + 0x60);
            uStack_40 = *(undefined8 *)(lVar3 + 0x58);
            uVar1 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                              (&uStack_60,*(undefined8 *)PTR_DAT_049b5f98);
            goto LAB_02646da0;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch() { ... } // from try @ 0261a3e4 with catch @ 0261a8c4
                       catch() { ... } // from try @ 0261a7e8 with catch @ 0261a8c4 */
    uVar1 = 1;
  }
                    /* catch() { ... } // from try @ 0261a3c0 with catch @ 0261a8c8
                       catch() { ... } // from try @ 0261a7e4 with catch @ 0261a8c8 */
                    /* catch() { ... } // from try @ 0261a3a8 with catch @ 0261a8cc
                       catch() { ... } // from try @ 0261a7e0 with catch @ 0261a8cc */
  return uVar1;
}

