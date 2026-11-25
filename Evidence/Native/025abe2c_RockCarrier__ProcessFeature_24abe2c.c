/* IL2CPP: RockCarrier$$ProcessFeature
void RockCarrier__ProcessFeature (RockCarrier_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RockCarrier$$ProcessFeature
   void RockCarrier__ProcessFeature (RockCarrier_o* __this, int32_t featureType, System_String_o*
   data, const MethodInfo* method); */

void RockCarrier__ProcessFeature_24abe2c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               int param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((bRam0000000004f4bb32 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4bb32 = 1;
  }
  if (param_5 != 2) {
    return;
  }
  lVar3 = *(long *)(param_4 + 0xb0);
  uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_4,0);
  if (lVar3 != 0) {
    Carrier__DisableInteraction_2403394(lVar3,uVar1,0);
    lVar3 = *(long *)(param_4 + 0xa0);
    if (lVar3 != 0) {
      uVar4 = UnityEngine_Transform__get_localPosition_3c2c388(lVar3,0);
      uVar5 = *(undefined4 *)(param_4 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__WithY_3f0d5ec(uVar4,param_2,param_3,uVar5,0);
      if ((bRam0000000004f58a0b & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26ad0,0);
        bRam0000000004f58a0b = 1;
      }
      if (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
        }
        if (pcRam0000000004f58a48 == (code *)0x0) {
          pcRam0000000004f58a48 = (code *)FUN_021f03bc(&UNK_013d4d13);
        }
        (*pcRam0000000004f58a48)(lVar2,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

