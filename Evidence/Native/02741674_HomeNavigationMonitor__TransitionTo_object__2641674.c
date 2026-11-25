/* IL2CPP: HomeNavigationMonitor$$TransitionTo<object>
void HomeNavigationMonitor__TransitionTo_object_ (HomeNavigationMonitor_o* __this, bool motion, const MethodInfo_2641674* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: HomeNavigationMonitor$$TransitionTo<object>
   void HomeNavigationMonitor__TransitionTo_object_ (HomeNavigationMonitor_o* __this, bool motion,
   const MethodInfo_2641674* method); */

void HomeNavigationMonitor__TransitionTo_object__2641674(long param_1,ulong param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long alStack_90 [10];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049cd7b0);
    FUN_021f03f8(PTR_DAT_049cd7b8);
    FUN_021f03f8(PTR_DAT_049cd7c0);
    FUN_021f03f8(PTR_DAT_049cd7c8);
    FUN_021f03f8(PTR_DAT_049cd7d0);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_02229774(param_3);
    }
  }
  alStack_90[8] = 0;
  alStack_90[2] = 0;
  alStack_90[3] = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[5] = 0;
  alStack_90[4] = 0;
  alStack_90[7] = 0;
  alStack_90[6] = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    uVar6 = SwipeablePageLayout__CanTransitionTo_object__26d9dc8
                      (*(long *)(param_1 + 0xb8),**(undefined8 **)(param_3 + 0x38));
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      SwipeablePageLayout__TransitionTo_object__26d9e4c
                (*(long *)(param_1 + 0xb8),*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
      if ((param_2 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0xb8) != 0) {
        SwipeablePageLayout__CompleteMotion_244c508(*(long *)(param_1 + 0xb8),0);
        if (*(long *)(param_1 + 0xd0) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                    (*(long *)(param_1 + 0xd0),alStack_90 + 4,*(undefined8 *)PTR_DAT_049cd7b0);
          puVar5 = PTR_DAT_049cd7d0;
          puVar4 = PTR_DAT_049cd7c8;
          puVar3 = PTR_DAT_049cd7c0;
          while( true ) {
            uVar6 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                              (alStack_90 + 4,*(undefined8 *)puVar3);
            if ((uVar6 & 1) == 0) {
              System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                        (alStack_90 + 4,*(undefined8 *)PTR_DAT_049cd7b8);
              FUN_02580cb0(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0),1,0);
              return;
            }
            lVar10 = *(long *)puVar4;
            lVar7 = *(long *)(lVar10 + 0x20);
            uVar2 = *(ushort *)(lVar7 + 0x135);
            lVar8 = lVar7;
            if ((uVar2 & 1) == 0) {
              lVar8 = FUN_02229718();
              lVar7 = *(long *)(lVar10 + 0x20);
              uVar2 = *(ushort *)(lVar7 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar7 = FUN_02229718();
            }
            uVar9 = thunk_FUN_0224e54c(alStack_90 + 4,
                                       *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) +
                                       0x60);
            func_0x04608620(&uStack_40,uVar9,uVar1);
            alStack_90[3] = uStack_38;
            alStack_90[2] = uStack_40;
            System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                      (alStack_90 + 2,alStack_90 + 1,alStack_90,*(undefined8 *)puVar5);
            if (alStack_90[0] == 0) break;
            LitMotion_CompositeMotionHandle__Complete_2e8b020(alStack_90[0],0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

