/* IL2CPP: ConveyorSlot$$AddBlock
Cysharp_Threading_Tasks_UniTask_o ConveyorSlot__AddBlock (ConveyorSlot_o* __this, Block_o* block, float delay, bool motion, int32_t lateralIdx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlot$$AddBlock
   Cysharp_Threading_Tasks_UniTask_o ConveyorSlot__AddBlock (ConveyorSlot_o* __this, Block_o* block,
   float delay, bool motion, int32_t lateralIdx, const MethodInfo* method); */

void ConveyorSlot__AddBlock_24b38a4
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_049c6bf0;
  if ((bRam0000000004f4bb77 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6bf0);
    bRam0000000004f4bb77 = 1;
  }
  uStack_50 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_b0 | 8,0);
  uStack_90 = param_2;
  thunk_FUN_021f190c(&uStack_90,param_2);
  uStack_98 = param_3;
                    /* try { // try from 025b393c to 026b3957 has its CatchHandler @ 025b401c */
  thunk_FUN_021f190c(&uStack_98,param_3);
  uStack_80 = CONCAT71(uStack_80._1_7_,param_4) & 0xffffffffffffff01;
  uStack_88 = CONCAT44(param_1,param_5);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_b0 | 8,&uStack_b0,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_b0 | 8,0);
                    /* try { // try from 025b3970 to 026b397b has its CatchHandler @ 025b42e4 */
  return;
}

