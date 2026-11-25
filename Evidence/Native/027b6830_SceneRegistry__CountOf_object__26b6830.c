/* IL2CPP: SceneRegistry$$CountOf<object>
int32_t SceneRegistry__CountOf_object_ (SceneRegistry_o* __this, const MethodInfo_26B6830* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneRegistry$$CountOf<object>
   int32_t SceneRegistry__CountOf_object_ (SceneRegistry_o* __this, const MethodInfo_26B6830*
   method); */

undefined8 SceneRegistry__CountOf_object__26b6830(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  long *plStack_18;
  
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_021f03f8(PTR_DAT_049caf98);
    FUN_021f03f8(PTR_DAT_049caf80);
    puVar3 = *(undefined8 **)(param_2 + 0x38);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_02229774(param_2);
      puVar3 = *(undefined8 **)(param_2 + 0x38);
    }
  }
  plStack_18 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x20);
  uVar6 = *puVar3;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
  if (lVar5 != 0) {
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar5,uVar6,&plStack_18,*(undefined8 *)PTR_DAT_049caf98);
    plVar1 = plStack_18;
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      if (plStack_18 == (long *)0x0) goto LAB_027b6948;
      lVar5 = *plStack_18;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049caf80) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_027b6930;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plStack_18,*(long *)PTR_DAT_049caf80,1);
LAB_027b6930:
      uVar6 = (*(code *)*puVar3)(plVar1,puVar3[1]);
    }
    return uVar6;
  }
LAB_027b6948:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

