/* IL2CPP: AnalyticsPurchaseEvent$$ToString
System_String_o* AnalyticsPurchaseEvent__ToString (AnalyticsPurchaseEvent_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsPurchaseEvent$$ToString
   System_String_o* AnalyticsPurchaseEvent__ToString (AnalyticsPurchaseEvent_o __this, const
   MethodInfo* method); */

long AnalyticsPurchaseEvent__ToString_2540eb8(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  
  puVar3 = PTR_DAT_049b4540;
  if ((bRam0000000004f4bfc2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049ca548);
    FUN_021f03f8(PTR_DAT_049ca550);
    FUN_021f03f8(PTR_DAT_049ca558);
    FUN_021f03f8(PTR_DAT_049ca560);
    FUN_021f03f8(PTR_DAT_049ca568);
    bRam0000000004f4bfc2 = 1;
  }
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar3,10);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(uVar4 + 0x18) != 0) {
    *(undefined8 *)(uVar4 + 0x20) = *(undefined8 *)PTR_DAT_049ca558;
    thunk_FUN_021f190c((undefined8 *)(uVar4 + 0x20));
    if ((*(uint *)(uVar4 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(uVar4 + 0x28) = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 02640f7c to 02740f7f has its CatchHandler @ 02640f90 */
      thunk_FUN_021f190c((undefined8 *)(uVar4 + 0x28));
                    /* try { // try from 02640f80 to 02740f83 has its CatchHandler @ 02640f88 */
                    /* try { // try from 02640f84 to 02740fdf has its CatchHandler @ 02640bc4 */
                    /* catch() { ... } // from try @ 02640f80 with catch @ 02640f88 */
      if (2 < *(uint *)(uVar4 + 0x18)) {
                    /* catch() { ... } // from try @ 02640e94 with catch @ 02640f8c */
                    /* catch() { ... } // from try @ 02640f7c with catch @ 02640f90 */
                    /* catch() { ... } // from try @ 02640e74 with catch @ 02640f94 */
                    /* catch() { ... } // from try @ 02640e44 with catch @ 02640f98 */
                    /* catch() { ... } // from try @ 02640e5c with catch @ 02640f9c */
        *(undefined8 *)(uVar4 + 0x30) = *(undefined8 *)PTR_DAT_049ca550;
                    /* catch() { ... } // from try @ 02640e2c with catch @ 02640fa0 */
                    /* catch() { ... } // from try @ 02640dc4 with catch @ 02640fa4 */
        thunk_FUN_021f190c((undefined8 *)(uVar4 + 0x30));
                    /* catch() { ... } // from try @ 02640d38 with catch @ 02640fa8 */
                    /* catch() { ... } // from try @ 02640d58 with catch @ 02640fac */
        if ((*(uint *)(uVar4 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(uVar4 + 0x38) = *(undefined8 *)(param_1 + 0x20);
          thunk_FUN_021f190c((undefined8 *)(uVar4 + 0x38));
          if (4 < *(uint *)(uVar4 + 0x18)) {
                    /* try { // try from 02640fe0 to 02740fe3 has its CatchHandler @ 02641004 */
                    /* try { // try from 02640fe4 to 02741007 has its CatchHandler @ 02640bc4 */
            *(undefined8 *)(uVar4 + 0x40) = *(undefined8 *)PTR_DAT_049ca560;
            thunk_FUN_021f190c((undefined8 *)(uVar4 + 0x40));
            uVar5 = System_Int32__ToString_30fbaa0(param_1 + 0x28,0);
                    /* catch() { ... } // from try @ 02640fe0 with catch @ 02641004 */
            if (5 < *(uint *)(uVar4 + 0x18)) {
                    /* try { // try from 02641008 to 0274100f has its CatchHandler @ 02641018 */
                    /* try { // try from 02641010 to 0274101b has its CatchHandler @ 02640bc4 */
              *(undefined8 *)(uVar4 + 0x48) = uVar5;
                    /* catch() { ... } // from try @ 02641008 with catch @ 02641018 */
              thunk_FUN_021f190c((undefined8 *)(uVar4 + 0x48),uVar5);
              if (6 < *(uint *)(uVar4 + 0x18)) {
                *(undefined8 *)(uVar4 + 0x50) = *(undefined8 *)PTR_DAT_049ca548;
                thunk_FUN_021f190c((undefined8 *)(uVar4 + 0x50));
                if ((*(uint *)(uVar4 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(uVar4 + 0x58) = *(undefined8 *)(param_1 + 0x30);
                  thunk_FUN_021f190c((undefined8 *)(uVar4 + 0x58));
                  if (8 < *(uint *)(uVar4 + 0x18)) {
                    *(undefined8 *)(uVar4 + 0x60) = *(undefined8 *)PTR_DAT_049ca568;
                    thunk_FUN_021f190c((undefined8 *)(uVar4 + 0x60));
                    uVar5 = System_Single__ToString_3112274(param_1 + 8,0);
                    if (9 < *(uint *)(uVar4 + 0x18)) {
                      *(undefined8 *)(uVar4 + 0x68) = uVar5;
                      thunk_FUN_021f190c();
                      puVar3 = PTR_DAT_049b4540;
                      auVar13._8_8_ = 0;
                      auVar13._0_8_ = uVar4;
                      do {
                        lVar9 = auVar13._0_8_;
                        if ((bRam0000000004f4ef96 & 1) == 0) {
                          FUN_021f03f8(puVar3,auVar13._8_8_);
                          bRam0000000004f4ef96 = 1;
                        }
                        if (lVar9 == 0) {
                          thunk_FUN_02256840(PTR_DAT_049baa58);
                          uVar6 = thunk_FUN_0222ca34();
                          uVar5 = thunk_FUN_02256840(PTR_DAT_049ce7e8);
                          System_ArgumentNullException___ctor_30655c4(uVar6,uVar5,0);
LAB_0307de98:
                          uVar5 = thunk_FUN_02256840(PTR_DAT_049e4460);
                    /* WARNING: Subroutine does not return */
                          FUN_021f0564(uVar6,uVar5);
                        }
                        uVar4 = *(ulong *)(lVar9 + 0x18);
                        if ((int)uVar4 < 2) {
                          if (uVar4 != 0) {
                            if ((int)uVar4 == 0) {
LAB_0307de44:
                    /* WARNING: Subroutine does not return */
                              FUN_021f06a8();
                            }
                            if (*(long *)(lVar9 + 0x20) != 0) {
                              return *(long *)(lVar9 + 0x20);
                            }
                          }
LAB_0307de10:
                          return **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
                        }
                        lVar7 = 0;
                        uVar11 = 0;
                        do {
                          lVar8 = *(long *)(lVar9 + lVar7 + 0x20);
                          if (lVar8 != 0) {
                            uVar11 = uVar11 + (long)*(int *)(lVar8 + 0x10);
                          }
                          lVar7 = lVar7 + 8;
                        } while ((uVar4 & 0xffffffff) * 8 - lVar7 != 0);
                        if (0x7fffffff < (long)uVar11) {
                          thunk_FUN_02256840(PTR_DAT_049bf8d0);
                          uVar6 = thunk_FUN_0222ca34();
                          System_OutOfMemoryException___ctor_31222b4(uVar6,0);
                          goto LAB_0307de98;
                        }
                        iVar10 = (int)uVar11;
                        if (iVar10 == 0) goto LAB_0307de10;
                        lVar7 = thunk_FUN_0222a544(uVar11 & 0xffffffff);
                        if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
                          iVar12 = 0;
                        }
                        else {
                          uVar4 = 0;
                          iVar12 = 0;
                          uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
                          do {
                            if (uVar11 <= uVar4) goto LAB_0307de44;
                            lVar8 = *(long *)(lVar9 + 0x20 + uVar4 * 8);
                            if ((lVar8 != 0) && (iVar1 = *(int *)(lVar8 + 0x10), iVar1 != 0)) {
                              if (iVar10 - iVar12 < iVar1) {
                                iVar12 = -1;
                                break;
                              }
                              System_String__FillStringChecked_2f7d2e8(lVar7,iVar12);
                              uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
                              iVar12 = iVar1 + iVar12;
                            }
                            uVar4 = uVar4 + 1;
                          } while ((long)uVar4 < (long)(int)uVar11);
                        }
                        if (iVar12 == iVar10) {
                          return lVar7;
                        }
                        auVar13 = System_Array__Clone_3123180(lVar9,0);
                        lVar9 = auVar13._0_8_;
                        auVar2._8_8_ = 0;
                        auVar2._0_8_ = auVar13._8_8_;
                        auVar13 = auVar2 << 0x40;
                        if (lVar9 != 0) {
                          uVar5 = *(undefined8 *)puVar3;
                          auVar13 = thunk_FUN_0222c938(lVar9,uVar5);
                          if (auVar13._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_021f0a20(lVar9,uVar5);
                          }
                        }
                      } while( true );
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

