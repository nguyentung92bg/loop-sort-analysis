/* IL2CPP: GameBehaviourBase.<>c$$<GetCutoutRenderers>b__14_0
bool GameBehaviourBase___c___GetCutoutRenderers_b__14_0 (GameBehaviourBase___c_o* __this, UnityEngine_Renderer_o* r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase.<>c$$<GetCutoutRenderers>b__14_0
   bool GameBehaviourBase___c___GetCutoutRenderers_b__14_0 (GameBehaviourBase___c_o* __this,
   UnityEngine_Renderer_o* r, const MethodInfo* method); */

uint GameBehaviourBase___c___GetCutoutRenderers_b__14_0_24f72f4(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000004f4bd2a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8528);
    bRam0000000004f4bd2a = 1;
  }
  if ((((param_2 != 0) &&
       (lVar2 = UnityEngine_Renderer__get_sharedMaterial_3bddc88(param_2,0), lVar2 != 0)) &&
      (lVar2 = UnityEngine_Material__get_shader_3be6058(lVar2,0), lVar2 != 0)) &&
     (lVar2 = UnityEngine_Object__get_name_3c232a8(lVar2,0), lVar2 != 0)) {
    uVar1 = System_String__IndexOf_2f82c78
                      (lVar2,*(undefined8 *)PTR_DAT_049c8528,0,*(undefined4 *)(lVar2 + 0x10),4);
    return ~uVar1 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

