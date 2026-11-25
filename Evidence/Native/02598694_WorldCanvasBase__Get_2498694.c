/* IL2CPP: WorldCanvasBase$$Get
UnityEngine_UI_Image_o* WorldCanvasBase__Get (WorldCanvasBase_o* __this, int32_t role, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$Get
   UnityEngine_UI_Image_o* WorldCanvasBase__Get (WorldCanvasBase_o* __this, int32_t role, const
   MethodInfo* method); */

undefined8 WorldCanvasBase__Get_2498694(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if ((bRam0000000004f510bc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049faec8,param_2,0);
    bRam0000000004f510bc = 1;
  }
  if ((lVar1 != 0) &&
     (lVar1 = StatefulUI_Runtime_Core_StatefulComponent__GetItem_object__26d023c
                        (lVar1,param_2 & 0xffffffff,*(undefined8 *)PTR_DAT_049faec8), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

