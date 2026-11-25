/* IL2CPP: AreaOffer$$PreviewAreaOffers
void AreaOffer__PreviewAreaOffers (System_String_o* areaName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$PreviewAreaOffers
   void AreaOffer__PreviewAreaOffers (System_String_o* areaName, const MethodInfo* method); */

void AreaOffer__PreviewAreaOffers_250aa30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar10;
  long *plVar11;
  undefined4 uStack_34;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049b6130;
                    /* try { // try from 0260aa40 to 0270aa43 has its CatchHandler @ 0260af74 */
                    /* try { // try from 0260aa48 to 0270aa53 has its CatchHandler @ 0260aff0 */
  if ((bRam0000000004f4bdc1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9060);
                    /* try { // try from 0260aa68 to 0270aafb has its CatchHandler @ 0260b078 */
    FUN_021f03f8(PTR_DAT_049c5440);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c9068);
    FUN_021f03f8(PTR_DAT_049b6130);
    FUN_021f03f8(PTR_DAT_049c4420);
    FUN_021f03f8(PTR_DAT_049c9070);
    FUN_021f03f8(PTR_DAT_049c9078);
    bRam0000000004f4bdc1 = 1;
  }
  puVar3 = PTR_DAT_049c5440;
  puVar1 = PTR_DAT_049b3c58;
  uStack_34 = 0;
  uVar5 = System_String__Equals_2f7b554(param_1,*(undefined8 *)puVar2,5,0);
  puVar2 = PTR_DAT_049c9068;
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 0260ab54 to 0270ab5f has its CatchHandler @ 0260b078 */
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 0260ab6c to 0270abf3 has its CatchHandler @ 0260b1b4 */
    uVar5 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                      (param_1,1,&uStack_34,*(undefined8 *)puVar2);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      AreaOffer__Resolve___Il2CppFullySharedGenericType__25a6534
                (&uStack_28,*(undefined8 *)PTR_DAT_049c9060);
      uVar5 = AreaOffer__HasOffers_250a204(uStack_28,uStack_34);
      uVar4 = uStack_34;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        AreaOffer__Preview_250ad10(uVar4);
        return;
      }
    }
    uVar9 = System_String__Concat_2f7d424
                      (*(undefined8 *)PTR_DAT_049c9078,param_1,*(undefined8 *)PTR_DAT_049c4420,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574(lVar6);
    }
                    /* try { // try from 0260ac0c to 0270ac13 has its CatchHandler @ 0260b07c */
    UnityEngine_Debug__LogWarning_3bcf90c(uVar9,0);
    return;
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_049c9070;
                    /* try { // try from 0260ab08 to 0270ab1b has its CatchHandler @ 0260b014 */
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18) = 0;
  AreaOffer__RefreshHome_250ac28();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3c58;
  uVar7 = *(undefined8 *)puVar2;
                    /* try { // try from 0260ab28 to 0270ab3f has its CatchHandler @ 0260b010 */
  uVar9 = 0;
  if ((bRam0000000004f56b81 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0);
    FUN_021f03f8(PTR_DAT_049ceff8);
    bRam0000000004f56b81 = 1;
    uVar9 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
    uVar9 = extraout_x1_00;
  }
  if (cRam0000000004f4c367 == '\0') {
    FUN_021f03f8(PTR_DAT_049b3c58,uVar9);
    cRam0000000004f4c367 = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar1;
  }
  plVar11 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *plVar11;
  uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049ceff8) {
        puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 5) * 0x10 + 0x138);
        goto LAB_03cd0ccc;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar8 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049ceff8,5);
LAB_03cd0ccc:
                    /* WARNING: Could not recover jumptable at 0x03cd0ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar11,3,uVar7,puVar8[1]);
  return;
}

