/* IL2CPP: NakamaBootstrapper$$TryAutoLinkAccountAsync
Cysharp_Threading_Tasks_UniTask_LinkResult__o NakamaBootstrapper__TryAutoLinkAccountAsync (NakamaBootstrapper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$TryAutoLinkAccountAsync
   Cysharp_Threading_Tasks_UniTask_LinkResult__o NakamaBootstrapper__TryAutoLinkAccountAsync
   (NakamaBootstrapper_o* __this, const MethodInfo* method); */

undefined1  [16] NakamaBootstrapper__TryAutoLinkAccountAsync_22454d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_049b56d8;
  if ((bRam0000000004f49b40 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b56d8);
    FUN_021f03f8(PTR_DAT_049b56e0);
    FUN_021f03f8(PTR_DAT_049b56e8);
    bRam0000000004f49b40 = 1;
  }
  puVar3 = PTR_DAT_049b56e8;
  puVar2 = PTR_DAT_049b56e0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
                    /* catch() { ... } // from try @ 023455c8 with catch @ 02345574 */
  func_0x04608670((ulong)&uStack_90 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_70 = param_1;
  thunk_FUN_021f190c(&uStack_70,param_1);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar2);
  FUN_0235b7ac((ulong)&uStack_90 | 8,auStack_40,*(undefined8 *)puVar3);
                    /* try { // try from 023455c0 to 024455c7 has its CatchHandler @ 02345614 */
                    /* try { // try from 023455c8 to 02445627 has its CatchHandler @ 02345574 */
  return auStack_40;
}

