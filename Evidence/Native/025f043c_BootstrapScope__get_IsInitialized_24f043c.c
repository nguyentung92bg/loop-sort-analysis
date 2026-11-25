/* IL2CPP: BootstrapScope$$get_IsInitialized
bool BootstrapScope__get_IsInitialized (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BootstrapScope$$get_IsInitialized
   bool BootstrapScope__get_IsInitialized (const MethodInfo* method); */

undefined1 BootstrapScope__get_IsInitialized_24f043c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049b6240;
  if ((bRam0000000004f4bcef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6240);
    bRam0000000004f4bcef = 1;
  }
  lVar2 = *(long *)puVar1;
                    /* try { // try from 025f0474 to 026f047b has its CatchHandler @ 025f0c10 */
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined1 **)(lVar2 + 0xb8);
}

