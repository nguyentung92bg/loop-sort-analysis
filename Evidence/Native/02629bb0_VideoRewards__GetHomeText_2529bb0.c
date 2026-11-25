/* IL2CPP: VideoRewards$$GetHomeText
System_String_o* VideoRewards__GetHomeText (VideoRewards_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewards$$GetHomeText
   System_String_o* VideoRewards__GetHomeText (VideoRewards_o* __this, const MethodInfo* method); */

void VideoRewards__GetHomeText_2529bb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uStack_4c;
  undefined8 auStack_48 [2];
  
  if ((bRam0000000004f4bebe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c55b8);
    bRam0000000004f4bebe = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    if (lVar12 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(lVar12 + 0x18);
    }
    iVar8 = VideoRewards__GetWatchedCount_2529cd0(param_1);
    puVar1 = PTR_DAT_049b3bd0;
    if (iVar7 - iVar8 < 1) {
      auStack_48[0] = VideoRewards__GetTimeUntilReset_2529edc();
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b6110);
      }
      puVar1 = PTR_DAT_049b6110;
      if ((bRam0000000004f4bc95 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b6110,2,0);
        FUN_021f03f8(PTR_DAT_049c2ea8);
        FUN_021f03f8(PTR_DAT_049b6128);
        FUN_021f03f8(PTR_DAT_049c5078);
        FUN_021f03f8(PTR_DAT_049c7c80);
        FUN_021f03f8(PTR_DAT_049c7c88);
        FUN_021f03f8(PTR_DAT_049c5080);
        bRam0000000004f4bc95 = 1;
      }
      lVar12 = *(long *)puVar1;
      uStack_4c = 0;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        FUN_021f0574();
        lVar12 = *(long *)puVar1;
      }
      puVar6 = PTR_DAT_049c7c88;
      puVar5 = PTR_DAT_049c7c80;
      puVar4 = PTR_DAT_049c5080;
      puVar3 = PTR_DAT_049c5078;
      puVar2 = PTR_DAT_049b6128;
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (lVar12 != 0) {
        System_Text_StringBuilder__Clear_2f8ba20(lVar12,0);
        uStack_4c = 0;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar10 = System_TimeSpan__get_Days_3116a70(auStack_48,0);
        Extensions__AppendUnit_24e726c(uVar10,*(undefined8 *)puVar6,2,&uStack_4c);
        uVar10 = System_TimeSpan__get_Hours_3116a9c(auStack_48,0);
        Extensions__AppendUnit_24e726c(uVar10,*(undefined8 *)puVar4,2,&uStack_4c);
        uVar10 = System_TimeSpan__get_Minutes_3116ae0(auStack_48,0);
        Extensions__AppendUnit_24e726c(uVar10,*(undefined8 *)puVar3,2,&uStack_4c);
        uVar10 = System_TimeSpan__get_Seconds_3116b28(auStack_48,0);
        Extensions__AppendUnit_24e726c(uVar10,*(undefined8 *)puVar5,2,&uStack_4c);
        lVar12 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        if (lVar12 != 0) {
          iVar7 = System_Text_StringBuilder__get_Length_2f84c30(lVar12,0);
          if (iVar7 == 0) {
            lVar12 = *(long *)puVar1;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              FUN_021f0574();
              lVar12 = *(long *)puVar1;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
            if (lVar12 == 0) goto LAB_025e7268;
            lVar12 = System_Text_StringBuilder__Append_2f843e0(lVar12,0x30,0);
            if (*(int *)(*(long *)PTR_DAT_049c2ea8 + 0xe4) == 0) {
              FUN_021f0574(*(long *)PTR_DAT_049c2ea8);
            }
            uVar10 = Localization__Get_252dbe0(*(undefined8 *)puVar5,0);
            if (lVar12 == 0) goto LAB_025e7268;
            System_Text_StringBuilder__Append_2f84430(lVar12,uVar10,0);
          }
          lVar12 = *(long *)puVar1;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            FUN_021f0574();
            lVar12 = *(long *)puVar1;
          }
          plVar9 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x10);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
            return;
          }
        }
      }
LAB_025e7268:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&stack0xffffffffffffffdc);
    puVar2 = PTR_DAT_049c55b8;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar11 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&stack0xffffffffffffffd8);
      System_String__Format_2f7dfac(*(undefined8 *)puVar2,uVar10,uVar11,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

