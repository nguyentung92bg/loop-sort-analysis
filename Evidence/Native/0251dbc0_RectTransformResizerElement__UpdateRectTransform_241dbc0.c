/* IL2CPP: RectTransformResizerElement$$UpdateRectTransform
void RectTransformResizerElement__UpdateRectTransform (RectTransformResizerElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RectTransformResizerElement$$UpdateRectTransform
   void RectTransformResizerElement__UpdateRectTransform (RectTransformResizerElement_o* __this,
   const MethodInfo* method); */

void RectTransformResizerElement__UpdateRectTransform_241dbc0
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 0251dbc4 to 0261dbe7 has its CatchHandler @ 0251dd68 */
  if ((bRam0000000004f4b766 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ef0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b766 = 1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0251dc18 to 0261dc2f has its CatchHandler @ 0251dd64 */
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 0251dccc to 0261dd03 has its CatchHandler @ 0251dd70 */
    return;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 0251dc54 to 0261dca7 has its CatchHandler @ 0251dd60 */
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_3,&uStack_38,*(undefined8 *)PTR_DAT_049c2ef0);
    *(undefined8 *)(param_3 + 0x30) = uStack_38;
    thunk_FUN_021f190c((undefined8 *)(param_3 + 0x30));
  }
  if (*(long *)(param_3 + 0x20) != 0) {
    fVar4 = (float)UnityEngine_RectTransform__get_sizeDelta_3c2c02c(*(long *)(param_3 + 0x20),0);
    if (*(long *)(param_3 + 0x30) != 0) {
      fVar5 = *(float *)(param_3 + 0x2c);
                    /* try { // try from 0251dca8 to 0261dcb7 has its CatchHandler @ 0251db0c */
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors_3c2d0c4
                (fVar4 + *(float *)(param_3 + 0x28),*(long *)(param_3 + 0x30),0,0);
                    /* try { // try from 0251dcb8 to 0261dcbb has its CatchHandler @ 0251dd5c */
      if (*(long *)(param_3 + 0x30) != 0) {
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors_3c2d0c4
                  (param_2 + fVar5,*(long *)(param_3 + 0x30),1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

