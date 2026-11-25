/* IL2CPP: HapticModule$$CanPlay
bool HapticModule__CanPlay (HapticModule_o* __this, int32_t hapticType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HapticModule$$CanPlay
   bool HapticModule__CanPlay (HapticModule_o* __this, int32_t hapticType, const MethodInfo*
   method); */

undefined8 HapticModule__CanPlay_2535180(long param_1,int param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_30 [16];
  
  auStack_30._8_8_ = 0;
  auStack_30._0_8_ = 0;
  if ((*(char *)(param_1 + 0x2c) == '\0') &&
     ((*(int *)(param_1 + 0x28) != param_2 ||
      (uVar1 = UniTimer__get_IsExpired_3f0efb8(param_1 + 0x18,0), (uVar1 & 1) != 0)))) {
    auStack_30 = UniTimer__CreateFromSeconds_3f0f2f4(_UNK_013aa85c,0);
    auVar2 = UniTimer__SetUnscaled_3f0f260(auStack_30,0);
    *(undefined1 (*) [16])(param_1 + 0x18) = auVar2;
    *(int *)(param_1 + 0x28) = param_2;
    return 1;
  }
  return 0;
}

