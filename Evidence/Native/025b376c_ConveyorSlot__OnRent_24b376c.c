/* IL2CPP: ConveyorSlot$$OnRent
void ConveyorSlot__OnRent (ConveyorSlot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlot$$OnRent
   void ConveyorSlot__OnRent (ConveyorSlot_o* __this, const MethodInfo* method); */

void ConveyorSlot__OnRent_24b376c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_049c6be8;
  puVar1 = PTR_DAT_049c2858;
                    /* try { // try from 025b3784 to 026b393b has its CatchHandler @ 025b3784
                       catch() { ... } // from try @ 025b3784 with catch @ 025b3784
                       catch() { ... } // from try @ 025b3d24 with catch @ 025b3784
                       catch() { ... } // from try @ 025b3e4c with catch @ 025b3784
                       catch() { ... } // from try @ 025b3efc with catch @ 025b3784
                       catch() { ... } // from try @ 025b3f70 with catch @ 025b3784
                       catch() { ... } // from try @ 025b3fac with catch @ 025b3784
                       catch() { ... } // from try @ 025b4060 with catch @ 025b3784
                       catch() { ... } // from try @ 025b40f4 with catch @ 025b3784
                       catch() { ... } // from try @ 025b42d8 with catch @ 025b3784 */
  if ((bRam0000000004f4bb75 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6be8);
    FUN_021f03f8(PTR_DAT_049c2858);
    bRam0000000004f4bb75 = 1;
  }
  GameBehaviourBase__OnRent_24f6c1c(param_1,0);
  GameBehaviourBase__RegisterView_object__261a35c(param_1,*(undefined8 *)puVar2);
  uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)puVar1);
  puVar4 = (undefined8 *)(param_1 + 0xf0);
  *puVar4 = uVar3;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                 ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

