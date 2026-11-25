/* IL2CPP: Block$$SetContainer
void Block__SetContainer (Block_o* __this, IBlockContainer_o* container, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$SetContainer
   void Block__SetContainer (Block_o* __this, IBlockContainer_o* container, const MethodInfo*
   method); */

void Block__SetContainer_23dc64c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4b5bc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13b0);
    bRam0000000004f4b5bc = 1;
  }
  plVar5 = *(long **)(param_1 + 0x100);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049c13b0) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_024dc6dc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049c13b0,1);
LAB_024dc6dc:
    (*(code *)*puVar1)(plVar5,param_1,puVar1[1]);
  }
  *(undefined8 *)(param_1 + 0x100) = param_2;
  thunk_FUN_021f190c(param_1 + 0x100,param_2);
  *(undefined1 *)(param_1 + 0x158) = 1;
  return;
}

