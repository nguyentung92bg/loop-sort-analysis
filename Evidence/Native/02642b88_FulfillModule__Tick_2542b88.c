/* IL2CPP: FulfillModule$$Tick
void FulfillModule__Tick (FulfillModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$Tick
   void FulfillModule__Tick (FulfillModule_o* __this, const MethodInfo* method); */

void FulfillModule__Tick_2542b88(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  long lStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  undefined1 auStack_50 [16];
  long *plStack_38;
  
                    /* catch() { ... } // from try @ 02642b70 with catch @ 02642b88 */
                    /* try { // try from 02642b8c to 02742bab has its CatchHandler @ 02642c04 */
  if ((bRam0000000004f4bfe9 & 1) == 0) {
                    /* try { // try from 02642bb4 to 02742bc3 has its CatchHandler @ 02642bf8 */
    FUN_021f03f8(PTR_DAT_049ca690);
    FUN_021f03f8(PTR_DAT_049c4108);
                    /* try { // try from 02642bcc to 02742bd3 has its CatchHandler @ 02642c00 */
    FUN_021f03f8(PTR_DAT_049c1ae0);
                    /* try { // try from 02642bd4 to 02742beb has its CatchHandler @ 02642aa0 */
    FUN_021f03f8(PTR_DAT_049c6ca8);
    FUN_021f03f8(PTR_DAT_049c4f60);
                    /* try { // try from 02642bec to 02742bef has its CatchHandler @ 02642c04 */
                    /* try { // try from 02642bf0 to 02742bf3 has its CatchHandler @ 02642bfc */
    FUN_021f03f8(PTR_DAT_049ca698);
                    /* try { // try from 02642bf4 to 02742bf7 has its CatchHandler @ 02642c00 */
                    /* catch() { ... } // from try @ 02642bb4 with catch @ 02642bf8 */
                    /* catch() { ... } // from try @ 02642bf0 with catch @ 02642bfc */
    FUN_021f03f8(PTR_DAT_049ca6a0);
                    /* catch() { ... } // from try @ 02642bcc with catch @ 02642c00
                       catch() { ... } // from try @ 02642bf4 with catch @ 02642c00 */
                    /* catch() { ... } // from try @ 02642b8c with catch @ 02642c04
                       catch() { ... } // from try @ 02642bec with catch @ 02642c04 */
    FUN_021f03f8(PTR_DAT_049ca6a8);
                    /* try { // try from 02642c14 to 02742c17 has its CatchHandler @ 02642f04 */
    FUN_021f03f8(PTR_DAT_049ca6b0);
                    /* try { // try from 02642c18 to 02742c1f has its CatchHandler @ 02642ef0 */
    FUN_021f03f8(PTR_DAT_049ca6b8);
                    /* try { // try from 02642c24 to 02742c2f has its CatchHandler @ 02642ef4 */
    FUN_021f03f8(PTR_DAT_049ca6c0);
                    /* try { // try from 02642c34 to 02742c3f has its CatchHandler @ 02642ef8 */
    FUN_021f03f8(PTR_DAT_049c5e10);
                    /* try { // try from 02642c44 to 02742c4f has its CatchHandler @ 02642f04 */
    FUN_021f03f8(PTR_DAT_049c8c10);
    FUN_021f03f8(PTR_DAT_049c2308);
    FUN_021f03f8(PTR_DAT_049ca6c8);
                    /* try { // try from 02642c64 to 02742c67 has its CatchHandler @ 02642eec */
                    /* try { // try from 02642c68 to 02742c73 has its CatchHandler @ 02642f00 */
    FUN_021f03f8(PTR_DAT_049ca6d0);
    bRam0000000004f4bfe9 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_68._8_8_ = 0;
  lStack_58 = 0;
  lStack_70 = 0;
  auStack_68._0_8_ = 0;
  if (0 < *(int *)(param_1 + 100)) {
    return;
  }
                    /* try { // try from 02642c8c to 02742c8f has its CatchHandler @ 02642f04 */
                    /* try { // try from 02642c90 to 02742c9f has its CatchHandler @ 02642ee0 */
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar5 = Monitors__Get_object__26889d0(*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c5e10)
    ;
    if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 02642cb0 to 02742cb3 has its CatchHandler @ 02642ed0 */
                    /* try { // try from 02642cb4 to 02742ccf has its CatchHandler @ 02642edc */
      uVar6 = GameMachine__IsInState_object__261a580
                        (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049c4108);
      if ((uVar6 & 1) == 0) {
        if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 02642e84 to 02742e87 has its CatchHandler @ 02642ee4 */
          uVar6 = GameMachine__IsInState_object__261a580
                            (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049c1ae0);
          if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 02642f1c with catch @ 02642f94
                       catch() { ... } // from try @ 02642f84 with catch @ 02642f94 */
                    /* try { // try from 02642f98 to 02742f9b has its CatchHandler @ 02642fa4 */
            if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 02642f9c to 02742fa7 has its CatchHandler @ 02642aa0 */
                    /* catch() { ... } // from try @ 02642f98 with catch @ 02642fa4 */
              uVar6 = GameMachine__IsInState_object__261a580
                                (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049c6ca8);
              if ((uVar6 & 1) == 0) {
                    /* try { // try from 02642fb4 to 0274305f has its CatchHandler @ 02642fb4
                       catch() { ... } // from try @ 02642fb4 with catch @ 02642fb4
                       catch() { ... } // from try @ 0264338c with catch @ 02642fb4
                       catch() { ... } // from try @ 026433fc with catch @ 02642fb4
                       catch() { ... } // from try @ 0264348c with catch @ 02642fb4
                       catch() { ... } // from try @ 026434b8 with catch @ 02642fb4
                       catch() { ... } // from try @ 026434f4 with catch @ 02642fb4
                       catch() { ... } // from try @ 02643520 with catch @ 02642fb4
                       catch() { ... } // from try @ 0264358c with catch @ 02642fb4 */
                if (*(long *)(param_1 + 0x38) == 0) goto LAB_0264302c;
                uVar6 = GameMachine__IsInState_object__261a580
                                  (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049ca698);
                if ((uVar6 & 1) == 0) {
                  if (*(long *)(param_1 + 0x38) == 0) goto LAB_0264302c;
                  uVar6 = GameMachine__IsInState_object__261a580
                                    (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049ca690);
                  if ((uVar6 & 1) == 0) {
                    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0264302c;
                    uVar6 = GameMachine__IsInState_object__261a580
                                      (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049c4f60);
                    if ((uVar6 & 1) == 0) {
                      return;
                    }
                  }
                }
              }
              if (lVar5 != 0) {
                FulfillRewardMonitor__Discard_24402c4(lVar5,0);
                return;
              }
            }
          }
          else if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 02642e98 to 02742ea3 has its CatchHandler @ 02642ecc */
            auStack_68 = Monitors__GetActiveMonitors_256e6ac(*(long *)(param_1 + 0x30),&lStack_70,0)
            ;
                    /* try { // try from 02642eb0 to 02742ebf has its CatchHandler @ 02642ec8 */
            if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* try { // try from 02642ec4 to 02742ec7 has its CatchHandler @ 02642efc */
                    /* catch() { ... } // from try @ 02642eb0 with catch @ 02642ec8
                       try { // try from 02642ec8 to 02742f1b has its CatchHandler @ 02642aa0 */
            uVar8 = Monitors__Get_object__26889d0
                              (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c2308);
                    /* catch() { ... } // from try @ 02642e98 with catch @ 02642ecc */
                    /* catch() { ... } // from try @ 02642cb0 with catch @ 02642ed0 */
                    /* catch() { ... } // from try @ 02642d44 with catch @ 02642ed4 */
            if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0(0,uVar8);
            }
                    /* catch() { ... } // from try @ 02642cd4 with catch @ 02642ed8 */
                    /* catch() { ... } // from try @ 02642cb4 with catch @ 02642edc */
                    /* catch() { ... } // from try @ 02642c90 with catch @ 02642ee0 */
                    /* catch() { ... } // from try @ 02642e84 with catch @ 02642ee4 */
            System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
                      (lStack_70,uVar8,*(undefined8 *)PTR_DAT_049ca6b0);
                    /* catch() { ... } // from try @ 02642cf4 with catch @ 02642ee8
                       catch() { ... } // from try @ 02642d6c with catch @ 02642ee8 */
                    /* catch() { ... } // from try @ 02642c64 with catch @ 02642eec */
            if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* catch() { ... } // from try @ 02642c18 with catch @ 02642ef0 */
                    /* catch() { ... } // from try @ 02642c24 with catch @ 02642ef4 */
            if (*(int *)(lStack_70 + 0x18) == 0) {
                    /* catch() { ... } // from try @ 02642c34 with catch @ 02642ef8 */
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
                    /* catch() { ... } // from try @ 02642ec4 with catch @ 02642efc */
                    /* catch() { ... } // from try @ 02642c68 with catch @ 02642f00 */
                    /* catch() { ... } // from try @ 02642c14 with catch @ 02642f04
                       catch() { ... } // from try @ 02642c44 with catch @ 02642f04
                       catch() { ... } // from try @ 02642c8c with catch @ 02642f04
                       catch() { ... } // from try @ 02642df8 with catch @ 02642f04 */
              FulfillRewardMonitor__StartFulfillAsync_2440404(lVar5,0);
            }
            puVar9 = auStack_68;
            goto LAB_02642f10;
          }
        }
      }
      else {
                    /* try { // try from 02642cd4 to 02742cdf has its CatchHandler @ 02642ed8 */
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar7 = Monitors__Get_object__26889d0
                              (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c8c10),
           lVar7 != 0)) {
                    /* try { // try from 02642cf4 to 02742d17 has its CatchHandler @ 02642ee8 */
          uVar6 = HomeNavigationMonitor__IsCurrentPageOfType_object__2641554
                            (lVar7,*(undefined8 *)PTR_DAT_049ca6a0);
          if ((uVar6 & 1) == 0) {
            return;
          }
          if (*(long *)(param_1 + 0x30) != 0) {
            auStack_50 = Monitors__GetActiveMonitors_256e6ac(*(long *)(param_1 + 0x30),&lStack_58,0)
            ;
            if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
                      (lStack_58,lVar7,*(undefined8 *)PTR_DAT_049ca6b0);
            puVar4 = PTR_DAT_049ca6c8;
            puVar3 = PTR_DAT_049ca6c0;
            puVar2 = PTR_DAT_049ca6a8;
            if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* try { // try from 02642d44 to 02742d53 has its CatchHandler @ 02642ed4 */
            iVar10 = *(int *)(lStack_58 + 0x18);
            if (-1 < iVar10 + -1) {
              do {
                    /* try { // try from 02642d6c to 02742de7 has its CatchHandler @ 02642ee8 */
                if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                iVar10 = iVar10 + -1;
                System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (lStack_58,iVar10,&plStack_38,*(undefined8 *)puVar3);
                if (plStack_38 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
                  if ((bVar1 <= *(byte *)(*plStack_38 + 0x130)) &&
                     (*(long *)(*(long *)(*plStack_38 + 200) + (ulong)bVar1 * 8 + -8) ==
                      *(long *)puVar4)) {
                    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
                              (lStack_58,iVar10,*(undefined8 *)puVar2);
                  }
                }
              } while (0 < iVar10);
              if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
            }
            if (*(int *)(lStack_58 + 0x18) == 0) {
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              FulfillRewardMonitor__StartFulfillAsync_2440404(lVar5,0);
            }
                    /* try { // try from 02642df8 to 02742e7f has its CatchHandler @ 02642f04 */
            puVar9 = auStack_50;
LAB_02642f10:
            UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                      (puVar9,*(undefined8 *)PTR_DAT_049ca6d0);
            return;
                    /* try { // try from 02642f1c to 02742f33 has its CatchHandler @ 02642f94 */
          }
        }
      }
    }
  }
LAB_0264302c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

