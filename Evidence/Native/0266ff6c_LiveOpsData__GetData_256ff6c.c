/* IL2CPP: LiveOpsData$$GetData
LiveOpsData_Data_o LiveOpsData__GetData (LiveOpsData_o* __this, int32_t type, System_String_o* skin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsData$$GetData
   LiveOpsData_Data_o LiveOpsData__GetData (LiveOpsData_o* __this, int32_t type, System_String_o*
   skin, const MethodInfo* method); */

void LiveOpsData__GetData_256ff6c(undefined8 param_1,long param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 auStack_d8 [18];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_40;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4c1c9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc100);
                    /* try { // try from 0266ffa8 to 0276ffb7 has its CatchHandler @ 0266ffb8 */
    FUN_021f03f8(PTR_DAT_049cc108);
                    /* catch() { ... } // from try @ 0266ff40 with catch @ 0266ffb8
                       catch() { ... } // from try @ 0266ffa8 with catch @ 0266ffb8 */
    FUN_021f03f8(PTR_DAT_049cc110);
                    /* try { // try from 0266ffbc to 0276ffbf has its CatchHandler @ 0266ffc8 */
                    /* try { // try from 0266ffc0 to 0276ffcb has its CatchHandler @ 0266f868 */
    bRam0000000004f4c1c9 = 1;
  }
                    /* catch() { ... } // from try @ 0266ff18 with catch @ 0266ffc8
                       catch() { ... } // from try @ 0266ffbc with catch @ 0266ffc8 */
  lStack_40 = 0;
  uStack_50 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_4 != 0) {
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_02670078;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_2 + 0x20),param_4,&lStack_40,*(undefined8 *)PTR_DAT_049cc108)
    ;
    if ((uVar1 & 1) != 0) {
      if (lStack_40 == 0) goto LAB_02670078;
      auStack_d8[0] = param_3;
      uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                        (lStack_40,auStack_d8,&uStack_90,*(undefined8 *)PTR_DAT_049cc100);
      if ((uVar1 & 1) != 0) {
        puVar2 = &uStack_90;
        goto LAB_02670058;
      }
    }
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    uStack_34 = param_3;
    GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
              (*(long *)(param_2 + 0x18),&uStack_34,auStack_d8,*(undefined8 *)PTR_DAT_049cc110);
    puVar2 = (undefined8 *)auStack_d8;
LAB_02670058:
    func_0x04608620(param_1,puVar2,0x48);
    return;
  }
LAB_02670078:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

