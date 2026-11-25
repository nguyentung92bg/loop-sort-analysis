/* IL2CPP: CollectionBarHomeElement$$UpdateBarReward
void CollectionBarHomeElement__UpdateBarReward (CollectionBarHomeElement_o* __this, CollectionBarSheet_Row_o* progressData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarHomeElement$$UpdateBarReward
   void CollectionBarHomeElement__UpdateBarReward (CollectionBarHomeElement_o* __this,
   CollectionBarSheet_Row_o* progressData, const MethodInfo* method); */

void CollectionBarHomeElement__UpdateBarReward_2414c58(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b73d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c2d08);
    FUN_021f03f8(PTR_DAT_049c2d10);
    bRam0000000004f4b73d = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x28) != 0)) {
    iVar1 = *(int *)(*(long *)(param_2 + 0x28) + 0x18);
    lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0x9927ed9b,0);
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar4,iVar1 < 2,0);
      if (1 < iVar1) {
        uStack_40 = *(undefined8 *)(param_1 + 0x38);
        uStack_38 = 0;
        uStack_30 = 0;
        thunk_FUN_021f190c(&uStack_40);
        uStack_38 = CONCAT44(uStack_38._4_4_,0x3f800000);
        uStack_50 = uStack_30;
        uStack_58 = uStack_38;
        uStack_60 = uStack_40;
        StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a34
                  (param_1,0xbcdc2f95,&uStack_60,0);
        uVar5 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
LAB_02514dcc:
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0x9927ed9b,uVar5,0);
        return;
      }
      if (*(long *)(param_2 + 0x28) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(param_2 + 0x28),0,&uStack_78,*(undefined8 *)PTR_DAT_049c2d10);
        uVar3 = uStack_74;
        uVar2 = uStack_78;
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x28), lVar4 != 0)) {
          uStack_24 = uStack_78;
          GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                    (lVar4,&uStack_24,&uStack_78,*(undefined8 *)PTR_DAT_049c2d00);
          StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a1c
                    (param_1,0xbcdc2f95,CONCAT44(uStack_74,uStack_78),0);
          if (*(long *)(param_1 + 0x58) != 0) {
            uVar5 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x58),uVar2,uVar3,0);
            goto LAB_02514dcc;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

