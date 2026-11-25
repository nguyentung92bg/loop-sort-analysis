/* IL2CPP: VoodooSauceProvider$$GetDebuggerAuthorization
bool VoodooSauceProvider__GetDebuggerAuthorization (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$GetDebuggerAuthorization
   bool VoodooSauceProvider__GetDebuggerAuthorization (VoodooSauceProvider_o* __this, const
   MethodInfo* method); */

undefined1 VoodooSauceProvider__GetDebuggerAuthorization_22579f0(void)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined2 auStack_28 [2];
  undefined2 auStack_24 [2];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  puVar3 = PTR_DAT_049b6238;
  if ((bRam0000000004f49bc9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6238);
    bRam0000000004f49bc9 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b6238;
                    /* try { // try from 02357a3c to 02457a47 has its CatchHandler @ 02357a78 */
  if ((bRam0000000004f5febf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3cd8);
    FUN_021f03f8(PTR_DAT_049b3c28);
    FUN_021f03f8(PTR_DAT_049b6238);
    bRam0000000004f5febf = 1;
  }
  lVar4 = *(long *)puVar3;
  auStack_24[0] = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_049b3cd8;
  if ((**(long **)(lVar4 + 0xb8) == 0) ||
     (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x30), lVar4 == 0)) {
    auStack_24[0] = 0;
  }
  else {
    auStack_18[0] = *(undefined1 *)(lVar4 + 0x10);
    auStack_28[0] = 0;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (auStack_28,auStack_18,*(undefined8 *)PTR_DAT_049b3c28);
    auStack_24[0] = auStack_28[0];
  }
  lVar7 = *(long *)puVar3;
  lVar6 = *(long *)(lVar7 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar4 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02229718(lVar6);
    lVar4 = *(long *)(lVar7 + 0x20);
    uVar2 = *(ushort *)(lVar4 + 0x135);
  }
  uVar1 = *(undefined4 *)(**(long **)(lVar6 + 0xc0) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_02229718(lVar4);
  }
  uVar5 = thunk_FUN_0224e54c(auStack_24,
                             *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x04608620(auStack_14,uVar5,uVar1);
  return auStack_14[0];
}

