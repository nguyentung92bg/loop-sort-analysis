/* IL2CPP: CarrierSelectSystem$$OnCarrierSelect
void CarrierSelectSystem__OnCarrierSelect (CarrierSelectSystem_o* __this, CarrierSelectMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSelectSystem$$OnCarrierSelect
   void CarrierSelectSystem__OnCarrierSelect (CarrierSelectSystem_o* __this, CarrierSelectMessage_o
   m, const MethodInfo* method); */

void CarrierSelectSystem__OnCarrierSelect_240e064(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long lStack_28;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((*(char *)(param_2 + 0x1b1) != '\0') ||
     (uVar2 = Carrier__IsEmpty_23faccc(param_2), (uVar2 & 1) != 0)) {
    return;
  }
  if ((bRam0000000004f4b705 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2a80);
    bRam0000000004f4b705 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x30);
  lStack_28 = param_2;
  thunk_FUN_021f190c(&lStack_28,param_2);
  lVar1 = lStack_28;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *plVar6;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c2a80) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0250e154;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c2a80,0);
LAB_0250e154:
  (*(code *)*puVar3)(plVar6,lVar1,puVar3[1]);
  return;
}

