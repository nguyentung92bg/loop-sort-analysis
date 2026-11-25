/* IL2CPP: CapacityBoosterSystem.<IncreaseCapacity>d__16$$MoveNext
void CapacityBoosterSystem__IncreaseCapacity_d__16__MoveNext (CapacityBoosterSystem__IncreaseCapacity_d__16_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CapacityBoosterSystem.<IncreaseCapacity>d__16$$MoveNext
   void CapacityBoosterSystem__IncreaseCapacity_d__16__MoveNext
   (CapacityBoosterSystem__IncreaseCapacity_d__16_o __this, const MethodInfo* method); */

void CapacityBoosterSystem__IncreaseCapacity_d__16__MoveNext_23f7894
               (undefined1 param_1 [16],int param_2,int param_3,undefined4 param_4,int *param_5)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  if ((bRam0000000004f4b66b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c22c0);
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c22c8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c22d0);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c1d58);
    FUN_021f03f8(PTR_DAT_049c22d8);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b66b = 1;
  }
  lVar8 = *(long *)(param_5 + 4);
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auVar21 = ZEXT816(0);
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  if (*param_5 != 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(lVar8 + 0x30);
    auVar21 = ZEXT816(0);
    auVar1 = ZEXT816(0);
    if (lVar9 != 0) {
      auStack_78._8_8_ = 0;
      lStack_68 = 0;
      auStack_78._0_8_ = (ulong)*(uint *)(lVar9 + 0x30) << 0x20;
      thunk_FUN_021f190c(auStack_78 + 8,0);
      lStack_68 = *(long *)(lVar9 + 0x28);
      thunk_FUN_021f190c(&lStack_68);
      puVar3 = PTR_DAT_049c22d8;
      puVar2 = PTR_DAT_049b3b98;
      lStack_88 = auStack_78._8_8_;
      uStack_90 = auStack_78._0_8_;
      lStack_80 = lStack_68;
      lVar9 = 0;
      do {
        lVar11 = lVar9;
        iVar15 = (int)uStack_90 + -1;
        uStack_90 = CONCAT44(uStack_90._4_4_,iVar15);
        if (iVar15 < 0) {
          uStack_90._4_4_ = uStack_90._4_4_ - 1;
          uStack_90._0_4_ = iVar15;
          if ((int)uStack_90._4_4_ < 0) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(lVar11,0,0);
            auVar1._8_8_ = auStack_b0._8_8_;
            auVar1._0_8_ = auStack_b0._0_8_;
            auVar21._8_8_ = auStack_a0._8_8_;
            auVar21._0_8_ = auStack_a0._0_8_;
            if ((uVar5 & 1) != 0) break;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar9 = UnityEngine_Component__get_gameObject_3c187f4(lVar11,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            UnityEngine_GameObject__SetActive_3c1ce34(lVar9,1,0);
            CapacityBoosterSystem__GrowBelt_23f4b24(lVar8,lVar11,0);
            Scellecs_Morpeh_WorldExtensions__Commit_32baedc(*(undefined8 *)(lVar8 + 0x18),0);
            plVar4 = *(long **)(lVar8 + 0x90);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar9 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 == 0) goto LAB_024f7b2c;
            piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_024f7b14;
          }
          lVar9 = *(long *)(lStack_80 + (ulong)uStack_90._4_4_ * 8 + 0x20);
          lStack_88 = *(long *)(lVar9 + 0x18);
          thunk_FUN_021f190c((ulong)&uStack_90 | 8);
          iVar15 = *(int *)(lVar9 + 0x30) + -1;
          uStack_90 = CONCAT44(uStack_90._4_4_,iVar15);
        }
        if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        plVar4 = (long *)FUN_024f6008(*(long *)(lVar8 + 0x38),
                                      *(undefined8 *)(lStack_88 + (long)iVar15 * 8 + 0x20),
                                      *(undefined8 *)puVar3);
        lVar12 = *plVar4;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(lVar11,0,0);
        lVar9 = lVar12;
        if ((uVar5 & 1) == 0) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if ((*(int *)(lVar12 + 0x130) != 0x19) &&
             (uVar5 = CapacityBoosterSystem__ComesBefore_23f4ae8(lVar12,lVar11,0), lVar9 = lVar11,
             (uVar5 & 1) != 0)) {
            lVar9 = lVar12;
          }
        }
      } while( true );
    }
    goto LAB_024f7c54;
  }
  auStack_b0 = *(undefined1 (*) [16])(param_5 + 0xc);
  param_5[0xc] = 0;
  param_5[0xd] = 0;
  param_5[0xe] = 0;
  param_5[0xf] = 0;
  *param_5 = -1;
  goto LAB_024f7b50;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
LAB_024f7b14:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c22d0) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_024f7ca8;
    }
  }
