/* IL2CPP: EconomyModule$$EnableUpdateInterceptor
void EconomyModule__EnableUpdateInterceptor (EconomyModule_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$EnableUpdateInterceptor
   void EconomyModule__EnableUpdateInterceptor (EconomyModule_o* __this, int32_t item, const
   MethodInfo* method); */

void EconomyModule__EnableUpdateInterceptor_2533e88(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 02633e9c to 02733e9f has its CatchHandler @ 02633fa0 */
                    /* try { // try from 02633ea0 to 02733f37 has its CatchHandler @ 026339a0 */
  if ((bRam0000000004f4bf3a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca060);
    FUN_021f03f8(PTR_DAT_049c99f0);
    bRam0000000004f4bf3a = 1;
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  if (*(long *)(param_1 + 0x78) != 0) {
    uStack_2c = param_2;
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryAdd_282fe18
                      (*(long *)(param_1 + 0x78),&uStack_2c,0,*(undefined8 *)PTR_DAT_049ca060);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x80);
      uStack_28 = EconomyModule__GetAmount_2523ed0(param_1,param_2);
      if (lVar2 == 0) goto LAB_02633f3c;
      uStack_24 = param_2;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar2,&uStack_24,&uStack_28,*(undefined8 *)PTR_DAT_049c99f0);
    }
                    /* try { // try from 02633f38 to 02733f47 has its CatchHandler @ 02633f88 */
    return;
  }
LAB_02633f3c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

