/* IL2CPP: BlockTrigger$$OnTriggerEnter
void BlockTrigger__OnTriggerEnter (BlockTrigger_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTrigger$$OnTriggerEnter
   void BlockTrigger__OnTriggerEnter (BlockTrigger_o* __this, UnityEngine_Collider_o* other, const
   MethodInfo* method); */

void BlockTrigger__OnTriggerEnter_23e9180(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b60e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c30);
    bRam0000000004f4b60e = 1;
  }
  uStack_28 = 0;
  if (param_2 != 0) {
    uVar1 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                      (param_2,&uStack_28,*(undefined8 *)PTR_DAT_049c1c30);
    if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),uStack_28,*(undefined8 *)(lVar2 + 0x28));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

