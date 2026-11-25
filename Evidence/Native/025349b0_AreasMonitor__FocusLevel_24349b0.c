/* IL2CPP: AreasMonitor$$FocusLevel
void AreasMonitor__FocusLevel (AreasMonitor_o* __this, AreaSheet_Row_o* area, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$FocusLevel
   void AreasMonitor__FocusLevel (AreasMonitor_o* __this, AreaSheet_Row_o* area, const MethodInfo*
   method); */

void AreasMonitor__FocusLevel_24349b0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x1;
  int iVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_s3;
  float fVar12;
  int iStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b7f1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3a78);
    FUN_021f03f8(PTR_DAT_049c3a80);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c39c8);
    FUN_021f03f8(PTR_DAT_049c3a88);
    bRam0000000004f4b7f1 = 1;
  }
  if (((*(long *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0xd0) != 0)) && (param_2 != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x98) + 0x50);
    iVar7 = *(int *)(*(long *)(param_1 + 0xd0) + 0x28);
    puVar3 = (uint *)thunk_FUN_0224e54c(param_2,*(long *)(**(long **)(*(long *)(*(long *)
                                                  PTR_DAT_049c39c8 + 0x20) + 0xc0) + 0x80) + 0x20);
    if (*(long *)(param_1 + 0xd0) != 0) {
      iVar7 = iVar7 + ~*puVar3;
      UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c(0,*(long *)(param_1 + 0xd0),iVar7,0);
      AreasMonitor__FindAreaView_2434e68(param_1,param_2);
      if (extraout_x1 != 0) {
        AreasMonitor__get_DisplayLevel_2434050(param_1);
        fVar9 = (float)AreasMonitor__GetFill_243517c(param_1,extraout_x1);
        if (*(long *)(param_1 + 0xd8) == 0) goto LAB_02534c24;
        fVar10 = *(float *)(extraout_x1 + 0x18);
        fVar12 = *(float *)(extraout_x1 + 0x1c);
        fVar11 = *(float *)(param_1 + 0xec);
        UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_1 + 0xd8),0);
        iVar1 = iVar7 + -1;
        fVar9 = (fVar12 - (fVar9 * fVar10 - fVar11)) + in_s3 * -0.5;
        if ((0 < iVar7) && (fVar9 < 0.0)) {
          if (*(long *)(param_1 + 0xd0) == 0) goto LAB_02534c24;
          UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c
                    (0,*(long *)(param_1 + 0xd0),iVar1,0);
          if ((*(long *)(param_1 + 0xd0) == 0) || (lVar8 == 0)) goto LAB_02534c24;
          iStack_28 = *(int *)(*(long *)(param_1 + 0xd0) + 0x28) - iVar1;
          uVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                            (lVar8,&iStack_28,*(undefined8 *)PTR_DAT_049c3a88);
          lVar8 = AreasMonitor__FindAreaView_2434e68(param_1,uVar4);
          if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
            FUN_021f0574(*(long *)PTR_DAT_049b3b98);
          }
          uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(lVar8,0,0);
          if ((uVar5 & 1) != 0) {
            return;
          }
          lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                            (param_1,0xbcdc2f95,0);
          if (lVar6 == 0) goto LAB_02534c24;
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (lVar6,&iStack_28,*(undefined8 *)PTR_DAT_049c3a80);
          if ((CONCAT44(uStack_24,iStack_28) == 0) || (lVar8 == 0)) goto LAB_02534c24;
          fVar10 = *(float *)(CONCAT44(uStack_24,iStack_28) + 0x60);
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (lVar8,&iStack_28,*(undefined8 *)PTR_DAT_049c3a78);
          plVar2 = (long *)CONCAT44(uStack_24,iStack_28);
          if (plVar2 == (long *)0x0) goto LAB_02534c24;
          fVar11 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
          fVar9 = fVar9 + fVar10 + fVar11;
          iVar7 = iVar1;
        }
        if (*(long *)(param_1 + 0xd0) == 0) goto LAB_02534c24;
        fVar10 = 0.0;
        if (0.0 <= fVar9) {
          fVar10 = fVar9;
        }
        UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c
                  (fVar10,*(long *)(param_1 + 0xd0),iVar7,0);
      }
      return;
    }
  }
LAB_02534c24:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

