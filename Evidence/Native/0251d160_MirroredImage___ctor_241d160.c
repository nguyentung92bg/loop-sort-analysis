/* IL2CPP: MirroredImage$$.ctor
void MirroredImage___ctor (MirroredImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MirroredImage$$.ctor
   void MirroredImage___ctor (MirroredImage_o* __this, const MethodInfo* method); */

void MirroredImage___ctor_241d160(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_049bc688;
                    /* try { // try from 0251d174 to 0261d17f has its CatchHandler @ 0251d614 */
  if ((bRam0000000004f4b75c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc688);
    bRam0000000004f4b75c = 1;
  }
                    /* try { // try from 0251d194 to 0261d19b has its CatchHandler @ 0251d5e0 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar1 = _UNK_013a87b0;
                    /* try { // try from 0251d1b4 to 0261d1bb has its CatchHandler @ 0251d5c8 */
  *(undefined1 *)(param_1 + 0xed) = 1;
  *(undefined8 *)(param_1 + 0xf0) = 0x3f80000000000004;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  UnityEngine_UI_MaskableGraphic___ctor_3edc254(param_1,0);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  return;
}

