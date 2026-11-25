/* IL2CPP: PlayingMonitor$$RenderSpeedBoost
void PlayingMonitor__RenderSpeedBoost (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$RenderSpeedBoost
   void PlayingMonitor__RenderSpeedBoost (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__RenderSpeedBoost_2450270(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  long lStack_38;
  
  if ((bRam0000000004f4b8c6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4b8c6 = 1;
  }
  if ((*(long *)(param_1 + 0x150) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x150),0),
     lVar2 != 0)) {
    uVar3 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x130) != 0) {
      uVar3 = ConveyorSpeedSystem__IsSpeedBoostActive_24b5ddc(*(long *)(param_1 + 0x130),0);
      iVar6 = 0x2af94178;
      if ((uVar3 & 1) == 0) {
        iVar6 = -0x753ffd73;
      }
      if (iVar6 != *(int *)(param_1 + 0x15c)) {
        *(int *)(param_1 + 0x15c) = iVar6;
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (*(undefined8 *)(param_1 + 0x150),iVar6,0);
      }
      if (*(long *)(param_1 + 0x130) != 0) {
        fVar7 = *(float *)(*(long *)(param_1 + 0x130) + 0x70);
        if (cRam0000000004f4b79c == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4b79c = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574();
        }
        puVar1 = PTR_DAT_049b6128;
        iVar6 = -0x80000000;
        if ((float)(int)fVar7 != INFINITY) {
          iVar6 = (int)fVar7;
        }
        if (iVar6 == *(int *)(param_1 + 0x158)) {
          return;
        }
        lVar2 = *(long *)(param_1 + 0x150);
        *(int *)(param_1 + 0x158) = iVar6;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar4 = System_TimeSpan__FromSeconds_311711c((double)iVar6,0);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b6110);
        }
        uVar4 = Extensions__ToReadableString_24e7038(uVar4,2,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if ((bRam0000000004f5108f & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049fac70,0xce1592a9,uVar4,0);
          FUN_021f03f8(PTR_DAT_049fac78);
          bRam0000000004f5108f = 1;
        }
        puVar1 = PTR_DAT_049fac78;
        lVar5 = *(long *)(lVar2 + 0x38);
        if (lVar5 != 0) {
          iVar6 = 0;
          do {
            if (*(int *)(lVar5 + 0x18) <= iVar6) {
              return;
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar5,iVar6,&lStack_38,*(undefined8 *)puVar1);
            if (lStack_38 == 0) break;
            if (*(int *)(lStack_38 + 0x18) == -0x31ea6d57) {
              if ((*(long *)(lVar2 + 0x38) == 0) ||
                 (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                            (*(long *)(lVar2 + 0x38),iVar6,&lStack_38,*(undefined8 *)puVar1),
                 lStack_38 == 0)) break;
              StatefulUI_Runtime_References_TextReference__SetText_334627c(lStack_38,uVar4);
            }
            lVar5 = *(long *)(lVar2 + 0x38);
            iVar6 = iVar6 + 1;
          } while (lVar5 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

