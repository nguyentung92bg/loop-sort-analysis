/* IL2CPP: NakamaBootstrapper$$set_Result
void NakamaBootstrapper__set_Result (Voodoo_Nakama_Services_NakamaInitEventArgs_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$set_Result
   void NakamaBootstrapper__set_Result (Voodoo_Nakama_Services_NakamaInitEventArgs_o* value, const
   MethodInfo* method); */

void NakamaBootstrapper__set_Result_2244d5c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 02344d5c to 02444dcf has its CatchHandler @ 02344d5c
                       catch() { ... } // from try @ 02344d5c with catch @ 02344d5c
                       catch() { ... } // from try @ 02344ddc with catch @ 02344d5c */
  puVar1 = PTR_DAT_049b54a0;
  if ((bRam0000000004f49b3a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54a0);
    bRam0000000004f49b3a = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  **(undefined8 **)(lVar2 + 0xb8) = param_1;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

