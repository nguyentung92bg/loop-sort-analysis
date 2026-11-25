/* IL2CPP: HomeSceneView$$Alternate
float HomeSceneView__Alternate (float t, float delay, float dur, System_Func_float__float__o* ease, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneView$$Alternate
   float HomeSceneView__Alternate (float t, float delay, float dur, System_Func_float__float__o*
   ease, const MethodInfo* method); */

undefined4 HomeSceneView__Alternate_24280f0(float param_1,float param_2,float param_3,long param_4)

{
  uint uVar1;
  float fVar2;
  undefined4 uStack_38;
  float fStack_34;
  
  if (cRam0000000004f49d58 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f49d58 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (param_4 != 0) {
    fVar2 = _UNK_013aa8d8;
    if (_UNK_013aa8d8 <= param_3) {
      fVar2 = param_3;
    }
    fVar2 = (param_1 - param_2) / fVar2;
    uVar1 = 0x80000000;
    if ((float)(int)fVar2 != INFINITY) {
      uVar1 = (int)fVar2;
    }
    fStack_34 = fVar2 - (float)(int)uVar1;
    if ((uVar1 & 1) != 0) {
      fStack_34 = 1.0 - (fVar2 - (float)(int)uVar1);
    }
    (**(code **)(param_4 + 0x18))
              (*(undefined8 *)(param_4 + 0x40),&fStack_34,&uStack_38,*(undefined8 *)(param_4 + 0x28)
              );
    return uStack_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

