/* IL2CPP: DataInstaller.<Initialize>d__1$$MoveNext
void DataInstaller__Initialize_d__1__MoveNext (DataInstaller__Initialize_d__1_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025faf94) */
/* IL2CPP: DataInstaller.<Initialize>d__1$$MoveNext
   void DataInstaller__Initialize_d__1__MoveNext (DataInstaller__Initialize_d__1_o __this, const
   MethodInfo* method); */

void DataInstaller__Initialize_d__1__MoveNext_24fa788(uint *param_1)

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
  char cVar10;
  char cVar11;
  uint *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  int *piVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  undefined1 auVar24 [16];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  uint *puStack_b8;
  uint **ppuStack_b0;
  long lStack_a8;
  uint *puStack_a0;
  uint **ppuStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  uint uStack_5c;
  uint *puStack_58;
  
  puStack_58 = param_1;
  if ((bRam0000000004f4bd45 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8988);
    FUN_021f03f8(PTR_DAT_049b5468);
    FUN_021f03f8(PTR_DAT_049b5458);
    FUN_021f03f8(PTR_DAT_049c8990);
    FUN_021f03f8(PTR_DAT_049b4538);
    FUN_021f03f8(PTR_DAT_049b3ca0);
    FUN_021f03f8(PTR_DAT_049b3ca8);
    FUN_021f03f8(PTR_DAT_049b3cb0);
    FUN_021f03f8(PTR_DAT_049c8998);
    FUN_021f03f8(PTR_DAT_049b5490);
    FUN_021f03f8(PTR_DAT_049c89a0);
    FUN_021f03f8(PTR_DAT_049b3cd0);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 025fa850 to 026fa857 has its CatchHandler @ 025faa7c */
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049b5498);
                    /* try { // try from 025fa870 to 026fa8bb has its CatchHandler @ 025faa80 */
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c89a8);
    FUN_021f03f8(PTR_DAT_049c89b0);
    FUN_021f03f8(PTR_DAT_049c89b8);
    bRam0000000004f4bd45 = 1;
  }
  uStack_5c = *param_1;
  lVar23 = *(long *)(param_1 + 8);
  lStack_70 = 0;
  lStack_68 = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  iStack_88 = 0;
                    /* try { // try from 025fa8bc to 026fa8cf has its CatchHandler @ 025fa70c */
  if (1 < uStack_5c) {
                    /* try { // try from 025fa8d0 to 026fa8db has its CatchHandler @ 025faa6c */
    if (*(int *)(*(long *)PTR_DAT_049b5458 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025fa8dc to 026fa8eb has its CatchHandler @ 025faa78 */
    auVar24 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                        (&lStack_68,*(undefined8 *)PTR_DAT_049b5468);
                    /* try { // try from 025fa8f0 to 026fa907 has its CatchHandler @ 025faa68 */
    *(undefined1 (*) [16])(puStack_58 + 10) = auVar24;
    thunk_FUN_021f190c((undefined1 (*) [16])(puStack_58 + 10),0);
  }
  puVar9 = PTR_DAT_049c89a8;
  puVar8 = PTR_DAT_049c89a0;
  puVar7 = PTR_DAT_049c8990;
  puVar5 = PTR_DAT_049b3cb0;
  puVar4 = PTR_DAT_049b3ca8;
  puVar3 = PTR_DAT_049b3b98;
  puStack_a0 = &uStack_5c;
                    /* try { // try from 025fa91c to 026fa937 has its CatchHandler @ 025faa64 */
  lStack_a8 = 0;
  ppuStack_98 = &puStack_58;
  if (uStack_5c == 1) {
    uStack_5c = 0xffffffff;
    auStack_80 = *(undefined1 (*) [16])(puStack_58 + 0x14);
    puStack_58[0x14] = 0;
    puStack_58[0x15] = 0;
    puStack_58[0x16] = 0;
    puStack_58[0x17] = 0;
    *puStack_58 = 0xffffffff;
  }
  else {
                    /* try { // try from 025fa944 to 026fa947 has its CatchHandler @ 025faa60 */
                    /* try { // try from 025fa948 to 026faa53 has its CatchHandler @ 025fa70c */
    if (uStack_5c != 0) {
      if (*(long *)(puStack_58 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                         (*(long *)(puStack_58 + 6),*(undefined8 *)PTR_DAT_049c89b0,&lStack_70,
                          *(undefined8 *)PTR_DAT_049b4538);
      if ((uVar14 & 1) != 0) {
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lStack_70 = System_String__Substring_2f7f570(lStack_70,1,*(int *)(lStack_70 + 0x10) + -2,0);
        UnityEngine_JsonUtility__FromJson___Il2CppFullySharedGenericType__265034c
                  (lStack_70,&lStack_c0,*(undefined8 *)PTR_DAT_049c8998);
        if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                  (lStack_68,*(undefined8 *)(lStack_c0 + 0x10),*(undefined8 *)PTR_DAT_049b5490);
      }
      lVar16 = lStack_68;
      puVar6 = PTR_DAT_049b5310;
      if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar15 = PlayerPrefsString__get_Value_3f0e288(*(long *)(*(long *)puVar6 + 0xb8) + 0x40,0);
                    /* try { // try from 025faa54 to 026faa57 has its CatchHandler @ 025faa74 */
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 025faa58 to 026faa5b has its CatchHandler @ 025faa70 */
                    /* try { // try from 025faa5c to 026faa9f has its CatchHandler @ 025fa70c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fa944 with catch @ 025faa60
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fa91c with catch @ 025faa64
                        */
      uVar17 = System_String__Split_2f802dc(lVar15,10,0,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fa8f0 with catch @ 025faa68
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fa8d0 with catch @ 025faa6c
                        */
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(uVar17,uVar17);
      }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025faa58 with catch @ 025faa70
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025faa54 with catch @ 025faa74
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fa8dc with catch @ 025faa78
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fa850 with catch @ 025faa7c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fa870 with catch @ 025faa80
                        */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                (lVar16,uVar17,*(undefined8 *)PTR_DAT_049b5490);
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lStack_68,&lStack_d8,*(undefined8 *)PTR_DAT_049b3cd0);
                    /* try { // try from 025faaa0 to 026faaa3 has its CatchHandler @ 025faac4 */
                    /* try { // try from 025faaa4 to 026faac7 has its CatchHandler @ 025fa70c */
      puStack_b8 = (uint *)uStack_d0;
      lStack_c0 = lStack_d8;
      ppuStack_b0 = (uint **)uStack_c8;
      *(undefined8 *)(puStack_58 + 0x10) = uStack_d0;
      *(long *)(puStack_58 + 0xe) = lStack_d8;
      *(undefined8 *)(puStack_58 + 0x12) = uStack_c8;
                    /* catch() { ... } // from try @ 025faaa0 with catch @ 025faac4 */
      thunk_FUN_021f190c(puStack_58 + 0xe,0);
                    /* try { // try from 025faac8 to 026faacf has its CatchHandler @ 025faad8 */
      puStack_b8 = &uStack_5c;
                    /* try { // try from 025faad0 to 026faadb has its CatchHandler @ 025fa70c */
      lStack_c0 = 0;
      ppuStack_b0 = &puStack_58;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025faac8 with catch @ 025faad8
                        */
      if (uStack_5c != 0) goto LAB_025fabbc;
    }
    ppuStack_b0 = &puStack_58;
    puStack_b8 = &uStack_5c;
    lStack_c0 = 0;
    uStack_5c = 0xffffffff;
    auStack_80 = *(undefined1 (*) [16])(puStack_58 + 0x14);
    puStack_58[0x14] = 0;
    puStack_58[0x15] = 0;
    puStack_58[0x16] = 0;
    puStack_58[0x17] = 0;
    *puStack_58 = 0xffffffff;
    do {
      plVar13 = (long *)Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter__GetResult_380a750
                                  (auStack_80,0);
      if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(plVar13);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar14 = UnityEngine_Object__op_Equality_3c1eeb4(plVar13,0,0);
      if ((uVar14 & 1) == 0) {
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lVar23 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        FUN_02333498(*(long *)(lVar23 + 0x10),plVar13,*(undefined8 *)puVar8);
      }
LAB_025fabbc:
      do {
        uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (puStack_58 + 0xe,*(undefined8 *)puVar4);
        puVar12 = puStack_58;
        if ((uVar14 & 1) == 0) {
          iVar22 = 0xb;
          goto LAB_025faccc;
        }
        lVar21 = *(long *)puVar5;
        lVar15 = *(long *)(lVar21 + 0x20);
        uVar2 = *(ushort *)(lVar15 + 0x135);
        lVar16 = lVar15;
        if ((uVar2 & 1) == 0) {
          lVar16 = FUN_02229718();
          lVar15 = *(long *)(lVar21 + 0x20);
          uVar2 = *(ushort *)(lVar15 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar15 = FUN_02229718();
        }
        uVar17 = thunk_FUN_0224e54c(puVar12 + 0xe,
                                    *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_d8,uVar17,uVar1);
        lVar16 = lStack_d8;
        uVar14 = System_String__IsNullOrEmpty_2f7c924(lStack_d8,0);
      } while ((uVar14 & 1) != 0);
      uVar17 = UnityEngine_Resources__LoadAsync_object__26a751c(lVar16,*(undefined8 *)puVar9);
      auVar24 = Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter_3804b04(uVar17,0);
      auStack_80 = auVar24;
      uVar14 = Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter__get_IsCompleted_380a738
                         (auStack_80,0);
    } while ((uVar14 & 1) != 0);
    uStack_5c = 0;
    *puStack_58 = 0;
    *(undefined1 (*) [16])(puStack_58 + 0x14) = auStack_80;
    thunk_FUN_021f190c(puStack_58 + 0x14,0);
    FUN_0235c25c(puStack_58 + 2,auStack_80,puStack_58,*(undefined8 *)PTR_DAT_049c8988);
    iVar22 = 10;
LAB_025faccc:
    if ((int)uStack_5c < 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (*ppuStack_b0 + 0xe,*(undefined8 *)PTR_DAT_049b3ca0);
    }
    puVar3 = PTR_DAT_049c89b8;
    if ((iVar22 != 0xb) && (iVar22 != 0)) goto LAB_025fadc8;
    uVar19 = *(undefined8 *)puVar9;
    puStack_58[0x10] = 0;
    puStack_58[0x11] = 0;
    puStack_58[0x12] = 0;
    puStack_58[0x13] = 0;
    uVar17 = *(undefined8 *)puVar3;
    puStack_58[0xe] = 0;
    puStack_58[0xf] = 0;
    uVar17 = UnityEngine_Resources__LoadAsync_object__26a751c(uVar17,uVar19);
    auVar24 = Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter_3804b04(uVar17,0);
    auStack_80 = auVar24;
    uVar14 = Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter__get_IsCompleted_380a738
                       (auStack_80,0);
    if ((uVar14 & 1) == 0) {
      uStack_5c = 1;
      *puStack_58 = 1;
      *(undefined1 (*) [16])(puStack_58 + 0x14) = auStack_80;
      thunk_FUN_021f190c(puStack_58 + 0x14,0);
      FUN_0235c25c(puStack_58 + 2,auStack_80,puStack_58,*(undefined8 *)PTR_DAT_049c8988);
      iVar22 = 10;
      goto LAB_025fadc8;
    }
  }
                    /* try { // try from 025fad40 to 026fadf3 has its CatchHandler @ 025fad40
                       catch() { ... } // from try @ 025fad40 with catch @ 025fad40
                       catch() { ... } // from try @ 025fae64 with catch @ 025fad40
                       catch() { ... } // from try @ 025fae88 with catch @ 025fad40
                       catch() { ... } // from try @ 025faebc with catch @ 025fad40
                       catch() { ... } // from try @ 025faeec with catch @ 025fad40
                       catch() { ... } // from try @ 025faf18 with catch @ 025fad40 */
  plVar13 = (long *)Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter__GetResult_380a750
                              (auStack_80,0);
  if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0a20(plVar13);
  }
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar23 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  FUN_02333498(*(long *)(lVar23 + 0x10),plVar13,*(undefined8 *)puVar8);
  iVar22 = 0xd;
LAB_025fadc8:
  if ((int)*puStack_a0 < 0) {
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (*ppuStack_98 + 10,*(undefined8 *)PTR_DAT_049b5498);
  }
  puVar12 = puStack_58;
  cVar11 = cRam0000000004f49bfa;
  cVar10 = cRam0000000004f49bf9;
                    /* try { // try from 025fadf4 to 026fadfb has its CatchHandler @ 025faec8 */
  if (lStack_a8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if (iVar22 == 0xd) {
    *puStack_58 = 0xfffffffe;
    puStack_58[10] = 0;
    puStack_58[0xb] = 0;
    puStack_58[0xc] = 0;
    puStack_58[0xd] = 0;
    if (cVar11 == '\0') {
                    /* try { // try from 025faeb8 to 026faebb has its CatchHandler @ 025faec0 */
      FUN_021f03f8(PTR_DAT_049b56d0);
                    /* try { // try from 025faebc to 026faee7 has its CatchHandler @ 025fad40 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025faeb8 with catch @ 025faec0
                        */
      cRam0000000004f49bfa = '\x01';
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fae7c with catch @ 025faec4
                        */
    plVar13 = *(long **)(puVar12 + 2);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fadf4 with catch @ 025faec8
                        */
    if (plVar13 != (long *)0x0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025fae18 with catch @ 025faecc
                        */
      lVar23 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar14 != 0) {
                    /* try { // try from 025faee8 to 026faeeb has its CatchHandler @ 025faf0c */
        piVar20 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
                    /* try { // try from 025faeec to 026faf0f has its CatchHandler @ 025fad40 */
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar18 = (undefined8 *)(lVar23 + (long)(*piVar20 + 2) * 0x10 + 0x138);
            goto LAB_025faf60;
          }
          uVar14 = uVar14 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar14 != 0);
      }
                    /* catch() { ... } // from try @ 025faee8 with catch @ 025faf0c */
      puVar18 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049b56d0,2);
                    /* try { // try from 025faf10 to 026faf17 has its CatchHandler @ 025faf20 */
LAB_025faf60:
      (*(code *)*puVar18)(plVar13,puVar18[1]);
    }
  }
  else if (iVar22 == 0) {
                    /* try { // try from 025fae18 to 026fae63 has its CatchHandler @ 025faecc */
    uVar17 = (&uStack_90)[iStack_88 + -1];
    *puStack_58 = 0xfffffffe;
    puStack_58[10] = 0;
    puStack_58[0xb] = 0;
    puStack_58[0xc] = 0;
    puStack_58[0xd] = 0;
    if (cVar10 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bf9 = '\x01';
    }
    plVar13 = *(long **)(puVar12 + 2);
    if (plVar13 == (long *)0x0) {
      *(undefined8 *)(puVar12 + 4) = uVar17;
                    /* try { // try from 025faf18 to 026faf23 has its CatchHandler @ 025fad40 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025faf10 with catch @ 025faf20
                        */
      thunk_FUN_021f190c(puVar12 + 4,uVar17);
    }
    else {
      lVar23 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar14 != 0) {
                    /* try { // try from 025fae64 to 026fae7b has its CatchHandler @ 025fad40 */
        piVar20 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar18 = (undefined8 *)(lVar23 + (long)(*piVar20 + 3) * 0x10 + 0x138);
            goto LAB_025faf38;
          }
          uVar14 = uVar14 - 1;
                    /* try { // try from 025fae7c to 026fae87 has its CatchHandler @ 025faec4 */
          piVar20 = piVar20 + 4;
        } while (uVar14 != 0);
      }
                    /* try { // try from 025fae88 to 026faeb7 has its CatchHandler @ 025fad40 */
      puVar18 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049b56d0,3);
LAB_025faf38:
      (*(code *)*puVar18)(plVar13,uVar17,puVar18[1]);
    }
  }
  return;
}

