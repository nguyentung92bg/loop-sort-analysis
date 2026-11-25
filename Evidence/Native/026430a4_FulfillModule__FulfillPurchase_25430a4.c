/* IL2CPP: FulfillModule$$FulfillPurchase
void FulfillModule__FulfillPurchase (FulfillModule_o* __this, FulfillPurchaseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02643320) */
/* IL2CPP: FulfillModule$$FulfillPurchase
   void FulfillModule__FulfillPurchase (FulfillModule_o* __this, FulfillPurchaseMessage_o m, const
   MethodInfo* method); */

void FulfillModule__FulfillPurchase_25430a4(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f4bfeb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6098);
    FUN_021f03f8(PTR_DAT_049b60a0);
    FUN_021f03f8(PTR_DAT_049b60a8);
    FUN_021f03f8(PTR_DAT_049b60b8);
                    /* try { // try from 02643104 to 02743107 has its CatchHandler @ 0264311c */
                    /* try { // try from 02643108 to 0274310b has its CatchHandler @ 02643118 */
                    /* try { // try from 0264310c to 0274310f has its CatchHandler @ 02643110 */
    FUN_021f03f8(PTR_DAT_049be8e0);
                    /* catch() { ... } // from try @ 0264310c with catch @ 02643110 */
                    /* catch() { ... } // from try @ 02643060 with catch @ 02643114 */
                    /* catch() { ... } // from try @ 02643108 with catch @ 02643118 */
    FUN_021f03f8(PTR_DAT_049ca540);
                    /* catch() { ... } // from try @ 02643104 with catch @ 0264311c */
    bRam0000000004f4bfeb = 1;
  }
  puVar3 = PTR_DAT_049be8e0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* try { // try from 02643134 to 02743137 has its CatchHandler @ 02643238 */
  if (*param_2 != 0) {
                    /* try { // try from 02643138 to 0274313f has its CatchHandler @ 02643218 */
                    /* try { // try from 02643144 to 0274314f has its CatchHandler @ 0264321c */
                    /* try { // try from 02643154 to 0274315f has its CatchHandler @ 02643220 */
    lVar10 = param_2[2];
                    /* try { // try from 02643164 to 0274316f has its CatchHandler @ 02643238 */
    uVar6 = System_String__Replace_2f7fb18
                      (*param_2,*(undefined8 *)PTR_DAT_049ca540,
                       **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
    uVar6 = System_String__Concat_2f7d424(lVar10,*(undefined8 *)puVar3,uVar6,0);
    puVar5 = PTR_DAT_049b60a8;
    puVar4 = PTR_DAT_049b60a0;
    puVar3 = PTR_DAT_049b6098;
                    /* try { // try from 02643184 to 02743187 has its CatchHandler @ 0264322c */
    if (param_2[9] != 0) {
                    /* try { // try from 0264319c to 027431a3 has its CatchHandler @ 02643214 */
                    /* try { // try from 026431b4 to 027431b7 has its CatchHandler @ 02643210 */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (param_2[9],&uStack_b0,*(undefined8 *)PTR_DAT_049b60b8);
      uStack_78 = uStack_a8;
      uStack_80 = uStack_b0;
                    /* try { // try from 026431d8 to 027431e7 has its CatchHandler @ 02643204 */
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
                    /* try { // try from 026431ec to 027431ef has its CatchHandler @ 02643228 */
                    /* try { // try from 026431f0 to 027431f3 has its CatchHandler @ 02643224 */
      while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_80,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
                    /* try { // try from 026431f4 to 027431f7 has its CatchHandler @ 0264320c */
        lVar11 = *(long *)puVar5;
                    /* try { // try from 026431f8 to 027431fb has its CatchHandler @ 02643214 */
        lVar8 = *(long *)(lVar11 + 0x20);
                    /* try { // try from 026431fc to 027431ff has its CatchHandler @ 02643208 */
                    /* try { // try from 02643200 to 02743203 has its CatchHandler @ 02643210 */
        uVar2 = *(ushort *)(lVar8 + 0x135);
                    /* catch() { ... } // from try @ 026431d8 with catch @ 02643204 */
        lVar10 = lVar8;
        if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 026431fc with catch @ 02643208 */
          lVar10 = FUN_02229718();
                    /* catch() { ... } // from try @ 026431f4 with catch @ 0264320c */
                    /* catch() { ... } // from try @ 026431b4 with catch @ 02643210
                       catch() { ... } // from try @ 02643200 with catch @ 02643210 */
          lVar8 = *(long *)(lVar11 + 0x20);
                    /* catch() { ... } // from try @ 0264319c with catch @ 02643214
                       catch() { ... } // from try @ 026431f8 with catch @ 02643214 */
                    /* catch() { ... } // from try @ 02643138 with catch @ 02643218 */
          uVar2 = *(ushort *)(lVar8 + 0x135);
                    /* catch() { ... } // from try @ 02643144 with catch @ 0264321c */
        }
                    /* catch() { ... } // from try @ 026431f0 with catch @ 02643224 */
                    /* catch() { ... } // from try @ 026431ec with catch @ 02643228 */
                    /* catch() { ... } // from try @ 02643184 with catch @ 0264322c */
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
        }
                    /* catch() { ... } // from try @ 02643134 with catch @ 02643238
                       catch() { ... } // from try @ 02643164 with catch @ 02643238
                       catch() { ... } // from try @ 0264324c with catch @ 02643238
                       catch() { ... } // from try @ 0264327c with catch @ 02643238
                       catch() { ... } // from try @ 02643328 with catch @ 02643238
                       catch() { ... } // from try @ 02643358 with catch @ 02643238 */
                    /* try { // try from 0264324c to 0274324f has its CatchHandler @ 02643238 */
        uVar9 = thunk_FUN_0224e54c(&uStack_80,
                                   *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 02643250 to 02743257 has its CatchHandler @ 02643304 */
                    /* try { // try from 0264325c to 02743267 has its CatchHandler @ 02643308 */
        func_0x04608620(&uStack_b0,uVar9,uVar1);
                    /* try { // try from 0264326c to 02743277 has its CatchHandler @ 0264330c */
        FulfillModule__FulfillPayout_254345c(param_1,uStack_b0,uStack_a8,uVar6,100);
      }
                    /* try { // try from 026432ec to 027432ef has its CatchHandler @ 02643314 */
                    /* try { // try from 026432f0 to 027432f3 has its CatchHandler @ 02643310 */
                    /* try { // try from 026432f4 to 027432f7 has its CatchHandler @ 02643318 */
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_80,*(undefined8 *)puVar3);
                    /* try { // try from 026432f8 to 027432fb has its CatchHandler @ 02643300 */
                    /* catch() { ... } // from try @ 026432d8 with catch @ 026432fc */
                    /* catch() { ... } // from try @ 026432b0 with catch @ 02643300
                       catch() { ... } // from try @ 026432f8 with catch @ 02643300 */
                    /* catch() { ... } // from try @ 02643250 with catch @ 02643304 */
                    /* catch() { ... } // from try @ 0264325c with catch @ 02643308 */
                    /* catch() { ... } // from try @ 0264326c with catch @ 0264330c */
                    /* catch() { ... } // from try @ 026432f0 with catch @ 02643310 */
                    /* catch() { ... } // from try @ 026432ec with catch @ 02643314 */
                    /* catch() { ... } // from try @ 026432a0 with catch @ 02643318
                       catch() { ... } // from try @ 026432f4 with catch @ 02643318 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

