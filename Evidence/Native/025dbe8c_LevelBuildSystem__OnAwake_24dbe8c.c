/* IL2CPP: LevelBuildSystem$$OnAwake
void LevelBuildSystem__OnAwake (LevelBuildSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelBuildSystem$$OnAwake
   void LevelBuildSystem__OnAwake (LevelBuildSystem_o* __this, const MethodInfo* method); */

void LevelBuildSystem__OnAwake_24dbe8c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_14 [4];
  
  if ((bRam0000000004f4bc4d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7860);
    bRam0000000004f4bc4d = 1;
  }
  auStack_14[0] = 0;
  SystemBase__OnAwake_2555e24(param_1,0);
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_049c7860);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    thunk_FUN_021f190c();
    auStack_14[0] = LevelBuildSystem__Build_24dbf18(param_1);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_14,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

