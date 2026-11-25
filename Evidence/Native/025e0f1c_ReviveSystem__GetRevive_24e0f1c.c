/* IL2CPP: ReviveSystem$$GetRevive
ReviveSheet_Revive_o* ReviveSystem__GetRevive (ReviveSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveSystem$$GetRevive
   ReviveSheet_Revive_o* ReviveSystem__GetRevive (ReviveSystem_o* __this, const MethodInfo* method);
    */

void ReviveSystem__GetRevive_24e0f1c(long param_1)

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
  if ((*(long *)(param_1 + 0x58) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 0x48), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e0f44 to 026e0f4f has its CatchHandler @ 025e0fcc */
    FUN_021f06a0();
  }
                    /* try { // try from 025e0f30 to 026e0f43 has its CatchHandler @ 025e0e08 */
  iVar2 = *(int *)(param_1 + 0x78);
  if ((bRam0000000004f4c153 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbba0,iVar2,0);
    FUN_021f03f8(PTR_DAT_049cbba8);
    FUN_021f03f8(PTR_DAT_049cbbb0);
    FUN_021f03f8(PTR_DAT_049cbb98);
    FUN_021f03f8(PTR_DAT_049cbbb8);
    bRam0000000004f4c153 = 1;
  }
  iVar2 = iVar2 + 1;
  iStack_28 = iVar2;
  uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                    (lVar5,&iStack_28,*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    plVar7 = *(long **)(lVar5 + 0x10);
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
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_026654e4;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049cbba8,0);
LAB_026654e4:
    iVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
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
    iStack_24 = iVar2;
    Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
              (lVar5,&iStack_24,*(undefined8 *)PTR_DAT_049cbbb8);
  }
  return;
}

