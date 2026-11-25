/* IL2CPP: VideoRewardsSubMonitor.<PlayReward>d__16$$MoveNext
void VideoRewardsSubMonitor__PlayReward_d__16__MoveNext (VideoRewardsSubMonitor__PlayReward_d__16_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0258bb80) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: VideoRewardsSubMonitor.<PlayReward>d__16$$MoveNext
   void VideoRewardsSubMonitor__PlayReward_d__16__MoveNext
   (VideoRewardsSubMonitor__PlayReward_d__16_o __this, const MethodInfo* method); */

void VideoRewardsSubMonitor__PlayReward_d__16__MoveNext_248b754
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  int iStack_54;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4ba4a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5d38);
    FUN_021f03f8(PTR_DAT_049b5390);
    FUN_021f03f8(PTR_DAT_049b5388);
    FUN_021f03f8(PTR_DAT_049c4660);
    FUN_021f03f8(PTR_DAT_049b5380);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4ba4a = 1;
  }
  iStack_54 = *param_4;
  lStack_60 = *(long *)(param_4 + 4);
  auStack_70._8_8_ = 0;
  auStack_70._0_8_ = 0;
  if (iStack_54 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_4 + 8);
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    iStack_54 = -1;
    *param_4 = -1;
  }
  else {
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *(long *)(lStack_60 + 0x48);
    *(undefined1 *)(lStack_60 + 0x78) = 1;
    uVar3 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lStack_60,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar3,uVar3);
    }
    auStack_50 = VideoRewardsScene__PlayReward_246a160(lVar7,uVar3,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_50,0);
    auStack_70 = auStack_50;
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
    uVar3 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_70._0_8_;
      uVar9 = auStack_70._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0258b940;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0258b940:
      iVar2 = (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
      if (iVar2 == 0) {
        iStack_54 = 0;
        *param_4 = 0;
        *(undefined1 (*) [16])(param_4 + 8) = auStack_70;
        thunk_FUN_021f190c(param_4 + 8,0);
        FUN_0235c420(param_4 + 2,auStack_70,param_4,*(undefined8 *)PTR_DAT_049c5d38);
        iVar2 = 5;
        goto LAB_0258badc;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_70._0_8_;
    uVar9 = auStack_70._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0258b9d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0258b9d8:
    (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
  }
  if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lStack_60 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
            (*(long *)(lStack_60 + 0x68),param_4[6],auStack_50,*(undefined8 *)PTR_DAT_049c4660);
  lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (auStack_50._0_8_,0xbcdc2f95,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar7,0);
  if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *(long *)(lStack_60 + 0x60);
  uVar10 = UnityEngine_Transform__get_position_3c2d540(lVar7,0);
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5380);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar7,*(undefined8 *)PTR_DAT_049b5388);
  if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lStack_60 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar11 = VideoRewards__GetPayout_252a010(*(long *)(lStack_60 + 0x50),param_4[6],0);
  if (lVar7 != 0) {
    auStack_50 = auVar11;
    FUN_02333498(lVar7,auStack_50,*(undefined8 *)PTR_DAT_049b5390);
    if (lVar8 != 0) {
      FulfillItemsMonitor__Show_243ea38(uVar10,param_2,param_3,lVar8,lVar7,0);
      iVar2 = 6;
LAB_0258badc:
      if (iStack_54 < 0) {
        if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        *(undefined1 *)(lStack_60 + 0x78) = 0;
      }
      if ((iVar2 == 0) || (iVar2 == 6)) {
        *param_4 = -2;
        FUN_0235afc8(param_4 + 2,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

