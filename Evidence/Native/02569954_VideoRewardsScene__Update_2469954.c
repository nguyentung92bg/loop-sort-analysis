/* IL2CPP: VideoRewardsScene$$Update
void VideoRewardsScene__Update (VideoRewardsScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsScene$$Update
   void VideoRewardsScene__Update (VideoRewardsScene_o* __this, const MethodInfo* method); */

void VideoRewardsScene__Update_2469954(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x84);
  fVar7 = (float)UnityEngine_Time__get_unscaledDeltaTime_3c29788(0);
  uVar1 = _UNK_013aa8c4;
  fVar9 = fVar9 + fVar7;
  *(float *)(param_1 + 0x84) = fVar9;
  fVar7 = (float)FUN_046086d0(fVar9,uVar1);
  uVar1 = _UNK_013aa53c;
  fVar9 = (float)VideoRewardsScene__Appear_2469b04(fVar7,0,_UNK_013aa53c);
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    fVar8 = (float)FUN_046086e0(*(float *)(param_1 + 0x84) * 4.0);
    fVar9 = fVar9 * (fVar8 * _UNK_013aa698 + 1.0);
    UnityEngine_Transform__set_localScale_3c2ddfc(fVar9,fVar9,0x3f800000,lVar6,0);
    uVar2 = _UNK_013aa658;
    fVar9 = (float)VideoRewardsScene__Appear_2469b04(fVar7,uVar1,_UNK_013aa658);
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      fVar8 = (float)FUN_04608760((fVar7 + _UNK_013aa3f8) * 6.0);
      UnityEngine_Transform__set_localScale_3c2ddfc(ABS(fVar8) * fVar9,fVar9,0x3f800000,lVar6,0);
      fVar7 = (float)VideoRewardsScene__Appear_2469b04(fVar7,_UNK_013aa820,uVar2);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar6 = TMPro_TMP_Text__get_rectTransform_3b0ca7c(*(long *)(param_1 + 0x30),0), lVar6 != 0
         )) {
        UnityEngine_Transform__set_localScale_3c2ddfc(fVar7,fVar7,0x3f800000,lVar6,0);
        if ((0.0 < fVar7) || (*(long *)(param_1 + 0x88) == 0)) {
          return;
        }
        plVar3 = *(long **)(param_1 + 0x30);
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x548))(plVar3,*(undefined8 *)(*plVar3 + 0x550));
          uVar5 = System_String__op_Inequality_2f7b800(uVar4,*(undefined8 *)(param_1 + 0x88),0);
          if ((uVar5 & 1) == 0) {
            return;
          }
          plVar3 = *(long **)(param_1 + 0x30);
          if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02569ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x558))
                      (plVar3,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(*plVar3 + 0x560));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

