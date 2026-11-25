/* IL2CPP: SandFlowSystem$$OnGameBehaviourReturned
void SandFlowSystem__OnGameBehaviourReturned (SandFlowSystem_o* __this, GameBehaviourReturnedMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$OnGameBehaviourReturned
   void SandFlowSystem__OnGameBehaviourReturned (SandFlowSystem_o* __this,
   GameBehaviourReturnedMessage_o m, const MethodInfo* method); */

void SandFlowSystem__OnGameBehaviourReturned_24c7f70(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bbe1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7240);
    FUN_021f03f8(PTR_DAT_049c7200);
    FUN_021f03f8(PTR_DAT_049c7208);
    FUN_021f03f8(PTR_DAT_049c2508);
    FUN_021f03f8(PTR_DAT_049c2950);
    FUN_021f03f8(PTR_DAT_049c7230);
    bRam0000000004f4bbe1 = 1;
  }
  uStack_24 = 0;
  if ((param_2 == (long *)0x0) || (*param_2 != *(long *)PTR_DAT_049c7240)) {
    return;
  }
  SandFlowSystem__Restore_24c7bc4(param_1,param_2);
  if (*(long *)(param_1 + 0x150) != 0) {
    uVar2 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
                      (*(long *)(param_1 + 0x150),param_2[0x27],*(undefined8 *)PTR_DAT_049c7230);
    if ((uVar2 & 1) != 0) {
      if (param_2[0x27] == 0) goto LAB_025c80e8;
      UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc(param_2[0x27],0,0);
    }
    puVar1 = PTR_DAT_049c7200;
    if (*(long *)(param_1 + 0x238) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                (*(long *)(param_1 + 0x238),param_2,*(undefined8 *)PTR_DAT_049c7200);
      if (*(long *)(param_1 + 0x228) != 0) {
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
                  (*(long *)(param_1 + 0x228),param_2,*(undefined8 *)PTR_DAT_049c2950);
        if (*(long *)(param_1 + 0x250) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                    (*(long *)(param_1 + 0x250),param_2,*(undefined8 *)puVar1);
          if (*(long *)(param_1 + 600) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                      (*(long *)(param_1 + 600),param_2,*(undefined8 *)PTR_DAT_049c7208);
            if (*(long *)(param_1 + 0xf0) != 0) {
              uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                                (*(long *)(param_1 + 0xf0),param_2,&uStack_24,
                                 *(undefined8 *)PTR_DAT_049c2508);
              if ((uVar2 & 1) == 0) {
                return;
              }
              SandFlowSystem__RemoveAt_24c73ac(param_1,uStack_24);
              return;
            }
          }
        }
      }
    }
  }
LAB_025c80e8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

