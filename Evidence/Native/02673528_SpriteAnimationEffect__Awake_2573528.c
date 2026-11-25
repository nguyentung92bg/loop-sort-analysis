/* IL2CPP: SpriteAnimationEffect$$Awake
void SpriteAnimationEffect__Awake (SpriteAnimationEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SpriteAnimationEffect$$Awake
   void SpriteAnimationEffect__Awake (SpriteAnimationEffect_o* __this, const MethodInfo* method); */

void SpriteAnimationEffect__Awake_2573528(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c2bb8;
  if ((bRam0000000004f4c1ed & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2bb8);
    bRam0000000004f4c1ed = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x38) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38));
  return;
}

