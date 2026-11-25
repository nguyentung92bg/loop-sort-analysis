/* IL2CPP: NicknameSheet$$.ctor
void NicknameSheet___ctor (NicknameSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029c0f20) */
/* IL2CPP: NicknameSheet$$.ctor
   void NicknameSheet___ctor (NicknameSheet_o* __this, const MethodInfo* method); */

void NicknameSheet___ctor_2564cd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_049cbb58;
                    /* try { // try from 02664ce0 to 02764cef has its CatchHandler @ 02665298 */
                    /* try { // try from 02664cf0 to 02764cfb has its CatchHandler @ 02665294 */
  if ((bRam0000000004f4c14b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbb58);
    bRam0000000004f4c14b = 1;
  }
                    /* try { // try from 02664d08 to 02764d17 has its CatchHandler @ 02665290 */
                    /* try { // try from 02664d18 to 02764d23 has its CatchHandler @ 0266528c */
  lVar3 = **(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0xe8
                                         ) + 0x20) + 0xc0);
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

