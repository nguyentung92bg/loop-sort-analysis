/* IL2CPP: Conveyor$$get_AutoCount
SplineMeshAutoCount_o* Conveyor__get_AutoCount (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$get_AutoCount
   SplineMeshAutoCount_o* Conveyor__get_AutoCount (Conveyor_o* __this, const MethodInfo* method); */

long Conveyor__get_AutoCount_24b03e4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  if ((bRam0000000004f4bb5b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6a68);
    bRam0000000004f4bb5b = 1;
  }
  plVar1 = (long *)(param_1 + 0xd0);
  lVar2 = *plVar1;
  if (*plVar1 == 0) {
    if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (*(long *)(param_1 + 0xc0),&lStack_28,*(undefined8 *)PTR_DAT_049c6a68);
    *plVar1 = lStack_28;
    thunk_FUN_021f190c(plVar1,lStack_28);
    lVar2 = lStack_28;
  }
                    /* try { // try from 025b0450 to 026b045b has its CatchHandler @ 025b04f4 */
  return lVar2;
}

