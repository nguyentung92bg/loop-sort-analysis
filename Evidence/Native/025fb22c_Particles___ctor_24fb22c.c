/* IL2CPP: Particles$$.ctor
void Particles___ctor (Particles_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Particles$$.ctor
   void Particles___ctor (Particles_o* __this, const MethodInfo* method); */

void Particles___ctor_24fb22c(undefined8 param_1)

{
  undefined *puVar1;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fb13c with catch @ 025fb22c
                        */
  puVar1 = PTR_DAT_049b3b98;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fb220 with catch @ 025fb230
                        */
  if ((bRam0000000004f58430 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f58430 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Object___ctor_3142338(param_1,0);
  if (pcRam0000000004f58438 == (code *)0x0) {
    pcRam0000000004f58438 = (code *)FUN_021f03bc(&UNK_013c1465);
  }
                    /* WARNING: Could not recover jumptable at 0x03d209d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004f58438)(param_1);
  return;
}

