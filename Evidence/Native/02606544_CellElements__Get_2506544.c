/* IL2CPP: CellElements$$Get
CellElements_Data_o CellElements__Get (CellElements_o* __this, int32_t elementType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellElements$$Get
   CellElements_Data_o CellElements__Get (CellElements_o* __this, int32_t elementType, const
   MethodInfo* method); */

undefined8 CellElements__Get_2506544(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bd8d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8e38);
    bRam0000000004f4bd8d = 1;
  }
  uStack_30 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uStack_24 = param_2;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_1 + 0x18),&uStack_24,&uStack_30,
                       *(undefined8 *)PTR_DAT_049c8e38);
    if ((uVar1 & 1) == 0) {
      uStack_30 = 0;
    }
    return uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

