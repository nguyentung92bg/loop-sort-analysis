/* IL2CPP: FirstLevelTutorial$$Cleanup
void FirstLevelTutorial__Cleanup (FirstLevelTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FirstLevelTutorial$$Cleanup
   void FirstLevelTutorial__Cleanup (FirstLevelTutorial_o* __this, const MethodInfo* method); */

void FirstLevelTutorial__Cleanup_24e2f10(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  TutorialBase__Cleanup_2490f88(param_1,0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    InteractionModule__DisableRestriction_2535d30(*(long *)(param_1 + 0xa8),param_1,0);
    if (*(long *)(param_1 + 0xa8) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0xa8) + 0x28);
      *puVar2 = 0;
      thunk_FUN_021f190c(puVar2,0);
      puVar1 = PTR_DAT_049cc020;
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 != 0) {
        if ((bRam0000000004f4c1b4 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049cc020,param_1,0);
          FUN_021f03f8(PTR_DAT_049b3b98);
          bRam0000000004f4c1b4 = 1;
        }
        lVar4 = Monitors__Get_object__26889d0(lVar3,*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          RaycastBlockerMonitor__Unblock_245bb2c(lVar4,param_1,0);
          if (*(long *)(lVar3 + 0x50) != 0) {
            uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0x50) + 0x28);
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(uVar7,0,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            if ((*(long *)(lVar3 + 0x50) != 0) &&
               (plVar6 = *(long **)(*(long *)(lVar3 + 0x50) + 0x28), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0266ebc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

