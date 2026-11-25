/* IL2CPP: LeaderboardSnapshot$$.cctor
void LeaderboardSnapshot___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardSnapshot$$.cctor
   void LeaderboardSnapshot___cctor (const MethodInfo* method); */

void LeaderboardSnapshot___cctor_2521bc4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c49a0;
  if ((bRam0000000004f4be75 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9718);
    FUN_021f03f8(PTR_DAT_049c49a0);
    bRam0000000004f4be75 = 1;
  }
  puVar2 = PTR_DAT_049c9718;
  lVar3 = *(long *)puVar1;
  uStack_28 = 0;
  uStack_30 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uStack_30 = puVar4[1];
  uVar5 = *puVar4;
  uStack_28 = puVar4[2];
  thunk_FUN_021f190c(&uStack_30,0);
  puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = uVar5;
  puVar4[4] = 0;
  puVar4[7] = uStack_28;
  puVar4[6] = uStack_30;
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
  return;
}

