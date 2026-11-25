/* IL2CPP: HomeSceneView$$AddSprite
void HomeSceneView__AddSprite (HomeSceneView_o* __this, HomeSceneLayer_o* layer, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$AddSprite
   void HomeSceneView__AddSprite (HomeSceneView_o* __this, HomeSceneLayer_o* layer,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneView__AddSprite_242d210(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4b7bb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3148);
    FUN_021f03f8(PTR_DAT_049c3328);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c36b0);
    bRam0000000004f4b7bb = 1;
  }
  puVar3 = PTR_DAT_049c3328;
  if (((param_2 == 0) || (lVar12 = *(long *)(param_2 + 0x30), lVar12 == 0)) ||
     (lVar15 = *(long *)(lVar12 + 0x48), lVar15 == 0)) goto LAB_0252d4c0;
  iVar9 = (int)*(ulong *)(lVar15 + 0x18);
  if (iVar9 < 2) {
    if (((*(char *)(lVar12 + 0x58) == '\0') && (*(char *)(lVar12 + 0x70) == '\0')) &&
       ((*(char *)(lVar12 + 0x80) == '\0' && (*(int *)(lVar12 + 0x18) < 2)))) {
      if (*(long *)(lVar12 + 0x90) == 0) goto LAB_0252d4c0;
      if ((*(long *)(*(long *)(lVar12 + 0x90) + 0x18) == 0) && (*(char *)(lVar12 + 0xa0) == '\0')) {
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar15 = HomeSceneView__CreateNode_2426d00(uVar5,param_3);
        HomeSceneView__Place_2427788
                  (*(undefined4 *)(lVar12 + 0x2c),*(undefined4 *)(lVar12 + 0x30),
                   *(undefined4 *)(lVar12 + 0x34),*(undefined4 *)(lVar12 + 0x38));
        if (((lVar15 != 0) &&
            (lVar15 = UnityEngine_Component__get_gameObject_3c187f4(lVar15,0), lVar15 != 0)) &&
           (plVar7 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                       (lVar15,*(undefined8 *)PTR_DAT_049c3148),
           plVar7 != (long *)0x0)) {
          UnityEngine_UI_Image__set_sprite_3cee6e8(plVar7,*(undefined8 *)(lVar12 + 0x10),0);
          UnityEngine_UI_Image__set_useSpriteMesh_3cfbfa8(plVar7,1,0);
          (**(code **)(*plVar7 + 0x2c8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x2d0));
          (**(code **)(*plVar7 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,*(undefined4 *)(lVar12 + 0x3c),plVar7,
                     *(undefined8 *)(*plVar7 + 0x2b0));
          uVar5 = HomeSceneView__GradeOf_242dd08(param_1,lVar12);
                    /* WARNING: Could not recover jumptable at 0x0252d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x348))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x350));
          return;
        }
        goto LAB_0252d4c0;
      }
    }
    bVar4 = *(float *)(lVar12 + 0x3c) < 1.0;
    if (iVar9 == 1) goto LAB_0252d300;
  }
  else {
    bVar4 = *(float *)(lVar12 + 0x3c) < 1.0;
LAB_0252d300:
    uVar10 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    pfVar11 = (float *)(lVar15 + 0x2c);
    do {
      uVar10 = uVar10 - 1;
      bVar4 = (bool)(bVar4 | *pfVar11 < 1.0);
      pfVar11 = pfVar11 + 7;
    } while (uVar10 != 0);
  }
  uVar1 = *(undefined1 *)(lVar12 + 0x40);
  uVar5 = HomeSceneView__GradeOf_242dd08(param_1,lVar12);
  ppppuVar6 = (undefined8 ****)thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  HomeSceneMover___ctor_24244cc(0xbf800000,ppppuVar6,lVar12,param_3,uVar1,lVar15,bVar4,0,uVar5);
  if ((ppppuVar6 != (undefined8 ****)0x0) &&
     (lVar12 = HomeSceneMover__get_GameObject_242448c(ppppuVar6,0), lVar12 != 0)) {
    UnityEngine_Object__set_name_3c233fc(lVar12,*(undefined8 *)(param_2 + 0x10),0);
    lVar12 = *(long *)(param_1 + 0x20);
    if (lVar12 != 0) {
      lVar8 = *(long *)PTR_DAT_049c36b0;
      lVar15 = tpidr_el0;
      lStack_68 = *(long *)(lVar15 + 0x28);
      lVar16 = *(long *)(*(long *)(lVar8 + 0x20) + 0xc0);
      uVar13 = (ulong)*(uint *)(*(long *)(lVar16 + 0x48) + 0xfc);
      uVar10 = uVar13 + 0xf & 0x1fffffff0;
      plVar7 = (long *)((long)&pppuStack_70 - uVar10);
      lVar14 = (long)plVar7 - uVar10;
      plVar17 = *(long **)(lVar12 + 0x10);
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      pppuStack_70 = ppppuVar6;
      if (plVar17 == (long *)0x0) {
        if (*(long *)(lVar15 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else {
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(plVar17 + 3)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          if (-1 < *(int *)(*(long *)(lVar16 + 0x48) + 0x28)) {
            ppppuVar6 = &pppuStack_70;
          }
          func_0x04608620(plVar7,ppppuVar6,uVar13);
          func_0x04608650((long)plVar17 +
                          (ulong)*(uint *)(*plVar17 + 0x104) * (long)(int)uVar2 + 0x20,ppppuVar6,
                          uVar13);
          lVar12 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02229718();
          }
          if (*(uint *)(plVar17 + 3) <= uVar2) {
            if (*(long *)(lVar15 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            goto LAB_0233365c;
          }
          FUN_021f03a8(lVar12,(long)plVar17 +
                              (ulong)*(uint *)(*plVar17 + 0x104) * (long)(int)uVar2 + 0x20,plVar7);
        }
        else {
          iVar9 = *(int *)(*(long *)(lVar16 + 0x48) + 0x28);
          if (-1 < iVar9) {
            ppppuVar6 = &pppuStack_70;
          }
          func_0x04608620(plVar7,ppppuVar6,uVar13);
          if (iVar9 < 0) {
            func_0x04608620(lVar14,ppppuVar6,uVar13);
          }
          else {
            lVar14 = *plVar7;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                    (lVar12,lVar14,*(undefined8 *)(lVar16 + 0x70));
        }
        if (*(long *)(lVar15 + 0x28) == lStack_68) {
          return;
        }
      }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_0252d4c0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

