/* IL2CPP: PlayerModule$$CanUpdatePlayerProfile
bool PlayerModule__CanUpdatePlayerProfile (PlayerModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerModule$$CanUpdatePlayerProfile
   bool PlayerModule__CanUpdatePlayerProfile (PlayerModule_o* __this, const MethodInfo* method); */

uint PlayerModule__CanUpdatePlayerProfile_2551a3c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000004f4c07b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cae88);
    bRam0000000004f4c07b = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049cae88) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02651ac4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049cae88,0);
LAB_02651ac4:
  uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  return uVar1 & 1;
}

