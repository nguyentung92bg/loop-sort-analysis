/* IL2CPP: DailyRewardSheet.Row$$GetReward
RewardInfo_o DailyRewardSheet_Row__GetReward (DailyRewardSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardSheet.Row$$GetReward
   RewardInfo_o DailyRewardSheet_Row__GetReward (DailyRewardSheet_Row_o* __this, const MethodInfo*
   method); */

ulong DailyRewardSheet_Row__GetReward_255f0a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uStack_40;
  undefined4 uStack_38;
  ulong uStack_28;
  
  puVar1 = PTR_DAT_049c56e0;
                    /* try { // try from 0265f0c4 to 0275f0db has its CatchHandler @ 0265f3b0 */
  if ((bRam0000000004f4c107 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa68);
    FUN_021f03f8(PTR_DAT_049c5788);
    FUN_021f03f8(PTR_DAT_049c56e0);
                    /* try { // try from 0265f0f0 to 0275f0fb has its CatchHandler @ 0265f350 */
    FUN_021f03f8(PTR_DAT_049cb850);
    bRam0000000004f4c107 = 1;
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0x20);
                    /* try { // try from 0265f10c to 0275f117 has its CatchHandler @ 0265f34c */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02229718();
  }
  puVar1 = PTR_DAT_049cb850;
  pcVar3 = (char *)thunk_FUN_0224e54c(param_1 + 0x2c,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80)
                                     );
                    /* try { // try from 0265f138 to 0275f177 has its CatchHandler @ 0265f3ac */
  if (*pcVar3 == '\0') {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar2 = System_String__Split_2f802dc(*(long *)(param_1 + 0x20),0x3a,0,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar2 + 0x18) != 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
                    /* try { // try from 0265f188 to 0275f193 has its CatchHandler @ 0265f374 */
      if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
        FUN_021f0574();
      }
      System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                (uVar4,1,&uStack_40,*(undefined8 *)PTR_DAT_049caa68);
                    /* try { // try from 0265f1b8 to 0275f1c3 has its CatchHandler @ 0265f31c */
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        lVar2 = System_Int32__Parse_30fbdd0(*(undefined8 *)(lVar2 + 0x28),0);
                    /* try { // try from 0265f1d0 to 0275f1df has its CatchHandler @ 0265f318 */
        uStack_28 = uStack_40 & 0xffffffff | lVar2 << 0x20;
        uStack_38 = 0;
        uStack_40 = 0;
                    /* try { // try from 0265f1f4 to 0275f1ff has its CatchHandler @ 0265f30c */
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_40,&uStack_28,*(undefined8 *)PTR_DAT_049c5788);
        uVar4 = *(undefined8 *)puVar1;
                    /* try { // try from 0265f20c to 0275f21b has its CatchHandler @ 0265f308 */
        *(ulong *)(param_1 + 0x2c) = uStack_40;
        *(undefined4 *)(param_1 + 0x34) = uStack_38;
        System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                  (param_1 + 0x2c,&uStack_28,uVar4);
        return uStack_28;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
            (param_1 + 0x2c,&uStack_40,*(undefined8 *)puVar1);
                    /* try { // try from 0265f220 to 0275f227 has its CatchHandler @ 0265f39c */
  return uStack_40;
}

