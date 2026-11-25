/* IL2CPP: LondonTripSheet$$.ctor
void LondonTripSheet___ctor (LondonTripSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029c0f20) */
/* IL2CPP: LondonTripSheet$$.ctor
   void LondonTripSheet___ctor (LondonTripSheet_o* __this, const MethodInfo* method); */

void LondonTripSheet___ctor_25649c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_049cbb50;
  puVar2 = PTR_DAT_049be168;
                    /* catch() { ... } // from try @ 026644f4 with catch @ 026649c4
                       catch() { ... } // from try @ 026648c4 with catch @ 026649c4 */
  puVar1 = PTR_DAT_049be160;
                    /* catch() { ... } // from try @ 026644ac with catch @ 026649c8
                       catch() { ... } // from try @ 026648bc with catch @ 026649c8 */
                    /* catch() { ... } // from try @ 026644a8 with catch @ 026649cc
                       catch() { ... } // from try @ 026648b4 with catch @ 026649cc */
                    /* try { // try from 026649e4 to 027649fb has its CatchHandler @ 02664a78 */
  if ((bRam0000000004f4c147 & 1) == 0) {
                    /* try { // try from 026649fc to 02764a67 has its CatchHandler @ 0266426c */
    FUN_021f03f8(PTR_DAT_049be160);
    FUN_021f03f8(PTR_DAT_049be168);
    FUN_021f03f8(PTR_DAT_049cbb50);
    bRam0000000004f4c147 = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48),uVar4);
  lVar5 = **(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0xe8
                                         ) + 0x20) + 0xc0);
  lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718(lVar6);
  }
  uVar4 = thunk_FUN_0222ca34(lVar6);
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

