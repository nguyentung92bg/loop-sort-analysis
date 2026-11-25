/* IL2CPP: AnimationCompletionHandler$$OnEnable
void AnimationCompletionHandler__OnEnable (AnimationCompletionHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnimationCompletionHandler$$OnEnable
   void AnimationCompletionHandler__OnEnable (AnimationCompletionHandler_o* __this, const
   MethodInfo* method); */

void AnimationCompletionHandler__OnEnable_2498908(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_049c4180;
  if ((bRam0000000004f4baa4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4180);
    bRam0000000004f4baa4 = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  Cysharp_Threading_Tasks_UniTaskCompletionSource___ctor_37beca4(uVar2,0);
  puVar3 = (undefined8 *)(param_1 + 0x20);
  *puVar3 = uVar2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

