/* IL2CPP: BattlePassSubMonitor$$UpdateProgressBar
void BattlePassSubMonitor__UpdateProgressBar (BattlePassSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$UpdateProgressBar
   void BattlePassSubMonitor__UpdateProgressBar (BattlePassSubMonitor_o* __this, const MethodInfo*
   method); */

void BattlePassSubMonitor__UpdateProgressBar_246d938(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b991 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049bb3a0);
    bRam0000000004f4b991 = 1;
  }
  iStack_28 = 0;
  uStack_30 = 0;
  iStack_2c = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar8[1] + 0xfc);
    uVar5 = thunk_FUN_0224e54c(*(long *)(param_1 + 0xa0),*(undefined8 *)(*plVar8 + 0x80));
    func_0x04608620(&uStack_24,uVar5,uVar1);
    uStack_30 = uStack_24;
    uVar5 = System_Int32__ToString_30fbaa0(&uStack_30,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x6d8b1339,uVar5,0);
    puVar3 = PTR_DAT_049bb3a0;
    if (*(long *)(param_1 + 0xa0) != 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0xa0) + 0x28);
      iStack_28 = iVar2;
      if (*(long *)(param_1 + 0x50) != 0) {
        iVar4 = BattlePass__GetCurrentKeyCount_250c138(*(long *)(param_1 + 0x50),0);
        iStack_2c = iVar2;
        if (iVar4 <= iVar2) {
          iStack_2c = iVar4;
        }
        uVar5 = System_Int32__ToString_30fbaa0(&iStack_2c,0);
        uVar6 = System_Int32__ToString_30fbaa0(&iStack_28,0);
        uVar5 = System_String__Concat_2f7d424(uVar5,*(undefined8 *)puVar3,uVar6,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0xbcdc2f95,uVar5,0);
        iVar4 = iStack_28;
        iVar2 = iStack_2c;
        lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                          (param_1,0x85f8a9cf,0);
        if ((lVar7 != 0) &&
           (lVar7 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar7,0), lVar7 != 0)) {
          fVar9 = (float)iVar2 / (float)iVar4;
          fVar11 = 1.0;
          if (fVar9 <= 1.0) {
            fVar11 = fVar9;
          }
          fVar10 = 0.0;
          if (0.0 <= fVar9) {
            fVar10 = fVar11;
          }
          UnityEngine_RectTransform__set_anchorMax_3c2bdd0(fVar10,0x3f800000,lVar7,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

