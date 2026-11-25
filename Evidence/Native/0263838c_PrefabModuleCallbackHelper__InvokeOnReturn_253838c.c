/* IL2CPP: PrefabModuleCallbackHelper$$InvokeOnReturn
void PrefabModuleCallbackHelper__InvokeOnReturn (UnityEngine_GameObject_o* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02638618) */
/* IL2CPP: PrefabModuleCallbackHelper$$InvokeOnReturn
   void PrefabModuleCallbackHelper__InvokeOnReturn (UnityEngine_GameObject_o* obj, const MethodInfo*
   method); */

void PrefabModuleCallbackHelper__InvokeOnReturn_253838c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int *piVar13;
  long lVar14;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined1 auStack_48 [16];
  long *plStack_38;
  
  puVar3 = PTR_DAT_049ca298;
  if ((bRam0000000004f4bf6f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca2a0);
    FUN_021f03f8(PTR_DAT_049ca298);
    FUN_021f03f8(PTR_DAT_049ca2a8);
    FUN_021f03f8(PTR_DAT_049ca2b0);
    FUN_021f03f8(PTR_DAT_049ca2b8);
    FUN_021f03f8(PTR_DAT_049ca2c0);
    FUN_021f03f8(PTR_DAT_049ca2c8);
    FUN_021f03f8(PTR_DAT_049ca2d0);
    FUN_021f03f8(PTR_DAT_049ca2d8);
    bRam0000000004f4bf6f = 1;
  }
  puVar4 = PTR_DAT_049ca2a0;
  auStack_48._0_8_ = 0;
  auStack_48._8_8_ = 0;
  lStack_50 = 0;
  uStack_68 = 0;
                    /* try { // try from 02638440 to 027384c7 has its CatchHandler @ 026385cc */
  uStack_70 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_48 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_50,*(undefined8 *)puVar4);
  puStack_78 = auStack_48;
  lStack_80 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__GetComponents___Il2CppFullySharedGenericType__261aebc
            (param_1,lStack_50,*(undefined8 *)PTR_DAT_049ca2c0);
  if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lStack_50,&uStack_98,*(undefined8 *)PTR_DAT_049ca2d0);
  puVar6 = PTR_DAT_049ca2c8;
  puVar5 = PTR_DAT_049ca2b8;
  puVar4 = PTR_DAT_049ca2b0;
  puVar3 = PTR_DAT_049ca2a8;
                    /* try { // try from 026384c8 to 02738507 has its CatchHandler @ 02637fc4 */
  uStack_68 = puStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  puStack_90 = &uStack_70;
  uStack_98 = 0;
  do {
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 02638304 with catch @ 026385c0 */
                    /* catch() { ... } // from try @ 02638174 with catch @ 026385c4 */
                    /* catch() { ... } // from try @ 02638380 with catch @ 026385c8 */
                    /* catch() { ... } // from try @ 02638234 with catch @ 026385cc
                       catch() { ... } // from try @ 02638440 with catch @ 026385cc */
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar3);
      lVar10 = lStack_80;
                    /* try { // try from 026385e4 to 027385fb has its CatchHandler @ 02638660 */
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (puStack_78,*(undefined8 *)PTR_DAT_049ca2d8);
      if (lVar10 == 0) {
                    /* try { // try from 026385fc to 0273864f has its CatchHandler @ 02637fc4 */
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar10);
    }
    lVar14 = *(long *)puVar5;
    lVar9 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
                    /* try { // try from 02638508 to 02738513 has its CatchHandler @ 02638584 */
      lVar9 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
    }
                    /* try { // try from 02638520 to 0273852f has its CatchHandler @ 02638580 */
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
                    /* try { // try from 02638540 to 0273854b has its CatchHandler @ 02638574 */
    uVar11 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&plStack_38,uVar11,uVar1);
    plVar7 = plStack_38;
                    /* try { // try from 02638558 to 02738567 has its CatchHandler @ 02638570 */
    if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *plStack_38;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 0263856c to 0273856f has its CatchHandler @ 026385ac */
    if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 02638558 with catch @ 02638570
                       try { // try from 02638570 to 027385e3 has its CatchHandler @ 02637fc4 */
                    /* catch() { ... } // from try @ 02638540 with catch @ 02638574 */
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 0263814c with catch @ 02638578 */
                    /* catch() { ... } // from try @ 026380bc with catch @ 0263857c */
                    /* catch() { ... } // from try @ 02638520 with catch @ 02638580 */
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
                    /* catch() { ... } // from try @ 026380f8 with catch @ 026385a0 */
                    /* catch() { ... } // from try @ 026380a4 with catch @ 026385a4 */
                    /* catch() { ... } // from try @ 02638094 with catch @ 026385a8 */
                    /* catch() { ... } // from try @ 0263856c with catch @ 026385ac */
          puVar12 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_026385b0;
        }
                    /* catch() { ... } // from try @ 02638508 with catch @ 02638584 */
        uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 02638358 with catch @ 02638588 */
        piVar13 = piVar13 + 4;
                    /* catch() { ... } // from try @ 026382c8 with catch @ 0263858c */
      } while (uVar8 != 0);
    }
                    /* catch() { ... } // from try @ 02638154 with catch @ 02638590 */
                    /* catch() { ... } // from try @ 0263812c with catch @ 02638594 */
                    /* catch() { ... } // from try @ 02638124 with catch @ 02638598 */
    puVar12 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)puVar6,1);
                    /* catch() { ... } // from try @ 02638110 with catch @ 0263859c */
LAB_026385b0:
                    /* catch() { ... } // from try @ 02638360 with catch @ 026385b0 */
                    /* catch() { ... } // from try @ 02638338 with catch @ 026385b4 */
                    /* catch() { ... } // from try @ 02638330 with catch @ 026385b8 */
    (*(code *)*puVar12)(plVar7,puVar12[1]);
                    /* catch() { ... } // from try @ 0263831c with catch @ 026385bc */
  } while( true );
}

