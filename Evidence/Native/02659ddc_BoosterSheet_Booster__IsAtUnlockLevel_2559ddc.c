/* IL2CPP: BoosterSheet.Booster$$IsAtUnlockLevel
bool BoosterSheet_Booster__IsAtUnlockLevel (BoosterSheet_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSheet.Booster$$IsAtUnlockLevel
   bool BoosterSheet_Booster__IsAtUnlockLevel (BoosterSheet_Booster_o* __this, const MethodInfo*
   method); */

bool BoosterSheet_Booster__IsAtUnlockLevel_2559ddc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
                    /* try { // try from 02659ddc to 02759e3b has its CatchHandler @ 02659750 */
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4c0d4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4c0d4 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  iVar2 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar3 + 0xb8) + 0x60,0);
                    /* try { // try from 02659e3c to 02759e47 has its CatchHandler @ 02659f58 */
  return *(int *)(param_1 + 0x18) <= iVar2 + 1;
}