LAB_024f7b2c:
  puVar6 = (undefined8 *)FUN_02229a4c(plVar4,*(long *)PTR_DAT_049c22d0,0);
LAB_024f7ca8:
  (*(code *)*puVar6)(plVar4,0,puVar6[1]);
  lVar9 = UnityEngine_Component__get_transform_3c18724(lVar11,0);
  plVar4 = (long *)(param_5 + 6);
  *plVar4 = lVar9;
  thunk_FUN_021f190c(plVar4);
  if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar15 = UnityEngine_Transform__get_position_3c2d540(*plVar4,0);
  puVar2 = PTR_DAT_049c1690;
  param_5[8] = iVar15;
  param_5[9] = param_2;
  param_5[10] = param_3;
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
    lVar9 = *(long *)puVar2;
  }
  lVar9 = *(long *)(lVar9 + 0xb8);
  uVar16 = *(undefined4 *)(lVar9 + 0xc);
  uVar18 = *(undefined4 *)(lVar9 + 0x10);
  uVar20 = *(undefined4 *)(lVar9 + 0x14);
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  param_4 = *(undefined4 *)(lVar9 + 0xc);
  auStack_a0 = LitMotion_LMotion__Create_2eaa1b4
                         (uVar16,uVar18,uVar20,param_4,*(undefined4 *)(lVar9 + 0x10),
                          *(undefined4 *)(lVar9 + 0x14),_UNK_013aa8fc,0);
  auVar21 = FUN_024f4e50(auStack_a0,0x1b,*(undefined8 *)PTR_DAT_049c1680);
  iVar15 = param_5[8];
  param_2 = param_5[9];
  uVar14 = *(undefined8 *)(param_5 + 6);
  param_3 = param_5[10];
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar21 = Extensions__BindToLocalScaleAround___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee9dc
                      (iVar15,param_2,param_3,auVar21._0_8_,auVar21._8_8_,uVar14,
                       *(undefined8 *)PTR_DAT_049c22c8);
  Extensions__AddTo_24d83f4(auVar21._0_8_,auVar21._8_8_ & 0xffffffff,lVar11,0);
  puVar2 = PTR_DAT_049b5138;
  uVar14 = *(undefined8 *)(lVar8 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_78 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(100,0,8,uVar14,0,0);
  thunk_FUN_021f190c(auStack_78,0);
  uVar10 = auStack_78._8_8_;
  uVar14 = auStack_78._0_8_;
  auStack_b0 = auStack_78;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  auVar21 = auStack_a0;
  if ((long *)uVar14 != (long *)0x0) {
    lVar9 = *(long *)uVar14;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_024f7ee4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(uVar14,*(long *)PTR_DAT_049b54e0,0);
LAB_024f7ee4:
    iVar15 = (*(code *)*puVar6)(uVar14,uVar10 & 0xffffffff,puVar6[1]);
    auVar21 = auStack_a0;
    if (iVar15 == 0) {
      *param_5 = 0;
      *(undefined1 (*) [16])(param_5 + 0xc) = auStack_b0;
      thunk_FUN_021f190c(param_5 + 0xc,0);
      FUN_0235c420(param_5 + 2,auStack_b0,param_5,*(undefined8 *)PTR_DAT_049c22c0);
      return;
    }
  }
LAB_024f7b50:
  auStack_a0 = auVar21;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar14 = auStack_b0._0_8_;
  if ((long *)auStack_b0._0_8_ != (long *)0x0) {
    lVar9 = *(long *)auStack_b0._0_8_;
    uVar13 = auStack_b0._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_024f7bd4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_024f7bd4:
    (*(code *)*puVar6)(uVar14,uVar13,puVar6[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar8 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(param_5 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar15 = param_5[8];
  iVar17 = param_5[9];
  uVar14 = *(undefined8 *)(lVar8 + 0x58);
  uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x60) + 0x38);
  iVar19 = param_5[10];
  uVar16 = UnityEngine_Transform__get_rotation_3c2d7a8(*(long *)(param_5 + 6),0);
  PrefabModuleExtensions__Rent_object__269ee8c
            (iVar15,iVar17,iVar19,uVar16,param_2,param_3,param_4,uVar14,uVar10,
             *(undefined8 *)PTR_DAT_049c1d58);
  auVar21 = auStack_a0;
  auVar1 = auStack_b0;
LAB_024f7c54:
  piVar7 = param_5 + 6;
  piVar7[0] = 0;
  piVar7[1] = 0;
  *param_5 = -2;
  auStack_a0 = auVar21;
  auStack_b0 = auVar1;
  thunk_FUN_021f190c(piVar7,0);
  FUN_0235afc8(param_5 + 2,0);
  return;
}

