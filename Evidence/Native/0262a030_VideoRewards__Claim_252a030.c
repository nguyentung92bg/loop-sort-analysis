/* IL2CPP: VideoRewards$$Claim
bool VideoRewards__Claim (VideoRewards_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewards$$Claim
   bool VideoRewards__Claim (VideoRewards_o* __this, int32_t index, const MethodInfo* method); */

undefined4 VideoRewards__Claim_252a030(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f4bec1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049c5d28);
    bRam0000000004f4bec1 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    iVar2 = 0;
    if (lVar3 != 0) {
      iVar2 = *(int *)(lVar3 + 0x18);
    }
    if ((param_2 < iVar2) &&
       (iVar2 = VideoRewards__GetWatchedCount_2529cd0(param_1), puVar1 = PTR_DAT_049b5310,
       iVar2 == param_2)) {
      lVar3 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      CloudPrefsInt__Set_24e9aa8(*(long *)(lVar3 + 0xb8) + 0x9f8,param_2 + 1,0);
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                    /* try { // try from 0262a0f8 to 0272a53f has its CatchHandler @ 0262a0f8
                       catch() { ... } // from try @ 0262a0f8 with catch @ 0262a0f8
                       catch() { ... } // from try @ 0262a5ac with catch @ 0262a0f8
                       catch() { ... } // from try @ 0262a63c with catch @ 0262a0f8
                       catch() { ... } // from try @ 0262a764 with catch @ 0262a0f8
                       catch() { ... } // from try @ 0262a7d4 with catch @ 0262a0f8
                       catch() { ... } // from try @ 0262aea4 with catch @ 0262a0f8
                       catch() { ... } // from try @ 0262aee0 with catch @ 0262a0f8
                       catch() { ... } // from try @ 0262af08 with catch @ 0262a0f8
                       catch() { ... } // from try @ 0262af38 with catch @ 0262a0f8
                       catch() { ... } // from try @ 0262af64 with catch @ 0262a0f8 */
        FUN_021f0574();
      }
      auStack_30 = TimeProvider__get_Now_24f4584(0);
      CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                (*(long *)(*(long *)puVar1 + 0xb8) + 0x9c8,auStack_30,
                 *(undefined8 *)PTR_DAT_049b5fa0);
      lVar3 = *(long *)(param_1 + 0x10);
      iVar2 = VideoRewards__GetReward_2529fd8(param_1,param_2);
      if (lVar3 == 0) goto LAB_0262a180;
      uVar4 = 1;
      FulfillModule__FulfillRewardedPayout_2543594
                (lVar3,1,(double)iVar2,*(undefined8 *)PTR_DAT_049c5d28,0);
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
LAB_0262a180:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

