/* IL2CPP: BoosterSheet.Booster$$IsAvailable
bool BoosterSheet_Booster__IsAvailable (BoosterSheet_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSheet.Booster$$IsAvailable
   bool BoosterSheet_Booster__IsAvailable (BoosterSheet_Booster_o* __this, const MethodInfo*
   method); */

bool BoosterSheet_Booster__IsAvailable_2559e60(long param_1)

{
  int iVar1;
  
                    /* try { // try from 02659e60 to 02759e6b has its CatchHandler @ 02659f00 */
  iVar1 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x28,0);
                    /* try { // try from 02659e78 to 02759e87 has its CatchHandler @ 02659efc */
  return 0 < iVar1;
}

