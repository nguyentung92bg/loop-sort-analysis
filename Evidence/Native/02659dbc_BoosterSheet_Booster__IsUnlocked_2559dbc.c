/* IL2CPP: BoosterSheet.Booster$$IsUnlocked
bool BoosterSheet_Booster__IsUnlocked (BoosterSheet_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSheet.Booster$$IsUnlocked
   bool BoosterSheet_Booster__IsUnlocked (BoosterSheet_Booster_o* __this, const MethodInfo* method);
    */

uint BoosterSheet_Booster__IsUnlocked_2559dbc(long param_1)

{
  uint uVar1;
  
  uVar1 = CloudPrefsBool__get_Value_24eb0d0(param_1 + 0x48,0);
                    /* try { // try from 02659dd0 to 02759ddb has its CatchHandler @ 0265a0f8 */
  return (uVar1 ^ 0xffffffff) & 1;
}

