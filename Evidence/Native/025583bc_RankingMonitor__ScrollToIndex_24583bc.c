/* IL2CPP: RankingMonitor$$ScrollToIndex
void RankingMonitor__ScrollToIndex (RankingMonitor_o* __this, int32_t idx, float offset, int32_t scrollMode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RankingMonitor$$ScrollToIndex
   void RankingMonitor__ScrollToIndex (RankingMonitor_o* __this, int32_t idx, float offset, int32_t
   scrollMode, const MethodInfo* method); */

void RankingMonitor__ScrollToIndex_24583bc
               (undefined4 param_1,long param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  long lStack_48;
  
  if ((bRam0000000004f4b901 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4b40);
    FUN_021f03f8(PTR_DAT_049b5418);
    bRam0000000004f4b901 = 1;
  }
  if (*(long *)(param_2 + 0xf8) != 0) {
    lVar6 = *(long *)(*(long *)(param_2 + 0xf8) + 0x60);
    if (lVar6 == 0) {
LAB_02558568:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar6 + 0x18) != 0) {
      lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                        (param_2,0x21c0801,0);
      if ((lVar6 == 0) ||
         (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                    (lVar6,&lStack_48,*(undefined8 *)PTR_DAT_049c4b40), lStack_48 == 0))
      goto LAB_02558568;
      iVar4 = *(int *)(lStack_48 + 0x28) + -1;
      if (0 < *(int *)(lStack_48 + 0x28)) {
        iVar2 = *(int *)(param_2 + 0x110);
        iVar7 = param_3;
        if (iVar4 <= param_3) {
          iVar7 = iVar4;
        }
        iVar4 = 0;
        if (-1 < param_3) {
          iVar4 = iVar7;
        }
        if (cRam0000000004f4b669 == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4b669 = '\x01';
        }
        iVar2 = iVar2 - iVar4;
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar7 = -iVar2;
        if (-1 < iVar2) {
          iVar7 = iVar2;
        }
        if (0x1e < iVar7) {
          iVar7 = 0x1e;
          iVar2 = -0x1e;
          if (iVar4 < *(int *)(param_2 + 0x110)) {
            iVar2 = iVar7;
          }
          iVar2 = iVar2 + iVar4;
          iVar3 = *(int *)(lStack_48 + 0x28) + -1;
          iVar1 = iVar2;
          if (iVar3 <= iVar2) {
            iVar1 = iVar3;
          }
          iVar3 = 0;
          if (-1 < iVar2) {
            iVar3 = iVar1;
          }
          UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c(0,lStack_48,iVar3,0);
        }
        fVar8 = (float)iVar7 / 40.0;
        fVar9 = _UNK_013aa8f4;
        if (fVar8 <= _UNK_013aa8f4) {
          fVar9 = fVar8;
        }
        fVar5 = _UNK_013aa838;
        if (_UNK_013aa838 <= fVar8) {
          fVar5 = fVar9;
        }
        UnityEngine_UI_LoopScrollRectBase__ScrollToCellWithinTime_2ebcf80
                  (fVar5,param_1,lStack_48,iVar4,param_4,0);
      }
    }
  }
  return;
}

