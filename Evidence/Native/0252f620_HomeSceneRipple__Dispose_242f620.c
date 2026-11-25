/* IL2CPP: HomeSceneRipple$$Dispose
void HomeSceneRipple__Dispose (HomeSceneRipple_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneRipple$$Dispose
   void HomeSceneRipple__Dispose (HomeSceneRipple_o* __this, const MethodInfo* method); */

void HomeSceneRipple__Dispose_242f620(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b7d1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7d1 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar1 = PTR_DAT_049b3b98;
    uVar4 = 0;
    if ((bRam0000000004f584c3 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b3b98,0);
      bRam0000000004f584c3 = 1;
      uVar4 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
      uVar4 = extraout_x1_00;
    }
    puVar1 = PTR_DAT_04a258d0;
    if ((bRam0000000004f584c2 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a258d0,uVar4);
      FUN_021f03f8(PTR_DAT_049b3b98);
      bRam0000000004f584c2 = 1;
    }
    if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
      FUN_02229774();
    }
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (pcRam0000000004f58540 == (code *)0x0) {
      pcRam0000000004f58540 = (code *)FUN_021f03bc(&UNK_013bf2e5);
    }
                    /* WARNING: Could not recover jumptable at 0x03d24330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f58540)(0,uVar4);
    return;
  }
  return;
}

