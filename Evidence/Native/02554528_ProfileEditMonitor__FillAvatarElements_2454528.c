/* IL2CPP: ProfileEditMonitor$$FillAvatarElements
void ProfileEditMonitor__FillAvatarElements (ProfileEditMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025547b4) */
/* IL2CPP: ProfileEditMonitor$$FillAvatarElements
   void ProfileEditMonitor__FillAvatarElements (ProfileEditMonitor_o* __this, const MethodInfo*
   method); */

void ProfileEditMonitor__FillAvatarElements_2454528(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long **pplStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_38;
  
  if ((bRam0000000004f4b8ea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4970);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c4978);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049c4980);
    bRam0000000004f4b8ea = 1;
  }
  plStack_38 = (long *)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0xbd13b84d,0);
  if ((*(long *)(param_1 + 0xa0) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + 0x18), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar7 = (long *)GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_2896e60
                             (lVar6,*(undefined8 *)PTR_DAT_049c4970);
  puVar3 = PTR_DAT_049c4980;
  puVar2 = PTR_DAT_049c4978;
  puVar1 = PTR_DAT_049b4360;
  pplStack_80 = &plStack_38;
  uStack_88 = 0;
  do {
    plStack_38 = plVar7;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02554654;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)puVar1,0);
LAB_02554654:
    uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    plVar7 = plStack_38;
    if ((uVar10 & 1) == 0) {
      if (plStack_38 == (long *)0x0) {
        return;
      }
      lVar5 = *plStack_38;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 == 0) goto LAB_02554764;
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plStack_38;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_025546b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)puVar2,0);
LAB_025546b8:
    (*(code *)*puVar8)(&uStack_a0,plVar7,puVar8[1]);
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    uStack_50 = uStack_90;
    System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
              (&uStack_60,&uStack_68,&uStack_78,*(undefined8 *)puVar3);
    uVar4 = uStack_68;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar5,0);
    ProfileEditMonitor__CreateAvatarElement_2455084(param_1,uVar9,uVar4);
    plVar7 = plStack_38;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02554780;
    }
  }
LAB_02554764:
  puVar8 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)PTR_DAT_049b3cc8,0);
LAB_02554780:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}

