/* IL2CPP: Conveyor$$SetSideColor
void Conveyor__SetSideColor (Conveyor_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025b0b5c) */
/* IL2CPP: Conveyor$$SetSideColor
   void Conveyor__SetSideColor (Conveyor_o* __this, UnityEngine_Color_o color, const MethodInfo*
   method); */

void Conveyor__SetSideColor_24b0834
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong *puStack_e0;
  undefined4 uStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  puVar3 = PTR_DAT_049c6a90;
                    /* try { // try from 025b086c to 026b096f has its CatchHandler @ 025b086c
                       catch() { ... } // from try @ 025b086c with catch @ 025b086c
                       catch() { ... } // from try @ 025b0a34 with catch @ 025b086c
                       catch() { ... } // from try @ 025b0a90 with catch @ 025b086c
                       catch() { ... } // from try @ 025b0ad4 with catch @ 025b086c */
  if ((bRam0000000004f4bb60 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6a98);
    FUN_021f03f8(PTR_DAT_049c6890);
    FUN_021f03f8(PTR_DAT_049c68a0);
    FUN_021f03f8(PTR_DAT_049c6aa0);
    FUN_021f03f8(PTR_DAT_049c6aa8);
    FUN_021f03f8(PTR_DAT_049c68b8);
    FUN_021f03f8(PTR_DAT_049c68d0);
    FUN_021f03f8(PTR_DAT_049c6ab0);
    FUN_021f03f8(PTR_DAT_049c6a90);
    FUN_021f03f8(PTR_DAT_049c6ab8);
    bRam0000000004f4bb60 = 1;
  }
  uStack_d0 = 0;
  puStack_c8 = (ulong *)0x0;
  uStack_c0 = 0;
  lStack_e8 = 0;
  puStack_e0 = (ulong *)0x0;
  puStack_a8 = (ulong *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d8 = 0;
  uStack_108 = CONCAT44(param_2,param_1);
  uStack_100 = (ulong *)CONCAT44(param_4,param_3);
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&lStack_e8,&uStack_108,*(undefined8 *)puVar3);
  *(ulong **)(param_5 + 0xf0) = puStack_e0;
  *(long *)(param_5 + 0xe8) = lStack_e8;
  *(undefined4 *)(param_5 + 0xf8) = uStack_d8;
  if (*(long *)(param_5 + 200) != 0) {
    lVar11 = RendererPropertyRegistry__GetTargets_249c98c
                       (*(long *)(param_5 + 200),*(undefined8 *)PTR_DAT_049c6ab8,0);
                    /* try { // try from 025b0970 to 026b098b has its CatchHandler @ 025b0a98 */
    if ((*(long *)(param_5 + 0xb0) != 0) &&
       (UnityEngine_MaterialPropertyBlock__Clear_3bdb93c(*(long *)(param_5 + 0xb0),0),
       puVar9 = PTR_DAT_049c6aa8, puVar8 = PTR_DAT_049c6aa0, puVar7 = PTR_DAT_049c6a98,
       puVar6 = PTR_DAT_049c68d0, puVar5 = PTR_DAT_049c68b8, puVar4 = PTR_DAT_049c68a0,
       puVar3 = PTR_DAT_049c6890, lVar11 != 0)) {
                    /* try { // try from 025b09a8 to 026b09eb has its CatchHandler @ 025b0a94 */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lVar11,&uStack_108,*(undefined8 *)PTR_DAT_049c6ab0);
      puStack_e0 = &uStack_b0;
      lStack_e8 = 0;
      puStack_a8 = uStack_100;
      uStack_b0 = uStack_108;
      uStack_98 = uStack_f0;
      uStack_a0 = uStack_f8;
      while( true ) {
        uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&uStack_b0,*(undefined8 *)puVar8);
        lVar11 = lStack_e8;
        if ((uVar12 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (puStack_e0,*(undefined8 *)puVar7);
          if (lVar11 == 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f0698(lVar11);
        }
        lVar16 = *(long *)puVar9;
        lVar13 = *(long *)(lVar16 + 0x20);
                    /* try { // try from 025b09f8 to 026b09fb has its CatchHandler @ 025b0a90 */
        uVar2 = *(ushort *)(lVar13 + 0x135);
        lVar11 = lVar13;
        if ((uVar2 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar13 = *(long *)(lVar16 + 0x20);
          uVar2 = *(ushort *)(lVar13 + 0x135);
        }
                    /* try { // try from 025b0a28 to 026b0a33 has its CatchHandler @ 025b0aa4 */
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar13 = FUN_02229718();
        }
                    /* try { // try from 025b0a34 to 026b0a8b has its CatchHandler @ 025b086c */
        uVar14 = thunk_FUN_0224e54c(&uStack_b0,
                                    *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_108,uVar14,uVar1);
        puVar10 = uStack_100;
        uVar12 = uStack_108;
        if (*(long *)(param_5 + 0xb0) == 0) break;
        UnityEngine_MaterialPropertyBlock__SetColor_3bdbd6c
                  (param_1,param_2,param_3,param_4,*(long *)(param_5 + 0xb0),uStack_108 & 0xffffffff
                   ,0);
        if (puVar10 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 025b0a8c to 026b0a8f has its CatchHandler @ 025b0aa4 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b09f8 with catch @ 025b0a90
                       try { // try from 025b0a90 to 026b0abf has its CatchHandler @ 025b086c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b09a8 with catch @ 025b0a94
                        */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (puVar10,&uStack_108,*(undefined8 *)puVar6);
        uStack_d0 = uStack_108;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b0970 with catch @ 025b0a98
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b0a28 with catch @ 025b0aa4
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025b0a8c with catch @ 025b0aa4
                        */
        uStack_108 = 0;
        puStack_c8 = uStack_100;
        uStack_c0 = uStack_f8;
        uStack_100 = &uStack_d0;
        while (uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&uStack_d0,*(undefined8 *)puVar4), (uVar15 & 1) != 0) {
                    /* try { // try from 025b0ac0 to 026b0ac3 has its CatchHandler @ 025b0ac8 */
          lVar16 = *(long *)puVar5;
          lVar13 = *(long *)(lVar16 + 0x20);
                    /* catch() { ... } // from try @ 025b0ac0 with catch @ 025b0ac8 */
                    /* try { // try from 025b0acc to 026b0ad3 has its CatchHandler @ 025b0adc */
          uVar2 = *(ushort *)(lVar13 + 0x135);
          lVar11 = lVar13;
          if ((uVar2 & 1) == 0) {
                    /* try { // try from 025b0ad4 to 026b0adf has its CatchHandler @ 025b086c */
            lVar11 = FUN_02229718();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b0acc with catch @ 025b0adc
                        */
            lVar13 = *(long *)(lVar16 + 0x20);
            uVar2 = *(ushort *)(lVar13 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar13 = FUN_02229718();
          }
          uVar14 = thunk_FUN_0224e54c(&uStack_d0,
                                      *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_88,uVar14,uVar1);
          if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_Renderer__SetPropertyBlock_3bdc9f0
                    (lStack_88,*(undefined8 *)(param_5 + 0xb0),uVar12 >> 0x20,0);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_d0,*(undefined8 *)puVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

