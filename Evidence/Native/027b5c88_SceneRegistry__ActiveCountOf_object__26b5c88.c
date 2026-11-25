/* IL2CPP: SceneRegistry$$ActiveCountOf<object>
int32_t SceneRegistry__ActiveCountOf_object_ (SceneRegistry_o* __this, const MethodInfo_26B5C88* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x027b5f74) */
/* IL2CPP: SceneRegistry$$ActiveCountOf<object>
   int32_t SceneRegistry__ActiveCountOf_object_ (SceneRegistry_o* __this, const MethodInfo_26B5C88*
   method); */

int SceneRegistry__ActiveCountOf_object__26b5c88(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_30;
  long lStack_28;
  long lStack_18;
  
  puVar7 = *(undefined8 **)(param_2 + 0x38);
  lStack_28 = param_2;
  if (puVar7 == (undefined8 *)0x0) {
    FUN_021f03f8(PTR_DAT_049caf98);
    FUN_021f03f8(PTR_DAT_049caf80);
    puVar7 = *(undefined8 **)(param_2 + 0x38);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_02229774(param_2);
      puVar7 = *(undefined8 **)(param_2 + 0x38);
    }
  }
  plStack_30 = (long *)0x0;
  lVar11 = *(long *)(param_1 + 0x20);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar12 = *puVar7;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar12 = System_Type__GetTypeFromHandle_310ebfc(uVar12,0);
  if (lVar11 != 0) {
    uVar5 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar11,uVar12,&plStack_30,*(undefined8 *)PTR_DAT_049caf98);
    plVar6 = plStack_30;
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (plStack_30 != (long *)0x0) {
      lVar11 = *plStack_30;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049caf80) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_027b5d90;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(plStack_30,*(long *)PTR_DAT_049caf80,0);
LAB_027b5d90:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar11 = *(long *)(*(long *)(lStack_28 + 0x38) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02229718(lVar11);
      }
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        bVar2 = *(byte *)(lVar8 + 0x130);
        if ((*(byte *)(lVar11 + 0x130) <= bVar2) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)
           ) {
          lVar11 = *(long *)(*(long *)(lStack_28 + 0x38) + 8);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02229718(lVar11);
            lVar8 = *plVar6;
            bVar2 = *(byte *)(lVar8 + 0x130);
          }
          if ((*(byte *)(lVar11 + 0x130) <= bVar2) &&
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) ==
              lVar11)) {
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
                      (plVar6,&uStack_68,*(undefined8 *)(*(long *)(lStack_28 + 0x38) + 0x10));
            uStack_50 = uStack_68;
            iVar10 = 0;
            uStack_40 = plStack_58;
            uStack_68 = 0;
            plStack_58 = &lStack_28;
            uStack_48 = puStack_60;
            puStack_60 = &uStack_50;
            while( true ) {
              uVar5 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                                (&uStack_50,*(undefined8 *)(*(long *)(lStack_28 + 0x38) + 0x38));
              if ((uVar5 & 1) == 0) {
                System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
                          (&uStack_50,*(undefined8 *)(*(long *)(lStack_28 + 0x38) + 0x40));
                return iVar10;
              }
              lVar13 = *(long *)(*(long *)(lStack_28 + 0x38) + 0x20);
              lVar8 = *(long *)(lVar13 + 0x20);
              uVar3 = *(ushort *)(lVar8 + 0x135);
              lVar11 = lVar8;
              if ((uVar3 & 1) == 0) {
                lVar11 = FUN_02229718();
                lVar8 = *(long *)(lVar13 + 0x20);
                uVar3 = *(ushort *)(lVar8 + 0x135);
              }
              uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
              if ((uVar3 & 1) == 0) {
                lVar8 = FUN_02229718();
              }
              uVar12 = thunk_FUN_0224e54c(&uStack_50,
                                          *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) +
                                          0x60);
              func_0x04608620(&lStack_18,uVar12,uVar1);
              if (lStack_18 == 0) break;
              lVar11 = UnityEngine_Component__get_gameObject_3c187f4(lStack_18,0);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uVar4 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar11,0);
              iVar10 = iVar10 + (uVar4 & 1);
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(plVar6);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

