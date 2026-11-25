/* IL2CPP: BootstrapScope$$set_IsInitialized
void BootstrapScope__set_IsInitialized (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BootstrapScope$$set_IsInitialized
   void BootstrapScope__set_IsInitialized (bool value, const MethodInfo* method); */

void BootstrapScope__set_IsInitialized_24f0494(byte param_1)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 025f0494 to 026f049f has its CatchHandler @ 025f0bf4 */
  puVar1 = PTR_DAT_049b6240;
  if ((bRam0000000004f4bcf0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6240);
    bRam0000000004f4bcf0 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 025f04e0 to 026f0503 has its CatchHandler @ 025f0d00 */
  **(byte **)(lVar2 + 0xb8) = param_1 & 1;
  return;
}

