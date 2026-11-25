/* IL2CPP: CollectItems$$ApplyCollectTextMotion
Cysharp_Threading_Tasks_UniTask_o CollectItems__ApplyCollectTextMotion (CollectItems_o* __this, int32_t count, StatefulUI_Runtime_Core_StatefulComponent_o* collectView, UnityEngine_Vector2_o direction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectItems$$ApplyCollectTextMotion
   Cysharp_Threading_Tasks_UniTask_o CollectItems__ApplyCollectTextMotion (CollectItems_o* __this,
   int32_t count, StatefulUI_Runtime_Core_StatefulComponent_o* collectView, UnityEngine_Vector2_o
   direction, const MethodInfo* method); */

void CollectItems__ApplyCollectTextMotion_250ebf4
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

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
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049c91c8;
  if ((bRam0000000004f4bded & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c91c8);
    bRam0000000004f4bded = 1;
  }
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
  uStack_48 = 0;
  uStack_50 = 0;
  thunk_FUN_021f190c((ulong)&uStack_a0 | 8,0);
  uStack_80 = CONCAT44(uStack_80._4_4_,param_4);
  uStack_88 = param_5;
  thunk_FUN_021f190c(&uStack_88,param_5);
  uStack_80 = CONCAT44(param_1,(undefined4)uStack_80);
  uStack_78 = CONCAT44(uStack_78._4_4_,param_2);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_a0 | 8,0);
  return;
}

