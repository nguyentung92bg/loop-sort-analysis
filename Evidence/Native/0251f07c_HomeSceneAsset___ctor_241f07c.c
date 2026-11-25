/* IL2CPP: HomeSceneAsset$$.ctor
void HomeSceneAsset___ctor (HomeSceneAsset_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneAsset$$.ctor
   void HomeSceneAsset___ctor (HomeSceneAsset_o* __this, const MethodInfo* method); */

void HomeSceneAsset___ctor_241f07c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar5 = PTR_DAT_049c2fa0;
  puVar4 = PTR_DAT_049c2f98;
  puVar3 = PTR_DAT_049c2f90;
  puVar2 = PTR_DAT_049c2f88;
  puVar1 = PTR_DAT_049c2f80;
  if ((bRam0000000004f4b774 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2fa0);
    FUN_021f03f8(PTR_DAT_049c2f88);
    FUN_021f03f8(PTR_DAT_049c2f98);
    FUN_021f03f8(PTR_DAT_049c2f80);
    FUN_021f03f8(PTR_DAT_049c2f90);
    bRam0000000004f4b774 = 1;
  }
  uVar7 = _UNK_013a82d0;
  uVar6 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  *(undefined8 *)(param_1 + 0x1c) = 0x451c0000451c0000;
  uVar7 = thunk_FUN_0222ca34(uVar6);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar7);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38),uVar7);
  lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  uVar6 = _UNK_013a9688;
  uVar7 = _UNK_013a9680;
  *(undefined8 *)(lVar8 + 0x28) = _UNK_013a7940;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  *(undefined8 *)(lVar8 + 0x30) = uVar7;
  System_Object___ctor_3142338(lVar8,0);
  *(long *)(param_1 + 0x40) = lVar8;
  thunk_FUN_021f190c((long *)(param_1 + 0x40),lVar8);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f58430 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f58430 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Object___ctor_3142338(param_1,0);
  if (pcRam0000000004f58438 == (code *)0x0) {
    pcRam0000000004f58438 = (code *)FUN_021f03bc(&UNK_013c1465);
  }
                    /* WARNING: Could not recover jumptable at 0x03d209d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004f58438)(param_1);
  return;
}

