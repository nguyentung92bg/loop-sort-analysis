/* IL2CPP: Blocks$$TryGetValue
bool Blocks__TryGetValue (Blocks_o* __this, int32_t type, Blocks_Data_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Blocks$$TryGetValue
   bool Blocks__TryGetValue (Blocks_o* __this, int32_t type, Blocks_Data_o* data, const MethodInfo*
   method); */

uint Blocks__TryGetValue_24b6714(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bb96 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6cf0);
    bRam0000000004f4bb96 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uStack_24 = param_2;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_1 + 0x18),&uStack_24,param_3,*(undefined8 *)PTR_DAT_049c6cf0)
    ;
                    /* try { // try from 025b6778 to 026b6793 has its CatchHandler @ 025b67e8 */
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

