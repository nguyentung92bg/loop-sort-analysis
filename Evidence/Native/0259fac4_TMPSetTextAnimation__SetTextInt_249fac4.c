/* IL2CPP: TMPSetTextAnimation$$SetTextInt
void TMPSetTextAnimation__SetTextInt (TMPSetTextAnimation_o* __this, UnityEngine_AnimationEvent_o* animationEvent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TMPSetTextAnimation$$SetTextInt
   void TMPSetTextAnimation__SetTextInt (TMPSetTextAnimation_o* __this,
   UnityEngine_AnimationEvent_o* animationEvent, const MethodInfo* method); */

void TMPSetTextAnimation__SetTextInt_249fac4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (param_2 != 0) {
    uStack_14 = UnityEngine_AnimationEvent__get_intParameter_3bab1d8(param_2,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = System_Int32__ToString_30fbaa0(&uStack_14,0);
    uVar1 = System_String__Format_2f73700(uVar2,uVar1,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      TMPro_TMP_Text__SetText_3b0f78c(*(long *)(param_1 + 0x20),uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

