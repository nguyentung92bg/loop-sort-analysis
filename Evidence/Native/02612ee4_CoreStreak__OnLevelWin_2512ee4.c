/* IL2CPP: CoreStreak$$OnLevelWin
void CoreStreak__OnLevelWin (CoreStreak_o* __this, LevelWinMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreak$$OnLevelWin
   void CoreStreak__OnLevelWin (CoreStreak_o* __this, LevelWinMessage_o m, const MethodInfo*
   method); */

void CoreStreak__OnLevelWin_2512ee4(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 02612efc to 02712f03 has its CatchHandler @ 02613594 */
  if ((bRam0000000004f4be01 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 02612f10 to 02712f17 has its CatchHandler @ 02613584 */
    bRam0000000004f4be01 = 1;
  }
  uVar4 = CoreStreak__IsUnlocked_2512e64(param_1);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 02612f20 to 02712f47 has its CatchHandler @ 02613590 */
    lVar5 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(lVar5 + 0xb8);
    uStack_38 = *(undefined8 *)(lVar5 + 0x848);
    uStack_40 = *(undefined8 *)(lVar5 + 0x840);
    uStack_28 = *(undefined8 *)(lVar5 + 0x858);
    uStack_30 = *(undefined8 *)(lVar5 + 0x850);
                    /* try { // try from 02612f54 to 02712f5b has its CatchHandler @ 0261357c */
    iVar2 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_40,0);
                    /* try { // try from 02612f64 to 02712f6f has its CatchHandler @ 02613578 */
    iVar3 = 5;
    if (iVar2 + 1 < 5) {
      iVar3 = iVar2 + 1;
    }
    CloudPrefsInt__set_Value_24e9a2c(*(long *)(*(long *)puVar1 + 0xb8) + 0x840,iVar3,0);
    lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
    uStack_58 = *(undefined8 *)(lVar5 + 0x848);
    uStack_60 = *(undefined8 *)(lVar5 + 0x840);
    uStack_48 = *(undefined8 *)(lVar5 + 0x858);
    uStack_50 = *(undefined8 *)(lVar5 + 0x850);
    iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_60,0);
    lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
    uStack_78 = *(undefined8 *)(lVar5 + 0x868);
    uStack_80 = *(undefined8 *)(lVar5 + 0x860);
    uStack_68 = *(undefined8 *)(lVar5 + 0x878);
    uStack_70 = *(undefined8 *)(lVar5 + 0x870);
                    /* try { // try from 02612fbc to 02712fcb has its CatchHandler @ 026135c4 */
    iVar2 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_80,0);
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
                    /* try { // try from 02612fd4 to 02712ff3 has its CatchHandler @ 026135e4 */
    CloudPrefsInt__set_Value_24e9a2c(*(long *)(*(long *)puVar1 + 0xb8) + 0x860,iVar3,0);
  }
  return;
}

