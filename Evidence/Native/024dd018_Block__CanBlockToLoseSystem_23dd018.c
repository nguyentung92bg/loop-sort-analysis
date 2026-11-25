/* IL2CPP: Block$$CanBlockToLoseSystem
bool Block__CanBlockToLoseSystem (Block_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$CanBlockToLoseSystem
   bool Block__CanBlockToLoseSystem (Block_o* __this, const MethodInfo* method); */

undefined8 Block__CanBlockToLoseSystem_23dd018(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000004f4b5c4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13e0);
    bRam0000000004f4b5c4 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x150);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c13e0) {
                    /* try { // try from 024dd0a8 to 025dd2fb has its CatchHandler @ 024dd0a8
                       catch() { ... } // from try @ 024dd0a8 with catch @ 024dd0a8
                       catch() { ... } // from try @ 024dd410 with catch @ 024dd0a8
                       catch() { ... } // from try @ 024dd4f0 with catch @ 024dd0a8
                       catch() { ... } // from try @ 024dd500 with catch @ 024dd0a8
                       catch() { ... } // from try @ 024dd554 with catch @ 024dd0a8 */
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_024dd0b4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c13e0,1);
LAB_024dd0b4:
                    /* WARNING: Could not recover jumptable at 0x024dd0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  return uVar2;
}

