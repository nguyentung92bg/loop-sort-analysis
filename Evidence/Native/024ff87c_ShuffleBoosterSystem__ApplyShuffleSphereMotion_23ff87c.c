/* IL2CPP: ShuffleBoosterSystem$$ApplyShuffleSphereMotion
Cysharp_Threading_Tasks_UniTask_o ShuffleBoosterSystem__ApplyShuffleSphereMotion (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, Block_o* block, UnityEngine_Vector3_o fromPosition, UnityEngine_Vector3_o toPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBoosterSystem$$ApplyShuffleSphereMotion
   Cysharp_Threading_Tasks_UniTask_o ShuffleBoosterSystem__ApplyShuffleSphereMotion
   (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, Block_o* block, UnityEngine_Vector3_o
   fromPosition, UnityEngine_Vector3_o toPosition, const MethodInfo* method); */

void ShuffleBoosterSystem__ApplyShuffleSphereMotion_23ff87c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_DAT_049c2520;
  if ((bRam0000000004f4b692 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2520);
    bRam0000000004f4b692 = 1;
  }
  uStack_70 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  thunk_FUN_021f190c((ulong)&uStack_e0 | 8,0);
  uStack_c8 = param_8;
  thunk_FUN_021f190c(&uStack_c8,param_8);
  uStack_c0 = param_9;
  thunk_FUN_021f190c(&uStack_c0,param_9);
  uStack_b8 = CONCAT44(param_2,param_1);
  uStack_b0 = CONCAT44(param_4,param_3);
  uStack_a8 = CONCAT44(param_6,param_5);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_e0 | 8,&uStack_e0,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_e0 | 8,0);
  return;
}

