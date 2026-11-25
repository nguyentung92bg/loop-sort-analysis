/* IL2CPP: LondonTripSheet$$FindGiftedIds
void LondonTripSheet__FindGiftedIds (LondonTripSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026646b0) */
/* IL2CPP: LondonTripSheet$$FindGiftedIds
   void LondonTripSheet__FindGiftedIds (LondonTripSheet_o* __this, const MethodInfo* method); */

void LondonTripSheet__FindGiftedIds_256430c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long **pplStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  int aiStack_70 [3];
  int iStack_64;
  
  if ((bRam0000000004f4c146 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbb38);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049cbb40);
    FUN_021f03f8(PTR_DAT_049cbb48);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049be138);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4c146 = 1;
  }
  plVar16 = *(long **)(param_1 + 0x10);
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026646b8 to 027646c3 has its CatchHandler @ 02664944 */
    FUN_021f06a0();
  }
                    /* try { // try from 026643d4 to 027643d7 has its CatchHandler @ 026648e0 */
                    /* try { // try from 026643d8 to 027643df has its CatchHandler @ 026649b4 */
  lVar13 = *plVar16;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
                    /* try { // try from 026643f0 to 027643ff has its CatchHandler @ 026649b0 */
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049cbb40) {
                    /* try { // try from 02664424 to 0276442b has its CatchHandler @ 026649a4 */
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_02664428;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
                    /* try { // try from 0266440c to 02764417 has its CatchHandler @ 026649ac */
  puVar9 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049cbb40,0);
                    /* try { // try from 02664418 to 02764423 has its CatchHandler @ 026649a8 */
LAB_02664428:
  plStack_78 = (long *)(*(code *)*puVar9)(plVar16,puVar9[1]);
  puVar8 = PTR_DAT_049cbb48;
  puVar7 = PTR_DAT_049b6370;
  puVar6 = PTR_DAT_049b6350;
  puVar5 = PTR_DAT_049b6348;
  puVar4 = PTR_DAT_049b6330;
  puVar3 = PTR_DAT_049b4360;
  pplStack_98 = &plStack_78;
                    /* try { // try from 0266443c to 0276444b has its CatchHandler @ 026649a0 */
  lStack_a0 = 0;
  if (plStack_78 != (long *)0x0) {
                    /* try { // try from 02664458 to 02764463 has its CatchHandler @ 0266499c */
                    /* try { // try from 02664464 to 0276446f has its CatchHandler @ 02664998 */
    do {
      plVar16 = plStack_78;
                    /* try { // try from 0266447c to 02764483 has its CatchHandler @ 02664994 */
      lVar13 = *plStack_78;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_026644c8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
                    /* try { // try from 026644a8 to 027644ab has its CatchHandler @ 026649cc */
        } while (uVar14 != 0);
      }
                    /* try { // try from 026644ac to 027644cf has its CatchHandler @ 026649c8 */
      puVar9 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)puVar3,0);
