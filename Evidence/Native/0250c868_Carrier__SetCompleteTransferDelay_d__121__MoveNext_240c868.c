/* IL2CPP: Carrier.<SetCompleteTransferDelay>d__121$$MoveNext
void Carrier__SetCompleteTransferDelay_d__121__MoveNext (Carrier__SetCompleteTransferDelay_d__121_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier.<SetCompleteTransferDelay>d__121$$MoveNext
   void Carrier__SetCompleteTransferDelay_d__121__MoveNext
   (Carrier__SetCompleteTransferDelay_d__121_o __this, const MethodInfo* method); */

void Carrier__SetCompleteTransferDelay_d__121__MoveNext_240c868
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4b6f1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2988);
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049c1d58);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b6f1 = 1;
  }
  puVar3 = PTR_DAT_049c2988;
  puVar2 = PTR_DAT_049b54e0;
  puVar1 = PTR_DAT_049b5138;
  auStack_70 = ZEXT816(0);
  lVar11 = *(long *)(param_4 + 4);
  uStack_78 = 0;
  uStack_80 = 0;
  auStack_90._8_8_ = 0;
  auStack_90._0_8_ = 0;
  uStack_98 = 0;
  if (*param_4 != 0) goto LAB_0250c9ac;
  auStack_70 = *(undefined1 (*) [16])(param_4 + 6);
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  *param_4 = -1;
  do {
    do {
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar12 = auStack_70._0_8_;
      if ((long *)auStack_70._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_70._0_8_;
        uVar14 = auStack_70._8_8_ & 0xffff;
        lVar6 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_0250c99c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,lVar6,2);
LAB_0250c99c:
        (*(code *)*puVar5)(uVar12,uVar14,puVar5[1]);
      }
LAB_0250c9ac:
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(char *)(lVar11 + 0x1b0) == '\0') {
        uVar9 = Carrier__IsAddingBlocks_2409ec0(lVar11);
        if ((uVar9 & 1) == 0) {
          Carrier__ApplyCheckmarkMotion_2407cd4(lVar11);
          Carrier__ApplyCloseBackMotion_2407754(lVar11,0);
          if (*(long *)(lVar11 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          AudioModule__GetPlayer_2530858(auStack_c0,*(long *)(lVar11 + 0x140),0);
          uStack_78 = uStack_a8;
          uStack_80 = uStack_b0;
          auStack_90 = auStack_c0;
          if (*(long *)(lVar11 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar6 = *(long *)(*(long *)(lVar11 + 0x140) + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar12 = *(undefined8 *)(lVar6 + 0xa8);
          if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar16 = (undefined4)uStack_b0;
          AudioPlayer__Play_2530c98(auStack_90,uVar12,0);
          if (*(long *)(lVar11 + 0x148) != 0) {
            HapticModule__PlaySuccess_25354f4(*(long *)(lVar11 + 0x148),0);
            lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                              (*(undefined8 *)(lVar11 + 0xe8),0xa35119b7,0);
            if (*(long *)(lVar11 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            if (lVar6 != 0) {
              uVar12 = *(undefined8 *)(lVar11 + 0x30);
              uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x160) + 0x18);
              lVar11 = UnityEngine_Component__get_transform_3c18724(lVar6,0);
              if (lVar11 != 0) {
                uVar15 = UnityEngine_Transform__get_position_3c2d540(lVar11,0);
                if (cRam0000000004f4a191 == '\0') {
                    /* try { // try from 0250cbc0 to 0260cc8b has its CatchHandler @ 0250cbc0
                       catch() { ... } // from try @ 0250cbc0 with catch @ 0250cbc0
                       catch() { ... } // from try @ 0250ccf8 with catch @ 0250cbc0
                       catch() { ... } // from try @ 0250cd40 with catch @ 0250cbc0
                       catch() { ... } // from try @ 0250cd6c with catch @ 0250cbc0
                       catch() { ... } // from try @ 0250cda4 with catch @ 0250cbc0
                       catch() { ... } // from try @ 0250cdc8 with catch @ 0250cbc0 */
                  FUN_021f03f8(PTR_DAT_049bc158);
                  cRam0000000004f4a191 = '\x01';
                }
                puVar8 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
                PrefabModuleExtensions__Rent_object__269ee8c
                          (uVar15,uVar16,param_3,*puVar8,puVar8[1],puVar8[2],puVar8[3],uVar12,uVar13
                           ,*(undefined8 *)PTR_DAT_049c1d58);
                *param_4 = -2;
                FUN_0235afc8(param_4 + 2,0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      uVar12 = *(undefined8 *)(lVar11 + 0x98);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar17 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar12,0,0);
      auStack_c0 = auVar17;
      thunk_FUN_021f190c(auStack_c0,0);
      uVar13 = auStack_c0._8_8_;
      uVar12 = auStack_c0._0_8_;
      auStack_70 = auStack_c0;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
    } while ((long *)uVar12 == (long *)0x0);
    lVar7 = *(long *)uVar12;
    lVar6 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0250caa8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(uVar12,lVar6,0);
LAB_0250caa8:
    iVar4 = (*(code *)*puVar5)(uVar12,uVar13 & 0xffffffff,puVar5[1]);
    if (iVar4 == 0) {
      *param_4 = 0;
      *(undefined1 (*) [16])(param_4 + 6) = auStack_70;
      thunk_FUN_021f190c(param_4 + 6,0);
      FUN_0235c420(param_4 + 2,auStack_70,param_4,*(undefined8 *)puVar3);
      return;
    }
  } while( true );
}

