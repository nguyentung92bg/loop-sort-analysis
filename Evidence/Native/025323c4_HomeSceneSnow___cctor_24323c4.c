/* IL2CPP: HomeSceneSnow$$.cctor
void HomeSceneSnow___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSnow$$.cctor
   void HomeSceneSnow___cctor (const MethodInfo* method); */

void HomeSceneSnow___cctor_24323c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049c3918;
  puVar1 = PTR_DAT_049c3910;
  if ((bRam0000000004f4b7e0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3040);
    FUN_021f03f8(PTR_DAT_049c3910);
    FUN_021f03f8(PTR_DAT_049c3918);
    bRam0000000004f4b7e0 = 1;
  }
  lVar3 = FUN_021f04e4(*(undefined8 *)puVar1,3);
  uStack_80 = CONCAT44(uStack_80._4_4_,0x140);
  uStack_2c = 0x1a;
  uStack_28 = CONCAT44(uStack_28._4_4_,0x168);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = _UNK_013a76f0;
  uStack_30 = 0x3f333333;
  System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_____2a0e034
            (&uStack_50,&uStack_80,&uStack_28,&uStack_2c,&uStack_68,&uStack_30,*(undefined8 *)puVar2
            );
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x30) = uStack_40;
      *(undefined8 *)(lVar3 + 0x28) = uStack_48;
      *(undefined8 *)(lVar3 + 0x20) = uStack_50;
      uStack_2c = 0x1e0;
      uStack_28 = CONCAT44(uStack_28._4_4_,0x1a4);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_80 = _UNK_013a7c80;
      uStack_34 = 0x3f800000;
      uStack_30 = 0x10;
      System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_____2a0e034
                (&uStack_68,&uStack_28,&uStack_2c,&uStack_30,&uStack_80,&uStack_34,
                 *(undefined8 *)puVar2);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x48) = uStack_58;
        *(undefined8 *)(lVar3 + 0x40) = uStack_60;
        *(undefined8 *)(lVar3 + 0x38) = uStack_68;
        uStack_30 = 0x280;
        uStack_2c = 0x230;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_28 = _UNK_013a7868;
        uStack_38 = 0x3faccccd;
        uStack_34 = 9;
        System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_____2a0e034
                  (&uStack_80,&uStack_2c,&uStack_30,&uStack_34,&uStack_28,&uStack_38,
                   *(undefined8 *)puVar2);
        puVar1 = PTR_DAT_049c3040;
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x60) = uStack_70;
          *(undefined8 *)(lVar3 + 0x58) = uStack_78;
          *(undefined8 *)(lVar3 + 0x50) = uStack_80;
          **(long **)(*(long *)puVar1 + 0xb8) = lVar3;
          thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar3);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

