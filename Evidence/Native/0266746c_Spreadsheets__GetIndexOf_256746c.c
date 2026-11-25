/* IL2CPP: Spreadsheets$$GetIndexOf
int32_t Spreadsheets__GetIndexOf (Spreadsheets_o __this, System_String_o* targetName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Spreadsheets$$GetIndexOf
   int32_t Spreadsheets__GetIndexOf (Spreadsheets_o __this, System_String_o* targetName, const
   MethodInfo* method); */

ulong Spreadsheets__GetIndexOf_256746c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
                    /* try { // try from 0266746c to 02767477 has its CatchHandler @ 0266779c */
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar3 = 0;
                    /* try { // try from 0266748c to 0276753f has its CatchHandler @ 026677bc */
    lVar4 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar3) {
        uVar3 = 0;
LAB_026674d4:
        return uVar3 & 0xffffffff;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      uVar1 = System_String__Equals_2f7b554(*(undefined8 *)(lVar2 + lVar4),param_2,3,0);
      if ((uVar1 & 1) != 0) goto LAB_026674d4;
      lVar2 = *param_1;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

