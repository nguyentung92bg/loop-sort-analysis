/* IL2CPP: GameBehaviourBase$$OnRent
void GameBehaviourBase__OnRent (GameBehaviourBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$OnRent
   void GameBehaviourBase__OnRent (GameBehaviourBase_o* __this, const MethodInfo* method); */

void GameBehaviourBase__OnRent_24f6c1c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *plVar9;
  long *plStack_40;
  long lStack_38;
  undefined4 uStack_2c;
  long lStack_28;
  
  if ((bRam0000000004f4bd23 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c84c0);
    FUN_021f03f8(PTR_DAT_049c84c8);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c84d0);
    FUN_021f03f8(PTR_DAT_049c84d8);
    FUN_021f03f8(PTR_DAT_049b5228);
    bRam0000000004f4bd23 = 1;
  }
  puVar1 = PTR_DAT_049b5228;
  plStack_40 = (long *)0x0;
  lStack_38 = 0;
  if ((char)param_1[0xd] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  LifetimeScopeH__InjectIfNotScoped_object__26546e4(param_1,*(undefined8 *)PTR_DAT_049c84d8);
  lVar4 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar4 != 0) {
    uVar3 = UnityEngine_Object__GetInstanceID_3c22f1c(lVar4,0);
    puVar1 = PTR_DAT_049c1410;
    lVar4 = *(long *)PTR_DAT_049c1410;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
      lVar4 = *(long *)puVar1;
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      lStack_28 = CONCAT44(lStack_28._4_4_,uVar3);
      uVar5 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (**(long **)(lVar4 + 0xb8),&lStack_28,&lStack_38,
                         *(undefined8 *)PTR_DAT_049c84c0);
      lVar4 = lStack_38;
      if ((uVar5 & 1) == 0) {
        lVar4 = Scellecs_Morpeh_WorldEntityExtensions__CreateEntity_32bd798(param_1[0x10],0);
      }
      lVar6 = *(long *)puVar1;
      param_1[0xc] = lVar4;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar1;
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        lStack_28 = param_1[0xc];
        uStack_2c = uVar3;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (**(long **)(lVar6 + 0xb8),&uStack_2c,&lStack_28,*(undefined8 *)PTR_DAT_049c84c8);
        lVar4 = MessagePipe_DisposableBag__CreateBuilder_2f2c100(0);
        (**(code **)(*param_1 + 0x208))(param_1,lVar4,*(undefined8 *)(*param_1 + 0x210));
        if (lVar4 != 0) {
          lVar4 = MessagePipe_DisposableBagBuilder__Build_2f2dd30(lVar4,0);
          param_1[0xe] = lVar4;
          thunk_FUN_021f190c();
          param_1[0xf] = 0;
          thunk_FUN_021f190c(param_1 + 0xf,0);
          if (param_1[7] != 0) {
            lVar4 = SceneModule__get_SceneLoadToken_25389e0(param_1[7],0);
            param_1[0x13] = lVar4;
            thunk_FUN_021f190c(param_1 + 0x13,0);
            GameBehaviourBase__SetEntityViewEnabled_24f68bc(param_1);
            plVar9 = (long *)param_1[0x11];
            plStack_40 = param_1;
            thunk_FUN_021f190c(&plStack_40,param_1);
            plVar2 = plStack_40;
            if (plVar9 != (long *)0x0) {
              lVar4 = *plVar9;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c84d0) {
                    puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_025f6e84;
                  }
                  uVar5 = uVar5 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar5 != 0);
              }
              puVar7 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c84d0,0);
LAB_025f6e84:
              (*(code *)*puVar7)(plVar9,plVar2,puVar7[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

