/* IL2CPP: CarrierSheet.Row$$HasCarrierFeature
bool CarrierSheet_Row__HasCarrierFeature (CarrierSheet_Row_o* __this, int32_t carrierType, int32_t featureType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$HasCarrierFeature
   bool CarrierSheet_Row__HasCarrierFeature (CarrierSheet_Row_o* __this, int32_t carrierType,
   int32_t featureType, const MethodInfo* method); */

uint CarrierSheet_Row__HasCarrierFeature_255b53c(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  int aiStack_40 [4];
  
                    /* try { // try from 0265b544 to 0275b54f has its CatchHandler @ 0265b910 */
  if ((bRam0000000004f4c0e1 & 1) == 0) {
                    /* try { // try from 0265b564 to 0275b567 has its CatchHandler @ 0265b8d8 */
                    /* try { // try from 0265b568 to 0275b56f has its CatchHandler @ 0265b90c */
    FUN_021f03f8(PTR_DAT_049c7890);
    FUN_021f03f8(PTR_DAT_049c7898);
    FUN_021f03f8(PTR_DAT_049c78a0);
                    /* try { // try from 0265b588 to 0275b5af has its CatchHandler @ 0265ba00 */
    FUN_021f03f8(PTR_DAT_049c78a8);
    bRam0000000004f4c0e1 = 1;
  }
  lStack_48 = 0;
                    /* try { // try from 0265b5b0 to 0275b5d3 has its CatchHandler @ 0265b9fc */
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar6 = CarrierSheet_Row__TryGetCarrierFeatures_255b274(param_1,param_2,&lStack_48);
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0265b5d4 to 0275b5f7 has its CatchHandler @ 0265b9f8 */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_48,&uStack_70,*(undefined8 *)PTR_DAT_049c78a8);
    puVar4 = PTR_DAT_049c78a0;
    puVar3 = PTR_DAT_049c7898;
    do {
                    /* try { // try from 0265b5f8 to 0275b61b has its CatchHandler @ 0265b9f4 */
      uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_70,*(undefined8 *)puVar3);
      if ((uVar5 & 1) == 0) break;
      lVar10 = *(long *)puVar4;
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar8 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
                    /* try { // try from 0265b61c to 0275b63f has its CatchHandler @ 0265b9f0 */
        lVar7 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
      }
                    /* try { // try from 0265b64c to 0275b65b has its CatchHandler @ 0265b908 */
      uVar9 = thunk_FUN_0224e54c(&uStack_70,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 0265b668 to 0275b687 has its CatchHandler @ 0265b934 */
      func_0x04608620(aiStack_40,uVar9,uVar1);
    } while (aiStack_40[0] != param_3);
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_70,*(undefined8 *)PTR_DAT_049c7890);
                    /* try { // try from 0265b690 to 0275b697 has its CatchHandler @ 0265b900 */
  }
                    /* try { // try from 0265b6d8 to 0275b6e7 has its CatchHandler @ 0265b8dc */
  return uVar5 & 1;
}

