/* IL2CPP: SceneRegistry$$AllOf<object>
UnityEngine_Pool_PooledObject_List_T___o SceneRegistry__AllOf_object_ (SceneRegistry_o* __this, System_Collections_Generic_List_T__o** result, const MethodInfo_26B63EC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneRegistry$$AllOf<object>
   UnityEngine_Pool_PooledObject_List_T___o SceneRegistry__AllOf_object_ (SceneRegistry_o* __this,
   System_Collections_Generic_List_T__o** result, const MethodInfo_26B63EC* method); */

undefined1  [16] SceneRegistry__AllOf_object__26b63ec(long param_1,long *param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long *plStack_48;
  
  lVar7 = *(long *)(param_3 + 0x38);
  if (lVar7 == 0) {
    FUN_021f03f8(PTR_DAT_049caf98);
    FUN_021f03f8(PTR_DAT_049caf80);
    lVar7 = *(long *)(param_3 + 0x38);
    if (lVar7 == 0) {
      FUN_02229774(param_3);
      lVar7 = *(long *)(param_3 + 0x38);
    }
  }
  plStack_48 = (long *)0x0;
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar10 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                      (param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  lVar7 = *(long *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar9 = System_Type__GetTypeFromHandle_310ebfc(uVar9,0);
  if (lVar7 != 0) {
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar7,uVar9,&plStack_48,*(undefined8 *)PTR_DAT_049caf98);
    plVar6 = plStack_48;
    puVar2 = PTR_DAT_049caf80;
    auVar1 = auVar10;
    if ((uVar4 & 1) == 0) {
      auVar1 = ZEXT816(0);
    }
    if ((uVar4 & 1) == 0) {
      return auVar10;
    }
    if (plStack_48 != (long *)0x0) {
      lVar7 = *plStack_48;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049caf80) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_027b653c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(plStack_48,*(long *)PTR_DAT_049caf80,1);
LAB_027b653c:
      iVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      plVar6 = plStack_48;
      if (iVar3 < 1) {
        return auVar1;
      }
      if (plStack_48 != (long *)0x0) {
        lVar7 = *plStack_48;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_027b65bc;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(plStack_48,*(long *)puVar2,0);
LAB_027b65bc:
        plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
        lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02229718(lVar7);
        }
        if (plVar6 != (long *)0x0) {
          if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) !=
              lVar7)) {
                    /* WARNING: Subroutine does not return */
            FUN_021f0a20(plVar6);
          }
        }
        if (*param_2 != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                    (*param_2,plVar6,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x38));
          return auVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

