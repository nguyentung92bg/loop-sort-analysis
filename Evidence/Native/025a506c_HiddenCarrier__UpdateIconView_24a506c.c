/* IL2CPP: HiddenCarrier$$UpdateIconView
void HiddenCarrier__UpdateIconView (HiddenCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HiddenCarrier$$UpdateIconView
   void HiddenCarrier__UpdateIconView (HiddenCarrier_o* __this, const MethodInfo* method); */

void HiddenCarrier__UpdateIconView_24a506c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000004f4bb06 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c66b8);
    bRam0000000004f4bb06 = 1;
  }
  if (*(long *)(param_5 + 0x28) != 0) {
    Colors__Get_24f5718(&lStack_80,*(long *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x11c),0);
    plVar3 = (long *)StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                               (*(undefined8 *)(param_5 + 0xa8),0x1a9a2c8b,0);
    if ((*(long *)(param_5 + 0x100) != 0) &&
       (uVar2 = SettingsModule__IsColorBlindActive_2539ddc(*(long *)(param_5 + 0x100),0),
       plVar3 != (long *)0x0)) {
      if ((uVar2 & 1) == 0) {
        uStack_78 = 0;
      }
      UnityEngine_UI_Image__set_overrideSprite_3cfba84(plVar3,uStack_78,0);
      puVar1 = PTR_DAT_049c66b8;
      if ((uVar2 & 1) == 0) {
        uStack_6c = param_2;
        if (*(int *)(*(long *)PTR_DAT_049c66b8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lStack_80 == 0) goto LAB_025a5290;
        uStack_70 = UnityEngine_Material__GetColor_3be6388
                              (lStack_80,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
        uStack_68 = param_3;
        uStack_64 = param_4;
      }
      (**(code **)(*plVar3 + 0x2a8))
                (uStack_70,uStack_6c,uStack_68,uStack_64,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      if (*(long *)(param_5 + 0xa8) != 0) {
        lVar4 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_5 + 0xa8),0);
        if ((uVar2 & 1) == 0) {
          if (cRam0000000004f4a190 == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a190 = '\x01';
          }
          uVar5 = *(ulong *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0xc);
          fVar7 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14);
        }
        else {
          if (cRam0000000004f4a190 == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a190 = '\x01';
          }
          uVar6 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0xc);
          uVar5 = CONCAT44((float)((ulong)uVar6 >> 0x20) * 0.9,(float)uVar6 * 0.9);
          fVar7 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14) * _UNK_013aa3e4;
        }
        if (lVar4 != 0) {
          UnityEngine_Transform__set_localScale_3c2ddfc(uVar5,uVar5 >> 0x20,fVar7,lVar4,0);
          lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                            (*(undefined8 *)(param_5 + 0xa8),0x13d626de,0);
          if ((lVar4 != 0) &&
             (lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0), lVar4 != 0)) {
            UnityEngine_GameObject__SetActive_3c1ce34(lVar4,(uVar2 ^ 0xffffffff) & 1,0);
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

