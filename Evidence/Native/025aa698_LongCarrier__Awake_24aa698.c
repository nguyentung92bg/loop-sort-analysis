/* IL2CPP: LongCarrier$$Awake
void LongCarrier__Awake (LongCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$Awake
   void LongCarrier__Awake (LongCarrier_o* __this, const MethodInfo* method); */

void LongCarrier__Awake_24aa698
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined4 uVar18;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_049c6680;
  if ((bRam0000000004f4bb2a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6888);
    FUN_021f03f8(PTR_DAT_049c6680);
    FUN_021f03f8(PTR_DAT_049c6890);
    FUN_021f03f8(PTR_DAT_049c6898);
    FUN_021f03f8(PTR_DAT_049c68a0);
    FUN_021f03f8(PTR_DAT_049c68a8);
    FUN_021f03f8(PTR_DAT_049c68b0);
                    /* try { // try from 025aa720 to 026aa747 has its CatchHandler @ 025aa8a4 */
    FUN_021f03f8(PTR_DAT_049c68b8);
    FUN_021f03f8(PTR_DAT_049bed58);
    FUN_021f03f8(PTR_DAT_049c68c0);
    FUN_021f03f8(PTR_DAT_049c68c8);
    FUN_021f03f8(PTR_DAT_049c68d0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bb2a = 1;
  }
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  lStack_b0 = 0;
  plStack_a8 = (long *)0x0;
                    /* try { // try from 025aa784 to 026aa7af has its CatchHandler @ 025aa8a0 */
  uStack_a0 = 0;
  GameBehaviourBase__Awake_24f68a8(param_4,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_4,&uStack_d0,*(undefined8 *)puVar3);
  *(long *)(param_4 + 0x100) = uStack_d0;
  thunk_FUN_021f190c(param_4 + 0x100);
                    /* try { // try from 025aa7b0 to 026aa7b7 has its CatchHandler @ 025aa894 */
  if (*(long *)(param_4 + 0x100) != 0) {
    plVar14 = *(long **)(*(long *)(param_4 + 0x100) + 0x118);
                    /* try { // try from 025aa7b8 to 026aa83b has its CatchHandler @ 025aa5f8 */
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
      *(undefined8 *)(param_4 + 0x108) = 0;
    }
    else {
      lVar15 = *(long *)PTR_DAT_049c6888;
      bVar1 = *(byte *)(lVar15 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar1) {
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = plVar14;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar15) {
          plVar16 = (long *)0x0;
        }
      }
      *(long **)(param_4 + 0x108) = plVar16;
      if (*(byte *)(*plVar14 + 0x130) < bVar1) {
        plVar14 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar15) {
        plVar14 = (long *)0x0;
      }
    }
                    /* try { // try from 025aa83c to 026aa83f has its CatchHandler @ 025aa89c */
    plVar16 = (long *)(param_4 + 0x108);
                    /* try { // try from 025aa840 to 026aa843 has its CatchHandler @ 025aa898 */
    thunk_FUN_021f190c(plVar16,plVar14);
    puVar10 = PTR_DAT_049c68c8;
    puVar9 = PTR_DAT_049c68c0;
    puVar8 = PTR_DAT_049c68b8;
    puVar7 = PTR_DAT_049c68b0;
    puVar6 = PTR_DAT_049c68a8;
    puVar5 = PTR_DAT_049c68a0;
    puVar4 = PTR_DAT_049c6898;
    puVar3 = PTR_DAT_049bed58;
                    /* try { // try from 025aa844 to 026aa8bf has its CatchHandler @ 025aa5f8 */
    if (*(long *)(param_4 + 0xa0) != 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025aa7b0 with catch @ 025aa894
                        */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_4 + 0xa0),&uStack_d0,*(undefined8 *)PTR_DAT_049c68c8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025aa840 with catch @ 025aa898
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025aa83c with catch @ 025aa89c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025aa784 with catch @ 025aa8a0
                        */
      uStack_80 = uStack_c0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025aa720 with catch @ 025aa8a4
                        */
      plStack_88 = plStack_c8;
      lStack_90 = uStack_d0;
      uStack_d0 = 0;
      plStack_c8 = &lStack_90;
      while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&lStack_90,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
                    /* try { // try from 025aa8c0 to 026aa8c3 has its CatchHandler @ 025aa8cc */
        lVar17 = *(long *)puVar7;
        lVar12 = *(long *)(lVar17 + 0x20);
                    /* catch() { ... } // from try @ 025aa8c0 with catch @ 025aa8cc */
        uVar2 = *(ushort *)(lVar12 + 0x135);
                    /* try { // try from 025aa8d0 to 026aa8d7 has its CatchHandler @ 025aa8e0 */
        lVar15 = lVar12;
        if ((uVar2 & 1) == 0) {
          lVar15 = FUN_02229718();
                    /* try { // try from 025aa8d8 to 026aa8e3 has its CatchHandler @ 025aa5f8 */
          lVar12 = *(long *)(lVar17 + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025aa8d0 with catch @ 025aa8e0
                        */
          uVar2 = *(ushort *)(lVar12 + 0x135);
        }
        uVar18 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar12 = FUN_02229718();
        }
        uVar13 = thunk_FUN_0224e54c(&lStack_90,
                                    *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_f8,uVar13,uVar18);
        if (lStack_f8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar15 = *(long *)(param_4 + 0x120);
        uVar18 = UnityEngine_Transform__get_localPosition_3c2c388(lStack_f8,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_78 = uVar18;
        uStack_74 = param_2;
        uStack_70 = param_3;
        FUN_02333498(lVar15,&uStack_78,*(undefined8 *)puVar3);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_90,*(undefined8 *)puVar4);
      if (*(long *)(param_4 + 0xa8) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(param_4 + 0xa8),&uStack_d0,*(undefined8 *)puVar10);
        uStack_80 = uStack_c0;
        plStack_88 = plStack_c8;
        lStack_90 = uStack_d0;
        uStack_d0 = 0;
        plStack_c8 = &lStack_90;
        while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&lStack_90,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
          lVar17 = *(long *)puVar7;
          lVar12 = *(long *)(lVar17 + 0x20);
          uVar2 = *(ushort *)(lVar12 + 0x135);
          lVar15 = lVar12;
          if ((uVar2 & 1) == 0) {
            lVar15 = FUN_02229718();
            lVar12 = *(long *)(lVar17 + 0x20);
            uVar2 = *(ushort *)(lVar12 + 0x135);
          }
          uVar18 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar12 = FUN_02229718();
          }
          uVar13 = thunk_FUN_0224e54c(&lStack_90,
                                      *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_f8,uVar13,uVar18);
          if (lStack_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar15 = *(long *)(param_4 + 0x128);
          uVar18 = UnityEngine_Transform__get_localPosition_3c2c388(lStack_f8,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uStack_6c = uVar18;
          uStack_68 = param_2;
          uStack_64 = param_3;
          FUN_02333498(lVar15,&uStack_6c,*(undefined8 *)puVar3);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&lStack_90,*(undefined8 *)puVar4);
        if (*(long *)(param_4 + 0xb0) != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(param_4 + 0xb0),&uStack_d0,*(undefined8 *)PTR_DAT_049c68d0);
          uStack_a0 = uStack_c0;
          plStack_d8 = &lStack_b0;
          plStack_a8 = plStack_c8;
          lStack_b0 = uStack_d0;
          uStack_e0 = 0;
          while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                    (&lStack_b0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
            lVar17 = *(long *)puVar8;
            lVar12 = *(long *)(lVar17 + 0x20);
            uVar2 = *(ushort *)(lVar12 + 0x135);
            lVar15 = lVar12;
            if ((uVar2 & 1) == 0) {
              lVar15 = FUN_02229718();
              lVar12 = *(long *)(lVar17 + 0x20);
              uVar2 = *(ushort *)(lVar12 + 0x135);
            }
            uVar18 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar12 = FUN_02229718();
            }
            uVar13 = thunk_FUN_0224e54c(&lStack_b0,
                                        *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&uStack_d0,uVar13,uVar18);
            lVar15 = uStack_d0;
            if (uStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar12 = UnityEngine_Component__get_transform_3c18724(uStack_d0,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar17 = *(long *)(param_4 + 0x130);
            uVar18 = UnityEngine_Transform__get_localPosition_3c2c388(lVar12,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uStack_d0 = CONCAT44(param_2,uVar18);
            plStack_c8._0_4_ = param_3;
            FUN_02333498(lVar17,&uStack_d0,*(undefined8 *)puVar3);
            lVar17 = *(long *)(param_4 + 0x138);
            uVar18 = UnityEngine_Transform__get_localScale_3c2dd20(lVar12,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uStack_d0 = CONCAT44(param_2,uVar18);
            plStack_c8 = (long *)CONCAT44(plStack_c8._4_4_,param_3);
            FUN_02333498(lVar17,&uStack_d0,*(undefined8 *)puVar3);
            lVar12 = *(long *)(param_4 + 0x140);
            LongCarrier__GetLocalBounds_24aada8(&lStack_f8,lVar15);
            plStack_c8 = plStack_f0;
            uStack_d0 = lStack_f8;
            uStack_c0 = uStack_e8;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            plStack_108 = plStack_f0;
            lStack_110 = lStack_f8;
            uStack_100 = uStack_e8;
            FUN_02333498(lVar12,&lStack_110,*(undefined8 *)puVar9);
          }
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&lStack_b0,*(undefined8 *)PTR_DAT_049c6890);
          lVar15 = *plVar16;
          if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar11 = UnityEngine_Object__op_Inequality_3c1b96c(lVar15,0,0);
          if ((uVar11 & 1) == 0) {
            return;
          }
          if (*plVar16 != 0) {
            uVar18 = UnityEngine_BoxCollider__get_center_3c84f28(*plVar16,0);
            *(undefined4 *)(param_4 + 0x148) = uVar18;
            *(undefined4 *)(param_4 + 0x14c) = param_2;
            *(undefined4 *)(param_4 + 0x150) = param_3;
            if (*(long *)(param_4 + 0x108) != 0) {
              uVar18 = UnityEngine_BoxCollider__get_size_3c850d8(*(long *)(param_4 + 0x108),0);
              *(undefined4 *)(param_4 + 0x154) = uVar18;
              *(undefined4 *)(param_4 + 0x158) = param_2;
              *(undefined4 *)(param_4 + 0x15c) = param_3;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

