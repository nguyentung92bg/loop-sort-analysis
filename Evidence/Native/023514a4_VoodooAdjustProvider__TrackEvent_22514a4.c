/* IL2CPP: VoodooAdjustProvider$$TrackEvent
void VoodooAdjustProvider__TrackEvent (System_String_o* eventToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$TrackEvent
   void VoodooAdjustProvider__TrackEvent (System_String_o* eventToken, const MethodInfo* method); */

void VoodooAdjustProvider__TrackEvent_22514a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_049b5f70;
                    /* try { // try from 023514a8 to 024514b7 has its CatchHandler @ 023514ec */
                    /* try { // try from 023514b8 to 0245152b has its CatchHandler @ 02351410 */
  if ((bRam0000000004f49b95 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f70);
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49b95 = 1;
  }
  puVar3 = PTR_DAT_049b5670;
  lVar6 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 023514a8 with catch @ 023514ec */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar1;
  }
                    /* catch() { ... } // from try @ 023514a0 with catch @ 02351500 */
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x68);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02351484 with catch @ 02351514 */
    FUN_021f0574(*(long *)puVar3);
  }
  puVar1 = PTR_DAT_049b62a0;
  if ((bRam0000000004f5f47d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62a0);
    bRam0000000004f5f47d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a631e0;
  if ((bRam0000000004f60112 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a631e0);
    FUN_021f03f8(PTR_DAT_049b62a0);
    FUN_021f03f8(PTR_DAT_04a6c368);
    FUN_021f03f8(PTR_DAT_04a6c370);
    FUN_021f03f8(PTR_DAT_04a65c08);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049b3d10);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_04a6c378);
    FUN_021f03f8(PTR_DAT_04a6c2c0);
    FUN_021f03f8(PTR_DAT_04a6c380);
    FUN_021f03f8(PTR_DAT_049b48d8);
    FUN_021f03f8(PTR_DAT_04a634a0);
    bRam0000000004f60112 = 1;
  }
  puVar5 = PTR_DAT_04a6c380;
  puVar3 = PTR_DAT_04a634a0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b48d8;
  puVar1 = PTR_DAT_049b3d10;
  lVar7 = Voodoo_Sauce_Internal_Analytics_AnalyticsLogger__get_Main_449c29c(0);
  puVar4 = PTR_DAT_04a6c2c0;
  uVar13 = *(undefined8 *)puVar5;
  uVar12 = *(undefined8 *)puVar3;
  if (lVar6 == 0) {
    uStack_70 = 0;
    uVar8 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_70);
    uVar14 = *(undefined8 *)puVar2;
  }
  else {
    uStack_64 = *(undefined4 *)(lVar6 + 0x18);
    uStack_70 = 0;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_70,&uStack_64,*(undefined8 *)PTR_DAT_049b3c20);
    uVar8 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_70);
    lVar10 = *(long *)puVar4;
    uVar14 = *(undefined8 *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574(lVar10);
      lVar10 = *(long *)puVar4;
    }
    puVar11 = *(undefined8 **)(lVar10 + 0xb8);
    lVar15 = puVar11[2];
    if (lVar15 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_021f0574(lVar10);
        puVar11 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar16 = *puVar11;
      lVar15 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_04a6c370);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                (lVar15,uVar16,*(undefined8 *)PTR_DAT_04a6c378,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar9 = lVar15;
      thunk_FUN_021f190c(plVar9,lVar15);
    }
    lVar10 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25defb0
                       (lVar6,lVar15,*(undefined8 *)PTR_DAT_04a6c368);
    if (lVar10 != 0) goto LAB_04595ed8;
  }
  lVar10 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,0);
LAB_04595ed8:
  uVar14 = System_String__Join_2f7ea5c(uVar14,lVar10,0);
  uVar13 = System_String__Format_2f7dfac(uVar13,uVar8,uVar14,0);
  puVar1 = PTR_DAT_049b62a0;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Voodoo_Sauce_Core_Diagnostics_LogCategory__DebugTag_4346be0(lVar7,uVar12,uVar13,0);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x18) == 0)) {
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x3a0);
  }
  else {
    lVar7 = *(long *)puVar1;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x1d0);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))
              (*(undefined8 *)(lVar7 + 0x40),param_1,0,lVar6,0,*(undefined8 *)(lVar7 + 0x28));
  }
  return;
}

