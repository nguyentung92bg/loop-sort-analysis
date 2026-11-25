/* IL2CPP: ReviveSheet$$Get
ReviveSheet_Revive_o* ReviveSheet__Get (ReviveSheet_o* __this, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveSheet$$Get
   ReviveSheet_Revive_o* ReviveSheet__Get (ReviveSheet_o* __this, int32_t idx, const MethodInfo*
   method); */

void ReviveSheet__Get_25653e0(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  int iStack_28;
  int iStack_24;
  
  puVar1 = PTR_DAT_049cbb98;
                    /* try { // try from 026653ec to 027653f7 has its CatchHandler @ 02665440 */
                    /* try { // try from 026653f8 to 02765423 has its CatchHandler @ 0266538c */
  if ((bRam0000000004f4c153 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbba0);
    FUN_021f03f8(PTR_DAT_049cbba8);
                    /* try { // try from 02665424 to 02765427 has its CatchHandler @ 0266543c */
                    /* try { // try from 02665428 to 0276542b has its CatchHandler @ 02665438 */
    FUN_021f03f8(PTR_DAT_049cbbb0);
                    /* try { // try from 0266542c to 0276542f has its CatchHandler @ 02665430 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266542c with catch @ 02665430
                       try { // try from 02665430 to 02765457 has its CatchHandler @ 0266538c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026653b8 with catch @ 02665434
                        */
    FUN_021f03f8(PTR_DAT_049cbb98);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02665428 with catch @ 02665438
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02665424 with catch @ 0266543c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026653ec with catch @ 02665440
                        */
    FUN_021f03f8(PTR_DAT_049cbbb8);
    bRam0000000004f4c153 = 1;
  }
  iStack_28 = param_2 + 1;
                    /* try { // try from 02665458 to 0276546f has its CatchHandler @ 026654dc */
  uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                    (param_1,&iStack_28,*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049cbba8) {
                    /* catch() { ... } // from try @ 02665458 with catch @ 026654dc
                       catch() { ... } // from try @ 026654cc with catch @ 026654dc */
                    /* try { // try from 026654e0 to 027654e3 has its CatchHandler @ 026654ec */
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_026654e4;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 026654cc to 027654db has its CatchHandler @ 026654dc */
    puVar4 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049cbba8,0);
LAB_026654e4:
                    /* try { // try from 026654e4 to 027654ef has its CatchHandler @ 0266538c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026654e0 with catch @ 026654ec
                        */
    iVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
                    /* try { // try from 026654f0 to 027655d7 has its CatchHandler @ 026654f0
                       catch() { ... } // from try @ 026654f0 with catch @ 026654f0
                       catch() { ... } // from try @ 0266596c with catch @ 026654f0
                       catch() { ... } // from try @ 026659d4 with catch @ 026654f0
                       catch() { ... } // from try @ 02665a84 with catch @ 026654f0
                       catch() { ... } // from try @ 02665ab0 with catch @ 026654f0
                       catch() { ... } // from try @ 02665b34 with catch @ 026654f0 */
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049cbbb0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02665548;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049cbbb0,0);
LAB_02665548:
    (*(code *)*puVar4)(plVar7,iVar2 + -1,puVar4[1]);
  }
  else {
                    /* try { // try from 02665470 to 027654cb has its CatchHandler @ 0266538c */
    iStack_24 = param_2 + 1;
    Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
              (param_1,&iStack_24,*(undefined8 *)PTR_DAT_049cbbb8);
  }
  return;
}

