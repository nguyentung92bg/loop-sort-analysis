/* IL2CPP: SceneRegistry$$OnGameBehaviourReturned
void SceneRegistry__OnGameBehaviourReturned (SceneRegistry_o* __this, GameBehaviourReturnedMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneRegistry$$OnGameBehaviourReturned
   void SceneRegistry__OnGameBehaviourReturned (SceneRegistry_o* __this,
   GameBehaviourReturnedMessage_o m, const MethodInfo* method); */

void SceneRegistry__OnGameBehaviourReturned_255430c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plStack_48;
  
  if ((bRam0000000004f4c097 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caf98);
    FUN_021f03f8(PTR_DAT_049cafa8);
    FUN_021f03f8(PTR_DAT_049caf80);
    bRam0000000004f4c097 = 1;
  }
  puVar4 = PTR_DAT_049cafa8;
  puVar3 = PTR_DAT_049caf98;
  puVar2 = PTR_DAT_049caf80;
  plStack_48 = (long *)0x0;
  if (param_2 == 0) {
LAB_026544a8:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar6 = (long *)System_Object__GetType_3142aac(param_2,0);
  puVar1 = PTR_DAT_049b3bd0;
  do {
    uVar11 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar11 = System_Type__GetTypeFromHandle_310ebfc(uVar11,0);
    uVar7 = System_Type__op_Inequality_3118ac4(plVar6,uVar11,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = System_Type__op_Inequality_3118ac4(plVar6,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_026544a8;
    uVar7 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x20),plVar6,&plStack_48,*(undefined8 *)puVar3);
    plVar5 = plStack_48;
    if ((uVar7 & 1) != 0) {
      if (plStack_48 == (long *)0x0) goto LAB_026544a8;
      lVar9 = *plStack_48;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_02654464;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plStack_48,*(long *)puVar2,3);
LAB_02654464:
      (*(code *)*puVar8)(plVar5,param_2,puVar8[1]);
    }
    if (plVar6 == (long *)0x0) goto LAB_026544a8;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x888))(plVar6,*(undefined8 *)(*plVar6 + 0x890));
  } while( true );
}

