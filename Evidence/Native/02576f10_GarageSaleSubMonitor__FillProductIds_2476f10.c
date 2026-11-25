/* IL2CPP: GarageSaleSubMonitor$$FillProductIds
void GarageSaleSubMonitor__FillProductIds (GarageSaleSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSaleSubMonitor$$FillProductIds
   void GarageSaleSubMonitor__FillProductIds (GarageSaleSubMonitor_o* __this, const MethodInfo*
   method); */

void GarageSaleSubMonitor__FillProductIds_2476f10(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_049c57a0;
                    /* try { // try from 02576f30 to 02676f3b has its CatchHandler @ 02577320 */
  if ((bRam0000000004f4b9cd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b90e8);
                    /* try { // try from 02576f50 to 02676f5f has its CatchHandler @ 025772e0 */
    FUN_021f03f8(PTR_DAT_049b3ca0);
    FUN_021f03f8(PTR_DAT_049b3ca8);
                    /* try { // try from 02576f64 to 02676f6b has its CatchHandler @ 025772e8 */
    FUN_021f03f8(PTR_DAT_049b3cb0);
                    /* try { // try from 02576f6c to 02676f73 has its CatchHandler @ 025772e4 */
    FUN_021f03f8(PTR_DAT_049b3cd0);
    FUN_021f03f8(PTR_DAT_049c57a0);
                    /* try { // try from 02576f84 to 02676fab has its CatchHandler @ 0257730c */
    FUN_021f03f8(PTR_DAT_049c57a8);
    bRam0000000004f4b9cd = 1;
  }
  lVar8 = *(long *)puVar2;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar2;
  }
  puVar6 = PTR_DAT_049c57a8;
  puVar5 = PTR_DAT_049b90e8;
  puVar4 = PTR_DAT_049b3cb0;
  puVar3 = PTR_DAT_049b3ca8;
  puVar2 = PTR_DAT_049b3ca0;
                    /* try { // try from 02576fbc to 02676fc7 has its CatchHandler @ 025772f4 */
  if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02577120 to 026771d7 has its CatchHandler @ 02576918 */
    FUN_021f06a0();
  }
                    /* try { // try from 02576fdc to 02676feb has its CatchHandler @ 025772cc */
                    /* try { // try from 02576ff0 to 02676ff7 has its CatchHandler @ 025772ac */
                    /* try { // try from 02576ff8 to 02676fff has its CatchHandler @ 02577278 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (**(long **)(lVar8 + 0xb8),&uStack_78,*(undefined8 *)PTR_DAT_049b3cd0);
                    /* try { // try from 02577000 to 02677013 has its CatchHandler @ 0257728c */
  uStack_50 = uStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  while( true ) {
                    /* try { // try from 02577018 to 0267701f has its CatchHandler @ 025772a8 */
    uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_60,*(undefined8 *)puVar3);
                    /* try { // try from 02577020 to 02677027 has its CatchHandler @ 025772a4 */
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)puVar2);
      return;
    }
    lVar12 = *(long *)puVar4;
                    /* try { // try from 02577028 to 0267703b has its CatchHandler @ 0257729c */
    lVar10 = *(long *)(lVar12 + 0x20);
    uVar1 = *(ushort *)(lVar10 + 0x135);
    lVar8 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02229718();
                    /* try { // try from 02577040 to 02677047 has its CatchHandler @ 02577284 */
      lVar10 = *(long *)(lVar12 + 0x20);
                    /* try { // try from 02577048 to 0267704f has its CatchHandler @ 025772c8 */
      uVar1 = *(ushort *)(lVar10 + 0x135);
    }
    uVar7 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
                    /* try { // try from 02577068 to 0267706f has its CatchHandler @ 025772b8 */
                    /* try { // try from 02577070 to 02677077 has its CatchHandler @ 02577274 */
                    /* try { // try from 02577078 to 0267708b has its CatchHandler @ 02577280 */
    uVar11 = thunk_FUN_0224e54c(&uStack_60,
                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_48,uVar11,uVar7);
                    /* try { // try from 02577090 to 02677097 has its CatchHandler @ 02577270 */
    lVar8 = CONCAT44(uStack_44,uStack_48);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02577098 to 0267709f has its CatchHandler @ 025772c4 */
                    /* try { // try from 025770a0 to 026770b3 has its CatchHandler @ 025772a0 */
    lVar10 = System_String__Split_2f81014(lVar8,*(undefined8 *)puVar6,0,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0257711c to 0267711f has its CatchHandler @ 025773e4 */
      FUN_021f06a0();
    }
                    /* try { // try from 025770b8 to 026770bf has its CatchHandler @ 0257727c */
    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) break;
                    /* try { // try from 025770c0 to 026770c7 has its CatchHandler @ 02577294 */
    uVar7 = System_Int32__Parse_30fbdd0(*(undefined8 *)(lVar10 + 0x28),0);
    if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 025770d8 to 02677113 has its CatchHandler @ 025772ec */
    uStack_48 = uVar7;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (*(long *)(param_1 + 0x78),&uStack_48,lVar8,*(undefined8 *)puVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

