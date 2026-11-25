/* IL2CPP: GameBehaviourBase$$get_EntityID
int32_t GameBehaviourBase__get_EntityID (GameBehaviourBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$get_EntityID
   int32_t GameBehaviourBase__get_EntityID (GameBehaviourBase_o* __this, const MethodInfo* method);
    */

undefined4 GameBehaviourBase__get_EntityID_24f67dc(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_02607ecc(*(undefined8 *)(param_1 + 0x60),0);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

