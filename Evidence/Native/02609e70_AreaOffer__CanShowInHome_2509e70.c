/* IL2CPP: AreaOffer$$CanShowInHome
bool AreaOffer__CanShowInHome (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$CanShowInHome
   bool AreaOffer__CanShowInHome (AreaOffer_o* __this, const MethodInfo* method); */

uint AreaOffer__CanShowInHome_2509e70(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  uint uStack_24;
  
  uVar2 = AreaOffer__HasOffer_2509d04();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar4 = param_1[4];
  uVar1 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c015 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98,uVar1,0);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2c68);
    bRam0000000004f4c015 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(long *)(lVar4 + 0x18) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar4 + 0x18) + 0x88), lVar3 != 0)) {
    uStack_24 = uVar1;
    uVar2 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar3,&uStack_24,*(undefined8 *)PTR_DAT_049c2f60);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
LAB_02646da0:
      return uVar1 & 1;
    }
    if ((*(long *)(lVar4 + 0x18) != 0) &&
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x18) + 0x88), lVar4 != 0)) {
      uStack_24 = uVar1;
      lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar4,&uStack_24,*(undefined8 *)PTR_DAT_049c2c68);
      if (lVar4 != 0) {
        uStack_58 = *(undefined8 *)(lVar4 + 0x40);
        uStack_60 = *(undefined8 *)(lVar4 + 0x38);
        uStack_48 = *(undefined8 *)(lVar4 + 0x50);
        uStack_50 = *(undefined8 *)(lVar4 + 0x48);
        uStack_38 = *(undefined8 *)(lVar4 + 0x60);
        uStack_40 = *(undefined8 *)(lVar4 + 0x58);
        uVar1 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                          (&uStack_60,*(undefined8 *)PTR_DAT_049b5f98);
        goto LAB_02646da0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

