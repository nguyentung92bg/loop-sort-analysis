/* IL2CPP: LevelAnimationSystem$$OnCameraUpdateComplete
void LevelAnimationSystem__OnCameraUpdateComplete (LevelAnimationSystem_o* __this, CameraUpdateCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelAnimationSystem$$OnCameraUpdateComplete
   void LevelAnimationSystem__OnCameraUpdateComplete (LevelAnimationSystem_o* __this,
   CameraUpdateCompleteMessage_o m, const MethodInfo* method); */

long LevelAnimationSystem__OnCameraUpdateComplete_24d7c58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [4];
  
  lVar2 = param_1;
  if ((bRam0000000004f4bc42 & 1) == 0) {
    lVar2 = FUN_021f03f8(PTR_DAT_049c77c8);
    bRam0000000004f4bc42 = 1;
  }
  if (*(char *)(param_1 + 200) != '\0') {
    return lVar2;
  }
  *(undefined1 *)(param_1 + 200) = 1;
  func_0x04608650(param_1 + 0xd8,param_2,0x3c);
  puVar1 = PTR_DAT_049c77d0;
  if (*(long *)(param_1 + 0xd0) != 0) {
    if (*(char *)(*(long *)(param_1 + 0xd0) + 0x10) != '\0') {
      if ((bRam0000000004f4bc43 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c77d0);
        bRam0000000004f4bc43 = 1;
      }
      alStack_40[2] = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      alStack_40[1] = 0;
      alStack_40[0] = 0;
      thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
      alStack_40[0] = param_1;
      thunk_FUN_021f190c(alStack_40,param_1);
      uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
      Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
      return 0;
    }
    plVar6 = *(long **)(param_1 + 0x48);
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c77c8) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_025d7d30;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c77c8,0);
LAB_025d7d30:
                    /* WARNING: Could not recover jumptable at 0x025d7d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*(code *)*puVar3)(plVar6,0,puVar3[1]);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

