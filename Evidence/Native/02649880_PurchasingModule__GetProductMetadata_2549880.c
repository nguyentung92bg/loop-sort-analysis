/* IL2CPP: PurchasingModule$$GetProductMetadata
ProductMetadata_o PurchasingModule__GetProductMetadata (PurchasingModule_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$GetProductMetadata
   ProductMetadata_o PurchasingModule__GetProductMetadata (PurchasingModule_o* __this,
   System_String_o* productId, const MethodInfo* method); */

void PurchasingModule__GetProductMetadata_2549880
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined1 auStack_90 [88];
  long lStack_38;
  
                    /* try { // try from 02649880 to 0274990f has its CatchHandler @ 02649880
                       catch() { ... } // from try @ 02649880 with catch @ 02649880
                       catch() { ... } // from try @ 02649acc with catch @ 02649880
                       catch() { ... } // from try @ 02649b28 with catch @ 02649880
                       catch() { ... } // from try @ 02649b80 with catch @ 02649880
                       catch() { ... } // from try @ 02649be8 with catch @ 02649880 */
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4c02f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca8a0);
    bRam0000000004f4c02f = 1;
  }
  plVar6 = *(long **)(param_2 + 0x10);
  if (plVar6 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca8a0) {
                    /* try { // try from 0264991c to 02749927 has its CatchHandler @ 02649a1c */
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_02649928;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 02649910 to 02749913 has its CatchHandler @ 02649b50 */
    puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca8a0,3);
LAB_02649928:
    (*(code *)*puVar2)(auStack_90,plVar6,param_3,puVar2[1]);
                    /* try { // try from 0264993c to 02749943 has its CatchHandler @ 02649a18 */
                    /* try { // try from 02649944 to 0274998b has its CatchHandler @ 02649a24 */
    func_0x04608620(param_1,auStack_90,0x58);
    if (*(long *)(lVar1 + 0x28) == lStack_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

