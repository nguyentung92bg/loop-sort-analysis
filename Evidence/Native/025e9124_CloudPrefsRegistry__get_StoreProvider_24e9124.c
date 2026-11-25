/* IL2CPP: CloudPrefsRegistry$$get_StoreProvider
System_Func_ICloudPrefsStore__o* CloudPrefsRegistry__get_StoreProvider (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsRegistry$$get_StoreProvider
   System_Func_ICloudPrefsStore__o* CloudPrefsRegistry__get_StoreProvider (const MethodInfo*
   method); */

undefined8 CloudPrefsRegistry__get_StoreProvider_24e9124(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049c7f20;
                    /* try { // try from 025e913c to 026e914b has its CatchHandler @ 025e914c */
  if ((bRam0000000004f4bca8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
                    /* catch() { ... } // from try @ 025e90f0 with catch @ 025e914c
                       catch() { ... } // from try @ 025e913c with catch @ 025e914c */
                    /* try { // try from 025e9150 to 026e9153 has its CatchHandler @ 025e915c */
    bRam0000000004f4bca8 = 1;
  }
                    /* try { // try from 025e9154 to 026e915f has its CatchHandler @ 025e7c10 */
  lVar2 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 025e906c with catch @ 025e915c
                       catch() { ... } // from try @ 025e90a0 with catch @ 025e915c
                       catch() { ... } // from try @ 025e90d4 with catch @ 025e915c
                       catch() { ... } // from try @ 025e9150 with catch @ 025e915c */
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
}

