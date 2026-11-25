/* IL2CPP: MonitorBase$$WorldToCanvasSpace
void MonitorBase__WorldToCanvasSpace (MonitorBase_o* __this, UnityEngine_Transform_o* t, UnityEngine_Vector3_o worldPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$WorldToCanvasSpace
   void MonitorBase__WorldToCanvasSpace (MonitorBase_o* __this, UnityEngine_Transform_o* t,
   UnityEngine_Vector3_o worldPosition, const MethodInfo* method); */

void MonitorBase__WorldToCanvasSpace_256cc8c(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (cRam0000000004f4a191 == '\0') {
    FUN_021f03f8(PTR_DAT_049bc158);
    cRam0000000004f4a191 = '\x01';
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  puVar1 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
  UnityEngine_Transform__set_localRotation_3c2d9f0(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_3,0);
  MonitorBase__WorldToCanvasSpace_256cb2c(param_1,param_2);
  if ((bRam0000000004f58a09 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a09 = 1;
  }
  if (param_3 != 0) {
    lVar2 = *(long *)(param_3 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_3,0);
    }
    if (pcRam0000000004f58a38 == (code *)0x0) {
      pcRam0000000004f58a38 = (code *)FUN_021f03bc(&UNK_013e8d5f);
    }
    (*pcRam0000000004f58a38)(lVar2,&stack0xffffffffffffffd4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

