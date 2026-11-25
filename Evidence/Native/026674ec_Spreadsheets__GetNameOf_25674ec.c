/* IL2CPP: Spreadsheets$$GetNameOf
System_String_o* Spreadsheets__GetNameOf (Spreadsheets_o __this, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Spreadsheets$$GetNameOf
   System_String_o* Spreadsheets__GetNameOf (Spreadsheets_o __this, int32_t idx, const MethodInfo*
   method); */

undefined8 Spreadsheets__GetNameOf_25674ec(long *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (param_2 < *(uint *)(lVar1 + 0x18)) {
    return *(undefined8 *)(lVar1 + (long)(int)param_2 * 0x10 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

