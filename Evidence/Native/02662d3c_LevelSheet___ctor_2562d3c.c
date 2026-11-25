/* IL2CPP: LevelSheet$$.ctor
void LevelSheet___ctor (LevelSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029c0f20) */
/* IL2CPP: LevelSheet$$.ctor
   void LevelSheet___ctor (LevelSheet_o* __this, const MethodInfo* method); */

void LevelSheet___ctor_2562d3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 02662d4c to 02762e3f has its CatchHandler @ 02662d4c
                       catch() { ... } // from try @ 02662d4c with catch @ 02662d4c
                       catch() { ... } // from try @ 0266328c with catch @ 02662d4c
                       catch() { ... } // from try @ 026633b8 with catch @ 02662d4c
                       catch() { ... } // from try @ 02663474 with catch @ 02662d4c
                       catch() { ... } // from try @ 026634fc with catch @ 02662d4c */
  if ((bRam0000000004f4c138 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049cba88);
    FUN_021f03f8(PTR_DAT_049cba90);
    bRam0000000004f4c138 = 1;
  }
  puVar2 = PTR_DAT_049cba90;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  uVar7 = *(undefined8 *)(lVar3 + 0x68);
  uVar6 = *(undefined8 *)(lVar3 + 0x60);
  uVar4 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  thunk_FUN_021f190c(param_1 + 0x50,0);
  lVar3 = FUN_021f04e4(*(undefined8 *)puVar2,2);
  puVar1 = PTR_DAT_049cba88;
  if (lVar3 != 0) {
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined4 *)(lVar3 + 0x24) = 10;
      *(long *)(param_1 + 0x68) = lVar3;
      thunk_FUN_021f190c();
      lVar5 = **(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) +
                                             0xe8) + 0x20) + 0xc0);
      lVar3 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02229718(lVar3);
      }
      uVar4 = thunk_FUN_0222ca34(lVar3);
      System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                (uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x18));
      System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType____ctor_2807410
                (param_1,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x20));
      uVar4 = FUN_026b1a00(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x38));
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar4);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

