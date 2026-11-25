/* IL2CPP: PointerHoldElement$$OnPointerDown
void PointerHoldElement__OnPointerDown (PointerHoldElement_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PointerHoldElement$$OnPointerDown
   void PointerHoldElement__OnPointerDown (PointerHoldElement_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

undefined8 PointerHoldElement__OnPointerDown_241d248(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [4];
  
                    /* try { // try from 0251d24c to 0261d24f has its CatchHandler @ 0251d2bc */
                    /* try { // try from 0251d254 to 0261d26b has its CatchHandler @ 0251d2d0 */
  if ((bRam0000000004f4b75e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f20);
    bRam0000000004f4b75e = 1;
  }
  puVar1 = PTR_DAT_049c2f20;
                    /* try { // try from 0251d27c to 0261d28b has its CatchHandler @ 0251d6c0 */
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac(lVar2,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__Create_37c14c4(0);
                    /* try { // try from 0251d2ac to 0261d2af has its CatchHandler @ 0251d2cc */
  *(undefined8 *)(param_1 + 0x20) = uVar3;
                    /* try { // try from 0251d2b4 to 0261d2b7 has its CatchHandler @ 0251d2d0 */
  thunk_FUN_021f190c((long *)(param_1 + 0x20),uVar3);
                    /* try { // try from 0251d2b8 to 0261d2ef has its CatchHandler @ 0251cfe4 */
  lVar2 = *(long *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 0251d24c with catch @ 0251d2bc */
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 0251d244 with catch @ 0251d2c0 */
                    /* catch() { ... } // from try @ 0251d234 with catch @ 0251d2c4 */
                    /* catch() { ... } // from try @ 0251d22c with catch @ 0251d2c8 */
                    /* catch() { ... } // from try @ 0251d2ac with catch @ 0251d2cc */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  puVar1 = PTR_DAT_049c2f18;
  if ((bRam0000000004f4b75d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f18);
    bRam0000000004f4b75d = 1;
  }
  alStack_40[1] = 0;
  alStack_40[0] = 0;
  alStack_40[3] = 0;
  alStack_40[2] = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
  alStack_40[0] = param_1;
  thunk_FUN_021f190c(alStack_40,param_1);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
  return 0;
}

