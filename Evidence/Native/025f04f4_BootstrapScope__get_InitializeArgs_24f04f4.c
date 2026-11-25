/* IL2CPP: BootstrapScope$$get_InitializeArgs
System_Collections_Generic_Dictionary_string__string__o* BootstrapScope__get_InitializeArgs (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BootstrapScope$$get_InitializeArgs
   System_Collections_Generic_Dictionary_string__string__o* BootstrapScope__get_InitializeArgs
   (const MethodInfo* method); */

undefined8 BootstrapScope__get_InitializeArgs_24f04f4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049b6240;
  if ((bRam0000000004f4bcf1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6240);
    bRam0000000004f4bcf1 = 1;
  }
                    /* try { // try from 025f0524 to 026f053b has its CatchHandler @ 025f0cd4 */
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
}

