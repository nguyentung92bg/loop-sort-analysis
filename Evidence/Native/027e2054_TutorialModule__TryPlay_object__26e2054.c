/* IL2CPP: TutorialModule$$TryPlay<object>
Cysharp_Threading_Tasks_UniTask_bool__o TutorialModule__TryPlay_object_ (TutorialModule_o* __this, System_Action_IContainerBuilder__o* installation, int32_t playCount, System_Threading_CancellationToken_o cancellationToken, const MethodInfo_26E2054* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TutorialModule$$TryPlay<object>
   Cysharp_Threading_Tasks_UniTask_bool__o TutorialModule__TryPlay_object_ (TutorialModule_o*
   __this, System_Action_IContainerBuilder__o* installation, int32_t playCount,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo_26E2054* method); */

undefined1  [16]
TutorialModule__TryPlay_object__26e2054
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  
                    /* catch() { ... } // from try @ 027e2048 with catch @ 027e2058 */
                    /* try { // try from 027e205c to 028e2063 has its CatchHandler @ 027e2080 */
                    /* try { // try from 027e2064 to 028e2083 has its CatchHandler @ 027e1a40 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027e205c with catch @ 027e2080
                        */
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* try { // try from 027e2084 to 028e222f has its CatchHandler @ 027e2084
                       catch() { ... } // from try @ 027e2084 with catch @ 027e2084
                       catch() { ... } // from try @ 027e22e8 with catch @ 027e2084
                       catch() { ... } // from try @ 027e2334 with catch @ 027e2084
                       catch() { ... } // from try @ 027e2480 with catch @ 027e2084
                       catch() { ... } // from try @ 027e2504 with catch @ 027e2084
                       catch() { ... } // from try @ 027e2578 with catch @ 027e2084 */
    FUN_021f03f8(PTR_DAT_049b5508);
    FUN_021f03f8(PTR_DAT_049b5518);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_02229774(param_5);
    }
  }
  uStack_60 = 0;
  uStack_68 = 0;
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
  lVar1 = *(long *)(*(long *)PTR_DAT_049b5508 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_d0 | 8,0,*(undefined4 *)(**(long **)(lVar1 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_d0 | 8,0);
  uStack_b0 = param_1;
  thunk_FUN_021f190c(&uStack_b0,param_1);
  uStack_a8 = param_2;
  thunk_FUN_021f190c(&uStack_a8,param_2);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,param_3);
  uStack_98 = param_4;
  thunk_FUN_021f190c(&uStack_98,0);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_d0 | 8,&uStack_d0,*(undefined8 *)(*(long *)(param_5 + 0x38) + 8));
  FUN_0235b7ac((ulong)&uStack_d0 | 8,auStack_50,*(undefined8 *)PTR_DAT_049b5518);
  return auStack_50;
}

