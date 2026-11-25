/* IL2CPP: ConveyorViewElement$$UpdateView
void ConveyorViewElement__UpdateView (ConveyorViewElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorViewElement$$UpdateView
   void ConveyorViewElement__UpdateView (ConveyorViewElement_o* __this, const MethodInfo* method);
    */

void ConveyorViewElement__UpdateView_24e2c04(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  int iStack_54;
  int iStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000004f4bc73 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7a70);
    FUN_021f03f8(PTR_DAT_049c4230);
    FUN_021f03f8(PTR_DAT_049c55b8);
    bRam0000000004f4bc73 = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar12 != 0)) {
    uVar13 = *(undefined8 *)(lVar12 + 0x50);
    FUN_0235c744(uVar13,&iStack_48,*(undefined8 *)PTR_DAT_049c7a70);
    lVar12 = CONCAT44(uStack_44,iStack_48);
    if (lVar12 != 0) {
      iVar7 = Conveyor__GetOccupiedSlotCount_24b0dfc(lVar12,0);
      iVar8 = Conveyor__GetTotalSlotCount_24b0e24(lVar12,0);
      puVar6 = PTR_DAT_049c55b8;
      puVar5 = PTR_DAT_049b3bd0;
      if (*(long *)(param_1 + 0x90) != 0) {
        iVar2 = *(int *)(lVar12 + 0x158);
        iVar4 = 0;
        if (iVar2 != 0) {
          iVar4 = iVar8 / iVar2;
        }
        iVar1 = iVar7;
        if (*(char *)(*(long *)(param_1 + 0x90) + 0x10) != '\0') {
          iVar1 = iVar7 + iVar2 + -1;
        }
        iStack_48 = 0;
        if (iVar2 != 0) {
          iStack_48 = iVar1 / iVar2;
        }
        uVar9 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_48);
        iStack_54 = iVar4;
        uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(puVar5 + 0x48),&iStack_54);
        uVar9 = System_String__Format_2f7dfac(*(undefined8 *)puVar6,uVar9,uVar10,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0xd7040997,uVar9,0);
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar9 = 0;
          uVar10 = 0;
          if (*(float *)(*(long *)(param_1 + 0x38) + 0x78) <= (float)iVar7 / (float)iVar8) {
            uVar10 = *(undefined8 *)(param_1 + 0x78);
            uVar9 = *(undefined8 *)(param_1 + 0x70);
          }
          uVar11 = *(undefined8 *)PTR_DAT_049c4230;
          *(undefined8 *)(param_1 + 0x88) = uVar10;
          *(undefined8 *)(param_1 + 0x80) = uVar9;
          FUN_0235c744(uVar13,&iStack_48,uVar11);
          iVar7 = iStack_48;
          StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
          if (iVar7 == 1) {
            uVar3 = 0x2d6d469f;
          }
          else {
            if (iVar7 != 2) {
              return;
            }
            uVar3 = 0xcc73327c;
          }
          StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

