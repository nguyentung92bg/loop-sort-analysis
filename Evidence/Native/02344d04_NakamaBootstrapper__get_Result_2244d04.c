/* IL2CPP: NakamaBootstrapper$$get_Result
Voodoo_Nakama_Services_NakamaInitEventArgs_o* NakamaBootstrapper__get_Result (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$get_Result
   Voodoo_Nakama_Services_NakamaInitEventArgs_o* NakamaBootstrapper__get_Result (const MethodInfo*
   method); */

undefined8 NakamaBootstrapper__get_Result_2244d04(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049b54a0;
  if ((bRam0000000004f49b39 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54a0);
    bRam0000000004f49b39 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

