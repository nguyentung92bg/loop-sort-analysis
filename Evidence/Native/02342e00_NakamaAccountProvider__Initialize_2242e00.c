/* IL2CPP: NakamaAccountProvider$$Initialize
void NakamaAccountProvider__Initialize (NakamaAccountProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaAccountProvider$$Initialize
   void NakamaAccountProvider__Initialize (NakamaAccountProvider_o* __this, const MethodInfo*
   method); */

void NakamaAccountProvider__Initialize_2242e00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_049b5500;
  puVar1 = PTR_DAT_049b54f8;
  if ((bRam0000000004f49b26 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54f8);
    FUN_021f03f8(PTR_DAT_049b5500);
    bRam0000000004f49b26 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x10),uVar9);
  lVar5 = *(long *)puVar2;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02229774(lVar5);
  }
  plVar4 = (long *)Voodoo_Sauce_Core_VoodooSauceServices__get_Locator_4328240(0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *plVar4;
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar5 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
        goto LAB_0282cec4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_02229a4c(plVar4);
LAB_0282cec4:
  lVar5 = thunk_FUN_0220ec70(*(undefined8 *)(lVar6 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x0282cee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(plVar4,lVar3,lVar5);
  return;
}

