/* IL2CPP: CarrierSelectSystem$$Transfer
void CarrierSelectSystem__Transfer (CarrierSelectSystem_o* __this, Carrier_o* from, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSelectSystem$$Transfer
   void CarrierSelectSystem__Transfer (CarrierSelectSystem_o* __this, Carrier_o* from, const
   MethodInfo* method); */

void CarrierSelectSystem__Transfer_240e0b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b705 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2a80);
    bRam0000000004f4b705 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x30);
  uStack_28 = param_2;
  thunk_FUN_021f190c(&uStack_28,param_2);
  uVar1 = uStack_28;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c2a80) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0250e154;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c2a80,0);
LAB_0250e154:
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  return;
}

