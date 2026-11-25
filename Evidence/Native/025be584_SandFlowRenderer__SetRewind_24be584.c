/* IL2CPP: SandFlowRenderer$$SetRewind
void SandFlowRenderer__SetRewind (SandFlowRenderer_o* __this, float speed, float hold, float fallMin, float fallMax, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$SetRewind
   void SandFlowRenderer__SetRewind (SandFlowRenderer_o* __this, float speed, float hold, float
   fallMin, float fallMax, const MethodInfo* method); */

void SandFlowRenderer__SetRewind_24be584
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar4 = PTR_DAT_049c6e10;
  if ((bRam0000000004f4bbc3 & 1) == 0) {
    uStack_28 = param_1._8_4_;
    uStack_24 = param_1._12_4_;
    uStack_30 = param_1._0_4_;
    uStack_2c = param_1._4_4_;
    FUN_021f03f8(PTR_DAT_049c6e10);
    param_1._4_4_ = uStack_2c;
    param_1._0_4_ = uStack_30;
    param_1._8_4_ = uStack_28;
    param_1._12_4_ = uStack_24;
    bRam0000000004f4bbc3 = 1;
  }
  auVar7._0_4_ = param_1._0_4_;
  auVar7._4_4_ = param_2;
  lVar5 = *(long *)puVar4;
  lVar6 = *(long *)(param_5 + 0x2d8);
  auVar7._8_4_ = param_3;
  auVar3._8_4_ = _UNK_013aa108;
  auVar3._0_8_ = _UNK_013aa100;
  auVar7._12_4_ = param_4;
  auVar3._12_4_ = _UNK_013aa10c;
  auVar2._4_4_ = -(uint)(param_2 < (float)((ulong)_UNK_013aa100 >> 0x20));
  auVar2._0_4_ = -(uint)(auVar7._0_4_ < (float)_UNK_013aa100);
  auVar2._8_4_ = -(uint)(param_3 < _UNK_013aa108);
  auVar2._12_4_ = -(uint)(param_4 < _UNK_013aa10c);
  auVar7 = auVar7 ^ (auVar7 ^ auVar3) & auVar2;
  *(long *)(param_5 + 0x110) = auVar7._8_8_;
  *(long *)(param_5 + 0x108) = auVar7._0_8_;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_2c = *(undefined4 *)(param_5 + 0x10c);
  uStack_30 = *(undefined4 *)(param_5 + 0x108);
  uStack_24 = *(undefined4 *)(param_5 + 0x114);
  uStack_28 = *(undefined4 *)(param_5 + 0x110);
  uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(0,uVar1,0);
  }
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar6,0);
  }
  if (pcRam0000000004f56e88 == (code *)0x0) {
    pcRam0000000004f56e88 = (code *)FUN_021f03bc(&UNK_013b9000);
  }
  (*pcRam0000000004f56e88)(lVar5,uVar1,&uStack_30);
  return;
}

