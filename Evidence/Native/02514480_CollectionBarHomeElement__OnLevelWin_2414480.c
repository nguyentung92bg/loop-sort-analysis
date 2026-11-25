/* IL2CPP: CollectionBarHomeElement$$OnLevelWin
void CollectionBarHomeElement__OnLevelWin (CollectionBarHomeElement_o* __this, LevelWinMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarHomeElement$$OnLevelWin
   void CollectionBarHomeElement__OnLevelWin (CollectionBarHomeElement_o* __this, LevelWinMessage_o
   m, const MethodInfo* method); */

void CollectionBarHomeElement__OnLevelWin_2414480(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auStack_d0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_28;
  
  if ((bRam0000000004f4b73a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2c70);
    FUN_021f03f8(PTR_DAT_049c2c78);
    FUN_021f03f8(PTR_DAT_049c2c80);
    bRam0000000004f4b73a = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar3 = CollectionBar__IsLocked_2511f18(*(long *)(param_1 + 0x40),0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar3 = CollectionBar__IsProgressComplete_251291c(*(long *)(param_1 + 0x40),0);
      if ((uVar3 & 1) != 0) {
        return;
      }
      uVar5 = 0x1b;
      if (param_2 != 2) {
        uVar5 = 0x19;
      }
      uVar1 = 0x1a;
      if (param_2 != 1) {
        uVar1 = uVar5;
      }
      if ((*(long *)(param_1 + 0x50) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0xe0), lVar4 != 0)) {
        uVar2 = ConstantSheetBase_object___GetInt_281c070
                          (lVar4,uVar1,*(undefined8 *)PTR_DAT_049c2c70);
        *(uint *)(param_1 + 0xb4) = uVar2;
        uStack_78 = 0;
        uStack_68 = 0;
        uStack_58 = 0;
        lVar4 = *(long *)(param_1 + 0x60);
        lStack_60 = (ulong)uVar2 << 0x20;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_80 = *(undefined8 *)PTR_DAT_049c2c80;
        uStack_70 = 0x32;
        thunk_FUN_021f190c(&uStack_80);
        if (lVar4 != 0) {
          func_0x04608620(auStack_d0,&uStack_80,0x50);
          EconomyModule__Add_25332a4(lVar4,auStack_d0,0);
          *(undefined1 *)(param_1 + 0xbc) = 1;
          if (param_3 == 0) {
            return;
          }
          uStack_28 = (ulong)*(uint *)(param_1 + 0xb4) << 0x20 | 0x32;
          FUN_02333498(param_3,&uStack_28,*(undefined8 *)PTR_DAT_049c2c78);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

