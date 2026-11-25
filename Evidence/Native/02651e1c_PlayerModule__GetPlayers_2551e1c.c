/* IL2CPP: PlayerModule$$GetPlayers
Cysharp_Threading_Tasks_UniTask_Dictionary_string__PlayerInfo___o PlayerModule__GetPlayers (PlayerModule_o* __this, System_Collections_Generic_IEnumerable_string__o* userIds, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerModule$$GetPlayers
   Cysharp_Threading_Tasks_UniTask_Dictionary_string__PlayerInfo___o PlayerModule__GetPlayers
   (PlayerModule_o* __this, System_Collections_Generic_IEnumerable_string__o* userIds,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void PlayerModule__GetPlayers_2551e1c
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049b5d88;
  if ((bRam0000000004f4c07e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5d88);
    FUN_021f03f8(PTR_DAT_049caea0);
    FUN_021f03f8(PTR_DAT_049b5d98);
    bRam0000000004f4c07e = 1;
  }
  puVar3 = PTR_DAT_049caea0;
  puVar2 = PTR_DAT_049b5d98;
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
  func_0x04608670((ulong)&uStack_90 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_70 = param_2;
  thunk_FUN_021f190c(&uStack_70,param_2);
  uStack_68 = param_3;
  thunk_FUN_021f190c(&uStack_68,param_3);
  uStack_60 = param_4;
  thunk_FUN_021f190c(&uStack_60,0);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
                    /* try { // try from 02651f20 to 02752087 has its CatchHandler @ 02651f20
                       catch() { ... } // from try @ 02651f20 with catch @ 02651f20
                       catch() { ... } // from try @ 02652930 with catch @ 02651f20
                       catch() { ... } // from try @ 02652ad4 with catch @ 02651f20
                       catch() { ... } // from try @ 02652bc8 with catch @ 02651f20
                       catch() { ... } // from try @ 02652c50 with catch @ 02651f20 */
  FUN_0235b6cc((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar3);
  FUN_0235b7ac((ulong)&uStack_90 | 8,&uStack_a8,*(undefined8 *)puVar2);
  param_1[1] = uStack_a0;
  *param_1 = uStack_a8;
  param_1[2] = uStack_98;
  return;
}

