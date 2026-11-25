/* IL2CPP: ButtonClickEffect$$Awake
void ButtonClickEffect__Awake (ButtonClickEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ButtonClickEffect$$Awake
   void ButtonClickEffect__Awake (ButtonClickEffect_o* __this, const MethodInfo* method); */

void ButtonClickEffect__Awake_2570624
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = UnityEngine_Component__get_transform_3c18724(param_4,0);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_Transform__get_localScale_3c2dd20(lVar1,0);
    *(undefined4 *)(param_4 + 0x3c) = uVar2;
    *(undefined4 *)(param_4 + 0x40) = param_2;
    *(undefined4 *)(param_4 + 0x44) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

