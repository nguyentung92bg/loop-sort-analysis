/* IL2CPP: CoreStreak$$GetCurrentItemCount
int32_t CoreStreak__GetCurrentItemCount (CoreStreak_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreak$$GetCurrentItemCount
   int32_t CoreStreak__GetCurrentItemCount (CoreStreak_o* __this, const MethodInfo* method); */

ulong CoreStreak__GetCurrentItemCount_2513268(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uStack_24;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4be04 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c92d8);
    FUN_021f03f8(PTR_DAT_049b5480);
                    /* try { // try from 026132a4 to 0271332b has its CatchHandler @ 02613598 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be04 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar2 + 0xb8) + 0x840,0);
  puVar1 = PTR_DAT_049c92d8;
  if ((int)uVar3 != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__GetClamped___Il2CppFullySharedGenericType__25efad0
              (uVar4,(int)uVar3 + -1,&uStack_24,*(undefined8 *)puVar1);
    uVar3 = (ulong)uStack_24;
  }
  return uVar3;
}

