/* IL2CPP: PlayingMonitor$$RenderTimer
void PlayingMonitor__RenderTimer (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$RenderTimer
   void PlayingMonitor__RenderTimer (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__RenderTimer_2450124(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  int iStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4b8c5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4858);
    bRam0000000004f4b8c5 = 1;
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    fVar5 = (float)LoseSystem__get_TimeLeft_24df11c(*(long *)(param_1 + 0x180),0);
    if (cRam0000000004f4b79c == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4b79c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar2 = PTR_DAT_049b3bd0;
    iVar1 = -0x80000000;
    if ((float)(int)fVar5 != INFINITY) {
      iVar1 = (int)fVar5;
    }
    if (iVar1 != *(int *)(param_1 + 0x188)) {
      *(int *)(param_1 + 0x188) = iVar1;
      iStack_34 = iVar1 / 0x3c;
      uVar3 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&iStack_34);
      iStack_38 = iVar1 % 0x3c;
      uVar4 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&iStack_38);
      uVar3 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049c4858,uVar3,uVar4,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xd94421bb,uVar3,0)
      ;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

