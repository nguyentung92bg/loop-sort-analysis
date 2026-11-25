/* IL2CPP: RectTransformResizerElement$$OnEnable
void RectTransformResizerElement__OnEnable (RectTransformResizerElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RectTransformResizerElement$$OnEnable
   void RectTransformResizerElement__OnEnable (RectTransformResizerElement_o* __this, const
   MethodInfo* method); */

void RectTransformResizerElement__OnEnable_241dab8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 0251dac0 to 0261dacf has its CatchHandler @ 0251dad0 */
                    /* catch() { ... } // from try @ 0251da90 with catch @ 0251dad0
                       catch() { ... } // from try @ 0251dac0 with catch @ 0251dad0 */
                    /* catch() { ... } // from try @ 0251da78 with catch @ 0251dad4 */
                    /* catch() { ... } // from try @ 0251da74 with catch @ 0251dad8 */
  if ((bRam0000000004f4b765 & 1) == 0) {
                    /* catch() { ... } // from try @ 0251da54 with catch @ 0251dae0
                       catch() { ... } // from try @ 0251dab0 with catch @ 0251dae0 */
    FUN_021f03f8(PTR_DAT_049c2ef0);
                    /* try { // try from 0251dae8 to 0261daff has its CatchHandler @ 0251db08 */
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* catch() { ... } // from try @ 0251da28 with catch @ 0251daf4 */
    bRam0000000004f4b765 = 1;
  }
                    /* try { // try from 0251db00 to 0261db0b has its CatchHandler @ 0251d734 */
  uVar3 = *(undefined8 *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 0251dae8 with catch @ 0251db08 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0251db0c to 0261db8b has its CatchHandler @ 0251db0c
                       catch() { ... } // from try @ 0251db0c with catch @ 0251db0c
                       catch() { ... } // from try @ 0251dca8 with catch @ 0251db0c
                       catch() { ... } // from try @ 0251dd04 with catch @ 0251db0c
                       catch() { ... } // from try @ 0251dd58 with catch @ 0251db0c
                       catch() { ... } // from try @ 0251dda8 with catch @ 0251db0c */
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 0251dbb4 to 0261dbb7 has its CatchHandler @ 0251dd58 */
    return;
  }
  plVar4 = (long *)(param_1 + 0x30);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c2ef0);
    *(undefined8 *)(param_1 + 0x30) = uStack_28;
    thunk_FUN_021f190c(plVar4);
  }
  if (*plVar4 != 0) {
                    /* try { // try from 0251db8c to 0261db97 has its CatchHandler @ 0251dd6c */
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors_3c2d0c4(0,*plVar4,0,0);
    if (*plVar4 != 0) {
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors_3c2d0c4(0,*plVar4,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

