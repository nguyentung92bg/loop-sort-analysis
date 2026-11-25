/* IL2CPP: EconomyModule$$EnableUpdateInterceptor
void EconomyModule__EnableUpdateInterceptor (EconomyModule_o* __this, System_Collections_Generic_List_Item__o* items, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$EnableUpdateInterceptor
   void EconomyModule__EnableUpdateInterceptor (EconomyModule_o* __this,
   System_Collections_Generic_List_Item__o* items, const MethodInfo* method); */

void EconomyModule__EnableUpdateInterceptor_2533f40(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
                    /* try { // try from 02633f48 to 02733f7f has its CatchHandler @ 026339a0 */
  if ((bRam0000000004f4bf3b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca060);
                    /* try { // try from 02633f80 to 02733f83 has its CatchHandler @ 02633f9c */
    FUN_021f03f8(PTR_DAT_049c99f0);
                    /* try { // try from 02633f84 to 02733f87 has its CatchHandler @ 02633f98 */
                    /* catch() { ... } // from try @ 02633f38 with catch @ 02633f88
                       try { // try from 02633f88 to 02733fb7 has its CatchHandler @ 026339a0 */
                    /* catch() { ... } // from try @ 02633e54 with catch @ 02633f8c */
    FUN_021f03f8(PTR_DAT_049ca068);
                    /* catch() { ... } // from try @ 02633e60 with catch @ 02633f90 */
                    /* catch() { ... } // from try @ 02633e70 with catch @ 02633f94 */
                    /* catch() { ... } // from try @ 02633f84 with catch @ 02633f98 */
    FUN_021f03f8(PTR_DAT_049ca070);
                    /* catch() { ... } // from try @ 02633f80 with catch @ 02633f9c */
                    /* catch() { ... } // from try @ 02633e9c with catch @ 02633fa0 */
    FUN_021f03f8(PTR_DAT_049ca078);
    FUN_021f03f8(PTR_DAT_049ca080);
                    /* try { // try from 02633fb8 to 02733fcf has its CatchHandler @ 02634030 */
    bRam0000000004f4bf3b = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  puVar7 = PTR_DAT_049ca078;
  puVar6 = PTR_DAT_049ca070;
  puVar5 = PTR_DAT_049ca068;
  puVar4 = PTR_DAT_049ca060;
  puVar3 = PTR_DAT_049c99f0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 02633fd0 to 0273401f has its CatchHandler @ 026339a0 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_2,&uStack_88,*(undefined8 *)PTR_DAT_049ca080);
  uStack_60 = uStack_78;
                    /* try { // try from 02634020 to 0273402f has its CatchHandler @ 02634030 */
  uStack_68 = puStack_80;
  uStack_70 = uStack_88;
  uStack_88 = 0;
  puStack_80 = &uStack_70;
  while( true ) {
                    /* catch() { ... } // from try @ 02633fb8 with catch @ 02634030
                       catch() { ... } // from try @ 02634020 with catch @ 02634030 */
    uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar6);
                    /* try { // try from 02634034 to 02734037 has its CatchHandler @ 02634040 */
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar5);
      return;
    }
                    /* try { // try from 02634038 to 02734043 has its CatchHandler @ 026339a0 */
    lVar13 = *(long *)puVar7;
    lVar10 = *(long *)(lVar13 + 0x20);
                    /* catch() { ... } // from try @ 02634034 with catch @ 02634040 */
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar11 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar10 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar12 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_44,uVar12,uVar1);
    uVar1 = uStack_44;
    if (*(long *)(param_1 + 0x78) == 0) break;
    uVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryAdd_282fe18
                      (*(long *)(param_1 + 0x78),&uStack_44,0,*(undefined8 *)puVar4);
    if ((uVar9 & 1) != 0) {
      lVar11 = *(long *)(param_1 + 0x80);
      uVar8 = EconomyModule__GetAmount_2523ed0(param_1,uVar1);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_48 = uVar8;
      uStack_44 = uVar1;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar11,&uStack_44,&uStack_48,*(undefined8 *)puVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

