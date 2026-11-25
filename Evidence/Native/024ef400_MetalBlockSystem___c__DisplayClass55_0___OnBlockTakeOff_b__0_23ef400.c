/* IL2CPP: MetalBlockSystem.<>c__DisplayClass55_0$$<OnBlockTakeOff>b__0
void MetalBlockSystem___c__DisplayClass55_0___OnBlockTakeOff_b__0 (MetalBlockSystem___c__DisplayClass55_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem.<>c__DisplayClass55_0$$<OnBlockTakeOff>b__0
   void MetalBlockSystem___c__DisplayClass55_0___OnBlockTakeOff_b__0
   (MetalBlockSystem___c__DisplayClass55_0_o* __this, const MethodInfo* method); */

void MetalBlockSystem___c__DisplayClass55_0___OnBlockTakeOff_b__0_23ef400(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b63e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b63e = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x10),0);
      lVar4 = *(long *)puVar1;
                    /* try { // try from 024ef478 to 025ef47f has its CatchHandler @ 024ef540 */
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574(lVar4);
      }
      puVar1 = PTR_DAT_049b3b98;
      uVar5 = 0;
      if ((bRam0000000004f584c3 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b3b98,0);
        bRam0000000004f584c3 = 1;
        uVar5 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
        uVar5 = extraout_x1_00;
      }
      puVar1 = PTR_DAT_04a258d0;
      if ((bRam0000000004f584c2 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a258d0,uVar5);
        FUN_021f03f8(PTR_DAT_049b3b98);
        bRam0000000004f584c2 = 1;
      }
      if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
        FUN_02229774();
      }
      uVar5 = 0;
      if (lVar3 != 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (pcRam0000000004f58540 == (code *)0x0) {
        pcRam0000000004f58540 = (code *)FUN_021f03bc(&UNK_013bf2e5);
      }
                    /* WARNING: Could not recover jumptable at 0x03d24330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f58540)(0,uVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  return;
}

