/* IL2CPP: CollectionBarHomeElement$$ApplyClaimMotions
Cysharp_Threading_Tasks_UniTask_o CollectionBarHomeElement__ApplyClaimMotions (CollectionBarHomeElement_o* __this, bool canSkip, System_Threading_CancellationToken_o token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarHomeElement$$ApplyClaimMotions
   Cysharp_Threading_Tasks_UniTask_o CollectionBarHomeElement__ApplyClaimMotions
   (CollectionBarHomeElement_o* __this, bool canSkip, System_Threading_CancellationToken_o token,
   const MethodInfo* method); */

void CollectionBarHomeElement__ApplyClaimMotions_2414f60
               (undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 auStack_a8 [5];
  byte bStack_80;
  
  puVar1 = PTR_DAT_049c2d28;
  if ((bRam0000000004f4b740 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d28);
    bRam0000000004f4b740 = 1;
  }
  func_0x04608670(auStack_c8,0,0x98);
  thunk_FUN_021f190c(auStack_c0,0);
  uStack_b0 = param_1;
  thunk_FUN_021f190c(&uStack_b0,param_1);
  auStack_a8[0] = param_3;
  bStack_80 = param_2 & 1;
  thunk_FUN_021f190c(auStack_a8,0);
  auStack_c8[0] = 0xffffffff;
  FUN_0235c17c(auStack_c0,auStack_c8,*(undefined8 *)puVar1);
  FUN_0235acf0(auStack_c0,0);
  return;
}

