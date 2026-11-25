/* IL2CPP: TMP_CurvedText$$SubscribeToTextMesh
void TMP_CurvedText__SubscribeToTextMesh (TMP_CurvedText_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TMP_CurvedText$$SubscribeToTextMesh
   void TMP_CurvedText__SubscribeToTextMesh (TMP_CurvedText_o* __this, const MethodInfo* method); */

void TMP_CurvedText__SubscribeToTextMesh_249fd04(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bae5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6530);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6538);
    bRam0000000004f4bae5 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,0,0);
  if (((uVar2 & 1) == 0) && (*(char *)(param_1 + 0x30) == '\0')) {
    plVar4 = *(long **)(param_1 + 0x28);
    uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6530);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar3,param_1,*(undefined8 *)PTR_DAT_049c6538,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    (**(code **)(*plVar4 + 0x618))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x620));
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}

