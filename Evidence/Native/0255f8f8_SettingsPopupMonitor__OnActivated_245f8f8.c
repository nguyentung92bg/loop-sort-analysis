/* IL2CPP: SettingsPopupMonitor$$OnActivated
void SettingsPopupMonitor__OnActivated (SettingsPopupMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0251ef5c) */
/* WARNING: Removing unreachable block (ram,0x0251ef78) */
/* WARNING: Removing unreachable block (ram,0x0251efd0) */
/* WARNING: Removing unreachable block (ram,0x0251efd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SettingsPopupMonitor$$OnActivated
   void SettingsPopupMonitor__OnActivated (SettingsPopupMonitor_o* __this, const MethodInfo*
   method); */

void SettingsPopupMonitor__OnActivated_245f8f8(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  MonitorBase__OnActivated_256c9f4(param_3,0);
  if (*(long *)(param_3 + 0x98) == 0) {
LAB_0255f9b4:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = *(long *)(param_3 + 0xc0);
  uVar6 = SettingsModule__IsSoundActive_2539c7c(*(long *)(param_3 + 0x98),0);
  if (lVar9 == 0) goto LAB_0255f9b4;
  ToggleElement__Initialize_241ecb0(lVar9,uVar6 & 1,0);
  if (*(long *)(param_3 + 0x98) == 0) goto LAB_0255f9b4;
  lVar9 = *(long *)(param_3 + 200);
  uVar6 = SettingsModule__IsMusicActive_2539cd4(*(long *)(param_3 + 0x98),0);
  if (lVar9 == 0) goto LAB_0255f9b4;
  ToggleElement__Initialize_241ecb0(lVar9,uVar6 & 1,0);
  if (*(long *)(param_3 + 0x98) == 0) goto LAB_0255f9b4;
  lVar9 = *(long *)(param_3 + 0xd0);
  uVar6 = SettingsModule__IsHapticActive_2539d2c(*(long *)(param_3 + 0x98),0);
  if (lVar9 == 0) goto LAB_0255f9b4;
  ToggleElement__Initialize_241ecb0(lVar9,uVar6 & 1,0);
  if (*(long *)(param_3 + 0x98) == 0) goto LAB_0255f9b4;
  lVar9 = *(long *)(param_3 + 0xd8);
  bVar5 = SettingsModule__IsColorBlindActive_2539ddc(*(long *)(param_3 + 0x98),0);
  if (lVar9 == 0) goto LAB_0255f9b4;
  *(byte *)(lVar9 + 0x88) = bVar5 & 1;
  puVar3 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b773 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f70,0,0);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c2f78);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b8da8);
    FUN_021f03f8(PTR_DAT_049b8da0);
    bRam0000000004f4b773 = 1;
  }
  uVar10 = *(undefined8 *)(lVar9 + 0x30);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(lVar9 + 0x30) == 0) goto LAB_0251f05c;
    lVar8 = 0x58;
    if (*(char *)(lVar9 + 0x88) != '\0') {
      lVar8 = 0x50;
    }
    UnityEngine_UI_Image__set_sprite_3cee6e8
              (*(long *)(lVar9 + 0x30),*(undefined8 *)(lVar9 + lVar8),0);
  }
  uVar10 = *(undefined8 *)(lVar9 + 0x40);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(lVar9 + 0x40) == 0) goto LAB_0251f05c;
    puVar1 = (undefined8 *)PTR_DAT_049b8da0;
    if (*(char *)(lVar9 + 0x88) != '\0') {
      puVar1 = (undefined8 *)PTR_DAT_049b8da8;
    }
    TMPro_TMP_Text__SetText_3b0f78c(*(long *)(lVar9 + 0x40),*puVar1,0);
  }
  uVar10 = *(undefined8 *)(lVar9 + 0x38);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(lVar9 + 0x38) == 0) goto LAB_0251f05c;
    lVar8 = 0x68;
    if (*(char *)(lVar9 + 0x88) != '\0') {
      lVar8 = 0x60;
    }
    UnityEngine_UI_Image__set_sprite_3cee6e8
              (*(long *)(lVar9 + 0x38),*(undefined8 *)(lVar9 + lVar8),0);
  }
  uVar10 = *(undefined8 *)(lVar9 + 0x48);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(lVar9 + 0x48) == 0) goto LAB_0251f05c;
    UnityEngine_GameObject__SetActive_3c1ce34
              (*(long *)(lVar9 + 0x48),*(char *)(lVar9 + 0x88) == '\0',0);
  }
  uVar10 = *(undefined8 *)(lVar9 + 0x28);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  bVar4 = *(char *)(lVar9 + 0x88) != '\0';
  lVar8 = 0x7c;
  if (bVar4) {
    lVar8 = 0x74;
  }
  lVar2 = 0x78;
  if (bVar4) {
    lVar2 = 0x70;
  }
  if (*(long *)(lVar9 + 0x28) != 0) {
    fVar13 = *(float *)(lVar9 + lVar2);
    fVar12 = *(float *)(lVar9 + lVar8);
    fVar11 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                              (*(long *)(lVar9 + 0x28),0);
    if (cRam0000000004f4a281 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a281 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    param_2 = param_2 - fVar12;
    fVar11 = fVar11 - fVar13;
    if (SQRT(fVar11 * fVar11 + param_2 * param_2) < _UNK_013aa688) {
      return;
    }
    lVar9 = *(long *)(lVar9 + 0x28);
    if (lVar9 != 0) {
      if ((bRam0000000004f58960 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26c78,0);
        bRam0000000004f58960 = 1;
      }
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar9,0);
        }
        if (pcRam0000000004f589a8 == (code *)0x0) {
          pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
        }
        (*pcRam0000000004f589a8)(lVar8,&stack0xffffffffffffffe8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
LAB_0251f05c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

