/* IL2CPP: VoodooPurchasingProvider$$GetProductMetadata
ProductMetadata_o VoodooPurchasingProvider__GetProductMetadata (VoodooPurchasingProvider_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$GetProductMetadata
   ProductMetadata_o VoodooPurchasingProvider__GetProductMetadata (VoodooPurchasingProvider_o*
   __this, System_String_o* productId, const MethodInfo* method); */

void VoodooPurchasingProvider__GetProductMetadata_2253dac
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  long alStack_70 [6];
  
  lVar1 = tpidr_el0;
  alStack_70[5] = *(long *)(lVar1 + 0x28);
                    /* try { // try from 02353de0 to 02453e53 has its CatchHandler @ 02353ce8 */
  if ((bRam0000000004f49ba9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b4ec0);
    FUN_021f03f8(PTR_DAT_049b60f0);
    FUN_021f03f8(PTR_DAT_049b5388);
                    /* catch() { ... } // from try @ 02353d54 with catch @ 02353e20 */
    FUN_021f03f8(PTR_DAT_049b5380);
                    /* catch() { ... } // from try @ 02353d8c with catch @ 02353e24 */
    FUN_021f03f8(PTR_DAT_049b5670);
    FUN_021f03f8(PTR_DAT_049b60e0);
    FUN_021f03f8(PTR_DAT_049b6180);
    bRam0000000004f49ba9 = 1;
  }
  puVar3 = PTR_DAT_049b5388;
  puVar2 = PTR_DAT_049b5380;
  alStack_70[4] = 0;
  auStack_88._0_8_ = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  auStack_88._8_8_ = 0;
  alStack_70[1] = 0;
  alStack_70[0] = 0;
  alStack_70[3] = 0;
  alStack_70[2] = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar4 = Payouts__Get_2570084(*(long *)(param_2 + 0x10),param_3,0);
    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (lVar5,*(undefined8 *)puVar3);
    puVar2 = PTR_DAT_049b5670;
    if (lVar5 != 0) {
                    /* try { // try from 02353ec4 to 02453f1b has its CatchHandler @ 02353ec4
                       catch() { ... } // from try @ 02353ec4 with catch @ 02353ec4
                       catch() { ... } // from try @ 02353f98 with catch @ 02353ec4 */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                (lVar5,uVar4,*(undefined8 *)PTR_DAT_049b60f0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar6 = VoodooSauce__GetIAPStatus_4378b44(0);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x10) == 4) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          lVar6 = VoodooSauce__GetProduct_437936c(param_3,0);
          if (lVar6 == 0) {
            uVar4 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049b60e0,param_3,0);
            if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
              FUN_021f0574(*(long *)PTR_DAT_049b3c58);
            }
            UnityEngine_Debug__LogError_3bd1230(uVar4,0);
            goto LAB_0235401c;
          }
          lVar7 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 02353f1c to 02453f2f has its CatchHandler @ 02353fd4 */
          ProductMetadata___ctor_254b080(&uStack_a0,param_3,0);
          uStack_98 = *(undefined8 *)(lVar6 + 0x20);
          uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(lVar6 + 0x50));
                    /* try { // try from 02353f40 to 02453f5b has its CatchHandler @ 02353fd0 */
          thunk_FUN_021f190c((ulong)&uStack_a0 | 8);
          if (lVar7 == 0) goto LAB_0235407c;
          uStack_90 = *(undefined8 *)(lVar7 + 0x18);
          thunk_FUN_021f190c(&uStack_90);
          uVar4 = *(undefined8 *)(lVar7 + 0x10);
          if (*(int *)(*(long *)PTR_DAT_049b4ec0 + 0xe4) == 0) {
            FUN_021f0574();
          }
          auStack_88 = System_Decimal__op_Explicit_315ec34(uVar4,0);
                    /* try { // try from 02353f88 to 02453f97 has its CatchHandler @ 02353fcc */
          uStack_a8 = *(undefined8 *)(lVar7 + 0x10);
                    /* try { // try from 02353f98 to 02453fe7 has its CatchHandler @ 02353ec4 */
          uVar4 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x80),&uStack_a8);
          uStack_78 = System_String__Format_2f7dfac
                                (*(undefined8 *)PTR_DAT_049b6180,uVar4,*(undefined8 *)(lVar7 + 0x18)
                                 ,0);
                    /* catch() { ... } // from try @ 02353f88 with catch @ 02353fcc */
                    /* catch() { ... } // from try @ 02353f40 with catch @ 02353fd0 */
          thunk_FUN_021f190c(&uStack_78,uStack_78);
                    /* catch() { ... } // from try @ 02353f1c with catch @ 02353fd4 */
        }
        else {
LAB_0235401c:
          ProductMetadata___ctor_254b080(&uStack_a0,param_3,0);
        }
        alStack_70[0] = lVar5;
        thunk_FUN_021f190c(alStack_70,lVar5);
        func_0x04608620(param_1,&uStack_a0,0x58);
        if (*(long *)(lVar1 + 0x28) == alStack_70[5]) {
          return;
        }
        goto LAB_02354090;
      }
    }
  }
LAB_0235407c:
  if (*(long *)(lVar1 + 0x28) == alStack_70[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02354090:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

