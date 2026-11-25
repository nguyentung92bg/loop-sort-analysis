/* IL2CPP: SwipeablePageLayout$$TransitionToClosest
void SwipeablePageLayout__TransitionToClosest (SwipeablePageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$TransitionToClosest
   void SwipeablePageLayout__TransitionToClosest (SwipeablePageLayout_o* __this, const MethodInfo*
   method); */

void SwipeablePageLayout__TransitionToClosest_244c520
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_58;
  
  if ((bRam0000000004f4b89f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c44f8);
    FUN_021f03f8(PTR_DAT_049c4500);
    FUN_021f03f8(PTR_DAT_049c4508);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c4510);
    bRam0000000004f4b89f = 1;
  }
  puVar6 = PTR_DAT_049c4508;
  puVar5 = PTR_DAT_049c4500;
  puVar4 = PTR_DAT_049c44f8;
  puVar2 = PTR_DAT_049b5480;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  if (*(long *)(param_4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_4 + 0x18),&uStack_b8,*(undefined8 *)PTR_DAT_049c4510);
  uStack_a0 = uStack_b8;
  puVar3 = PTR_DAT_049bbf90;
  uStack_b8 = 0;
  uStack_98 = puStack_b0;
  uStack_90 = uStack_a8;
  puStack_b0 = &uStack_a0;
  lVar12 = 0;
  fVar16 = 3.4028235e+38;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_a0,*(undefined8 *)puVar5);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_a0,*(undefined8 *)puVar4);
      SwipeablePageLayout__TransitionTo_244c42c(param_4,lVar12);
      return;
    }
    lVar13 = *(long *)puVar6;
    lVar8 = *(long *)(lVar13 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar13 + 0x20);
      uVar1 = *(ushort *)(lVar8 + 0x135);
    }
    uVar14 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_a0,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_58,uVar10,uVar14);
    lVar9 = lStack_58;
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (lStack_58,0x8ac5d2f7,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = UnityEngine_GameObject__get_transform_3c1ca74(lVar8,0);
    if (lVar8 == 0) break;
    uVar14 = UnityEngine_Transform__get_position_3c2d540(lVar8,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar14 = Extensions__WithZ_3f0d5f4(uVar14,param_2,param_3,0,0);
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(puVar3);
      cRam0000000004f4a233 = '\x01';
    }
    puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
    fVar15 = (float)Extensions__DistanceTo_3f0c6f4
                              (uVar14,param_2,param_3,*puVar11,puVar11[1],puVar11[2],0);
    if (fVar15 <= fVar16) {
      lVar12 = lVar9;
      fVar16 = fVar15;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

