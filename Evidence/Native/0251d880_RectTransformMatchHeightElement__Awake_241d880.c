/* IL2CPP: RectTransformMatchHeightElement$$Awake
void RectTransformMatchHeightElement__Awake (RectTransformMatchHeightElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RectTransformMatchHeightElement$$Awake
   void RectTransformMatchHeightElement__Awake (RectTransformMatchHeightElement_o* __this, const
   MethodInfo* method); */

void RectTransformMatchHeightElement__Awake_241d880(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c2ef0;
  if ((bRam0000000004f4b764 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ef0);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4b764 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x28) = uStack_28;
  thunk_FUN_021f190c();
  lVar2 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (lVar2 != 0) {
    plVar3 = (long *)UnityEngine_Transform__get_parent_3c2d470(lVar2,0);
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      lVar2 = *(long *)PTR_DAT_049bc0c8;
      if ((*plVar3 != lVar2) || (*(long **)(param_1 + 0x30) = plVar3, *plVar3 != lVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(plVar3);
      }
    }
    thunk_FUN_021f190c(param_1 + 0x30,plVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

