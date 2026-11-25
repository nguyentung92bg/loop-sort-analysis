/* IL2CPP: DailyChallenge$$GetReward
int32_t DailyChallenge__GetReward (DailyChallenge_o* __this, int32_t theme, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$GetReward
   int32_t DailyChallenge__GetReward (DailyChallenge_o* __this, int32_t theme, const MethodInfo*
   method); */

void DailyChallenge__GetReward_2515c98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f4be15 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4228);
    bRam0000000004f4be15 = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x30), lVar1 != 0)) {
                    /* try { // try from 02615cec to 02715cf7 has its CatchHandler @ 02616878 */
                    /* try { // try from 02615d04 to 02715d13 has its CatchHandler @ 02616874 */
    if ((lVar1 != 0) &&
       (lVar1 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                          (lVar1,&stack0xffffffffffffffec,
                           **(undefined8 **)(*(long *)(*(long *)PTR_DAT_049c4228 + 0x20) + 0xc0)),
       lVar1 != 0)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      uVar2 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
      System_Int32__Parse_30fbf68(uVar3,uVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

