/* IL2CPP: BattlePassConstantSheet$$.ctor
void BattlePassConstantSheet___ctor (BattlePassConstantSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029c0f20) */
/* IL2CPP: BattlePassConstantSheet$$.ctor
   void BattlePassConstantSheet___ctor (BattlePassConstantSheet_o* __this, const MethodInfo*
   method); */

void BattlePassConstantSheet___ctor_25593f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 026593f8 to 027593fb has its CatchHandler @ 02659410 */
  puVar1 = PTR_DAT_049cb420;
                    /* catch() { ... } // from try @ 026591f0 with catch @ 026593fc
                       try { // try from 026593fc to 027594a3 has its CatchHandler @ 02658d20 */
                    /* catch() { ... } // from try @ 026593e4 with catch @ 02659400 */
                    /* catch() { ... } // from try @ 026593e0 with catch @ 02659404 */
                    /* catch() { ... } // from try @ 02658fa0 with catch @ 02659408 */
                    /* catch() { ... } // from try @ 02658f84 with catch @ 0265940c */
                    /* catch() { ... } // from try @ 02659354 with catch @ 02659410
                       catch() { ... } // from try @ 026593f8 with catch @ 02659410 */
                    /* catch() { ... } // from try @ 0265932c with catch @ 02659414
                       catch() { ... } // from try @ 026593f0 with catch @ 02659414 */
  if ((bRam0000000004f4c0ce & 1) == 0) {
                    /* catch() { ... } // from try @ 026591d8 with catch @ 02659420
                       catch() { ... } // from try @ 026593ec with catch @ 02659420 */
    FUN_021f03f8(PTR_DAT_049cb420);
                    /* catch() { ... } // from try @ 026591cc with catch @ 02659424
                       catch() { ... } // from try @ 026593e8 with catch @ 02659424 */
                    /* catch() { ... } // from try @ 026591a0 with catch @ 02659428 */
    bRam0000000004f4c0ce = 1;
  }
                    /* catch() { ... } // from try @ 026593dc with catch @ 0265942c */
                    /* catch() { ... } // from try @ 026593d8 with catch @ 02659430 */
                    /* catch() { ... } // from try @ 026592f0 with catch @ 02659434 */
                    /* catch() { ... } // from try @ 026593d0 with catch @ 02659438 */
                    /* catch() { ... } // from try @ 02658f00 with catch @ 0265943c */
  lVar3 = **(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *
                                                  )puVar1 + 0x20) + 0xc0) + 0x18) + 0x20) + 0xc0) +
                                         0xe8) + 0x20) + 0xc0);
  lVar4 = *(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718(lVar4);
  }
  uVar2 = thunk_FUN_0222ca34(lVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x18));
  System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType____ctor_2807410
            (param_1,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x20));
  uVar2 = FUN_026b1a00(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x38));
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar2);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

