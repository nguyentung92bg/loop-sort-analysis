/* IL2CPP: SceneScope$$HandleSceneComponents
void SceneScope__HandleSceneComponents (SceneScope_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02654dfc) */
/* IL2CPP: SceneScope$$HandleSceneComponents
   void SceneScope__HandleSceneComponents (SceneScope_o* __this, VContainer_IContainerBuilder_o*
   builder, const MethodInfo* method); */

void SceneScope__HandleSceneComponents_255484c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4c09b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cafe0);
    FUN_021f03f8(PTR_DAT_049cafe8);
    FUN_021f03f8(PTR_DAT_049caff0);
    FUN_021f03f8(PTR_DAT_049caff8);
    FUN_021f03f8(PTR_DAT_049cb000);
    FUN_021f03f8(PTR_DAT_049cb008);
    FUN_021f03f8(PTR_DAT_049cb010);
    FUN_021f03f8(PTR_DAT_049cb018);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049cb020);
    FUN_021f03f8(PTR_DAT_049cb028);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049cb030);
    FUN_021f03f8(PTR_DAT_049cb038);
    FUN_021f03f8(PTR_DAT_049cb040);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049cb048);
    FUN_021f03f8(PTR_DAT_049cb050);
    FUN_021f03f8(PTR_DAT_049cb058);
    FUN_021f03f8(PTR_DAT_049cb060);
    FUN_021f03f8(PTR_DAT_049cb068);
    FUN_021f03f8(PTR_DAT_049cb070);
    bRam0000000004f4c09b = 1;
  }
  puVar3 = PTR_DAT_049cb040;
  puVar2 = PTR_DAT_049caff8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = UnityEngine_Object__FindObjectsOfType_object__26957cc(*(undefined8 *)puVar3);
  lVar6 = System_Linq_Enumerable__ToList___Il2CppFullySharedGenericType__25e3b7c
                    (uVar5,*(undefined8 *)puVar2);
  puVar4 = PTR_DAT_049cb070;
  puVar3 = PTR_DAT_049cb050;
  puVar2 = PTR_DAT_049cb048;
  puVar1 = PTR_DAT_049cb030;
  if (lVar6 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
              (lVar6,param_1,*(undefined8 *)PTR_DAT_049cb038);
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
    System_Predicate___Il2CppFullySharedGenericType____ctor_29189c0
              (uVar5,param_1,*(undefined8 *)puVar3,0);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAll_28d0344
              (lVar6,uVar5,*(undefined8 *)puVar1);
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar4;
    }
    puVar1 = PTR_DAT_049cafe8;
    puVar9 = *(undefined8 **)(lVar7 + 0xb8);
    lVar12 = puVar9[1];
    if (lVar12 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar5 = *puVar9;
      lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb010);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                (lVar12,uVar5,*(undefined8 *)PTR_DAT_049cb058,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar8 = lVar12;
      thunk_FUN_021f190c(plVar8,lVar12);
    }
    uVar5 = System_Linq_Enumerable__GroupBy___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25dd8c0
                      (lVar6,lVar12,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574(lVar6);
      lVar6 = *(long *)puVar4;
    }
    puVar1 = PTR_DAT_049cb000;
    puVar9 = *(undefined8 **)(lVar6 + 0xb8);
    lVar7 = puVar9[2];
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574(lVar6);
        puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar13 = *puVar9;
      lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb008);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                (lVar7,uVar13,*(undefined8 *)PTR_DAT_049cb060,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar8 = lVar7;
      thunk_FUN_021f190c(plVar8,lVar7);
    }
    uVar5 = System_Linq_Enumerable__Where___Il2CppFullySharedGenericType__25e3de4
                      (uVar5,lVar7,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574(lVar6);
      lVar6 = *(long *)puVar4;
    }
    puVar1 = PTR_DAT_049caff0;
    puVar9 = *(undefined8 **)(lVar6 + 0xb8);
    lVar7 = puVar9[3];
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574(lVar6);
        puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar13 = *puVar9;
      lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb018);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                (lVar7,uVar13,*(undefined8 *)PTR_DAT_049cb068,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar8 = lVar7;
      thunk_FUN_021f190c(plVar8,lVar7);
    }
    plVar8 = (long *)System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25defb0
                               (uVar5,lVar7,*(undefined8 *)puVar1);
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049cb020) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02654c4c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049cb020,0);
LAB_02654c4c:
      puVar4 = PTR_DAT_049cb028;
      puVar3 = PTR_DAT_049cafe0;
      puVar2 = PTR_DAT_049b4360;
      puVar1 = PTR_DAT_049b3cc8;
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar6 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02654cd8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar2,0);
LAB_02654cd8:
        uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar8;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 == 0) goto LAB_02654da8;
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_02654d90;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar6 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02654d3c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar4,0);
LAB_02654d3c:
        uVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        lVar6 = FUN_025e86c8(param_2,uVar5,*(undefined8 *)puVar3);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar6,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_02654d90:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02654dc4;
    }
  }
LAB_02654da8:
  puVar9 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar1,0);
LAB_02654dc4:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}

