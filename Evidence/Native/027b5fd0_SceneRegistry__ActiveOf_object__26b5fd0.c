/* IL2CPP: SceneRegistry$$ActiveOf<object>
UnityEngine_Pool_PooledObject_List_T___o SceneRegistry__ActiveOf_object_ (SceneRegistry_o* __this, System_Collections_Generic_List_T__o** result, const MethodInfo_26B5FD0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x027b6388) */
/* IL2CPP: SceneRegistry$$ActiveOf<object>
   UnityEngine_Pool_PooledObject_List_T___o SceneRegistry__ActiveOf_object_ (SceneRegistry_o*
   __this, System_Collections_Generic_List_T__o** result, const MethodInfo_26B5FD0* method); */

undefined1  [16] SceneRegistry__ActiveOf_object__26b5fd0(long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar9 = *(long *)(param_3 + 0x38);
  lStack_40 = param_3;
  if (lVar9 == 0) {
    FUN_021f03f8(PTR_DAT_049caf98);
    FUN_021f03f8(PTR_DAT_049caf80);
    lVar9 = *(long *)(param_3 + 0x38);
    if (lVar9 == 0) {
      FUN_02229774(param_3);
      lVar9 = *(long *)(param_3 + 0x38);
    }
  }
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar14 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                      (param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  lVar9 = *(long *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar13 = System_Type__GetTypeFromHandle_310ebfc(uVar13,0);
  if (lVar9 != 0) {
    uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar9,uVar13,&plStack_48,*(undefined8 *)PTR_DAT_049caf98);
    plVar8 = plStack_48;
    puVar4 = PTR_DAT_049caf80;
    if ((uVar6 & 1) == 0) {
      return auVar14;
    }
    if (plStack_48 != (long *)0x0) {
      lVar9 = *plStack_48;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049caf80) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_027b6118;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(plStack_48,*(long *)PTR_DAT_049caf80,1);
LAB_027b6118:
      iVar5 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      plVar8 = plStack_48;
      if (iVar5 < 1) {
        return auVar14;
      }
      if (plStack_48 != (long *)0x0) {
        lVar9 = *plStack_48;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_027b6180;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02229a4c(plStack_48,*(long *)puVar4,0);
LAB_027b6180:
        plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
        lVar9 = *(long *)(*(long *)(lStack_40 + 0x38) + 0x28);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02229718(lVar9);
        }
        if (plVar8 != (long *)0x0) {
          lVar10 = *plVar8;
          bVar2 = *(byte *)(lVar10 + 0x130);
          if ((*(byte *)(lVar9 + 0x130) <= bVar2) &&
             (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) == lVar9
             )) {
            lVar9 = *(long *)(*(long *)(lStack_40 + 0x38) + 0x28);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02229718(lVar9);
              lVar10 = *plVar8;
              bVar2 = *(byte *)(lVar10 + 0x130);
            }
            if ((*(byte *)(lVar9 + 0x130) <= bVar2) &&
               (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) ==
                lVar9)) {
              System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
                        (plVar8,&uStack_78,*(undefined8 *)(*(long *)(lStack_40 + 0x38) + 0x30));
              uStack_60 = uStack_78;
              uStack_50 = plStack_68;
              uStack_78 = 0;
              plStack_68 = &lStack_40;
              uStack_58 = puStack_70;
              puStack_70 = &uStack_60;
              while( true ) {
                uVar6 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                                  (&uStack_60,*(undefined8 *)(*(long *)(lStack_40 + 0x38) + 0x68));
                if ((uVar6 & 1) == 0) {
                  System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
                            (&uStack_60,*(undefined8 *)(*(long *)(lStack_40 + 0x38) + 0x70));
                  return auVar14;
                }
                lVar12 = *(long *)(*(long *)(lStack_40 + 0x38) + 0x40);
                lVar10 = *(long *)(lVar12 + 0x20);
                uVar3 = *(ushort *)(lVar10 + 0x135);
                lVar9 = lVar10;
                if ((uVar3 & 1) == 0) {
                  lVar9 = FUN_02229718();
                  lVar10 = *(long *)(lVar12 + 0x20);
                  uVar3 = *(ushort *)(lVar10 + 0x135);
                }
                uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
                if ((uVar3 & 1) == 0) {
                  lVar10 = FUN_02229718();
                }
                uVar13 = thunk_FUN_0224e54c(&uStack_60,
                                            *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(&lStack_38,uVar13,uVar1);
                lVar9 = lStack_38;
                if (lStack_38 == 0) break;
                lVar10 = UnityEngine_Component__get_gameObject_3c187f4(lStack_38,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                uVar6 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar10,0);
                if ((uVar6 & 1) != 0) {
                  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  FUN_02333498(*param_2,lVar9,*(undefined8 *)(*(long *)(lStack_40 + 0x38) + 0x60));
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(plVar8);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

