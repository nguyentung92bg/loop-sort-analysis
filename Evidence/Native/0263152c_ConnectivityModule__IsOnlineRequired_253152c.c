/* IL2CPP: ConnectivityModule$$IsOnlineRequired
bool ConnectivityModule__IsOnlineRequired (ConnectivityModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectivityModule$$IsOnlineRequired
   bool ConnectivityModule__IsOnlineRequired (ConnectivityModule_o* __this, const MethodInfo*
   method); */

byte ConnectivityModule__IsOnlineRequired_253152c(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bf27 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c9f48);
    bRam0000000004f4bf27 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = RemoteConfigModule__GetDataClassNew_object__26a494c
                        (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049c9f48),
     puVar1 = PTR_DAT_049b5310, lVar4 != 0)) {
    bVar2 = 0;
    if (*(char *)(lVar4 + 0x10) != '\0') {
      lVar5 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar5 + 0xb8);
      uStack_38 = *(undefined8 *)(lVar5 + 0x68);
      uStack_40 = *(undefined8 *)(lVar5 + 0x60);
      uStack_28 = *(undefined8 *)(lVar5 + 0x78);
      uStack_30 = *(undefined8 *)(lVar5 + 0x70);
      iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_40,0);
      if (iVar3 < *(int *)(lVar4 + 0x14)) {
        bVar2 = 0;
      }
      else {
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        uStack_58 = *(undefined8 *)(lVar4 + 0x198);
        uStack_60 = *(undefined8 *)(lVar4 + 400);
        uStack_48 = *(undefined8 *)(lVar4 + 0x1a8);
        uStack_50 = *(undefined8 *)(lVar4 + 0x1a0);
        bVar2 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_60,0);
        bVar2 = bVar2 ^ 1;
      }
    }
    return bVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

