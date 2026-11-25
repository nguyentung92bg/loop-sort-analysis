/* IL2CPP: IceCarrier$$ProcessFeature
void IceCarrier__ProcessFeature (IceCarrier_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: IceCarrier$$ProcessFeature
   void IceCarrier__ProcessFeature (IceCarrier_o* __this, int32_t featureType, System_String_o*
   data, const MethodInfo* method); */

void IceCarrier__ProcessFeature_24a5950(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bb0f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6710);
    FUN_021f03f8(PTR_DAT_049c6718);
    bRam0000000004f4bb0f = 1;
  }
  puVar1 = PTR_DAT_049c6710;
  uStack_28 = 0;
  if (param_2 == 4) {
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                      (param_3,1,&uStack_28,*(undefined8 *)puVar1);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) != 0) {
        uStack_24 = uStack_28;
        FUN_02333498(*(long *)(param_1 + 0xd0),&uStack_24,*(undefined8 *)PTR_DAT_049c6718);
        lVar4 = *(long *)(param_1 + 0xb8);
        uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
        if (lVar4 != 0) {
          Carrier__DisableInteraction_2403394(lVar4,uVar3,0);
          lVar4 = *(long *)(param_1 + 0xb8);
          uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
          if (lVar4 != 0) {
            Carrier__DisableTransfer_23fe290(lVar4,uVar3,0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

