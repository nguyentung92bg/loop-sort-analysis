/* IL2CPP: GarageSale$$CanShow
bool GarageSale__CanShow (GarageSale_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSale$$CanShow
   bool GarageSale__CanShow (GarageSale_o* __this, const MethodInfo* method); */

bool GarageSale__CanShow_2517e18(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
                    /* try { // try from 02617e18 to 02717e1b has its CatchHandler @ 02617e50 */
                    /* try { // try from 02617e1c to 02717e1f has its CatchHandler @ 02617e48 */
                    /* try { // try from 02617e20 to 02717e23 has its CatchHandler @ 02617e4c */
                    /* try { // try from 02617e24 to 02717e27 has its CatchHandler @ 02617e30 */
                    /* try { // try from 02617e28 to 02717e2b has its CatchHandler @ 02617e44 */
                    /* catch() { ... } // from try @ 02617c3c with catch @ 02617e2c
                       try { // try from 02617e2c to 02717e9b has its CatchHandler @ 02617a24 */
  if ((bRam0000000004f4be2a & 1) == 0) {
                    /* catch() { ... } // from try @ 02617e24 with catch @ 02617e30 */
                    /* catch() { ... } // from try @ 02617df4 with catch @ 02617e34 */
                    /* catch() { ... } // from try @ 02617ddc with catch @ 02617e38 */
    FUN_021f03f8(PTR_DAT_049c57b0);
                    /* catch() { ... } // from try @ 02617c20 with catch @ 02617e3c */
                    /* catch() { ... } // from try @ 02617b44 with catch @ 02617e40 */
    bRam0000000004f4be2a = 1;
  }
                    /* catch() { ... } // from try @ 02617c48 with catch @ 02617e44
                       catch() { ... } // from try @ 02617e28 with catch @ 02617e44 */
                    /* catch() { ... } // from try @ 02617e1c with catch @ 02617e48 */
                    /* catch() { ... } // from try @ 02617af4 with catch @ 02617e4c
                       catch() { ... } // from try @ 02617e20 with catch @ 02617e4c */
                    /* catch() { ... } // from try @ 02617e18 with catch @ 02617e50 */
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0xc0), lVar3 != 0)) {
                    /* catch() { ... } // from try @ 02617b4c with catch @ 02617e54 */
                    /* catch() { ... } // from try @ 02617b24 with catch @ 02617e58 */
                    /* catch() { ... } // from try @ 02617e14 with catch @ 02617e5c */
                    /* catch() { ... } // from try @ 02617d10 with catch @ 02617e60 */
    iVar1 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar3,*(undefined8 *)PTR_DAT_049c57b0);
                    /* catch() { ... } // from try @ 02617ab8 with catch @ 02617e64 */
                    /* catch() { ... } // from try @ 02617e10 with catch @ 02617e68 */
                    /* catch() { ... } // from try @ 02617e0c with catch @ 02617e6c */
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x30,0);
                    /* catch() { ... } // from try @ 02617c84 with catch @ 02617e78 */
                    /* catch() { ... } // from try @ 02617b6c with catch @ 02617e7c
                       catch() { ... } // from try @ 02617c68 with catch @ 02617e7c */
    return iVar2 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

