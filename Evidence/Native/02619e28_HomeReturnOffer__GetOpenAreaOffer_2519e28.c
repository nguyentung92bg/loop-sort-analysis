/* IL2CPP: HomeReturnOffer$$GetOpenAreaOffer
int32_t HomeReturnOffer__GetOpenAreaOffer (HomeReturnOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeReturnOffer$$GetOpenAreaOffer
   int32_t HomeReturnOffer__GetOpenAreaOffer (HomeReturnOffer_o* __this, const MethodInfo* method);
    */

int HomeReturnOffer__GetOpenAreaOffer_2519e28(long param_1)

{
  ulong uVar1;
  int iVar2;
  
                    /* catch() { ... } // from try @ 02619dc4 with catch @ 02619e28 */
                    /* catch() { ... } // from try @ 02619b74 with catch @ 02619e2c */
                    /* catch() { ... } // from try @ 02619b7c with catch @ 02619e30 */
                    /* catch() { ... } // from try @ 02619b50 with catch @ 02619e34 */
  iVar2 = 0x1e;
  while( true ) {
                    /* catch() { ... } // from try @ 02619e1c with catch @ 02619e38 */
                    /* catch() { ... } // from try @ 02619a64 with catch @ 02619e3c */
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02619ab4 with catch @ 02619e70
                       catch() { ... } // from try @ 02619e0c with catch @ 02619e70 */
      FUN_021f06a0();
    }
                    /* catch() { ... } // from try @ 02619924 with catch @ 02619e40 */
                    /* catch() { ... } // from try @ 02619dfc with catch @ 02619e44 */
                    /* catch() { ... } // from try @ 026198e8 with catch @ 02619e48 */
    uVar1 = LiveOpsModule__CanShowPopup_2547858(*(long *)(param_1 + 0x30),iVar2,0);
                    /* catch() { ... } // from try @ 02619df4 with catch @ 02619e4c */
    if ((uVar1 & 1) != 0) break;
                    /* catch() { ... } // from try @ 02619b18 with catch @ 02619e50
                       catch() { ... } // from try @ 02619e18 with catch @ 02619e50 */
    iVar2 = iVar2 + 1;
                    /* catch() { ... } // from try @ 02619a78 with catch @ 02619e54
                       catch() { ... } // from try @ 02619e08 with catch @ 02619e54 */
                    /* catch() { ... } // from try @ 02619a3c with catch @ 02619e58
                       catch() { ... } // from try @ 02619e00 with catch @ 02619e58 */
    if (iVar2 == 0x21) {
                    /* catch() { ... } // from try @ 02619b9c with catch @ 02619e5c */
                    /* catch() { ... } // from try @ 02619c7c with catch @ 02619e60 */
                    /* catch() { ... } // from try @ 02619b38 with catch @ 02619e64
                       catch() { ... } // from try @ 02619e20 with catch @ 02619e64 */
                    /* catch() { ... } // from try @ 02619af4 with catch @ 02619e68
                       catch() { ... } // from try @ 02619e14 with catch @ 02619e68 */
                    /* catch() { ... } // from try @ 02619ad0 with catch @ 02619e6c
                       catch() { ... } // from try @ 02619e10 with catch @ 02619e6c */
      return 0x1e;
    }
  }
  return iVar2;
}

