/* IL2CPP: EmailCodeMonitor.<Show>d__5$$MoveNext
void EmailCodeMonitor__Show_d__5__MoveNext (EmailCodeMonitor__Show_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailCodeMonitor.<Show>d__5$$MoveNext
   void EmailCodeMonitor__Show_d__5__MoveNext (EmailCodeMonitor__Show_d__5_o __this, const
   MethodInfo* method); */

void EmailCodeMonitor__Show_d__5__MoveNext_243e2cc(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_24 [4];
  
  if ((bRam0000000004f4b837 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3f98);
    FUN_021f03f8(PTR_DAT_049c3fa0);
    FUN_021f03f8(PTR_DAT_049c3fa8);
    FUN_021f03f8(PTR_DAT_049c3fb0);
    FUN_021f03f8(PTR_DAT_049c3fb8);
    FUN_021f03f8(PTR_DAT_049b5180);
    FUN_021f03f8(PTR_DAT_049b5188);
    FUN_021f03f8(PTR_DAT_049c3fc0);
    FUN_021f03f8(PTR_DAT_049c3958);
                    /* try { // try from 0253e358 to 0263e37b has its CatchHandler @ 0253e680 */
    FUN_021f03f8(PTR_DAT_049b51b0);
    bRam0000000004f4b837 = 1;
  }
  lVar6 = *(long *)(param_1 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
                    /* try { // try from 0253e37c to 0263e38b has its CatchHandler @ 0253e674 */
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    uStack_48 = *(undefined8 *)(param_1 + 0xe);
    uStack_50 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0253e5dc to 0263e5df has its CatchHandler @ 0253e654 */
      FUN_021f06a0();
    }
    EmailCodeMonitor__Cancel_243e100(lVar6);
                    /* try { // try from 0253e3a4 to 0263e3af has its CatchHandler @ 0253e638 */
    if (*(int *)(*(long *)PTR_DAT_049c3fb8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar3 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___Create_27df7e4
                      (*(undefined8 *)PTR_DAT_049c3fa8);
                    /* try { // try from 0253e3c0 to 0263e40f has its CatchHandler @ 0253e668 */
    *(long *)(lVar6 + 0x98) = lVar3;
    thunk_FUN_021f190c((long *)(lVar6 + 0x98),lVar3);
    plVar5 = (long *)(param_1 + 10);
    *plVar5 = lVar3;
    thunk_FUN_021f190c(plVar5,lVar3);
    lVar3 = *(long *)(lVar6 + 0x30);
    auStack_24[0] = 0;
    uVar4 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c3958,auStack_24);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0253e5e0 to 0263e5e3 has its CatchHandler @ 0253e650 */
      FUN_021f06a0(uVar4,uVar4);
    }
                    /* try { // try from 0253e418 to 0263e423 has its CatchHandler @ 0253e634 */
    Monitors__Additive_object__26888e8(lVar3,uVar4,1,*(undefined8 *)PTR_DAT_049c3fc0);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0253e5e4 to 0263e5e7 has its CatchHandler @ 0253e64c */
      FUN_021f06a0();
    }
                    /* try { // try from 0253e434 to 0263e483 has its CatchHandler @ 0253e660 */
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___get_Task_27dfe9c
              (*plVar5,&uStack_98,*(undefined8 *)PTR_DAT_049c3fb0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_60 = uStack_88;
    FUN_0235b0c0(&uStack_70,&uStack_98,*(undefined8 *)PTR_DAT_049b51b0);
    lVar7 = *(long *)PTR_DAT_049b5188;
    uStack_48 = uStack_90;
    uStack_50 = uStack_98;
    uStack_40 = uStack_88;
    lVar3 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    uVar4 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80));
    lVar3 = *(long *)(lVar7 + 0x20);
                    /* try { // try from 0253e4b4 to 0263e4e3 has its CatchHandler @ 0253e640 */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    if (iVar2 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = uStack_48;
      *(undefined8 *)(param_1 + 0xc) = uStack_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_40;
                    /* try { // try from 0253e4f0 to 0263e4f3 has its CatchHandler @ 0253e65c */
                    /* try { // try from 0253e4f4 to 0263e5bf has its CatchHandler @ 0253e0fc */
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c3f98);
      return;
    }
  }
  FUN_0235b3fc(&uStack_50,&uStack_98,*(undefined8 *)PTR_DAT_049b5180);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0253e5d8 to 0263e5db has its CatchHandler @ 0253e658 */
    FUN_021f06a0();
  }
  plVar5 = (long *)(lVar6 + 0x98);
  if (*plVar5 == *(long *)(param_1 + 10)) {
    *plVar5 = 0;
    thunk_FUN_021f190c(plVar5,0);
    if (*(long *)(lVar6 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0253e5e8 to 0263e5eb has its CatchHandler @ 0253e63c */
      FUN_021f06a0();
    }
    Monitors__Deactivate_256e214(*(long *)(lVar6 + 0x30),lVar6,0,0);
  }
  puVar1 = PTR_DAT_049c3fa0;
  *param_1 = -2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  thunk_FUN_021f190c(param_1 + 10,0);
                    /* try { // try from 0253e5c0 to 0263e5c3 has its CatchHandler @ 0253e67c */
  FUN_0235bed4(param_1 + 2,uStack_98,*(undefined8 *)puVar1);
                    /* try { // try from 0253e5c4 to 0263e5c7 has its CatchHandler @ 0253e684 */
                    /* try { // try from 0253e5c8 to 0263e5cb has its CatchHandler @ 0253e678 */
                    /* try { // try from 0253e5cc to 0263e5cf has its CatchHandler @ 0253e684 */
                    /* try { // try from 0253e5d0 to 0263e5d7 has its CatchHandler @ 0253e664 */
  return;
}

