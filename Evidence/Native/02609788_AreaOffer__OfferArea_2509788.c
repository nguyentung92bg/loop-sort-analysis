/* IL2CPP: AreaOffer$$OfferArea
System_Nullable_AreaType__o AreaOffer__OfferArea (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$OfferArea
   System_Nullable_AreaType__o AreaOffer__OfferArea (AreaOffer_o* __this, const MethodInfo* method);
    */

undefined8 AreaOffer__OfferArea_2509788(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_049c5440;
  if ((bRam0000000004f4bdbc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5440);
    FUN_021f03f8(PTR_DAT_049c3a18);
    FUN_021f03f8(PTR_DAT_049c8fe0);
    FUN_021f03f8(PTR_DAT_049c8fe8);
                    /* try { // try from 026097e8 to 027098c7 has its CatchHandler @ 026097e8
                       catch() { ... } // from try @ 026097e8 with catch @ 026097e8
                       catch() { ... } // from try @ 02609938 with catch @ 026097e8
                       catch() { ... } // from try @ 026099a8 with catch @ 026097e8
                       catch() { ... } // from try @ 026099c4 with catch @ 026097e8
                       catch() { ... } // from try @ 026099f4 with catch @ 026097e8
                       catch() { ... } // from try @ 02609a38 with catch @ 026097e8 */
    FUN_021f03f8(PTR_DAT_049c8ff0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c39c8);
    bRam0000000004f4bdbc = 1;
  }
  puVar4 = PTR_DAT_049c8ff0;
  lVar6 = *(long *)puVar3;
  uStack_48 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar3;
  }
  lVar11 = *(long *)(lVar6 + 0xb8);
  lVar6 = *(long *)(*(long *)puVar4 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718(lVar6);
  }
  pcVar7 = (char *)thunk_FUN_0224e54c(lVar11 + 0x18,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar7 != '\0') {
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar3;
    }
    return *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar6 == 0)) goto LAB_02609ae8;
  lVar6 = AreaSheet__GetPickedArea_2557dc0(lVar6,0);
  if (lVar6 == 0) {
LAB_026098d8:
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar6 == 0)) {
LAB_02609ae8:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 026098ec to 02709937 has its CatchHandler @ 026099d4 */
    lVar6 = AreaSheet__GetCurrentArea_2557950(lVar6,0);
    if (lVar6 == 0) {
      return 0;
    }
    piVar9 = (int *)thunk_FUN_0224e54c(lVar6,*(long *)(**(long **)(*(long *)(*(long *)
                                                  PTR_DAT_049c39c8 + 0x20) + 0xc0) + 0x80) + 0x20);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar11 == 0)) goto LAB_02609ae8;
    iVar12 = *piVar9;
                    /* try { // try from 02609938 to 0270997b has its CatchHandler @ 026097e8 */
    iVar5 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar11,*(undefined8 *)PTR_DAT_049c3a18);
    if (iVar5 + -1 <= iVar12) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar11 == 0)) goto LAB_02609ae8;
      lVar11 = AreaSheet__GetPreviousArea_2558444(lVar11,0);
      puVar3 = PTR_DAT_049b5310;
      if (lVar11 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(lVar6 + 0x24) - *(int *)(lVar11 + 0x24);
      }
      lVar11 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_021f0574();
        lVar11 = *(long *)puVar3;
      }
                    /* try { // try from 026099a8 to 027099bf has its CatchHandler @ 026097e8 */
      iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar11 + 0xb8) + 0x60,0);
                    /* try { // try from 026099c0 to 027099c3 has its CatchHandler @ 026099c8 */
                    /* try { // try from 026099c4 to 027099ef has its CatchHandler @ 026097e8 */
      if (*(int *)(lVar6 + 0x24) + iVar12 <= iVar5 + 1) {
        uStack_48 = AreaOffer__TourArea_250a2d0(param_1);
        lVar11 = *(long *)(*(long *)puVar4 + 0x20);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02229718(lVar11);
        }
                    /* catch() { ... } // from try @ 026099f0 with catch @ 02609a2c */
                    /* try { // try from 02609a30 to 02709a37 has its CatchHandler @ 02609a40 */
                    /* try { // try from 02609a38 to 02709a43 has its CatchHandler @ 026097e8 */
        pcVar7 = (char *)thunk_FUN_0224e54c(&uStack_48,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02609a30 with catch @ 02609a40
                        */
                    /* try { // try from 02609a44 to 02709b23 has its CatchHandler @ 02609a44
                       catch() { ... } // from try @ 02609a44 with catch @ 02609a44
                       catch() { ... } // from try @ 02609b94 with catch @ 02609a44
                       catch() { ... } // from try @ 02609c08 with catch @ 02609a44
                       catch() { ... } // from try @ 02609c44 with catch @ 02609a44
                       catch() { ... } // from try @ 02609c74 with catch @ 02609a44
                       catch() { ... } // from try @ 02609ca0 with catch @ 02609a44 */
        if (*pcVar7 == '\0') {
          uStack_34 = *(undefined4 *)(lVar6 + 0x20);
        }
        else {
          lVar10 = *(long *)PTR_DAT_049c8fe0;
          lVar11 = *(long *)(lVar10 + 0x20);
          uVar2 = *(ushort *)(lVar11 + 0x135);
          lVar6 = lVar11;
          if ((uVar2 & 1) == 0) {
            lVar11 = FUN_02229718(lVar11);
            lVar6 = *(long *)(lVar10 + 0x20);
            uVar2 = *(ushort *)(lVar6 + 0x135);
          }
          uVar1 = *(undefined4 *)(**(long **)(lVar11 + 0xc0) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar6 = FUN_02229718(lVar6);
          }
          uVar13 = thunk_FUN_0224e54c(&uStack_48,
                                      *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) +
                                      0x20);
          func_0x04608620(&uStack_34,uVar13,uVar1);
        }
        uVar13 = *(undefined8 *)PTR_DAT_049c8fe8;
        goto LAB_026099e0;
      }
    }
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(lVar6 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 026098c8 to 027098cf has its CatchHandler @ 026099cc */
    uVar8 = AreaOffer__HasOffers_250a204(uVar13,uVar1);
    if ((uVar8 & 1) == 0) goto LAB_026098d8;
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026099c0 with catch @ 026099c8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026098c8 with catch @ 026099cc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260997c with catch @ 026099d0
                        */
  uStack_34 = *(undefined4 *)(lVar6 + 0x20);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026098ec with catch @ 026099d4
                        */
  uVar13 = *(undefined8 *)PTR_DAT_049c8fe8;
LAB_026099e0:
  uStack_40 = 0;
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04(&uStack_40,&uStack_34,uVar13)
  ;
                    /* try { // try from 026099f0 to 027099f3 has its CatchHandler @ 02609a2c */
                    /* try { // try from 026099f4 to 02709a2f has its CatchHandler @ 026097e8 */
  return uStack_40;
}

