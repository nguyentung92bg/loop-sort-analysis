/* IL2CPP: LavaQuestSubMonitor$$UpdateGameStateView
void LavaQuestSubMonitor__UpdateGameStateView (LavaQuestSubMonitor_o* __this, LavaQuestGame_o game, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$UpdateGameStateView
   void LavaQuestSubMonitor__UpdateGameStateView (LavaQuestSubMonitor_o* __this, LavaQuestGame_o
   game, const MethodInfo* method); */

void LavaQuestSubMonitor__UpdateGameStateView_2479a50(long param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uStack_54;
  int iStack_48;
  int iStack_44;
  
  puVar5 = PTR_DAT_049c55b8;
  puVar4 = PTR_DAT_049b4540;
  if ((bRam0000000004f4b9db & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049c55b8);
    bRam0000000004f4b9db = 1;
  }
  uVar1 = 0x18319ff2;
  if (*(int *)(param_1 + 0xac) != 3) {
    uVar1 = 0x1440f1d8;
  }
  iStack_44 = 0;
  uVar2 = 0x5f10e269;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    uVar2 = uVar1;
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*(undefined8 *)(param_1 + 0x68),uVar2,0);
  puVar3 = PTR_DAT_049b3bd0;
  iStack_48 = *param_2;
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_48);
  uStack_54 = 10;
  uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_54);
  uVar6 = System_String__Format_2f7dfac(*(undefined8 *)puVar5,uVar6,uVar7,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
            (uVar9,0x57fbb481,uVar6,0);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = System_Int32__ToString_30fbaa0(param_2 + 1,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
            (uVar7,0xe0d1c46c,uVar6,0);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  lVar8 = FUN_021f04e4(*(undefined8 *)puVar4,1);
  uVar6 = System_Int32__ToString_30fbaa0(param_2 + 5,0);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_02579c60:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(lVar8 + 0x20) = uVar6;
    thunk_FUN_021f190c();
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
              (uVar7,0x72c5b6c8,lVar8,0);
    if (*(char *)(param_1 + 0xa8) == '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      lVar8 = FUN_021f04e4(*(undefined8 *)puVar4,1);
      iStack_44 = 10 - *param_2;
      uVar6 = System_Int32__ToString_30fbaa0(&iStack_44,0);
      if (lVar8 == 0) goto LAB_02579c5c;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_02579c60;
      *(undefined8 *)(lVar8 + 0x20) = uVar6;
      thunk_FUN_021f190c();
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                (uVar7,0x993134c1,lVar8,0);
    }
    return;
  }
LAB_02579c5c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

