/* IL2CPP: GameBehaviourBase$$OnReturn
void GameBehaviourBase__OnReturn (GameBehaviourBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$OnReturn
   void GameBehaviourBase__OnReturn (GameBehaviourBase_o* __this, const MethodInfo* method); */

void GameBehaviourBase__OnReturn_24f6ea8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lStack_30;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bd24 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c84e0);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c84e8);
    FUN_021f03f8(PTR_DAT_049c84f0);
    bRam0000000004f4bd24 = 1;
  }
  lStack_30 = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  Scellecs_Morpeh_WorldEntityExtensions__RemoveEntity_32b7404
            (*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x60),0);
  lVar4 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  puVar2 = PTR_DAT_049c1410;
  if (lVar4 != 0) {
    uVar3 = UnityEngine_Object__GetInstanceID_3c22f1c(lVar4,0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
      lVar4 = *(long *)puVar2;
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      uStack_24 = uVar3;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                (**(long **)(lVar4 + 0xb8),&uStack_24,*(undefined8 *)PTR_DAT_049c84e0);
      lVar4 = *(long *)(param_1 + 0x50);
      if (lVar4 != 0) {
        lVar7 = *(long *)PTR_DAT_049c84f0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(lVar4 + 0x18) = 0;
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x18);
          *(undefined4 *)(lVar4 + 0x18) = 0;
          if (0 < iVar1) {
            System_Array__Clear_31229cc(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
          }
        }
        plVar9 = *(long **)(param_1 + 0x70);
        if (plVar9 != (long *)0x0) {
          lVar4 = *plVar9;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b3cc8) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_025f7038;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b3cc8,0);
LAB_025f7038:
          (*(code *)*puVar6)(plVar9,puVar6[1]);
        }
        if (*(long *)(param_1 + 0x78) != 0) {
          System_Threading_CancellationTokenSource__Cancel_31658dc(*(long *)(param_1 + 0x78),0);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 0x20),0);
        }
        plVar9 = *(long **)(param_1 + 0x90);
        lStack_30 = param_1;
        thunk_FUN_021f190c(&lStack_30,param_1);
        lVar4 = lStack_30;
        if (plVar9 != (long *)0x0) {
          lVar7 = *plVar9;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c84e8) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_025f70d4;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c84e8,0);
LAB_025f70d4:
          (*(code *)*puVar6)(plVar9,lVar4,puVar6[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

