/* IL2CPP: VaultCarrier$$ProcessFeature
void VaultCarrier__ProcessFeature (VaultCarrier_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VaultCarrier$$ProcessFeature
   void VaultCarrier__ProcessFeature (VaultCarrier_o* __this, int32_t featureType, System_String_o*
   data, const MethodInfo* method); */

void VaultCarrier__ProcessFeature_24afa9c(long param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  if (param_2 != 0x1d) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0xb8);
  uVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar5 != 0) {
    Carrier__DisableInteraction_2403394(lVar5,uVar2,0);
    lVar5 = *(long *)(param_1 + 0xb8);
    uVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar5 != 0) {
      Carrier__DisableTransfer_23fe290(lVar5,uVar2,0);
      uVar3 = System_Int32__TryParse_30fc1b4(param_3,&uStack_24,0);
      uVar1 = uStack_24;
      if ((uVar3 & 1) == 0) {
        uVar1 = 1;
      }
      *(undefined4 *)(param_1 + 0xc0) = uVar1;
      uVar4 = *(undefined8 *)(param_1 + 0xa0);
      uVar2 = System_Int32__ToString_30fbaa0((undefined4 *)(param_1 + 0xc0),0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar4,0x5cac0bbb,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

