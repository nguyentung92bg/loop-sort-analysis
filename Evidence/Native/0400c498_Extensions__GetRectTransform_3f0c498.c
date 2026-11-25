/* IL2CPP: Extensions$$GetRectTransform
UnityEngine_RectTransform_o* Extensions__GetRectTransform (UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$GetRectTransform
   UnityEngine_RectTransform_o* Extensions__GetRectTransform (UnityEngine_GameObject_o* gameObject,
   const MethodInfo* method); */

long * Extensions__GetRectTransform_3f0c498(long param_1)

{
  long *plVar1;
  
  if ((bRam0000000004f5c3cd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f5c3cd = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar1 = (long *)UnityEngine_GameObject__get_transform_3c1ca74(param_1,0);
  if ((plVar1 != (long *)0x0) && (*plVar1 != *(long *)PTR_DAT_049bc0c8)) {
    plVar1 = (long *)0x0;
  }
  return plVar1;
}

