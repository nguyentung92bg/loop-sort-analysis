/* IL2CPP: RotateEffect$$Awake
void RotateEffect__Awake (RotateEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RotateEffect$$Awake
   void RotateEffect__Awake (RotateEffect_o* __this, const MethodInfo* method); */

void RotateEffect__Awake_2572f60(long param_1)

{
  long *plVar1;
  
  if ((bRam0000000004f4c1e9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4c1e9 = 1;
  }
  plVar1 = (long *)UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    if (*plVar1 != *(long *)PTR_DAT_049bc0c8) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x28) = plVar1;
  }
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x28U >> 0xc & 0x3f),
                 (param_1 + 0x28U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

