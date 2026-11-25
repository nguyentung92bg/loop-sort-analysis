/* IL2CPP: NonPayerOffer.<ApplyHomeAction>d__7$$MoveNext
void NonPayerOffer__ApplyHomeAction_d__7__MoveNext (NonPayerOffer__ApplyHomeAction_d__7_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NonPayerOffer.<ApplyHomeAction>d__7$$MoveNext
   void NonPayerOffer__ApplyHomeAction_d__7__MoveNext (NonPayerOffer__ApplyHomeAction_d__7_o __this,
   const MethodInfo* method); */

void NonPayerOffer__ApplyHomeAction_d__7__MoveNext_2523284(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
                    /* try { // try from 02623298 to 0272339b has its CatchHandler @ 02623298
                       catch() { ... } // from try @ 02623298 with catch @ 02623298
                       catch() { ... } // from try @ 02623408 with catch @ 02623298
                       catch() { ... } // from try @ 026234dc with catch @ 02623298
                       catch() { ... } // from try @ 02623520 with catch @ 02623298
                       catch() { ... } // from try @ 02623560 with catch @ 02623298
                       catch() { ... } // from try @ 02623584 with catch @ 02623298 */
  if ((bRam0000000004f4be86 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c98b0);
    FUN_021f03f8(PTR_DAT_049c4698);
    FUN_021f03f8(PTR_DAT_049c46a0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c46b0);
    bRam0000000004f4be86 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  if (*param_1 == 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0xc);
    uStack_38 = *(undefined8 *)(param_1 + 10);
    uStack_40 = *(undefined8 *)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
                    /* try { // try from 0262348c to 0272349f has its CatchHandler @ 02623530 */
    *param_1 = -1;
  }
  else {
    plVar9 = *(long **)(param_1 + 6);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar4 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    puVar1 = PTR_DAT_049b5310;
    if ((uVar4 & 1) == 0) goto LAB_026234b0;
    lVar5 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(lVar5 + 0xb8);
    uStack_88 = *(undefined8 *)(lVar5 + 0x7b8);
    uStack_90 = *(undefined8 *)(lVar5 + 0x7b0);
    uStack_78 = *(undefined8 *)(lVar5 + 0x7c8);
    uStack_80 = *(undefined8 *)(lVar5 + 0x7c0);
    uVar4 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_90,0);
    if ((uVar4 & 1) != 0) goto LAB_026234b0;
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
    CloudPrefsBool__Set_24eb1bc(*(long *)(lVar5 + 0xb8) + 0x7b0,1,0);
    if (plVar9[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0262339c to 027233a3 has its CatchHandler @ 0262353c */
    LiveOpsModule__Show_253e230(&uStack_a8,plVar9[2],0x17,1,0);
    uStack_58 = uStack_a0;
    uStack_60 = uStack_a8;
    uStack_50 = uStack_98;
                    /* try { // try from 026233bc to 02723407 has its CatchHandler @ 02623540 */
    FUN_0235b0c0(&uStack_60,&uStack_a8,*(undefined8 *)PTR_DAT_049c46b0);
    lVar10 = *(long *)PTR_DAT_049c46a0;
    uStack_38 = uStack_a0;
    uStack_40 = uStack_a8;
    uStack_30 = uStack_98;
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
                    /* try { // try from 02623408 to 0272342b has its CatchHandler @ 02623298 */
    uVar6 = thunk_FUN_0224e54c(&uStack_40,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
                    /* try { // try from 0262342c to 0272342f has its CatchHandler @ 02623524 */
                    /* try { // try from 02623430 to 02723443 has its CatchHandler @ 02623538 */
    iVar3 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
    if (iVar3 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_38;
      *(undefined8 *)(param_1 + 8) = uStack_40;
      *(undefined8 *)(param_1 + 0xc) = uStack_30;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c25c(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049c98b0);
      return;
    }
  }
  FUN_0235b3fc(&uStack_40,&uStack_a8,*(undefined8 *)PTR_DAT_049c4698);
LAB_026234b0:
  cVar2 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar2 == '\0') {
                    /* try { // try from 026234c8 to 027234db has its CatchHandler @ 02623534 */
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
                    /* try { // try from 026234dc to 02723517 has its CatchHandler @ 02623298 */
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262351c with catch @ 02623528
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02623518 with catch @ 0262352c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262348c with catch @ 02623530
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026234c8 with catch @ 02623534
                        */
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_02623538;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 02623518 to 0272351b has its CatchHandler @ 0262352c */
                    /* try { // try from 0262351c to 0272351f has its CatchHandler @ 02623528 */
                    /* try { // try from 02623520 to 0272355b has its CatchHandler @ 02623298 */
    puVar7 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b56d0,2);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262342c with catch @ 02623524
                        */
LAB_02623538:
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02623430 with catch @ 02623538
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262339c with catch @ 0262353c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026233bc with catch @ 02623540
                        */
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  return;
}

