/* IL2CPP: Carriers$$TryGet
bool Carriers__TryGet (Carriers_o* __this, int32_t type, Carriers_Data_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carriers$$TryGet
   bool Carriers__TryGet (Carriers_o* __this, int32_t type, Carriers_Data_o* data, const MethodInfo*
   method); */

uint Carriers__TryGet_24b6850(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bb9a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6d08);
    bRam0000000004f4bb9a = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 025b68a0 to 026b68bb has its CatchHandler @ 025b69d8 */
    uStack_24 = param_2;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_1 + 0x18),&uStack_24,param_3,*(undefined8 *)PTR_DAT_049c6d08)
    ;
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

