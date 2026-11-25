/* IL2CPP: VoodooMetaProvider$$OnImpressionTracked
void VoodooMetaProvider__OnImpressionTracked (Voodoo_Sauce_Internal_Analytics_ImpressionAnalyticsInfo_o* impressionInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooMetaProvider$$OnImpressionTracked
   void VoodooMetaProvider__OnImpressionTracked
   (Voodoo_Sauce_Internal_Analytics_ImpressionAnalyticsInfo_o* impressionInfo, const MethodInfo*
   method); */

void VoodooMetaProvider__OnImpressionTracked_225291c(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_28;
  
                    /* try { // try from 0235291c to 02452b07 has its CatchHandler @ 0235291c
                       catch() { ... } // from try @ 0235291c with catch @ 0235291c
                       catch() { ... } // from try @ 02352c30 with catch @ 0235291c */
  if ((bRam0000000004f49ba3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6048);
    FUN_021f03f8(PTR_DAT_049b6050);
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049b6058);
    FUN_021f03f8(PTR_DAT_049b6060);
    FUN_021f03f8(PTR_DAT_049b3e60);
    FUN_021f03f8(PTR_DAT_049b3e68);
    FUN_021f03f8(PTR_DAT_049b6068);
    FUN_021f03f8(PTR_DAT_049b4618);
    FUN_021f03f8(PTR_DAT_049b6070);
    FUN_021f03f8(PTR_DAT_049b6078);
    FUN_021f03f8(PTR_DAT_049b6080);
    FUN_021f03f8(PTR_DAT_049b6088);
    bRam0000000004f49ba3 = 1;
  }
  puVar3 = PTR_DAT_049b6040;
  uStack_28 = 0;
  if ((bRam0000000004f49ba2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6040);
    bRam0000000004f49ba2 = 1;
  }
  uVar4 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)puVar3,0);
  if (((uVar4 & 1) == 0) && (param_1 != (long *)0x0)) {
    lVar7 = *param_1;
    bVar1 = *(byte *)(lVar7 + 0x130);
    bVar2 = *(byte *)(*(long *)PTR_DAT_049b6060 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_049b6060)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_049b6058 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_049b6058)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_049b6050 + 0x130);
        if (bVar1 < bVar2) {
          return;
        }
        if (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_049b6050)
        {
          return;
        }
      }
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_049b3e60 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    pcVar5 = (char *)thunk_FUN_0224e54c(param_1 + 0x11,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
    if (*pcVar5 != '\0') {
                    /* try { // try from 02352b08 to 02452b9f has its CatchHandler @ 02352d2c */
      lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4340);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
                (lVar7,*(undefined8 *)PTR_DAT_049b4338);
      System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                (param_1 + 0x11,&uStack_28,*(undefined8 *)PTR_DAT_049b3e68);
      if (*(int *)(*(long *)PTR_DAT_049b44e8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
      uVar6 = System_Double__ToString_30e5068(&uStack_28,*(undefined8 *)PTR_DAT_049b6078,uVar6,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar7,*(undefined8 *)PTR_DAT_049b6070,uVar6,*(undefined8 *)PTR_DAT_049b4358);
      VoodooMetaProvider__AddParameter_2252c64(lVar7,*(undefined8 *)PTR_DAT_049b6080,param_1[0x10]);
      VoodooMetaProvider__AddParameter_2252c64(lVar7,*(undefined8 *)PTR_DAT_049b4618,param_1[6]);
                    /* try { // try from 02352bec to 02452c2f has its CatchHandler @ 02352d28 */
      VoodooMetaProvider__AddParameter_2252c64(lVar7,*(undefined8 *)PTR_DAT_049b6088,param_1[0x13]);
      VoodooMetaProvider__AddParameter_2252c64(lVar7,*(undefined8 *)PTR_DAT_049b6068,param_1[0xe]);
      if ((bRam0000000004f49ba2 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b6040);
        bRam0000000004f49ba2 = 1;
      }
      uVar6 = *(undefined8 *)puVar3;
                    /* try { // try from 02352c30 to 02452d67 has its CatchHandler @ 0235291c */
      if (*(int *)(*(long *)PTR_DAT_049b6048 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Voodoo_Sauce_Internal_Analytics_AdjustWrapper__TrackEvent_44a603c(uVar6,lVar7,0);
    }
  }
  return;
}

