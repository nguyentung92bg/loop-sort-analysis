/* IL2CPP: HomeSceneView$$Build
void HomeSceneView__Build (HomeSceneView_o* __this, HomeSceneAsset_o* asset, UnityEngine_RectTransform_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$Build
   void HomeSceneView__Build (HomeSceneView_o* __this, HomeSceneAsset_o* asset,
   UnityEngine_RectTransform_o* root, const MethodInfo* method); */

void HomeSceneView__Build_242c9cc(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lStack_68;
  
  if ((bRam0000000004f4b7b8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3628);
    FUN_021f03f8(PTR_DAT_049c3630);
    FUN_021f03f8(PTR_DAT_049c3638);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3640);
    FUN_021f03f8(PTR_DAT_049c3648);
    FUN_021f03f8(PTR_DAT_049c3650);
    FUN_021f03f8(PTR_DAT_049c3658);
    FUN_021f03f8(PTR_DAT_049c3660);
    FUN_021f03f8(PTR_DAT_049c3668);
    FUN_021f03f8(PTR_DAT_049c3670);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7b8 = 1;
  }
  *(long *)(param_1 + 0x40) = param_2;
  thunk_FUN_021f190c((long *)(param_1 + 0x40),param_2);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48),param_3);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x38) != 0)) {
    uVar5 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049c3670,
                         *(undefined4 *)(*(long *)(param_2 + 0x38) + 0x18));
    puVar12 = (undefined8 *)(param_1 + 0x70);
    *puVar12 = uVar5;
    thunk_FUN_021f190c(puVar12,uVar5);
    puVar3 = PTR_DAT_049c3668;
    puVar19 = (undefined8 *)PTR_DAT_049c3660;
    plVar10 = (long *)PTR_DAT_049c3110;
    plVar20 = (long *)PTR_DAT_049b3b98;
    plVar14 = (long *)*puVar12;
    if (plVar14 != (long *)0x0) {
      uVar13 = 0;
      lVar16 = 0x20;
      do {
        if ((long)(int)plVar14[3] <= (long)uVar13) {
          lVar16 = *(long *)(param_2 + 0x30);
          if (lVar16 != 0) {
            uVar5 = 0;
            bVar4 = false;
            iVar11 = 0;
            goto LAB_0252cbc0;
          }
          break;
        }
        if (*(long *)(param_2 + 0x38) == 0) break;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(param_2 + 0x38),uVar13 & 0xffffffff,&lStack_68,*(undefined8 *)puVar3);
        lVar6 = lStack_68;
        if (*(int *)(*plVar10 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar6 = HomeSceneView__CreateGrade_242cdfc(lVar6);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0)) {
          uVar5 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
          FUN_021f0564(uVar5,0);
        }
        if (*(uint *)(plVar14 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        plVar14[uVar13 + 4] = lVar6;
        thunk_FUN_021f190c((long)plVar14 + lVar16,lVar6);
        plVar14 = (long *)*puVar12;
        uVar13 = uVar13 + 1;
        lVar16 = lVar16 + 8;
      } while (plVar14 != (long *)0x0);
    }
  }
  goto LAB_0252cdb4;
  while( true ) {
    uVar8 = uVar5;
    if (*(char *)(lVar16 + 0x1d) != '\0') {
      uVar8 = HomeSceneView__CreateClip_242d098
                        (*(undefined4 *)(lVar16 + 0x20),*(undefined4 *)(lVar16 + 0x24),
                         *(undefined4 *)(lVar16 + 0x28),*(undefined4 *)(lVar16 + 0x2c),param_1,uVar5
                        );
    }
    iVar1 = *(int *)(lVar16 + 0x18);
    if (iVar1 - 1U < 2) {
      uVar15 = *(undefined8 *)(lVar16 + 0x10);
      if (*(int *)(*plVar10 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar8 = HomeSceneView__CreateNode_2426d00(uVar15,uVar8);
      HomeSceneView__StretchTopLeft_242d4c4();
      lVar6 = *(long *)(param_1 + 0x28);
      uVar17 = *(undefined8 *)(lVar16 + 0x38);
      iVar1 = *(int *)(lVar16 + 0x18);
      uVar18 = *(undefined8 *)(param_1 + 0x38);
      uVar15 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3628);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                (uVar15,param_1,*(undefined8 *)PTR_DAT_049c3638,0);
      uVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3630);
      HomeSceneSpawnerRunner___ctor_242a0f8(uVar9,uVar17,iVar1 == 1,uVar8,uVar18,uVar15);
      if (lVar6 == 0) break;
      FUN_02333498(lVar6,uVar9,*(undefined8 *)PTR_DAT_049c3640);
      plVar10 = (long *)PTR_DAT_049c3110;
      puVar19 = (undefined8 *)PTR_DAT_049c3660;
      plVar20 = (long *)PTR_DAT_049b3b98;
    }
    else if (iVar1 == 3) {
      lVar16 = HomeSceneFxRunner__Create_2420258(*(undefined8 *)(lVar16 + 0x40),uVar8,iVar11,0);
      if (lVar16 != 0) {
        if (*(long *)(param_1 + 0x30) == 0) break;
        FUN_02333498(*(long *)(param_1 + 0x30),lVar16,*(undefined8 *)PTR_DAT_049c3648);
      }
    }
    else if (iVar1 == 0) {
      HomeSceneView__AddSprite_242d210(param_1,lVar16,uVar8);
    }
    lVar16 = *(long *)(param_2 + 0x30);
    iVar11 = iVar11 + 1;
    if (lVar16 == 0) break;
LAB_0252cbc0:
    if (*(int *)(lVar16 + 0x18) <= iVar11) {
      HomeSceneView__AddCar_242d534(param_1,*(undefined8 *)(param_2 + 0x40));
      HomeSceneView__Tick_242d740(param_1);
      return;
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar16,iVar11,&lStack_68,*puVar19);
    lVar16 = lStack_68;
    if (*(int *)(*plVar20 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar13 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
    if ((uVar13 & 1) == 0) {
      if (lVar16 == 0) break;
      cVar2 = *(char *)(lVar16 + 0x1c);
      if ((bool)cVar2 != bVar4) goto LAB_0252cc24;
    }
    else {
      if (lVar16 == 0) break;
      cVar2 = *(char *)(lVar16 + 0x1c);
LAB_0252cc24:
      uVar5 = HomeSceneView__CreateGroup_242cf84(param_1,cVar2 != '\0');
      bVar4 = *(char *)(lVar16 + 0x1c) != '\0';
    }
  }
LAB_0252cdb4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

