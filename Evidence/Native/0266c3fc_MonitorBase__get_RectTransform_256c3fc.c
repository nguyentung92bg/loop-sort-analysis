/* IL2CPP: MonitorBase$$get_RectTransform
UnityEngine_RectTransform_o* MonitorBase__get_RectTransform (MonitorBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$get_RectTransform
   UnityEngine_RectTransform_o* MonitorBase__get_RectTransform (MonitorBase_o* __this, const
   MethodInfo* method); */

long * MonitorBase__get_RectTransform_256c3fc(undefined8 param_1)

{
  long *plVar1;
  
  if ((bRam0000000004f4c199 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4c199 = 1;
  }
  plVar1 = (long *)UnityEngine_Component__get_transform_3c18724(param_1,0);
  if ((plVar1 != (long *)0x0) && (*plVar1 != *(long *)PTR_DAT_049bc0c8)) {
    plVar1 = (long *)0x0;
  }
  return plVar1;
}

