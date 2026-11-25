/* IL2CPP: ToggleElement$$UpdateView
void ToggleElement__UpdateView (ToggleElement_o* __this, bool motion, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ToggleElement$$UpdateView
   void ToggleElement__UpdateView (ToggleElement_o* __this, bool motion, const MethodInfo* method);
    */

void ToggleElement__UpdateView_241ecc0
               (undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auStack_60 [16];
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b773 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c2f78);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b8da8);
    FUN_021f03f8(PTR_DAT_049b8da0);
    bRam0000000004f4b773 = 1;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_0251f05c;
    lVar5 = 0x58;
    if (*(char *)(param_3 + 0x88) != '\0') {
      lVar5 = 0x50;
    }
    UnityEngine_UI_Image__set_sprite_3cee6e8
              (*(long *)(param_3 + 0x30),*(undefined8 *)(param_3 + lVar5),0);
  }
  uVar7 = *(undefined8 *)(param_3 + 0x40);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_0251f05c;
    puVar1 = (undefined8 *)PTR_DAT_049b8da0;
    if (*(char *)(param_3 + 0x88) != '\0') {
      puVar1 = (undefined8 *)PTR_DAT_049b8da8;
    }
    TMPro_TMP_Text__SetText_3b0f78c(*(long *)(param_3 + 0x40),*puVar1,0);
  }
  uVar7 = *(undefined8 *)(param_3 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_3 + 0x38) == 0) goto LAB_0251f05c;
    lVar5 = 0x68;
    if (*(char *)(param_3 + 0x88) != '\0') {
      lVar5 = 0x60;
    }
    UnityEngine_UI_Image__set_sprite_3cee6e8
              (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + lVar5),0);
  }
  uVar7 = *(undefined8 *)(param_3 + 0x48);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_0251f05c;
    UnityEngine_GameObject__SetActive_3c1ce34
              (*(long *)(param_3 + 0x48),*(char *)(param_3 + 0x88) == '\0',0);
  }
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  bVar3 = *(char *)(param_3 + 0x88) != '\0';
  lVar5 = 0x7c;
  if (bVar3) {
    lVar5 = 0x74;
  }
  lVar6 = 0x78;
  if (bVar3) {
    lVar6 = 0x70;
  }
  if (*(long *)(param_3 + 0x28) != 0) {
    fVar10 = *(float *)(param_3 + lVar6);
    fVar9 = *(float *)(param_3 + lVar5);
    fVar8 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                             (*(long *)(param_3 + 0x28),0);
    if (cRam0000000004f4a281 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a281 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    param_2 = param_2 - fVar9;
    fVar8 = fVar8 - fVar10;
    if (SQRT(fVar8 * fVar8 + param_2 * param_2) < _UNK_013aa688) {
      return;
    }
    if ((param_4 & 1) == 0) {
      lVar5 = *(long *)(param_3 + 0x28);
      if (lVar5 != 0) {
        if ((bRam0000000004f58960 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26c78,0);
          bRam0000000004f58960 = 1;
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        if (lVar6 != 0) {
          if (pcRam0000000004f589a8 == (code *)0x0) {
            pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
          }
          (*pcRam0000000004f589a8)(lVar6,&stack0xffffffffffffffe8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar5,0);
      }
    }
    else {
      FUN_024f75b8(*(undefined8 *)(param_3 + 0x8c),*(undefined4 *)(param_3 + 0x94),1,0);
      if (*(long *)(param_3 + 0x28) != 0) {
        UnityEngine_RectTransform__get_anchoredPosition_3c2be98(*(long *)(param_3 + 0x28),0);
        auStack_60 = LitMotion_LMotion__Create_2eaa148(0);
        auVar11 = FUN_024f4e50(auStack_60,*(undefined4 *)(param_3 + 0x80),
                               *(undefined8 *)PTR_DAT_049c2d70);
        puVar2 = PTR_DAT_049c2288;
        lVar5 = *(long *)PTR_DAT_049c2288;
        auStack_60 = auVar11;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_021f0574();
          lVar5 = *(long *)puVar2;
        }
        auVar11 = FUN_02526574(auStack_60,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60),
                               *(undefined8 *)PTR_DAT_049c2f78);
        auVar12 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                            (auVar11._0_8_,auVar11._8_8_,*(undefined8 *)(param_3 + 0x28),
                             *(undefined8 *)PTR_DAT_049c2f70);
        *(undefined1 (*) [12])(param_3 + 0x8c) = auVar12;
        return;
      }
    }
  }
LAB_0251f05c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

