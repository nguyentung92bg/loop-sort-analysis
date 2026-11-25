/* IL2CPP: Carriers$$Get
Carriers_Data_o Carriers__Get (Carriers_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carriers$$Get
   Carriers_Data_o Carriers__Get (Carriers_o* __this, int32_t type, const MethodInfo* method); */

undefined8 Carriers__Get_24b67a0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bb99 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6d08);
    FUN_021f03f8(PTR_DAT_049c6d10);
    bRam0000000004f4bb99 = 1;
  }
  uStack_38 = 0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6778 with catch @ 025b67e8
                        */
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_025b684c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_28 = param_2;
                    /* try { // try from 025b6804 to 026b6807 has its CatchHandler @ 025b6814 */
  uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                    (*(long *)(param_1 + 0x18),&uStack_28,&uStack_38,*(undefined8 *)PTR_DAT_049c6d08
                    );
  if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 025b6804 with catch @ 025b6814 */
                    /* try { // try from 025b6818 to 026b681f has its CatchHandler @ 025b6828 */
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_025b684c;
                    /* try { // try from 025b6820 to 026b682b has its CatchHandler @ 025b6708 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b6818 with catch @ 025b6828
                        */
                    /* try { // try from 025b682c to 026b689f has its CatchHandler @ 025b682c
                       catch() { ... } // from try @ 025b682c with catch @ 025b682c
                       catch() { ... } // from try @ 025b6934 with catch @ 025b682c
                       catch() { ... } // from try @ 025b69c4 with catch @ 025b682c
                       catch() { ... } // from try @ 025b6a08 with catch @ 025b682c */
    uStack_2c = 0;
    GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
              (*(long *)(param_1 + 0x18),&uStack_2c,&uStack_28,*(undefined8 *)PTR_DAT_049c6d10);
    uStack_38 = CONCAT44(uStack_24,uStack_28);
  }
  return uStack_38;
}

