/* IL2CPP: LondonTrip$$BuyNextProgress
void LondonTrip__BuyNextProgress (LondonTrip_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTrip$$BuyNextProgress
   void LondonTrip__BuyNextProgress (LondonTrip_o* __this, const MethodInfo* method); */

void LondonTrip__BuyNextProgress_2522a60(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  ulong uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  
  puVar4 = PTR_DAT_049b5388;
  puVar3 = PTR_DAT_049b5380;
  if ((bRam0000000004f4be7f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b5390);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049b5388);
    FUN_021f03f8(PTR_DAT_049b5380);
    FUN_021f03f8(PTR_DAT_049c9888);
    FUN_021f03f8(PTR_DAT_049c9160);
    FUN_021f03f8(PTR_DAT_049c59c8);
    FUN_021f03f8(PTR_DAT_049c59f0);
    FUN_021f03f8(PTR_DAT_049b61c8);
    bRam0000000004f4be7f = 1;
  }
  uStack_80 = 0;
  dStack_78 = 0.0;
  uStack_70 = 0;
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar10,*(undefined8 *)puVar4);
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0x38);
    uStack_a0 = *(undefined8 *)(param_1 + 0x30);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    uStack_90 = *(undefined8 *)(param_1 + 0x40);
    lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 200);
    iVar9 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_a0,0);
    if (lVar15 != 0) {
      uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar9 + 1);
      lVar15 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                         (lVar15,&uStack_b8,*(undefined8 *)PTR_DAT_049c59f0);
      if ((lVar15 != 0) &&
         (lVar11 = LondonTripSheet_Row__GetPayouts_2564a90(lVar15,0), puVar8 = PTR_DAT_049c59c8,
         puVar7 = PTR_DAT_049b6350, puVar6 = PTR_DAT_049b6348, puVar5 = PTR_DAT_049b6330,
         puVar4 = PTR_DAT_049b61c8, puVar3 = PTR_DAT_049b5390, lVar11 != 0)) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lVar11,&uStack_b8,*(undefined8 *)PTR_DAT_049b6370);
        uStack_70 = uStack_a8;
        dStack_78 = dStack_b0;
        uStack_80 = uStack_b8;
                    /* try { // try from 02622c04 to 02722cf3 has its CatchHandler @ 02622c04
                       catch() { ... } // from try @ 02622c04 with catch @ 02622c04
                       catch() { ... } // from try @ 02622d60 with catch @ 02622c04
                       catch() { ... } // from try @ 02622e38 with catch @ 02622c04
                       catch() { ... } // from try @ 02622e70 with catch @ 02622c04
                       catch() { ... } // from try @ 02622ec0 with catch @ 02622c04
                       catch() { ... } // from try @ 02622ee4 with catch @ 02622c04 */
        while (uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&uStack_80,*(undefined8 *)puVar6), (uVar12 & 1) != 0) {
          lVar16 = *(long *)puVar7;
          lVar13 = *(long *)(lVar16 + 0x20);
          uVar2 = *(ushort *)(lVar13 + 0x135);
          lVar11 = lVar13;
          if ((uVar2 & 1) == 0) {
            lVar11 = FUN_02229718();
            lVar13 = *(long *)(lVar16 + 0x20);
            uVar2 = *(ushort *)(lVar13 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar13 = FUN_02229718();
          }
          uVar14 = thunk_FUN_0224e54c(&uStack_80,
                                      *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&uStack_b8,uVar14,uVar1);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar12 = uStack_b8 & 0xffffffff;
          dVar17 = (double)(int)(uStack_b8 >> 0x20);
          uStack_b8 = uVar12;
          dStack_b0 = dVar17;
          FUN_02333498(lVar10,&uStack_b8,*(undefined8 *)puVar3);
          if (*(int *)(lVar15 + 0x20) < 1) {
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            FulfillModule__FulfillFreePayout_254358c
                      (*(long *)(param_1 + 0x20),uVar12,dVar17,*(undefined8 *)puVar4,0);
          }
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_80,*(undefined8 *)puVar5);
        iVar9 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x30,0);
                    /* try { // try from 02622cf4 to 02722cfb has its CatchHandler @ 02622e9c */
        CloudPrefsInt__set_Value_24e9a2c(param_1 + 0x30,iVar9 + 1,0);
        if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 02622d14 to 02722d5f has its CatchHandler @ 02622ea0 */
          uVar12 = Monitors__IsActive_object__2688ab4
                             (*(long *)(param_1 + 0x28),*(undefined8 *)puVar8);
          if ((uVar12 & 1) != 0) {
            if (((*(long *)(param_1 + 0x28) == 0) ||
                (lVar15 = Monitors__Get_object__26889d0
                                    (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_049c9160),
                lVar15 == 0)) ||
               (lVar15 = MonitorBase__GetSubMonitor_object__2688828
                                   (lVar15,*(undefined8 *)PTR_DAT_049c9888), lVar15 == 0))
            goto LAB_02622d84;
            LondonTripSubMonitor__HandleBuyNextProgress_247f980(lVar15,lVar10,0);
          }
                    /* try { // try from 02622d60 to 02722d83 has its CatchHandler @ 02622c04 */
          return;
        }
      }
    }
  }
LAB_02622d84:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02622d84 to 02722d87 has its CatchHandler @ 02622e74 */
  FUN_021f06a0();
}

