/* IL2CPP: Carrier$$AddBlock
Cysharp_Threading_Tasks_UniTask_o Carrier__AddBlock (Carrier_o* __this, Block_o* block, float delay, bool motion, int32_t lateralIdx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$AddBlock
   Cysharp_Threading_Tasks_UniTask_o Carrier__AddBlock (Carrier_o* __this, Block_o* block, float
   delay, bool motion, int32_t lateralIdx, const MethodInfo* method); */

void Carrier__AddBlock_23fe404
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_049c24d0;
  if ((bRam0000000004f4b6c9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c24d0);
    bRam0000000004f4b6c9 = 1;
  }
  uStack_50 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  thunk_FUN_021f190c((ulong)&uStack_a0 | 8,0);
  uStack_80 = param_2;
  thunk_FUN_021f190c(&uStack_80,param_2);
  uStack_88 = param_3;
  thunk_FUN_021f190c(&uStack_88,param_3);
  uStack_78 = CONCAT44(param_1,(undefined4)uStack_78);
  uStack_78 = CONCAT71(uStack_78._1_7_,param_4) & 0xffffffffffffff01;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_a0 | 8,0);
  return;
}

