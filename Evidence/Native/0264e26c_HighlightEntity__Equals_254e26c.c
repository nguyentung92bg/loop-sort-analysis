/* IL2CPP: HighlightEntity$$Equals
bool HighlightEntity__Equals (HighlightEntity_o __this, Il2CppObject* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HighlightEntity$$Equals
   bool HighlightEntity__Equals (HighlightEntity_o __this, Il2CppObject* obj, const MethodInfo*
   method); */

bool HighlightEntity__Equals_254e26c(int *param_1,long *param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* catch() { ... } // from try @ 0264e2c4 with catch @ 0264e270
                       catch() { ... } // from try @ 0264e308 with catch @ 0264e270
                       catch() { ... } // from try @ 0264e318 with catch @ 0264e270
                       catch() { ... } // from try @ 0264e358 with catch @ 0264e270 */
  if ((bRam0000000004f4c061 & 1) == 0) {
                    /* try { // try from 0264e28c to 0274e297 has its CatchHandler @ 0264e324 */
    FUN_021f03f8(PTR_DAT_049cab90);
    bRam0000000004f4c061 = 1;
  }
                    /* try { // try from 0264e2a4 to 0274e2af has its CatchHandler @ 0264e320 */
  if ((param_2 == (long *)0x0) || (*param_2 != *(long *)PTR_DAT_049cab90)) {
    bVar1 = false;
                    /* try { // try from 0264e2bc to 0274e2c3 has its CatchHandler @ 0264e31c */
  }
  else {
                    /* try { // try from 0264e2c4 to 0274e303 has its CatchHandler @ 0264e270 */
    piVar2 = (int *)thunk_FUN_0222cb7c(param_2);
    bVar1 = *param_1 == *piVar2;
  }
  return bVar1;
}

