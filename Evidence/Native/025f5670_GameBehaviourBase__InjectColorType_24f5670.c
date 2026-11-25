/* IL2CPP: GameBehaviourBase$$InjectColorType
void GameBehaviourBase__InjectColorType (GameBehaviourBase_o* __this, ColorType_o colorType, UnityEngine_GameObject_o* targetGameObject, UnityEngine_Color_o colorOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$InjectColorType
   void GameBehaviourBase__InjectColorType (GameBehaviourBase_o* __this, ColorType_o colorType,
   UnityEngine_GameObject_o* targetGameObject, UnityEngine_Color_o colorOffset, const MethodInfo*
   method); */

void GameBehaviourBase__InjectColorType_24f5670
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bd1c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c83f8);
    bRam0000000004f4bd1c = 1;
  }
  if (param_7 != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (param_7,&uStack_28,*(undefined8 *)PTR_DAT_049c83f8);
    GameBehaviourBase__InjectColorType_24f4fa0
              (param_1,param_2,param_3,param_4,param_5,param_6,uStack_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

