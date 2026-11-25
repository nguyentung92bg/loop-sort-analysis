/* IL2CPP: VoodooSauceProvider$$Initialize
void VoodooSauceProvider__Initialize (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$Initialize
   void VoodooSauceProvider__Initialize (VoodooSauceProvider_o* __this, const MethodInfo* method);
    */

void VoodooSauceProvider__Initialize_2255440(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_049b6290;
  puVar2 = PTR_DAT_049b6288;
  puVar1 = PTR_DAT_049b6280;
  if ((bRam0000000004f49bb7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6280);
    FUN_021f03f8(PTR_DAT_049b6298);
    FUN_021f03f8(PTR_DAT_049b62a0);
    FUN_021f03f8(PTR_DAT_049b6290);
    FUN_021f03f8(PTR_DAT_049b62a8);
    FUN_021f03f8(PTR_DAT_049b62b0);
    FUN_021f03f8(PTR_DAT_049b62b8);
    FUN_021f03f8(PTR_DAT_049b6288);
    bRam0000000004f49bb7 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar3;
  lVar7 = *(long *)(lVar9 + 0x38);
  if (lVar7 == 0) {
    FUN_02229774(lVar9);
    lVar7 = *(long *)(lVar9 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
                    /* catch() { ... } // from try @ 0235569c with catch @ 02355520
                       catch() { ... } // from try @ 02355754 with catch @ 02355520 */
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b62b0;
  lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 02355550 to 0245555b has its CatchHandler @ 02355758 */
    lVar7 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar8,uVar5,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_049b62b8;
  puVar2 = PTR_DAT_049b62a0;
  puVar1 = PTR_DAT_049b6298;
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 02355588 to 0245558f has its CatchHandler @ 02355760 */
    uVar5 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_049b62a8);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    thunk_FUN_021f190c();
    VoodooSauceProvider__RestoreNoAds_22555fc(param_1);
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38(uVar5,0,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar1 = PTR_DAT_049b62a0;
                    /* try { // try from 023555f4 to 024555fb has its CatchHandler @ 02355754 */
    if ((bRam0000000004f600ae & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b6298,0);
      FUN_021f03f8(PTR_DAT_049b62a0);
      bRam0000000004f600ae = 1;
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_049b6298;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x260);
    do {
      lVar9 = System_Delegate__Combine_3145640(lVar7,uVar5,0);
      if (lVar9 == 0) {
        lVar6 = 0;
      }
      else {
        uVar8 = *(undefined8 *)puVar2;
        lVar6 = thunk_FUN_0222c938(lVar9,uVar8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar9,uVar8);
        }
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_021f0574();
        lVar9 = *(long *)puVar1;
      }
      lVar9 = FUN_022290c4(*(long *)(lVar9 + 0xb8) + 0x260,lVar6,lVar7);
      bVar4 = lVar9 != lVar7;
      lVar7 = lVar9;
    } while (bVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

