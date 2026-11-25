/* IL2CPP: NakamaBootstrapper$$OnDestroy
void NakamaBootstrapper__OnDestroy (NakamaBootstrapper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$OnDestroy
   void NakamaBootstrapper__OnDestroy (NakamaBootstrapper_o* __this, const MethodInfo* method); */

void NakamaBootstrapper__OnDestroy_224503c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000004f49b43 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b56a8);
    FUN_021f03f8(PTR_DAT_049b56b0);
    FUN_021f03f8(PTR_DAT_049b56b8);
    bRam0000000004f49b43 = 1;
  }
  puVar1 = PTR_DAT_049b56b0;
  if (*(char *)(param_1 + 0x48) != '\0') {
    plVar7 = *(long **)(param_1 + 0x20);
    uVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b56b8);
    Voodoo_Nakama_Services_OnInitFinishedDelegate___ctor_426d3d8
              (uVar2,param_1,*(undefined8 *)puVar1,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b56a8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_02345118;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049b56a8,3);
LAB_02345118:
    (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}

