/* IL2CPP: BlockTriggerSystem$$AddCarrierTriggers
void BlockTriggerSystem__AddCarrierTriggers (BlockTriggerSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BlockTriggerSystem$$AddCarrierTriggers
   void BlockTriggerSystem__AddCarrierTriggers (BlockTriggerSystem_o* __this, const MethodInfo*
   method); */

void BlockTriggerSystem__AddCarrierTriggers_23e9348(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000004f4b610 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c40);
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1c48);
    FUN_021f03f8(PTR_DAT_049c1c50);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1c58);
    FUN_021f03f8(PTR_DAT_049c1c60);
    FUN_021f03f8(PTR_DAT_049b3b90);
    FUN_021f03f8(PTR_DAT_049c1590);
    FUN_021f03f8(PTR_DAT_049b4c10);
    FUN_021f03f8(PTR_DAT_049c1c68);
    FUN_021f03f8(PTR_DAT_049c1c70);
    FUN_021f03f8(PTR_DAT_049be548);
    bRam0000000004f4b610 = 1;
  }
  lVar17 = *(long *)(param_1 + 0x60);
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  if (lVar17 != 0) {
    uStack_110 = 0;
    uStack_108 = 0;
    plStack_100 = (long *)0x0;
    lVar18 = *(long *)PTR_DAT_049c1590;
    puVar13 = (ulong *)thunk_FUN_0224e54c(lVar17,*(long *)(**(long **)(*(long *)(lVar18 + 0x20) +
                                                                      0xc0) + 0x80) + 0x60);
    uStack_b0 = *puVar13;
    uStack_a8 = 0;
    thunk_FUN_021f190c(&uStack_b0);
    uStack_a8 = 0;
    uStack_108 = 0;
    uStack_110 = uStack_b0;
    thunk_FUN_021f190c(&uStack_110,0);
    puVar14 = (undefined8 *)
              thunk_FUN_0224e54c(lVar17,*(long *)(**(long **)(*(long *)(lVar18 + 0x20) + 0xc0) +
                                                 0x80) + 0x80);
    plStack_100 = (long *)*puVar14;
    thunk_FUN_021f190c(&plStack_100);
    uStack_c8 = uStack_108;
    uStack_d0 = uStack_110;
    plStack_c0 = plStack_100;
    uVar15 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_d0,0);
    puVar8 = PTR_DAT_049c1c68;
    puVar7 = PTR_DAT_049c1c60;
    puVar6 = PTR_DAT_049c1c58;
    puVar5 = PTR_DAT_049c1c40;
    puVar4 = PTR_DAT_049be548;
    puVar3 = PTR_DAT_049bbf90;
    uVar2 = _UNK_013aa7ac;
    uVar1 = _UNK_013aa4f4;
    while( true ) {
      if ((uVar15 & 1) == 0) {
        return;
      }
      lVar17 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1c70);
      System_Object___ctor_3142338(lVar17,0);
      if (lVar17 == 0) break;
      *(long *)(lVar17 + 0x18) = param_1;
      thunk_FUN_021f190c((long *)(lVar17 + 0x18),param_1);
      plVar19 = (long *)(lVar17 + 0x10);
      *plVar19 = *(long *)((long)plStack_c0 +
                          (ulong)*(uint *)(*plStack_c0 + 0x104) * (long)uStack_c8._4_4_ + 0x20);
      thunk_FUN_021f190c(plVar19);
      if ((*plVar19 == 0) || (lVar18 = *(long *)(*plVar19 + 0x108), lVar18 == 0)) break;
      UnityEngine_Transform__get_position_3c2d540(lVar18,0);
      if (*(long *)(param_1 + 0x30) == 0) break;
      Dreamteck_Splines_SplineComputer__Project_2349550(&uStack_110,*(long *)(param_1 + 0x30),0);
      uVar21 = uStack_d8;
      if (*(long *)(param_1 + 0x40) == 0) break;
      uVar20 = *(undefined8 *)(param_1 + 0x30);
      uVar23 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x60);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar20 = Extensions__TravelUnclamped_24e666c(uVar21,uVar23,uVar20,0xffffffff,0);
      plVar19 = (long *)FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4c10,2);
      uVar21 = *(undefined8 *)PTR_DAT_049c1c50;
      if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0xe0));
      }
      lVar18 = System_Type__GetTypeFromHandle_310ebfc(uVar21,0);
      if (plVar19 == (long *)0x0) break;
      if ((lVar18 != 0) &&
         (lVar16 = thunk_FUN_0222c938(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0)) {
LAB_024e98a4:
        uVar21 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
        FUN_021f0564(uVar21,0);
      }
      if ((int)plVar19[3] == 0) {
LAB_024e98a0:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      plVar19[4] = lVar18;
      thunk_FUN_021f190c(plVar19 + 4,lVar18);
      lVar18 = System_Type__GetTypeFromHandle_310ebfc(*(undefined8 *)PTR_DAT_049c1c48,0);
      if ((lVar18 != 0) &&
         (lVar16 = thunk_FUN_0222c938(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0))
      goto LAB_024e98a4;
      if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_024e98a0;
      plVar19[5] = lVar18;
      thunk_FUN_021f190c(plVar19 + 5,lVar18);
      lVar18 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b3b90);
      UnityEngine_GameObject___ctor_3c1ddb4(lVar18,*(undefined8 *)puVar4,plVar19,0);
      if ((lVar18 == 0) ||
         (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                    (lVar18,&uStack_110,*(undefined8 *)puVar7), uVar15 = uStack_110, uStack_110 == 0
         )) break;
      UnityEngine_Collider__set_isTrigger_3c85754(uStack_110,1,0);
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(puVar3);
        cRam0000000004f4a55e = '\x01';
      }
      lVar16 = *(long *)(*(long *)puVar3 + 0xb8);
      uVar21 = *(undefined8 *)(lVar16 + 0x18);
      fVar22 = (float)((ulong)uVar21 >> 0x20) * 0.5;
      UnityEngine_BoxCollider__set_center_3c85004
                (CONCAT44(fVar22,(float)uVar21 * 0.5),fVar22,*(float *)(lVar16 + 0x20) * 0.5,uVar15,
                 0);
      if (*(long *)(param_1 + 0x30) == 0) break;
      Dreamteck_Splines_SplineComputer__Evaluate_2349114
                (&uStack_110,uVar20,*(long *)(param_1 + 0x30),0);
      uVar12 = uStack_f0;
      uVar11 = uStack_f4;
      uVar10 = uStack_f8;
      uVar15 = uStack_110;
      uVar23 = uStack_110._4_4_;
      uVar9 = (undefined4)uStack_108;
      lVar16 = UnityEngine_GameObject__get_transform_3c1ca74(lVar18,0);
      if (lVar16 == 0) break;
      UnityEngine_Transform__set_position_3c2d61c(uVar15 & 0xffffffff,uVar23,uVar9,lVar16,0);
      lVar16 = UnityEngine_GameObject__get_transform_3c1ca74(lVar18,0);
      if (lVar16 == 0) break;
      UnityEngine_Transform__set_forward_3c2dbf4(uVar10,uVar11,uVar12,lVar16,0);
      lVar16 = UnityEngine_GameObject__get_transform_3c1ca74(lVar18,0);
      if ((*(long *)(param_1 + 0x40) == 0) || (lVar16 == 0)) break;
      UnityEngine_Transform__set_localScale_3c2ddfc
                (uVar2,uVar1,*(undefined4 *)(*(long *)(param_1 + 0x40) + 100),lVar16,0);
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lVar18,&uStack_110,*(undefined8 *)puVar6);
      uVar15 = uStack_110;
      uVar21 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar21,lVar17,*(undefined8 *)puVar8,0);
      if (uVar15 == 0) break;
      puVar14 = (undefined8 *)(uVar15 + 0x20);
      *puVar14 = uVar21;
      thunk_FUN_021f190c(puVar14,uVar21);
      uVar15 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_d0,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

