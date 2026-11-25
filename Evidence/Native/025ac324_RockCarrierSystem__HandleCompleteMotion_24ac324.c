/* IL2CPP: RockCarrierSystem$$HandleCompleteMotion
void RockCarrierSystem__HandleCompleteMotion (RockCarrierSystem_o* __this, Carrier_o* completedCarrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RockCarrierSystem$$HandleCompleteMotion
   void RockCarrierSystem__HandleCompleteMotion (RockCarrierSystem_o* __this, Carrier_o*
   completedCarrier, const MethodInfo* method); */

void RockCarrierSystem__HandleCompleteMotion_24ac324(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lStack_18;
  
  if ((bRam0000000004f4bb38 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6918);
    bRam0000000004f4bb38 = 1;
  }
  lStack_18 = 0;
  if (param_2 != 0) {
    uVar1 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                      (param_2,&lStack_18,*(undefined8 *)PTR_DAT_049c6918);
    if ((uVar1 & 1) != 0) {
      if (lStack_18 == 0) goto LAB_025ac38c;
      RockCarrier__ApplyCompleteMotion_24abf18();
    }
    return;
  }
LAB_025ac38c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

