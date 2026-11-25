/* IL2CPP: VideoRewardsScene$$Awake
void VideoRewardsScene__Awake (VideoRewardsScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsScene$$Awake
   void VideoRewardsScene__Awake (VideoRewardsScene_o* __this, const MethodInfo* method); */

void VideoRewardsScene__Awake_24694bc(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((bRam0000000004f4b978 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc298);
    bRam0000000004f4b978 = 1;
  }
  if (*(long *)(param_3 + 0x58) != 0) {
    uVar6 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(*(long *)(param_3 + 0x58),0);
    *(undefined4 *)(param_3 + 0x9c) = uVar6;
    *(undefined4 *)(param_3 + 0xa0) = param_2;
    if (*(long *)(param_3 + 0x68) != 0) {
      uVar6 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(*(long *)(param_3 + 0x68),0);
      *(undefined4 *)(param_3 + 0xb0) = uVar6;
      *(undefined4 *)(param_3 + 0xb4) = param_2;
      if (*(long *)(param_3 + 0x50) != 0) {
        lVar1 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049bc298,
                             *(undefined4 *)(*(long *)(param_3 + 0x50) + 0x18));
        plVar2 = (long *)(param_3 + 0xa8);
        *plVar2 = lVar1;
        thunk_FUN_021f190c(plVar2,lVar1);
        lVar1 = *(long *)(param_3 + 0x50);
        if (lVar1 != 0) {
          lVar4 = 0;
          uVar3 = 0;
          do {
            if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar3) {
              VideoRewardsScene__SetAlpha_24695e4(0,*(undefined8 *)(param_3 + 0x38));
              VideoRewardsScene__SetAlpha_24695e4(0,*(undefined8 *)(param_3 + 0x60));
              lVar1 = *(long *)(param_3 + 0x78);
              if (lVar1 != 0) {
                if ((bRam0000000004f5817b & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_04a266d8,0,0);
                  bRam0000000004f5817b = 1;
                }
                if (lVar1 != 0) {
                  lVar4 = *(long *)(lVar1 + 0x10);
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
                  }
                  if (pcRam0000000004f58188 == (code *)0x0) {
                    pcRam0000000004f58188 = (code *)FUN_021f03bc(&UNK_013d0ea3);
                  }
                    /* WARNING: Could not recover jumptable at 0x03d17f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004f58188)(lVar4,0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              break;
            }
            if (*(uint *)(lVar1 + 0x18) <= uVar3) {
LAB_025695e0:
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            lVar1 = *(long *)(lVar1 + lVar4 + 0x20);
            if (lVar1 == 0) break;
            lVar5 = *plVar2;
            uVar6 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar1,0);
            if (lVar5 == 0) break;
            if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_025695e0;
            lVar5 = lVar5 + lVar4;
            lVar4 = lVar4 + 8;
            uVar3 = uVar3 + 1;
            *(undefined4 *)(lVar5 + 0x20) = uVar6;
            *(undefined4 *)(lVar5 + 0x24) = param_2;
            lVar1 = *(long *)(param_3 + 0x50);
          } while (lVar1 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

