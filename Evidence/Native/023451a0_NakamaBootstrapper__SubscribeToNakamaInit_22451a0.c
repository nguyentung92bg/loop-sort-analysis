/* IL2CPP: NakamaBootstrapper$$SubscribeToNakamaInit
void NakamaBootstrapper__SubscribeToNakamaInit (NakamaBootstrapper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$SubscribeToNakamaInit
   void NakamaBootstrapper__SubscribeToNakamaInit (NakamaBootstrapper_o* __this, const MethodInfo*
   method); */

void NakamaBootstrapper__SubscribeToNakamaInit_22451a0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000004f49b42 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b56a8);
    FUN_021f03f8(PTR_DAT_049b56b0);
    FUN_021f03f8(PTR_DAT_049b56b8);
    bRam0000000004f49b42 = 1;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    plVar6 = *(long **)(param_1 + 0x20);
    uVar1 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b56b8);
    Voodoo_Nakama_Services_OnInitFinishedDelegate___ctor_426d3d8
              (uVar1,param_1,*(undefined8 *)PTR_DAT_049b56b0,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b56a8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_02345278;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049b56a8,2);
LAB_02345278:
    (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}

