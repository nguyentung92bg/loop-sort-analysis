/* IL2CPP: SceneModule$$Load
Cysharp_Threading_Tasks_UniTask_o SceneModule__Load (SceneModule_o* __this, int32_t target, bool waitPostLoad, bool cleanUpResources, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneModule$$Load
   Cysharp_Threading_Tasks_UniTask_o SceneModule__Load (SceneModule_o* __this, int32_t target, bool
   waitPostLoad, bool cleanUpResources, const MethodInfo* method); */

void SceneModule__Load_25389f8
               (undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_049ca338;
  if ((bRam0000000004f4bf70 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca338);
                    /* try { // try from 02638a40 to 02738ac7 has its CatchHandler @ 02639418 */
    bRam0000000004f4bf70 = 1;
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
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_78 = param_1;
  thunk_FUN_021f190c(&uStack_78,param_1);
  uStack_70 = CONCAT44(CONCAT31(CONCAT21(uStack_70._6_2_,param_3),param_4),param_2) &
              0xffff0101ffffffff;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_90 | 8,0);
  return;
}

