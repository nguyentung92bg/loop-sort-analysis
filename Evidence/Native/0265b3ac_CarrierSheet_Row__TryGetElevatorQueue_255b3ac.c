/* IL2CPP: CarrierSheet.Row$$TryGetElevatorQueue
bool CarrierSheet_Row__TryGetElevatorQueue (CarrierSheet_Row_o* __this, int32_t carrierType, System_Collections_Generic_List_CarrierSheet_CarrierType__o* queue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$TryGetElevatorQueue
   bool CarrierSheet_Row__TryGetElevatorQueue (CarrierSheet_Row_o* __this, int32_t carrierType,
   System_Collections_Generic_List_CarrierSheet_CarrierType__o* queue, const MethodInfo* method); */

bool CarrierSheet_Row__TryGetElevatorQueue_255b3ac(undefined8 param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iStack_6c;
  undefined8 uStack_68;
  long lStack_60;
  int iStack_54;
  
                    /* try { // try from 0265b3bc to 0275b4db has its CatchHandler @ 0265b3bc
                       catch() { ... } // from try @ 0265b3bc with catch @ 0265b3bc
                       catch() { ... } // from try @ 0265b88c with catch @ 0265b3bc
                       catch() { ... } // from try @ 0265b8d0 with catch @ 0265b3bc
                       catch() { ... } // from try @ 0265b9ac with catch @ 0265b3bc
                       catch() { ... } // from try @ 0265b9ec with catch @ 0265b3bc
                       catch() { ... } // from try @ 0265ba3c with catch @ 0265b3bc
                       catch() { ... } // from try @ 0265baa4 with catch @ 0265b3bc */
  if ((bRam0000000004f4c0e0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6710);
    FUN_021f03f8(PTR_DAT_049c6718);
    FUN_021f03f8(PTR_DAT_049cb568);
    bRam0000000004f4c0e0 = 1;
  }
  uStack_68 = 0;
  lStack_60 = 0;
  iStack_6c = 0;
  uVar5 = CarrierSheet_Row__TryGetCarrierFeature_255b058(param_1,param_2,0x22,&uStack_68);
  if ((uVar5 & 1) == 0) {
    return false;
  }
  if ((lStack_60 != 0) &&
     (lVar6 = System_String__Split_2f802dc(lStack_60,0x2c,0,0), puVar4 = PTR_DAT_049c6718,
     puVar3 = PTR_DAT_049c6710, puVar2 = PTR_DAT_049b3bd0, lVar6 != 0)) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar7 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0265b534;
        uVar8 = System_String__Trim_2f8204c(lVar7,0);
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          FUN_021f0574(*(long *)(puVar2 + 0x98));
        }
        uVar5 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                          (uVar8,1,&iStack_6c,*(undefined8 *)puVar3);
        if ((((uVar5 & 1) != 0) && (iStack_6c != param_2)) &&
           (uVar5 = CarrierSheet_Row__ContainsCarrier_255af78(param_1), (uVar5 & 1) != 0)) {
                    /* try { // try from 0265b4dc to 0275b4e7 has its CatchHandler @ 0265b914 */
          if (param_3 == 0) goto LAB_0265b534;
          iStack_54 = iStack_6c;
          FUN_02333498(param_3,&iStack_54,*(undefined8 *)puVar4);
        }
                    /* try { // try from 0265b4f8 to 0275b507 has its CatchHandler @ 0265ba04 */
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
                    /* try { // try from 0265b508 to 0275b533 has its CatchHandler @ 0265ba08 */
    if (param_3 != 0) {
      return 0 < *(int *)(param_3 + 0x18);
    }
  }
LAB_0265b534:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

