/* IL2CPP: ArrowEffect$$Awake
void ArrowEffect__Awake (ArrowEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ArrowEffect$$Awake
   void ArrowEffect__Awake (ArrowEffect_o* __this, const MethodInfo* method); */

void ArrowEffect__Awake_2570360(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lStack_28;
  
  puVar1 = PTR_DAT_049c2ef0;
  if ((bRam0000000004f4c1d3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ef0);
    bRam0000000004f4c1d3 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_3,&lStack_28,*(undefined8 *)puVar1);
  plVar2 = (long *)(param_3 + 0x30);
  *plVar2 = lStack_28;
  thunk_FUN_021f190c(plVar2);
  if (*plVar2 != 0) {
    uVar3 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(*plVar2,0);
    *(undefined4 *)(param_3 + 0x40) = 0;
    *(undefined4 *)(param_3 + 0x38) = uVar3;
    *(undefined4 *)(param_3 + 0x3c) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

