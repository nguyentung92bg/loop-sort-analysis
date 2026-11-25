/* IL2CPP: SceneRegistry$$TryAny<object>
bool SceneRegistry__TryAny_object_ (SceneRegistry_o* __this, Il2CppObject** result, const MethodInfo_26B6CC0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneRegistry$$TryAny<object>
   bool SceneRegistry__TryAny_object_ (SceneRegistry_o* __this, Il2CppObject** result, const
   MethodInfo_26B6CC0* method); */

undefined8 SceneRegistry__TryAny_object__26b6cc0(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_38;
  long *plStack_28;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049caf98);
    FUN_021f03f8(PTR_DAT_049caf80);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_02229774(param_3);
    }
  }
  puVar1 = PTR_DAT_049b3bd0;
  *param_2 = 0;
  plStack_28 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0x20);
  lStack_38 = 0;
  uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = System_Type__GetTypeFromHandle_310ebfc(uVar8,0);
  if (lVar7 != 0) {
    uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar7,uVar8,&plStack_28,*(undefined8 *)PTR_DAT_049caf98);
    plVar2 = plStack_28;
    puVar1 = PTR_DAT_049caf80;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (plStack_28 != (long *)0x0) {
      lVar7 = *plStack_28;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049caf80) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_027b6dcc;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plStack_28,*(long *)PTR_DAT_049caf80,1);
LAB_027b6dcc:
      uVar8 = (*(code *)*puVar4)(plVar2,puVar4[1]);
      plVar2 = plStack_28;
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if (plStack_28 != (long *)0x0) {
        lVar7 = *plStack_28;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 5) * 0x10 + 0x138);
              goto LAB_027b6e34;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(plStack_28,*(long *)puVar1,5);
LAB_027b6e34:
        uVar3 = (*(code *)*puVar4)(plVar2,&lStack_38,puVar4[1]);
        lVar7 = lStack_38;
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 8);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02229718(lVar9);
        }
        if (lVar7 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_0222c938(lVar7,lVar9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f0a20(lVar7,lVar9);
          }
        }
        *param_2 = lVar5;
        lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 8);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02229718(lVar9);
        }
        if (lVar7 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_0222c938(lVar7,lVar9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f0a20(lVar7,lVar9);
          }
        }
        thunk_FUN_021f190c(param_2,lVar5);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

