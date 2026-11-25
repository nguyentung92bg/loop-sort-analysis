/* IL2CPP: GridSheet.Layout$$Create
GridSheet_Layout_o GridSheet_Layout__Create (System_Collections_Generic_Dictionary_int__VerticalList_string___o* dict, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GridSheet.Layout$$Create
   GridSheet_Layout_o GridSheet_Layout__Create
   (System_Collections_Generic_Dictionary_int__VerticalList_string___o* dict, const MethodInfo*
   method); */

long GridSheet_Layout__Create_2560bf4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined4 uStack_44;
  
                    /* try { // try from 02660c08 to 02760c13 has its CatchHandler @ 02660c4c */
                    /* try { // try from 02660c14 to 02760c3f has its CatchHandler @ 02660a6c */
  if ((bRam0000000004f4c11d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb970);
    FUN_021f03f8(PTR_DAT_049cb978);
    FUN_021f03f8(PTR_DAT_049cb980);
                    /* try { // try from 02660c40 to 02760c43 has its CatchHandler @ 02660c48 */
                    /* try { // try from 02660c44 to 02760c73 has its CatchHandler @ 02660a6c */
    FUN_021f03f8(PTR_DAT_049b3c18);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02660c40 with catch @ 02660c48
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02660c08 with catch @ 02660c4c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02660be0 with catch @ 02660c50
                        */
    FUN_021f03f8(PTR_DAT_049b65b0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02660b44 with catch @ 02660c54
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02660b64 with catch @ 02660c58
                        */
    bRam0000000004f4c11d = 1;
  }
  puVar3 = PTR_DAT_049cb980;
  lStack_58 = 0;
  lStack_50 = 0;
  if (param_1 != 0) {
                    /* try { // try from 02660c74 to 02760c77 has its CatchHandler @ 02660c90 */
                    /* try { // try from 02660c78 to 02760c93 has its CatchHandler @ 02660a6c */
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                      (param_1,*(undefined8 *)PTR_DAT_049cb978);
                    /* catch() { ... } // from try @ 02660c74 with catch @ 02660c90 */
                    /* try { // try from 02660c94 to 02760c9b has its CatchHandler @ 02660ca4 */
    uStack_44 = 0;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (param_1,&uStack_44,&lStack_68,*(undefined8 *)puVar3);
                    /* try { // try from 02660c9c to 02760ca7 has its CatchHandler @ 02660a6c */
    if (lStack_68 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02660c94 with catch @ 02660ca4
                        */
      uVar1 = *(uint *)(lStack_68 + 0x18);
      lStack_60 = (long)(int)uVar1;
      lStack_68 = (long)(int)uVar4;
      lStack_50 = FUN_021f04ec(*(undefined8 *)PTR_DAT_049cb970,&lStack_68);
      thunk_FUN_021f190c(&lStack_50,lStack_50);
      puVar2 = PTR_DAT_049b65b0;
      if (0 < (int)uVar4) {
        uVar8 = 0;
        do {
          if (0 < (int)uVar1) {
            uVar7 = 0;
            do {
              if (lStack_50 == 0) goto LAB_02660de4;
                    /* try { // try from 02660d04 to 02760e07 has its CatchHandler @ 02660d04
                       catch() { ... } // from try @ 02660d04 with catch @ 02660d04
                       catch() { ... } // from try @ 02660e74 with catch @ 02660d04
                       catch() { ... } // from try @ 02660ec0 with catch @ 02660d04
                       catch() { ... } // from try @ 02660f04 with catch @ 02660d04
                       catch() { ... } // from try @ 02660f70 with catch @ 02660d04
                       catch() { ... } // from try @ 02660fc0 with catch @ 02660d04
                       catch() { ... } // from try @ 02661000 with catch @ 02660d04
                       catch() { ... } // from try @ 02661034 with catch @ 02660d04 */
              if ((**(uint **)(lStack_50 + 0x10) <= uVar8) ||
                 (uVar6 = *(ulong *)(*(uint **)(lStack_50 + 0x10) + 4),
                 (uVar6 & 0xffffffff) <= uVar7)) {
LAB_02660de0:
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              uStack_44 = (undefined4)uVar8;
              lStack_58 = *(long *)(lStack_50 + (uVar7 + uVar8 * uVar6) * 8 + 0x20);
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                        (param_1,&uStack_44,&lStack_68,*(undefined8 *)puVar3);
              if (lStack_68 == 0) goto LAB_02660de4;
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (lStack_68,uVar7 & 0xffffffff,&lStack_68,*(undefined8 *)puVar2);
              lStack_58 = lStack_68;
              thunk_FUN_021f190c(&lStack_58);
              if (lStack_50 == 0) goto LAB_02660de4;
              if ((**(uint **)(lStack_50 + 0x10) <= uVar8) ||
                 (uVar6 = *(ulong *)(*(uint **)(lStack_50 + 0x10) + 4),
                 (uVar6 & 0xffffffff) <= uVar7)) goto LAB_02660de0;
              plVar5 = (long *)(lStack_50 + (uVar7 + uVar8 * uVar6) * 8 + 0x20);
              *plVar5 = lStack_58;
              thunk_FUN_021f190c(plVar5,0);
              uVar7 = uVar7 + 1;
            } while (uVar1 != uVar7);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar4);
      }
      return lStack_50;
    }
  }
LAB_02660de4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

