/* IL2CPP: CollectionBarHomeElement$$Render
void CollectionBarHomeElement__Render (CollectionBarHomeElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarHomeElement$$Render
   void CollectionBarHomeElement__Render (CollectionBarHomeElement_o* __this, const MethodInfo*
   method); */

void CollectionBarHomeElement__Render_24142b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b739 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4b739 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x88), lVar3 != 0)) {
    uStack_40 = 0xb;
    lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar3,&uStack_40,*(undefined8 *)PTR_DAT_049c2c68);
    puVar2 = PTR_DAT_049b5fc8;
    puVar1 = PTR_DAT_049b5050;
    if (lVar3 != 0) {
      uStack_68 = *(undefined8 *)(lVar3 + 0x40);
      uStack_70 = *(undefined8 *)(lVar3 + 0x38);
      uStack_58 = *(undefined8 *)(lVar3 + 0x50);
      uStack_60 = *(undefined8 *)(lVar3 + 0x48);
      uStack_48 = *(undefined8 *)(lVar3 + 0x60);
      uStack_50 = *(undefined8 *)(lVar3 + 0x58);
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (&uStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049b5fa8);
      uStack_80 = CONCAT44(uStack_3c,uStack_40);
      uStack_78 = uStack_38;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar2 = PTR_DAT_049b6110;
      auVar5 = TimeProvider__get_UtcNow_24f95ec(0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = System_DateTimeOffset__Subtract_30e2d84(&uStack_80,auVar5._0_8_,auVar5._8_8_,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar2);
      }
      uVar4 = Extensions__ToReadableString_24e7038(uVar4,2,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xce1592a9,uVar4,0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

