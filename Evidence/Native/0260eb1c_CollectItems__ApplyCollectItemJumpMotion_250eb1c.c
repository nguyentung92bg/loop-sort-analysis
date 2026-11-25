/* IL2CPP: CollectItems$$ApplyCollectItemJumpMotion
Cysharp_Threading_Tasks_UniTask_o CollectItems__ApplyCollectItemJumpMotion (CollectItems_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, UnityEngine_RectTransform_o* t, HomeLiveOpsSlot_o slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectItems$$ApplyCollectItemJumpMotion
   Cysharp_Threading_Tasks_UniTask_o CollectItems__ApplyCollectItemJumpMotion (CollectItems_o*
   __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, UnityEngine_RectTransform_o* t,
   HomeLiveOpsSlot_o slot, const MethodInfo* method); */

void CollectItems__ApplyCollectItemJumpMotion_250eb1c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c91c0;
  if ((bRam0000000004f4bdec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c91c0);
    bRam0000000004f4bdec = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_60 = param_2;
  thunk_FUN_021f190c(&uStack_60,param_2);
  uStack_68 = param_3;
  thunk_FUN_021f190c(&uStack_68,param_3);
  uStack_50 = param_4[1];
  uStack_58 = *param_4;
  uStack_48 = param_4[2];
  thunk_FUN_021f190c(&uStack_50,0);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_80 | 8,0);
  return;
}

