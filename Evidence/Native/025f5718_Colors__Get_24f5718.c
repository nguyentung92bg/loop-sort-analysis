/* IL2CPP: Colors$$Get
Colors_Data_o Colors__Get (Colors_o* __this, ColorType_o colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Colors$$Get
   Colors_Data_o Colors__Get (Colors_o* __this, ColorType_o colorType, const MethodInfo* method); */

void Colors__Get_24f5718(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bd3a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8400);
    bRam0000000004f4bd3a = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    uStack_28 = param_3;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_2 + 0x18),&uStack_28,&uStack_50,
                       *(undefined8 *)PTR_DAT_049c8400);
    if ((uVar1 & 1) == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
    else {
      param_1[1] = uStack_48;
      *param_1 = uStack_50;
      param_1[3] = uStack_38;
      param_1[2] = uStack_40;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

