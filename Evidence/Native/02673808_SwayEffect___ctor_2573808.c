/* IL2CPP: SwayEffect$$.ctor
void SwayEffect___ctor (SwayEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SwayEffect$$.ctor
   void SwayEffect___ctor (SwayEffect_o* __this, const MethodInfo* method); */

long SwayEffect___ctor_2573808(long param_1)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_1 + 0x24) = _UNK_013a7770;
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 02673818 to 0277381f has its CatchHandler @ 02673b8c */
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  return param_1;
}

