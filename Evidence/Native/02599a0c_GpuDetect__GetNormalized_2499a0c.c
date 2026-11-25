/* IL2CPP: GpuDetect$$GetNormalized
GpuDetect_Normalized_o GpuDetect__GetNormalized (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GpuDetect$$GetNormalized
   GpuDetect_Normalized_o GpuDetect__GetNormalized (const MethodInfo* method); */

void GpuDetect__GetNormalized_2499a0c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar2 = PTR_DAT_049bac38;
  puVar1 = PTR_DAT_049b4500;
                    /* try { // try from 02599a14 to 02699a1f has its CatchHandler @ 02599b04 */
                    /* try { // try from 02599a44 to 02699a53 has its CatchHandler @ 02599af4 */
  if ((bRam0000000004f4bab3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c51d8);
                    /* try { // try from 02599a58 to 02699a7f has its CatchHandler @ 02599b00 */
    FUN_021f03f8(PTR_DAT_049bac38);
    FUN_021f03f8(PTR_DAT_049c6160);
    FUN_021f03f8(PTR_DAT_049c6168);
    FUN_021f03f8(PTR_DAT_049b6188);
    FUN_021f03f8(PTR_DAT_049c6170);
                    /* try { // try from 02599a94 to 02699aa3 has its CatchHandler @ 02599b04 */
    FUN_021f03f8(PTR_DAT_049c6178);
                    /* try { // try from 02599aa4 to 02699ab3 has its CatchHandler @ 02599af8 */
    FUN_021f03f8(PTR_DAT_049b61a0);
    FUN_021f03f8(PTR_DAT_049c6180);
                    /* try { // try from 02599ab4 to 02699b1f has its CatchHandler @ 0259996c */
    FUN_021f03f8(PTR_DAT_049be8e0);
    FUN_021f03f8(PTR_DAT_049c6188);
    FUN_021f03f8(PTR_DAT_049b68a0);
    FUN_021f03f8(PTR_DAT_049c6190);
    FUN_021f03f8(PTR_DAT_049c6198);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599a44 with catch @ 02599af4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599aa4 with catch @ 02599af8
                        */
    FUN_021f03f8(PTR_DAT_049c61a0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599a00 with catch @ 02599afc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599a58 with catch @ 02599b00
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599a14 with catch @ 02599b04
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 02599a94 with catch @ 02599b04
                        */
    FUN_021f03f8(PTR_DAT_049c61a8);
    FUN_021f03f8(PTR_DAT_049c61b0);
    FUN_021f03f8(PTR_DAT_049c61b8);
                    /* try { // try from 02599b20 to 02699b23 has its CatchHandler @ 02599b2c */
    FUN_021f03f8(PTR_DAT_049c61c0);
                    /* catch() { ... } // from try @ 02599b20 with catch @ 02599b2c */
                    /* try { // try from 02599b30 to 02699b37 has its CatchHandler @ 02599b40 */
    FUN_021f03f8(PTR_DAT_049c61c8);
                    /* try { // try from 02599b38 to 02699b43 has its CatchHandler @ 0259996c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02599b30 with catch @ 02599b40
                        */
    FUN_021f03f8(PTR_DAT_049be658);
                    /* try { // try from 02599b44 to 02699bcb has its CatchHandler @ 02599b44
                       catch() { ... } // from try @ 02599b44 with catch @ 02599b44
                       catch() { ... } // from try @ 02599c28 with catch @ 02599b44
                       catch() { ... } // from try @ 02599ca4 with catch @ 02599b44 */
    FUN_021f03f8(PTR_DAT_049c61d0);
    FUN_021f03f8(PTR_DAT_049b4500);
    FUN_021f03f8(PTR_DAT_049c61d8);
    FUN_021f03f8(PTR_DAT_049c61e0);
    FUN_021f03f8(PTR_DAT_049c61e8);
    FUN_021f03f8(PTR_DAT_049c61f0);
    FUN_021f03f8(PTR_DAT_049be6a8);
    FUN_021f03f8(PTR_DAT_049c61f8);
    FUN_021f03f8(PTR_DAT_049c6200);
    bRam0000000004f4bab3 = 1;
  }
  puVar3 = PTR_DAT_049be658;
  puVar14 = (undefined8 *)PTR_DAT_049b6188;
  uStack_70 = 0;
                    /* try { // try from 02599bcc to 02699bd7 has its CatchHandler @ 02599c70 */
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  GpuDetect__GetRaw_2499904(&lStack_b8);
  uVar9 = System_String__IsNullOrEmpty_2f7c924(lStack_b8,0);
                    /* try { // try from 02599bf8 to 02699c03 has its CatchHandler @ 02599c6c */
  lVar10 = *(long *)puVar1;
  if (lStack_b0 != 0) {
    lVar10 = lStack_b0;
  }
  if ((uVar9 & 1) == 0) {
    lVar10 = lStack_b8;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 02599c1c to 02699c27 has its CatchHandler @ 02599c68 */
                    /* try { // try from 02599c28 to 02699c8b has its CatchHandler @ 02599b44 */
  lVar10 = System_Text_RegularExpressions_Regex__Replace_36f2dc4
                     (lVar10,*(undefined8 *)puVar3,*puVar14,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599c1c with catch @ 02599c68
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599bf8 with catch @ 02599c6c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599bcc with catch @ 02599c70
                        */
                    /* try { // try from 02599c8c to 02699c8f has its CatchHandler @ 02599c98 */
                    /* catch() { ... } // from try @ 02599c8c with catch @ 02599c98 */
                    /* try { // try from 02599c9c to 02699ca3 has its CatchHandler @ 02599cac */
                    /* try { // try from 02599ca4 to 02699caf has its CatchHandler @ 02599b44 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02599c9c with catch @ 02599cac
                        */
  if ((((lVar10 == 0) || (lVar10 = System_String__Trim_2f8204c(lVar10,0), lVar10 == 0)) ||
      (lVar10 = System_String__Replace_2f7fb18
                          (lVar10,*(undefined8 *)PTR_DAT_049c61b8,*(undefined8 *)puVar1,0),
      lVar10 == 0)) ||
     (((lVar10 = System_String__Replace_2f7fb18
                           (lVar10,*(undefined8 *)PTR_DAT_049c6200,*(undefined8 *)puVar1,0),
       lVar10 == 0 ||
       (lVar10 = System_String__Replace_2f7fb18
                           (lVar10,*(undefined8 *)PTR_DAT_049c61c8,*(undefined8 *)puVar1,0),
       lVar10 == 0)) ||
      ((lVar10 = System_String__Replace_2f7fb18
                           (lVar10,*(undefined8 *)PTR_DAT_049c61e8,*(undefined8 *)puVar1,0),
       lVar10 == 0 ||
       (lVar10 = System_String__Trim_2f8204c(lVar10,0), puVar7 = PTR_DAT_049c61d0,
       puVar3 = PTR_DAT_049be8e0, lVar10 == 0)))))) goto LAB_0259a1b4;
  lVar16 = *(long *)puVar1;
  uVar15 = *(undefined8 *)PTR_DAT_049b68a0;
  uVar9 = System_String__StartsWith_2f7b8c8(lVar10,*(undefined8 *)PTR_DAT_049c61d0,5,0);
  puVar6 = PTR_DAT_049c61a0;
  if ((uVar9 & 1) != 0) {
    uVar15 = *(undefined8 *)puVar7;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    plVar11 = (long *)System_Text_RegularExpressions_Regex__Match_36f2948
                                (lVar10,*(undefined8 *)PTR_DAT_049c6160,0);
    if (((plVar11 == (long *)0x0) ||
        (lVar16 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400)),
        lVar16 == 0)) ||
       (lVar16 = System_Text_RegularExpressions_GroupCollection__get_Item_36ee7f8(lVar16,1,0),
       lVar16 == 0)) goto LAB_0259a1b4;
    lVar16 = System_Text_RegularExpressions_Capture__get_Value_36ed598(lVar16,0);
    goto LAB_02599f68;
  }
  uVar9 = System_String__StartsWith_2f7b8c8(lVar10,*(undefined8 *)PTR_DAT_049c61a0,5,0);
  puVar5 = PTR_DAT_049c6170;
  if ((uVar9 & 1) == 0) {
    uVar9 = System_String__StartsWith_2f7b8c8(lVar10,*(undefined8 *)PTR_DAT_049c6170,5,0);
    puVar4 = PTR_DAT_049c6168;
    if ((uVar9 & 1) == 0) {
      uVar9 = System_String__StartsWith_2f7b8c8(lVar10,*(undefined8 *)PTR_DAT_049c6168,5,0);
      if (((uVar9 & 1) == 0) &&
         (uVar9 = System_String__StartsWith_2f7b8c8(lVar10,*(undefined8 *)PTR_DAT_049c61a8,5,0),
         puVar5 = PTR_DAT_049c61c0, (uVar9 & 1) == 0)) {
        uVar9 = System_String__StartsWith_2f7b8c8(lVar10,*(undefined8 *)PTR_DAT_049c61c0,5,0);
                    /* try { // try from 0259a0b8 to 0269a0d3 has its CatchHandler @ 0259a12c */
        if (((uVar9 & 1) != 0) ||
           (uVar9 = System_String__StartsWith_2f7b8c8(lVar10,*(undefined8 *)PTR_DAT_049c6178,5,0),
           (uVar9 & 1) != 0)) {
          uVar15 = *(undefined8 *)puVar5;
                    /* try { // try from 0259a0d4 to 0269a147 has its CatchHandler @ 02599fdc */
          lVar16 = System_String__Replace_2f7fb18(lVar10,uVar15,*(undefined8 *)puVar1,0);
          if (lVar16 == 0) goto LAB_0259a1b4;
          lVar16 = System_String__Replace_2f7fb18
                             (lVar16,*(undefined8 *)PTR_DAT_049c6178,*(undefined8 *)puVar1,0);
          puVar14 = (undefined8 *)PTR_DAT_049b6188;
joined_r0x0259a104:
          if (lVar16 == 0) goto LAB_0259a1b4;
          lVar16 = System_String__Trim_2f8204c(lVar16,0);
joined_r0x0259a19c:
          if (lVar16 == 0) goto LAB_0259a1b4;
          lVar16 = System_String__Replace_2f7fb18(lVar16,*puVar14,*(undefined8 *)puVar3,0);
          goto joined_r0x0259a1b0;
        }
        uVar9 = System_String__StartsWith_2f7b8c8(lVar10,*(undefined8 *)PTR_DAT_049c61f8,5,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259a0b8 with catch @ 0259a12c
                        */
                    /* try { // try from 0259a148 to 0269a14b has its CatchHandler @ 0259a154 */
        if (((uVar9 & 1) != 0) ||
           (iVar8 = System_String__IndexOf_2f8241c(lVar10,*(undefined8 *)PTR_DAT_049c61b0,5,0),
           -1 < iVar8)) {
                    /* catch() { ... } // from try @ 0259a148 with catch @ 0259a154 */
                    /* try { // try from 0259a158 to 0269a15f has its CatchHandler @ 0259a168 */
                    /* try { // try from 0259a160 to 0269a16b has its CatchHandler @ 02599fdc */
          uVar15 = *(undefined8 *)PTR_DAT_049c61f8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259a158 with catch @ 0259a168
                        */
          lVar16 = System_String__Replace_2f7fb18(lVar10,uVar15,*(undefined8 *)puVar1,0);
          puVar14 = (undefined8 *)PTR_DAT_049b6188;
          if (lVar16 == 0) goto LAB_0259a1b4;
          lVar16 = System_String__Replace_2f7fb18
                             (lVar16,*(undefined8 *)PTR_DAT_049c61b0,*(undefined8 *)puVar1,0);
          goto joined_r0x0259a104;
        }
        uVar9 = System_String__StartsWith_2f7b8c8(lVar10,*(undefined8 *)PTR_DAT_049c6190,5,0);
        puVar2 = PTR_DAT_049c6190;
        if ((uVar9 & 1) != 0) {
          uVar15 = *(undefined8 *)PTR_DAT_049c6190;
          lVar16 = System_String__Replace_2f7fb18(lVar10,uVar15,*(undefined8 *)puVar1,0);
          if (lVar16 == 0) goto LAB_0259a1b4;
          lVar16 = System_String__Trim_2f8204c(lVar16,0);
                    /* try { // try from 0259a208 to 0269a30b has its CatchHandler @ 0259a208
                       catch() { ... } // from try @ 0259a208 with catch @ 0259a208
                       catch() { ... } // from try @ 0259a3d0 with catch @ 0259a208
                       catch() { ... } // from try @ 0259a42c with catch @ 0259a208
                       catch() { ... } // from try @ 0259a470 with catch @ 0259a208 */
          puVar14 = (undefined8 *)PTR_DAT_049b6188;
          goto joined_r0x0259a19c;
        }
        uVar9 = System_String__IsNullOrEmpty_2f7c924(lStack_b0,0);
        puVar14 = (undefined8 *)PTR_DAT_049b6188;
        if ((uVar9 & 1) == 0) {
          if (lStack_b0 == 0) goto LAB_0259a1b4;
          iVar8 = System_String__IndexOf_2f8241c(lStack_b0,*(undefined8 *)PTR_DAT_049c6198,5,0);
          if (iVar8 < 0) {
            iVar8 = System_String__IndexOf_2f8241c(lStack_b0,*(undefined8 *)PTR_DAT_049c61e0,5,0);
            if (iVar8 < 0) {
              iVar8 = System_String__IndexOf_2f8241c(lStack_b0,*(undefined8 *)PTR_DAT_049c6170,5,0);
              puVar14 = (undefined8 *)PTR_DAT_049c6170;
              if (iVar8 < 0) {
                iVar8 = System_String__IndexOf_2f8241c
                                  (lStack_b0,*(undefined8 *)PTR_DAT_049c61d8,5,0);
                if (iVar8 < 0) {
                  iVar8 = System_String__IndexOf_2f8241c(lStack_b0,*(undefined8 *)puVar5,5,0);
                  if (iVar8 < 0) {
                    /* try { // try from 0259a30c to 0269a327 has its CatchHandler @ 0259a434 */
                    iVar8 = System_String__IndexOf_2f8241c
                                      (lStack_b0,*(undefined8 *)PTR_DAT_049c61f8,5,0);
                    puVar14 = (undefined8 *)PTR_DAT_049c61f8;
                    if (-1 < iVar8) goto LAB_0259a2a8;
                    iVar8 = System_String__IndexOf_2f8241c(lStack_b0,*(undefined8 *)puVar2,5,0);
                    /* try { // try from 0259a344 to 0269a387 has its CatchHandler @ 0259a430 */
                    puVar14 = (undefined8 *)PTR_DAT_049b6188;
                    if (-1 < iVar8) {
                      uVar15 = *(undefined8 *)puVar2;
                    }
                  }
                  else {
                    uVar15 = *(undefined8 *)puVar5;
                    puVar14 = (undefined8 *)PTR_DAT_049b6188;
                  }
                }
                else {
                  uVar15 = *(undefined8 *)puVar4;
                  puVar14 = (undefined8 *)PTR_DAT_049b6188;
                }
              }
              else {
LAB_0259a2a8:
                uVar15 = *puVar14;
                puVar14 = (undefined8 *)PTR_DAT_049b6188;
              }
            }
            else {
              uVar15 = *(undefined8 *)puVar6;
              puVar14 = (undefined8 *)PTR_DAT_049b6188;
            }
          }
          else {
            uVar15 = *(undefined8 *)puVar7;
            puVar14 = (undefined8 *)PTR_DAT_049b6188;
          }
        }
        goto LAB_02599f68;
      }
      uVar15 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      plVar11 = (long *)System_Text_RegularExpressions_Regex__Match_36f2a48
                                  (lVar10,*(undefined8 *)PTR_DAT_049c6180,1,0);
      puVar14 = (undefined8 *)PTR_DAT_049b6188;
      if (plVar11 == (long *)0x0) goto LAB_0259a1b4;
      uVar9 = System_Text_RegularExpressions_Group__get_Success_36ee5c4(plVar11,0);
      if ((uVar9 & 1) != 0) {
        lVar16 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        if (lVar16 == 0) goto LAB_0259a1b4;
        uVar13 = 2;
        goto LAB_02599f3c;
      }
    }
    else {
      uVar15 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      plVar11 = (long *)System_Text_RegularExpressions_Regex__Match_36f2a48
                                  (lVar10,*(undefined8 *)PTR_DAT_049c61f0,1,0);
      puVar14 = (undefined8 *)PTR_DAT_049b6188;
      if (plVar11 == (long *)0x0) goto LAB_0259a1b4;
      uVar9 = System_Text_RegularExpressions_Group__get_Success_36ee5c4(plVar11,0);
      if ((uVar9 & 1) != 0) {
        lVar16 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        if (((lVar16 == 0) ||
            (lVar16 = System_Text_RegularExpressions_GroupCollection__get_Item_36ee7f8(lVar16,1,0),
            lVar16 == 0)) ||
           (lVar16 = System_Text_RegularExpressions_Capture__get_Value_36ed598(lVar16,0),
           lVar16 == 0)) goto LAB_0259a1b4;
        uVar13 = System_String__ToUpperInvariant_2f81fd0(lVar16,0);
        lVar16 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049be6a8,uVar13,0);
        goto LAB_02599f68;
      }
    }
LAB_02599f64:
    lVar16 = *(long *)puVar1;
  }
  else {
    uVar15 = *(undefined8 *)puVar6;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    plVar11 = (long *)System_Text_RegularExpressions_Regex__Match_36f2948
                                (lVar10,*(undefined8 *)PTR_DAT_049c6188,0);
    puVar14 = (undefined8 *)PTR_DAT_049b6188;
    if (plVar11 == (long *)0x0) goto LAB_0259a1b4;
    uVar9 = System_Text_RegularExpressions_Group__get_Success_36ee5c4(plVar11,0);
    if ((uVar9 & 1) == 0) goto LAB_02599f64;
    lVar16 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
    if (lVar16 == 0) goto LAB_0259a1b4;
    uVar13 = 1;
LAB_02599f3c:
    lVar16 = System_Text_RegularExpressions_GroupCollection__get_Item_36ee7f8(lVar16,uVar13,0);
    if (lVar16 == 0) goto LAB_0259a1b4;
    lVar16 = System_Text_RegularExpressions_Capture__get_Value_36ed598(lVar16,0);
joined_r0x0259a1b0:
    if (lVar16 == 0) goto LAB_0259a1b4;
    lVar16 = System_String__ToUpperInvariant_2f81fd0(lVar16,0);
  }
LAB_02599f68:
  uVar9 = System_String__IsNullOrEmpty_2f7c924(lVar16,0);
  lVar12 = lVar10;
  if ((uVar9 & 1) == 0) {
    lVar12 = lVar16;
  }
  lVar12 = System_String__Concat_2f7d424(uVar15,*(undefined8 *)puVar3,lVar12,0);
  if (((lVar12 != 0) && (lVar12 = System_String__ToUpperInvariant_2f81fd0(lVar12,0), lVar12 != 0))
     && (lVar12 = System_String__Replace_2f7fb18
                            (lVar12,*(undefined8 *)PTR_DAT_049b61a0,*(undefined8 *)puVar3,0),
        puVar1 = PTR_DAT_049c51d8, lVar12 != 0)) {
    uStack_90 = System_String__Replace_2f7fb18(lVar12,*puVar14,*(undefined8 *)puVar3,0);
    uStack_70 = 0;
                    /* try { // try from 02599fdc to 0269a0b7 has its CatchHandler @ 02599fdc
                       catch() { ... } // from try @ 02599fdc with catch @ 02599fdc
                       catch() { ... } // from try @ 0259a0d4 with catch @ 02599fdc
                       catch() { ... } // from try @ 0259a160 with catch @ 02599fdc */
    uStack_88 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    thunk_FUN_021f190c(&uStack_90,uStack_90);
    uStack_88 = uVar15;
    thunk_FUN_021f190c((ulong)&uStack_90 | 8,uVar15);
    uVar9 = System_String__IsNullOrEmpty_2f7c924(lVar16,0);
    lStack_80 = lVar10;
    if ((uVar9 & 1) == 0) {
      lStack_80 = lVar16;
    }
    thunk_FUN_021f190c(&lStack_80);
    lStack_b8 = *(long *)puVar1;
    lStack_b0 = 0xffffffffffffffff;
    uStack_a8 = uStack_a0;
    uStack_78 = System_Enum__ToString_3135e00(&lStack_b8,0);
    thunk_FUN_021f190c(&uStack_78,uStack_78);
    uStack_70 = CONCAT44(uStack_70._4_4_,uStack_9c);
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = uStack_78;
    param_1[2] = lStack_80;
    param_1[4] = uStack_70;
    return;
  }
LAB_0259a1b4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

