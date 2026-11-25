/* IL2CPP: BobEffect$$Awake
void BobEffect__Awake (BobEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BobEffect$$Awake
   void BobEffect__Awake (BobEffect_o* __this, const MethodInfo* method); */

void BobEffect__Awake_25704c8(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f4c1d4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4c1d4 = 1;
  }
  plVar2 = (long *)UnityEngine_Component__get_transform_3c18724(param_3,0);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
    *(undefined8 *)(param_3 + 0x38) = 0;
  }
  else {
    lVar3 = *(long *)PTR_DAT_049bc0c8;
    plVar1 = plVar2;
    if (*plVar2 != lVar3) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_3 + 0x38) = plVar1;
    if (*plVar2 != lVar3) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_021f190c((long *)(param_3 + 0x38),plVar2);
  lVar3 = *(long *)(param_3 + 0x38);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar4 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar3,0);
  *(undefined4 *)(param_3 + 0x40) = uVar4;
  *(undefined4 *)(param_3 + 0x44) = param_2;
  return;
}

