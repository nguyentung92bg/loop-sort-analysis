/* IL2CPP: HiddenCarrier$$ProcessFeature
void HiddenCarrier__ProcessFeature (HiddenCarrier_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HiddenCarrier$$ProcessFeature
   void HiddenCarrier__ProcessFeature (HiddenCarrier_o* __this, int32_t featureType,
   System_String_o* data, const MethodInfo* method); */

void HiddenCarrier__ProcessFeature_24a4fa0(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (param_2 != 1) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x110);
  uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar6 != 0) {
    Carrier__DisableInteraction_2403394(lVar6,uVar3,0);
    lVar6 = *(long *)(param_1 + 0x110);
    uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar6 != 0) {
      Carrier__DisableTransfer_23fe290(lVar6,uVar3,0);
      uVar3 = Level__GetColor_2555ca8(param_1 + 0xb8,param_3,0);
      *(undefined8 *)(param_1 + 0x11c) = uVar3;
      if (*(long *)(param_1 + 0xa0) != 0) {
        uVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xa0),0);
        uVar8 = 0;
        uVar9 = 0;
        uVar11 = 0;
        GameBehaviourBase__InjectColorType_24f5670(0,0,0,0,param_1,uVar3,uVar4,0);
        if ((bRam0000000004f4bb06 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c66b8);
          bRam0000000004f4bb06 = 1;
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          Colors__Get_24f5718(&lStack_80,*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x11c),
                              0);
          plVar5 = (long *)StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                     (*(undefined8 *)(param_1 + 0xa8),0x1a9a2c8b,0);
          if ((*(long *)(param_1 + 0x100) != 0) &&
             (uVar2 = SettingsModule__IsColorBlindActive_2539ddc(*(long *)(param_1 + 0x100),0),
             plVar5 != (long *)0x0)) {
            if ((uVar2 & 1) == 0) {
              uStack_78 = 0;
            }
            UnityEngine_UI_Image__set_overrideSprite_3cfba84(plVar5,uStack_78,0);
            puVar1 = PTR_DAT_049c66b8;
            if ((uVar2 & 1) == 0) {
              uStack_6c = uVar8;
              uStack_68 = uVar9;
              uStack_64 = uVar11;
              if (*(int *)(*(long *)PTR_DAT_049c66b8 + 0xe4) == 0) {
                FUN_021f0574();
              }
              if (lStack_80 == 0) goto LAB_025a5290;
              uStack_70 = UnityEngine_Material__GetColor_3be6388
                                    (lStack_80,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
            }
            (**(code **)(*plVar5 + 0x2a8))
                      (uStack_70,uStack_6c,uStack_68,uStack_64,plVar5,
                       *(undefined8 *)(*plVar5 + 0x2b0));
            if (*(long *)(param_1 + 0xa8) != 0) {
              lVar6 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0xa8),0);
              if ((uVar2 & 1) == 0) {
                if (cRam0000000004f4a190 == '\0') {
                  FUN_021f03f8(PTR_DAT_049bbf90);
                  cRam0000000004f4a190 = '\x01';
                }
                uVar7 = *(ulong *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0xc);
                fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14);
              }
              else {
                if (cRam0000000004f4a190 == '\0') {
                  FUN_021f03f8(PTR_DAT_049bbf90);
                  cRam0000000004f4a190 = '\x01';
                }
                uVar3 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0xc);
                uVar7 = CONCAT44((float)((ulong)uVar3 >> 0x20) * 0.9,(float)uVar3 * 0.9);
                fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14) *
                         _UNK_013aa3e4;
              }
              if (lVar6 != 0) {
                UnityEngine_Transform__set_localScale_3c2ddfc(uVar7,uVar7 >> 0x20,fVar10,lVar6,0);
                lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                  (*(undefined8 *)(param_1 + 0xa8),0x13d626de,0);
                if ((lVar6 != 0) &&
                   (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0), lVar6 != 0)) {
                  UnityEngine_GameObject__SetActive_3c1ce34(lVar6,(uVar2 ^ 0xffffffff) & 1,0);
                  return;
                }
              }
            }
          }
        }
LAB_025a5290:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

