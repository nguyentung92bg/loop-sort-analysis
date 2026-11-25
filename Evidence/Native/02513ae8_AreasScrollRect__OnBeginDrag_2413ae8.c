/* IL2CPP: AreasScrollRect$$OnBeginDrag
void AreasScrollRect__OnBeginDrag (AreasScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasScrollRect$$OnBeginDrag
   void AreasScrollRect__OnBeginDrag (AreasScrollRect_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void AreasScrollRect__OnBeginDrag_2413ae8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  UnityEngine_UI_LoopScrollRectBase__OnBeginDrag_2ebf1f0(param_1,param_2,0);
  lVar1 = *(long *)(param_1 + 0x198);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02513b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

