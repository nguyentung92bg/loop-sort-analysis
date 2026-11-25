/* IL2CPP: SandFlowSystem$$Shutdown
void SandFlowSystem__Shutdown (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$Shutdown
   void SandFlowSystem__Shutdown (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__Shutdown_24c6900(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  char cVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char acStack_cc [4];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  puVar4 = PTR_DAT_049b3b98;
                    /* try { // try from 025c6924 to 026c694b has its CatchHandler @ 025c6b00 */
  if ((bRam0000000004f4bc08 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c71a8);
    FUN_021f03f8(PTR_DAT_049c7180);
    FUN_021f03f8(PTR_DAT_049c2860);
    FUN_021f03f8(PTR_DAT_049c71b0);
    FUN_021f03f8(PTR_DAT_049c71b8);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c71c0);
                    /* try { // try from 025c6988 to 026c69b3 has its CatchHandler @ 025c6afc */
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c71c8);
    FUN_021f03f8(PTR_DAT_049c71d0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c2870);
    FUN_021f03f8(PTR_DAT_049c71d8);
    FUN_021f03f8(PTR_DAT_049c71e0);
    FUN_021f03f8(PTR_DAT_049c71e8);
                    /* try { // try from 025c69e8 to 026c69f3 has its CatchHandler @ 025c6aec */
    FUN_021f03f8(PTR_DAT_049c1df0);
                    /* try { // try from 025c69f4 to 026c6a8b has its CatchHandler @ 025c67f4 */
    FUN_021f03f8(PTR_DAT_049c71f0);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc08 = 1;
  }
  lVar14 = *(long *)puVar4;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  uVar17 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_90 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_c8 = 0;
  acStack_cc[0] = '\0';
  if (*(int *)(lVar14 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar15 = UnityEngine_Object__op_Inequality_3c1b96c(uVar17,0,0);
  if ((uVar15 & 1) != 0) {
    if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_025c7014;
    UnityEngine_AudioSource__Stop_3bbd214(*(long *)(param_1 + 0x1b0),0);
  }
  uVar17 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 025c6a8c to 026c6a93 has its CatchHandler @ 025c6af8 */
    FUN_021f0574();
  }
                    /* try { // try from 025c6a94 to 026c6a97 has its CatchHandler @ 025c6af4 */
                    /* try { // try from 025c6a98 to 026c6a9b has its CatchHandler @ 025c6af0 */
                    /* try { // try from 025c6a9c to 026c6b1b has its CatchHandler @ 025c67f4 */
  uVar15 = UnityEngine_Object__op_Inequality_3c1b96c(uVar17,0,0);
  if ((uVar15 & 1) != 0) {
    if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_025c7014;
    UnityEngine_AudioSource__Stop_3bbd214(*(long *)(param_1 + 0x1b8),0);
  }
  if (0 < *(int *)(param_1 + 0x188)) {
    uVar15 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0xb8);
      if (lVar14 == 0) goto LAB_025c7014;
      if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_025c7018;
      SandFlowSystem__Release_24d0d74(param_1,*(undefined8 *)(lVar14 + uVar15 * 8 + 0x20));
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c69e8 with catch @ 025c6aec
                        */
      uVar15 = uVar15 + 1;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6a98 with catch @ 025c6af0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6a94 with catch @ 025c6af4
                        */
    } while ((long)uVar15 < (long)*(int *)(param_1 + 0x188));
  }
  puVar12 = PTR_DAT_049c71e0;
  puVar11 = PTR_DAT_049c71d0;
  puVar10 = PTR_DAT_049c71c8;
  puVar9 = PTR_DAT_049c71b8;
  puVar8 = PTR_DAT_049c2870;
  puVar7 = PTR_DAT_049c14e8;
  puVar6 = PTR_DAT_049c14e0;
  puVar5 = PTR_DAT_049c14d8;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6a8c with catch @ 025c6af8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6988 with catch @ 025c6afc
                        */
  if (*(long *)(param_1 + 0xd8) != 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6924 with catch @ 025c6b00
                        */
                    /* try { // try from 025c6b1c to 026c6b1f has its CatchHandler @ 025c6b28 */
                    /* catch() { ... } // from try @ 025c6b1c with catch @ 025c6b28 */
                    /* try { // try from 025c6b2c to 026c6b33 has its CatchHandler @ 025c6b3c */
                    /* try { // try from 025c6b34 to 026c6b3f has its CatchHandler @ 025c67f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c6b2c with catch @ 025c6b3c
                        */
                    /* try { // try from 025c6b40 to 026c6c67 has its CatchHandler @ 025c6b40
                       catch() { ... } // from try @ 025c6b40 with catch @ 025c6b40
                       catch() { ... } // from try @ 025c6d00 with catch @ 025c6b40
                       catch() { ... } // from try @ 025c6d8c with catch @ 025c6b40
                       catch() { ... } // from try @ 025c6e20 with catch @ 025c6b40 */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xd8),&uStack_100,*(undefined8 *)PTR_DAT_049c14f0);
    uStack_70 = uStack_f0;
    puStack_78 = puStack_f8;
    uStack_80 = uStack_100;
    uStack_100 = 0;
    puStack_f8 = &uStack_80;
    while (uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_80,*(undefined8 *)puVar6), (uVar15 & 1) != 0) {
      lVar18 = *(long *)puVar7;
      lVar16 = *(long *)(lVar18 + 0x20);
      uVar3 = *(ushort *)(lVar16 + 0x135);
      lVar14 = lVar16;
      if ((uVar3 & 1) == 0) {
        lVar14 = FUN_02229718();
        lVar16 = *(long *)(lVar18 + 0x20);
        uVar3 = *(ushort *)(lVar16 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar16 = FUN_02229718();
      }
      uVar17 = thunk_FUN_0224e54c(&uStack_80,
                                  *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_110,uVar17,uVar1);
      SandFlowSystem__Release_24d0d74(param_1,uStack_110);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_80,*(undefined8 *)puVar5);
    if (*(long *)(param_1 + 0xf8) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                (*(long *)(param_1 + 0xf8),&uStack_100,*(undefined8 *)puVar9);
      uStack_90 = uStack_e0;
      puStack_108 = &uStack_b0;
      puStack_a8 = puStack_f8;
      uStack_b0 = uStack_100;
      uStack_98 = uStack_e8;
      uStack_a0 = uStack_f0;
      uStack_110 = 0;
      while (uVar15 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                                (&uStack_b0,*(undefined8 *)puVar10), (uVar15 & 1) != 0) {
        lVar18 = *(long *)puVar11;
        lVar16 = *(long *)(lVar18 + 0x20);
        uVar3 = *(ushort *)(lVar16 + 0x135);
        lVar14 = lVar16;
        if ((uVar3 & 1) == 0) {
          lVar14 = FUN_02229718();
          lVar16 = *(long *)(lVar18 + 0x20);
          uVar3 = *(ushort *)(lVar16 + 0x135);
                    /* try { // try from 025c6c68 to 026c6c8f has its CatchHandler @ 025c6dec */
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar16 = FUN_02229718();
        }
        uVar17 = thunk_FUN_0224e54c(&uStack_b0,
                                    *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_100,uVar17,uVar1);
        puStack_b8 = puStack_f8;
        uStack_c0 = uStack_100;
        System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                  (&uStack_c0,&lStack_c8,acStack_cc,*(undefined8 *)puVar12);
        lVar14 = lStack_c8;
        cVar13 = acStack_cc[0];
                    /* try { // try from 025c6ccc to 026c6cf7 has its CatchHandler @ 025c6de8 */
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar15 = UnityEngine_Object__op_Inequality_3c1b96c(lVar14,0,0);
        if ((uVar15 & 1) != 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* try { // try from 025c6cf8 to 026c6cff has its CatchHandler @ 025c6ddc */
                    /* try { // try from 025c6d00 to 026c6d83 has its CatchHandler @ 025c6b40 */
          UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc(lVar14,cVar13 != '\0',0);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                (&uStack_b0,*(undefined8 *)PTR_DAT_049c71c0);
      puVar5 = PTR_DAT_049c7180;
      puVar4 = PTR_DAT_049c1df0;
      if (*(long *)(param_1 + 0xf8) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                  (*(long *)(param_1 + 0xf8),*(undefined8 *)PTR_DAT_049c71b0);
        SandFlowSystem__RestoreJelly_24d06c8(param_1);
        if (*(long *)(param_1 + 0xf0) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                    (*(long *)(param_1 + 0xf0),*(undefined8 *)PTR_DAT_049c2860);
          if (*(long *)(param_1 + 0x108) != 0) {
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                      (*(long *)(param_1 + 0x108),*(undefined8 *)puVar8);
            lVar14 = *(long *)(param_1 + 0x120);
            if (lVar14 != 0) {
                    /* try { // try from 025c6d84 to 026c6d87 has its CatchHandler @ 025c6de4 */
                    /* try { // try from 025c6d88 to 026c6d8b has its CatchHandler @ 025c6de0 */
              lVar16 = *(long *)puVar4;
                    /* try { // try from 025c6d8c to 026c6e07 has its CatchHandler @ 025c6b40 */
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              uVar15 = FUN_021f1190(*(undefined8 *)
                                     (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
              if ((uVar15 & 1) == 0) {
                *(undefined4 *)(lVar14 + 0x18) = 0;
              }
              else {
                iVar2 = *(int *)(lVar14 + 0x18);
                *(undefined4 *)(lVar14 + 0x18) = 0;
                if (0 < iVar2) {
                  System_Array__Clear_31229cc(*(undefined8 *)(lVar14 + 0x10),0,iVar2,0);
                }
              }
              if (*(long *)(param_1 + 0x140) != 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6cf8 with catch @ 025c6ddc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6d88 with catch @ 025c6de0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6d84 with catch @ 025c6de4
                        */
                System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                          (*(long *)(param_1 + 0x140),*(undefined8 *)PTR_DAT_049c71d8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6ccc with catch @ 025c6de8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c6c68 with catch @ 025c6dec
                        */
                if (*(long *)(param_1 + 0x128) != 0) {
                  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                            (*(long *)(param_1 + 0x128),*(undefined8 *)puVar8);
                  lVar14 = *(long *)(param_1 + 0x110);
                  if (lVar14 != 0) {
                    /* try { // try from 025c6e08 to 026c6e0b has its CatchHandler @ 025c6e14 */
                    lVar16 = *(long *)PTR_DAT_049c71f0;
                    /* catch() { ... } // from try @ 025c6e08 with catch @ 025c6e14 */
                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                    /* try { // try from 025c6e18 to 026c6e1f has its CatchHandler @ 025c6e28 */
                    /* try { // try from 025c6e20 to 026c6e2b has its CatchHandler @ 025c6b40 */
                    uVar15 = FUN_021f1190(*(undefined8 *)
                                           (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c6e18 with catch @ 025c6e28
                        */
                    if ((uVar15 & 1) == 0) {
                      *(undefined4 *)(lVar14 + 0x18) = 0;
                    }
                    else {
                      iVar2 = *(int *)(lVar14 + 0x18);
                      *(undefined4 *)(lVar14 + 0x18) = 0;
                      if (0 < iVar2) {
                        System_Array__Clear_31229cc(*(undefined8 *)(lVar14 + 0x10),0,iVar2,0);
                      }
                    }
                    lVar14 = *(long *)(param_1 + 0xd8);
                    if (lVar14 != 0) {
                      lVar16 = *(long *)puVar4;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      uVar15 = FUN_021f1190(*(undefined8 *)
                                             (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
                      if ((uVar15 & 1) == 0) {
                        *(undefined4 *)(lVar14 + 0x18) = 0;
                      }
                      else {
                        iVar2 = *(int *)(lVar14 + 0x18);
                        *(undefined4 *)(lVar14 + 0x18) = 0;
                        if (0 < iVar2) {
                          System_Array__Clear_31229cc(*(undefined8 *)(lVar14 + 0x10),0,iVar2,0);
                        }
                      }
                      if (*(long *)(param_1 + 0xe0) != 0) {
                        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                                  (*(long *)(param_1 + 0xe0),*(undefined8 *)puVar8);
                        lVar14 = *(long *)(param_1 + 0xe8);
                        if (lVar14 != 0) {
                          lVar16 = *(long *)PTR_DAT_049c71e8;
                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                          uVar15 = FUN_021f1190(*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200))
                          ;
                          if ((uVar15 & 1) == 0) {
                            *(undefined4 *)(lVar14 + 0x18) = 0;
                          }
                          else {
                            iVar2 = *(int *)(lVar14 + 0x18);
                            *(undefined4 *)(lVar14 + 0x18) = 0;
                            if (0 < iVar2) {
                              System_Array__Clear_31229cc(*(undefined8 *)(lVar14 + 0x10),0,iVar2,0);
                            }
                          }
                          if (*(long *)(param_1 + 0x250) != 0) {
                            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                                      (*(long *)(param_1 + 0x250),*(undefined8 *)puVar5);
                            if (*(long *)(param_1 + 600) != 0) {
                              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                                        (*(long *)(param_1 + 600),*(undefined8 *)PTR_DAT_049c71a8);
                              if (*(long *)(param_1 + 0x1f0) != 0) {
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                                          (*(long *)(param_1 + 0x1f0),*(undefined8 *)puVar5);
                                if (*(long *)(param_1 + 0x1f8) != 0) {
                                  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                                            (*(long *)(param_1 + 0x1f8),*(undefined8 *)puVar8);
                                  if (0 < *(int *)(param_1 + 0x188)) {
                                    uVar15 = 0;
                                    lVar14 = 0x20;
                                    do {
                                      lVar16 = *(long *)(param_1 + 0xb8);
                                      if (lVar16 == 0) goto LAB_025c7014;
                                      if (*(uint *)(lVar16 + 0x18) <= uVar15) {
LAB_025c7018:
                    /* WARNING: Subroutine does not return */
                                        FUN_021f06a8();
                                      }
                                      *(undefined8 *)(lVar16 + lVar14) = 0;
                                      thunk_FUN_021f190c(lVar16 + lVar14,0);
                                      uVar15 = uVar15 + 1;
                                      lVar14 = lVar14 + 8;
                                    } while ((long)uVar15 < (long)*(int *)(param_1 + 0x188));
                                  }
                                  lVar14 = *(long *)(param_1 + 0x168);
                                  *(undefined4 *)(param_1 + 0x188) = 0;
                                  *(undefined8 *)(param_1 + 0x168) = 0;
                                  thunk_FUN_021f190c(param_1 + 0x168,0);
                                  lVar16 = *(long *)(param_1 + 0x1c8);
                                  *(undefined1 *)(param_1 + 0x1c2) = 0;
                                  *(undefined8 *)(param_1 + 0x1c8) = 0;
                                  thunk_FUN_021f190c(param_1 + 0x1c8,0);
                                  if (lVar14 != 0) {
                                    SandFlowRenderer__Dispose_24c3a14(lVar14);
                                  }
                                  if (lVar16 != 0) {
                                    SandJellyRenderer__Dispose_24d3678(lVar16,0);
                                  }
                                  return;
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
            }
          }
        }
      }
    }
  }
LAB_025c7014:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

