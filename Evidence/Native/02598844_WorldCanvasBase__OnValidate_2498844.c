/* IL2CPP: WorldCanvasBase$$OnValidate
void WorldCanvasBase__OnValidate (WorldCanvasBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$OnValidate
   void WorldCanvasBase__OnValidate (WorldCanvasBase_o* __this, const MethodInfo* method); */

void WorldCanvasBase__OnValidate_2498844(long param_1)

{
  undefined8 uStack_18;
  
  if ((bRam0000000004f4baa2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3b08);
    bRam0000000004f4baa2 = 1;
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_18,*(undefined8 *)PTR_DAT_049c3b08);
    *(undefined8 *)(param_1 + 0xa0) = uStack_18;
    thunk_FUN_021f190c((long *)(param_1 + 0xa0));
  }
  return;
}