LAB_026644c8:
      uVar14 = (*(code *)*puVar9)(plVar16,puVar9[1]);
      plVar16 = plStack_78;
      if ((uVar14 & 1) == 0) {
        plVar16 = *pplStack_98;
        if (plVar16 == (long *)0x0) goto LAB_02664784;
        lVar13 = *plVar16;
                    /* try { // try from 0266472c to 0276473f has its CatchHandler @ 02664928 */
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_0266475c;
                    /* try { // try from 02664740 to 0276474b has its CatchHandler @ 02664924 */
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_02664744;
      }
      if (plStack_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026646a8 to 027646b7 has its CatchHandler @ 02664948 */
        FUN_021f06a0();
      }
      lVar13 = *plStack_78;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
                    /* try { // try from 026644f0 to 027644f3 has its CatchHandler @ 026649c0 */
                    /* try { // try from 026644f4 to 02764517 has its CatchHandler @ 026649c4 */
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar8) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0266452c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)puVar8,0);
LAB_0266452c:
      lVar13 = (*(code *)*puVar9)(plVar16,puVar9[1]);
                    /* try { // try from 02664538 to 0276453b has its CatchHandler @ 026649bc */
                    /* try { // try from 0266453c to 0276454b has its CatchHandler @ 02664990 */
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = LondonTripSheet_Row__GetGifts_25647c8(lVar13);
      if (lVar10 != 0) {
                    /* try { // try from 0266454c to 02764557 has its CatchHandler @ 0266498c */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lVar10,&uStack_b8,*(undefined8 *)puVar7);
        uStack_90 = uStack_b8;
                    /* try { // try from 02664558 to 02764563 has its CatchHandler @ 02664988 */
        uStack_b8 = 0;
        puStack_88 = puStack_b0;
        uStack_80 = uStack_a8;
        puStack_b0 = &uStack_90;
        do {
                    /* try { // try from 02664570 to 0276457b has its CatchHandler @ 02664984 */
          uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_90,*(undefined8 *)puVar5);
          if ((uVar14 & 1) == 0) goto LAB_02664650;
                    /* try { // try from 0266457c to 02764587 has its CatchHandler @ 02664980 */
          lVar17 = *(long *)puVar6;
          lVar11 = *(long *)(lVar17 + 0x20);
                    /* try { // try from 02664588 to 02764593 has its CatchHandler @ 0266497c */
          uVar2 = *(ushort *)(lVar11 + 0x135);
          lVar10 = lVar11;
          if ((uVar2 & 1) == 0) {
            lVar10 = FUN_02229718();
            lVar11 = *(long *)(lVar17 + 0x20);
                    /* try { // try from 026645a0 to 027645ab has its CatchHandler @ 02664978 */
            uVar2 = *(ushort *)(lVar11 + 0x135);
          }
                    /* try { // try from 026645ac to 027645b7 has its CatchHandler @ 02664974 */
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
                    /* try { // try from 026645b8 to 027645bf has its CatchHandler @ 02664970 */
          if ((uVar2 & 1) == 0) {
            lVar11 = FUN_02229718();
          }
                    /* try { // try from 026645d0 to 027645df has its CatchHandler @ 0266496c */
          uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                      *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(aiStack_70,uVar12,uVar1);
                    /* try { // try from 026645ec to 027645f7 has its CatchHandler @ 02664968 */
        } while (aiStack_70[0] == 0);
                    /* try { // try from 026645f8 to 02764603 has its CatchHandler @ 02664964 */
        lVar10 = *(long *)(param_1 + 0x48);
                    /* try { // try from 02664604 to 0276460b has its CatchHandler @ 02664960 */
        plVar16 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar16[1] + 0xfc);
        uVar12 = thunk_FUN_0224e54c(lVar13,*(undefined8 *)(*plVar16 + 0x80));
                    /* try { // try from 0266461c to 0276462b has its CatchHandler @ 0266495c */
        func_0x04608620(aiStack_70,uVar12,uVar1);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 02664638 to 02764643 has its CatchHandler @ 02664958 */
        iStack_64 = aiStack_70[0];
                    /* try { // try from 02664644 to 0276464f has its CatchHandler @ 02664954 */
        FUN_02333498(lVar10,&iStack_64,*(undefined8 *)PTR_DAT_049be138);
LAB_02664650:
                    /* try { // try from 02664650 to 02764657 has its CatchHandler @ 02664950 */
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_90,*(undefined8 *)puVar4);
      }
    } while (plStack_78 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
                    /* try { // try from 02664758 to 0276475b has its CatchHandler @ 026648dc */
    if (uVar14 == 0) break;
LAB_02664744:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b3cc8) {
                    /* try { // try from 0266476c to 0276477b has its CatchHandler @ 0266491c */
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02664778;
    }
  }
LAB_0266475c:
                    /* try { // try from 0266475c to 02764763 has its CatchHandler @ 02664920 */
  puVar9 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049b3cc8,0);
LAB_02664778:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
LAB_02664784:
                    /* try { // try from 02664788 to 02764793 has its CatchHandler @ 02664918 */
  if (lStack_a0 == 0) {
                    /* try { // try from 02664794 to 0276479f has its CatchHandler @ 02664914 */
                    /* try { // try from 026647a0 to 027647a7 has its CatchHandler @ 02664910 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698();
}

