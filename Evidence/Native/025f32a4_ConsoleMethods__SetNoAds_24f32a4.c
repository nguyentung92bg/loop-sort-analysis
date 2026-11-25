/* IL2CPP: ConsoleMethods$$SetNoAds
void ConsoleMethods__SetNoAds (bool state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetNoAds
   void ConsoleMethods__SetNoAds (bool state, const MethodInfo* method); */

void ConsoleMethods__SetNoAds_24f32a4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_28;
  
  puVar1 = PTR_DAT_049b5228;
  if ((bRam0000000004f4bd06 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c82a0);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049c82a8);
    bRam0000000004f4bd06 = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049c82a0);
    if ((param_1 & 1) == 0) {
      if (lStack_28 == 0) goto LAB_025f33a8;
      AdsModule__DisableNoAds_253d114(lStack_28,0);
    }
    else {
      if (lStack_28 == 0) goto LAB_025f33a8;
      AdsModule__EnableNoAds_253d030(lStack_28,0);
                    /* try { // try from 025f335c to 026f3363 has its CatchHandler @ 025f3414 */
    }
    puVar1 = PTR_DAT_049c82a8;
                    /* try { // try from 025f337c to 026f33c7 has its CatchHandler @ 025f3418 */
    if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)puVar1,0);
    return;
  }
LAB_025f33a8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

