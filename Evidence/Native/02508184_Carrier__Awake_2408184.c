/* IL2CPP: Carrier$$Awake
void Carrier__Awake (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$Awake
   void Carrier__Awake (Carrier_o* __this, const MethodInfo* method); */

void Carrier__Awake_2408184(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f4b6c5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2848);
    bRam0000000004f4b6c5 = 1;
  }
  GameBehaviourBase__Awake_24f68a8(param_1,0);
  if ((*(long *)(param_1 + 0xd0) == 0) ||
     (lVar2 = UnityEngine_Renderer__get_sharedMaterials_3bddc90(*(long *)(param_1 + 0xd0),0),
     puVar1 = PTR_DAT_049c2848, lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar2 + 0x20);
  thunk_FUN_021f190c(param_1 + 0x1a8);
  uVar3 = *(undefined8 *)(param_1 + 0x200);
  lVar2 = *(long *)puVar1;
  lVar4 = *(long *)(lVar2 + 0x38);
  if (lVar4 == 0) {
    FUN_02229774(lVar2);
    lVar4 = *(long *)(lVar2 + 0x38);
  }
  lVar2 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar2 + 0x38) == 0) {
    FUN_02229774(lVar2);
  }
  lVar4 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar4 != 0) {
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 8);
    puVar5 = *(undefined8 **)(lVar2 + 0x38);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_02229774(lVar2);
      puVar5 = *(undefined8 **)(lVar2 + 0x38);
    }
    uVar6 = *puVar5;
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
    if ((bRam0000000004f581e6 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a251b8);
      bRam0000000004f581e6 = 1;
    }
    if (lVar4 != 0) {
      lVar2 = *(long *)(lVar4 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
      }
      if (pcRam0000000004f58258 == (code *)0x0) {
        pcRam0000000004f58258 = (code *)FUN_021f03bc(&UNK_013ad6d2);
      }
                    /* WARNING: Could not recover jumptable at 0x03d1b6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f58258)(lVar2,uVar6,1,1,0,0,uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

