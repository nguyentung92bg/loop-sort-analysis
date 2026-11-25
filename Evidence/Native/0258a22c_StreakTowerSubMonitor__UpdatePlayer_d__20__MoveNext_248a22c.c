/* IL2CPP: StreakTowerSubMonitor.<UpdatePlayer>d__20$$MoveNext
void StreakTowerSubMonitor__UpdatePlayer_d__20__MoveNext (StreakTowerSubMonitor__UpdatePlayer_d__20_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0258aac8) */
/* IL2CPP: StreakTowerSubMonitor.<UpdatePlayer>d__20$$MoveNext
   void StreakTowerSubMonitor__UpdatePlayer_d__20__MoveNext
   (StreakTowerSubMonitor__UpdatePlayer_d__20_o __this, const MethodInfo* method); */

void StreakTowerSubMonitor__UpdatePlayer_d__20__MoveNext_248a22c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 extraout_var;
  int extraout_var_00;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  long lStack_a8;
  uint *puStack_a0;
  long *plStack_98;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  uint uStack_64;
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4ba41 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5cf8);
    FUN_021f03f8(PTR_DAT_049c5cf0);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c5478);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4ba41 = 1;
  }
  uStack_64 = *param_4;
  lStack_70 = *(long *)(param_4 + 4);
  auStack_80._8_8_ = 0;
  auStack_80._0_8_ = 0;
  uStack_88 = 0;
  if (2 < uStack_64) {
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *(long *)(lStack_70 + 0xa0);
    StreakTowerSubMonitor__get_Save_248736c();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_60._0_4_ = extraout_var;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (lVar7,auStack_60,&lStack_a8,*(undefined8 *)PTR_DAT_049c5cf0);
    lVar7 = lStack_a8;
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *(long *)(lStack_70 + 0x70);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = UnityEngine_Transform__get_position_3c2d540(lVar8,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar11 = param_2;
    UnityEngine_Transform__get_position_3c2d540(lVar7,0);
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__WithY_3f0d5ec(uVar10,param_2,param_3,uVar11,0);
    UnityEngine_Transform__set_position_3c2d61c(lVar8,0);
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_70 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__SetAsLastSibling_3c2f0a4(*(long *)(lStack_70 + 0x70),0);
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_70 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *(long *)(*(long *)(lStack_70 + 0x78) + 0x20);
    StreakTowerSubMonitor__GetContentPosition_248819c(lStack_70,lVar7);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(lVar8,0);
    StreakTowerSubMonitor__get_Save_248736c();
    iVar2 = StreakTowerSubMonitor__get_Save_248736c();
    if (extraout_var_00 == iVar2) goto LAB_0258aa98;
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_70 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__DisableRaycaster_256ea20(*(long *)(lStack_70 + 0x28),lStack_70,0);
  }
  puStack_a0 = &uStack_64;
  plStack_98 = &lStack_70;
  lStack_a8 = 0;
  if (uStack_64 == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_4 + 6);
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    uStack_64 = 0xffffffff;
    *param_4 = 0xffffffff;
    goto LAB_0258a584;
  }
  if (uStack_64 == 1) {
    auStack_80 = *(undefined1 (*) [16])(param_4 + 6);
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    uStack_64 = 0xffffffff;
    *param_4 = 0xffffffff;
    goto LAB_0258a760;
  }
  if (uStack_64 == 2) {
    auStack_80 = *(undefined1 (*) [16])(param_4 + 6);
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    uStack_64 = 0xffffffff;
    *param_4 = 0xffffffff;
LAB_0258a914:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar3 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_80._0_8_;
      uVar9 = auStack_80._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0258a9d4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0258a9d4:
      (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
    }
    iVar2 = 0xe;
  }
  else {
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar12 = StreakTowerSubMonitor__ApplyMoveMotion_2488068();
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_70 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    StreakTower__Sync_2528528(*(long *)(lStack_70 + 0x48),0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_60 = auVar12;
    thunk_FUN_021f190c(auStack_60,0);
    auStack_80 = auStack_60;
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
    uVar3 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ == (long *)0x0) {
LAB_0258a584:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar3 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_80._0_8_;
        uVar9 = auStack_80._8_8_ & 0xffff;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_0258a604;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0258a604:
        (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
      }
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_70 + 0x90) != 0) {
        auVar12 = StreakTowerSubMonitor__ApplyChestClaimMotion_2488100();
        puVar1 = PTR_DAT_049b5138;
        if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_60 = auVar12;
        thunk_FUN_021f190c(auStack_60,0);
        auStack_80 = auStack_60;
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
        uVar3 = auStack_80._0_8_;
        if ((long *)auStack_80._0_8_ != (long *)0x0) {
          lVar7 = *(long *)auStack_80._0_8_;
          uVar9 = auStack_80._8_8_ & 0xffff;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0258a74c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0258a74c:
          iVar2 = (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
          if (iVar2 == 0) {
            uStack_64 = 1;
            *param_4 = 1;
            *(undefined1 (*) [16])(param_4 + 6) = auStack_80;
            thunk_FUN_021f190c(param_4 + 6,0);
            FUN_0235c420(param_4 + 2,auStack_80,param_4,*(undefined8 *)PTR_DAT_049c5cf8);
            goto LAB_0258aa2c;
          }
        }
LAB_0258a760:
        if (cRam0000000004f49bf6 == '\0') {
          FUN_021f03f8(PTR_DAT_049b54e0);
          cRam0000000004f49bf6 = '\x01';
        }
        uVar3 = auStack_80._0_8_;
        if ((long *)auStack_80._0_8_ != (long *)0x0) {
          lVar7 = *(long *)auStack_80._0_8_;
          uVar9 = auStack_80._8_8_ & 0xffff;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto LAB_0258a7e0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0258a7e0:
          (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
        }
      }
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar3 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lStack_70,0);
      puVar1 = PTR_DAT_049b5138;
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar12 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(800,0,8,uVar3,0,0);
      auStack_60 = auVar12;
      thunk_FUN_021f190c(auStack_60,0);
      auStack_80 = auStack_60;
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
      uVar3 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_80._0_8_;
        uVar9 = auStack_80._8_8_ & 0xffff;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0258a900;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0258a900:
        iVar2 = (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
        if (iVar2 == 0) {
          uStack_64 = 2;
          *param_4 = 2;
          *(undefined1 (*) [16])(param_4 + 6) = auStack_80;
          thunk_FUN_021f190c(param_4 + 6,0);
          FUN_0235c420(param_4 + 2,auStack_80,param_4,*(undefined8 *)PTR_DAT_049c5cf8);
          goto LAB_0258aa2c;
        }
      }
      goto LAB_0258a914;
    }
    lVar7 = *(long *)auStack_80._0_8_;
    uVar9 = auStack_80._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0258a570;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0258a570:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
    if (iVar2 != 0) goto LAB_0258a584;
    uStack_64 = 0;
    *param_4 = 0;
    *(undefined1 (*) [16])(param_4 + 6) = auStack_80;
    thunk_FUN_021f190c(param_4 + 6,0);
    FUN_0235c420(param_4 + 2,auStack_80,param_4,*(undefined8 *)PTR_DAT_049c5cf8);
LAB_0258aa2c:
    iVar2 = 10;
  }
  if ((int)uStack_64 < 0) {
    lVar7 = *plStack_98;
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar7 + 0x28),lVar7,0);
  }
  if ((iVar2 != 0xe) && (iVar2 != 0)) {
    return;
  }
  if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lStack_70 + 0x90) != 0) {
    if (*(long *)(lStack_70 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__Deactivate_object__2688964
              (*(long *)(lStack_70 + 0x28),0,*(undefined8 *)PTR_DAT_049c5478);
  }
LAB_0258aa98:
  *param_4 = 0xfffffffe;
  FUN_0235afc8(param_4 + 2,0);
  return;
}

