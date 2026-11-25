/* IL2CPP: HomeMonitor$$UpdateLevelMultiplier
void HomeMonitor__UpdateLevelMultiplier (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$UpdateLevelMultiplier
   void HomeMonitor__UpdateLevelMultiplier (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__UpdateLevelMultiplier_2444f30(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4b860 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4228);
    FUN_021f03f8(PTR_DAT_049c4230);
    FUN_021f03f8(PTR_DAT_049be928);
    bRam0000000004f4b860 = 1;
  }
  iStack_3c = 0;
  if (*(long *)(param_1 + 0xa8) == 0) {
LAB_0254511c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  FUN_0235c744(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x18),&iStack_38,
               *(undefined8 *)PTR_DAT_049c4230);
  puVar2 = PTR_DAT_049c4228;
  uVar7 = 3;
  if (iStack_38 == 1) {
    uVar7 = 4;
  }
  uVar1 = 5;
  if (iStack_38 != 2) {
    uVar1 = uVar7;
  }
  if ((*(long *)(param_1 + 0xe8) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0xe8) + 0x30), lVar5 == 0)) goto LAB_0254511c;
  iVar3 = ConstantSheetBase_object___GetInt_281c070(lVar5,uVar1,*(undefined8 *)PTR_DAT_049c4228);
  if ((*(long *)(param_1 + 0xe8) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0xe8) + 0x30), lVar5 == 0)) goto LAB_0254511c;
  iVar4 = ConstantSheetBase_object___GetInt_281c070(lVar5,3,*(undefined8 *)puVar2);
  if (cRam0000000004f4a004 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a004 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049be928;
  dVar9 = (double)((float)iVar3 / (float)iVar4);
  dVar8 = (double)FUN_04608690(dVar9,&iStack_38);
  if (0.0 <= (float)iVar3 / (float)iVar4) {
    if (dVar8 != 0.5) {
      dVar8 = (double)(long)(dVar9 + 0.5);
      goto LAB_025450b4;
    }
    dVar9 = 1.0;
  }
  else {
    if (dVar8 != -0.5) {
      dVar8 = (double)(long)(dVar9 + -0.5);
      goto LAB_025450b4;
    }
    dVar9 = -1.0;
  }
  dVar8 = (double)CONCAT44(uStack_34,iStack_38);
  if (((long)dVar8 & 1U) != 0) {
    dVar8 = dVar8 + dVar9;
  }
LAB_025450b4:
  iStack_3c = -0x80000000;
  if (dVar8 != INFINITY) {
    iStack_3c = (int)dVar8;
  }
  uVar6 = System_Int32__ToString_30fbaa0(&iStack_3c,0);
  uVar6 = System_String__Concat_2f72b28(*(undefined8 *)puVar2,uVar6,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xd7ad136f,uVar6,0);
  return;
}

