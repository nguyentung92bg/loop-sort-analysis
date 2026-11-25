/* IL2CPP: SceneRegistry$$Any<object>
Il2CppObject* SceneRegistry__Any_object_ (SceneRegistry_o* __this, const MethodInfo_26B665C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneRegistry$$Any<object>
   Il2CppObject* SceneRegistry__Any_object_ (SceneRegistry_o* __this, const MethodInfo_26B665C*
   method); */

long SceneRegistry__Any_object__26b665c(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_30;
  long *plStack_28;
  
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_021f03f8(PTR_DAT_049caf98);
    FUN_021f03f8(PTR_DAT_049caf80);
    puVar6 = *(undefined8 **)(param_2 + 0x38);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_02229774(param_2);
      puVar6 = *(undefined8 **)(param_2 + 0x38);
    }
  }
  lStack_30 = 0;
  plStack_28 = (long *)0x0;
  lVar9 = *(long *)(param_1 + 0x20);
  uVar10 = *puVar6;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar10 = System_Type__GetTypeFromHandle_310ebfc(uVar10,0);
  if (lVar9 != 0) {
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar9,uVar10,&plStack_28,*(undefined8 *)PTR_DAT_049caf98);
    plVar2 = plStack_28;
    puVar1 = PTR_DAT_049caf80;
    if ((uVar4 & 1) != 0) {
      if (plStack_28 == (long *)0x0) goto LAB_027b682c;
      lVar9 = *plStack_28;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049caf80) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_027b6758;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plStack_28,*(long *)PTR_DAT_049caf80,1);
LAB_027b6758:
      iVar3 = (*(code *)*puVar6)(plVar2,puVar6[1]);
      plVar2 = plStack_28;
      if (iVar3 != 0) {
        if (plStack_28 == (long *)0x0) goto LAB_027b682c;
        lVar9 = *plStack_28;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar7 + 5) * 0x10 + 0x138);
              goto LAB_027b67c0;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(plStack_28,*(long *)puVar1,5);
LAB_027b67c0:
        uVar4 = (*(code *)*puVar6)(plVar2,&lStack_30,puVar6[1]);
        lVar9 = lStack_30;
        if ((uVar4 & 1) != 0) {
          lVar8 = *(long *)(*(long *)(param_2 + 0x38) + 8);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02229718(lVar8);
          }
          if (lVar9 != 0) {
            lVar5 = thunk_FUN_0222c938(lVar9,lVar8);
            if (lVar5 != 0) {
              return lVar5;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f0a20(lVar9,lVar8);
          }
        }
      }
    }
    return 0;
  }
LAB_027b682c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

