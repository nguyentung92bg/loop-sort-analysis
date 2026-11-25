/* IL2CPP: SceneRegistry$$ForEach<object>
void SceneRegistry__ForEach_object_ (SceneRegistry_o* __this, System_Action_T__o* action, const MethodInfo_26B694C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x027b6c6c) */
/* IL2CPP: SceneRegistry$$ForEach<object>
   void SceneRegistry__ForEach_object_ (SceneRegistry_o* __this, System_Action_T__o* action, const
   MethodInfo_26B694C* method); */

void SceneRegistry__ForEach_object__26b694c(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long lStack_38;
  undefined8 uStack_28;
  
  puVar8 = *(undefined8 **)(param_3 + 0x38);
  lStack_38 = param_3;
  if (puVar8 == (undefined8 *)0x0) {
    FUN_021f03f8(PTR_DAT_049caf98);
    FUN_021f03f8(PTR_DAT_049caf80);
    puVar8 = *(undefined8 **)(param_3 + 0x38);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_02229774(param_3);
      puVar8 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  lVar12 = *(long *)(param_1 + 0x20);
  uStack_58 = 0;
  uStack_50 = 0;
  uVar13 = *puVar8;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar13 = System_Type__GetTypeFromHandle_310ebfc(uVar13,0);
  if (lVar12 != 0) {
    uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar12,uVar13,&plStack_40,*(undefined8 *)PTR_DAT_049caf98);
    plVar7 = plStack_40;
    puVar4 = PTR_DAT_049caf80;
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (plStack_40 != (long *)0x0) {
      lVar12 = *plStack_40;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049caf80) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_027b6a54;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plStack_40,*(long *)PTR_DAT_049caf80,1);
LAB_027b6a54:
      iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = plStack_40;
      if (iVar5 == 0) {
        return;
      }
      if (plStack_40 != (long *)0x0) {
        lVar12 = *plStack_40;
        uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_027b6ab8;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(plStack_40,*(long *)puVar4,0);
LAB_027b6ab8:
        plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 8);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02229718(lVar12);
        }
        if (plVar7 != (long *)0x0) {
          lVar9 = *plVar7;
          bVar2 = *(byte *)(lVar9 + 0x130);
          if ((*(byte *)(lVar12 + 0x130) <= bVar2) &&
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) ==
              lVar12)) {
            lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 8);
            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_02229718(lVar12);
              lVar9 = *plVar7;
              bVar2 = *(byte *)(lVar9 + 0x130);
            }
            if ((*(byte *)(lVar12 + 0x130) <= bVar2) &&
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) ==
                lVar12)) {
              System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
                        (plVar7,&uStack_58,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
              while( true ) {
                uVar6 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                                  (&uStack_58,*(undefined8 *)(*(long *)(lStack_38 + 0x38) + 0x48));
                if ((uVar6 & 1) == 0) {
                  System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
                            (&uStack_58,*(undefined8 *)(*(long *)(lStack_38 + 0x38) + 0x50));
                  return;
                }
                lVar11 = *(long *)(*(long *)(lStack_38 + 0x38) + 0x20);
                lVar9 = *(long *)(lVar11 + 0x20);
                uVar3 = *(ushort *)(lVar9 + 0x135);
                lVar12 = lVar9;
                if ((uVar3 & 1) == 0) {
                  lVar12 = FUN_02229718();
                  lVar9 = *(long *)(lVar11 + 0x20);
                  uVar3 = *(ushort *)(lVar9 + 0x135);
                }
                uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
                if ((uVar3 & 1) == 0) {
                  lVar9 = FUN_02229718();
                }
                uVar13 = thunk_FUN_0224e54c(&uStack_58,
                                            *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80)
                                            + 0x60);
                func_0x04608620(&uStack_28,uVar13,uVar1);
                if (param_2 == 0) break;
                (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),uStack_28,*(undefined8 *)(param_2 + 0x28)
                          );
              }
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(plVar7);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

