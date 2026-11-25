/* IL2CPP: LongCarrier$$ProcessFeature
void LongCarrier__ProcessFeature (LongCarrier_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$ProcessFeature
   void LongCarrier__ProcessFeature (LongCarrier_o* __this, int32_t featureType, System_String_o*
   data, const MethodInfo* method); */

void LongCarrier__ProcessFeature_24aaf58
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,int param_5,
               long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if ((bRam0000000004f4bb2b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c68e8);
    FUN_021f03f8(PTR_DAT_049c68f0);
    FUN_021f03f8(PTR_DAT_049bed78);
    FUN_021f03f8(PTR_DAT_049c68f8);
    bRam0000000004f4bb2b = 1;
  }
  iStack_80 = 0;
  if (param_5 != 0x21) {
    return;
  }
  if ((param_6 != 0) && (lVar7 = System_String__Split_2f802dc(param_6,0x3a,0,0), lVar7 != 0)) {
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_025ab2e4:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    uVar8 = System_Int32__TryParse_30fc1b4(*(undefined8 *)(lVar7 + 0x20),&iStack_80,0);
    if ((uVar8 & 1) == 0) {
      iStack_80 = 5;
    }
    if (0xb < iStack_80) {
      iStack_80 = 0xc;
    }
    if (iStack_80 < 6) {
      iStack_80 = 5;
    }
    if (*(long *)(param_4 + 0x100) != 0) {
      *(int *)(*(long *)(param_4 + 0x100) + 0x1bc) = iStack_80;
      if ((1 < *(int *)(lVar7 + 0x18)) &&
         (uVar8 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(lVar7 + 0x28),0),
         (uVar8 & 1) == 0)) {
        *(undefined1 *)(param_4 + 0x118) = 1;
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_025ab2e4;
        uVar9 = Level__GetColor_2555ca8(param_4 + 0xb8,*(undefined8 *)(lVar7 + 0x28),0);
        param_2 = 0.0;
        param_3 = 0.0;
        *(undefined8 *)(param_4 + 0x110) = uVar9;
        GameBehaviourBase__InjectColorType_24f4d78(0,0,0,0,param_4,uVar9,0);
      }
      LongCarrier__PlaceGroupBlocks_24ab2e8(param_4,iStack_80);
      fVar11 = (float)LongCarrier__GetGroupCenter_24ab3d4(param_4,0,iStack_80);
      fVar13 = param_2;
      fVar14 = param_3;
      fVar12 = (float)LongCarrier__GetGroupCenter_24ab3d4(param_4,1,iStack_80);
      if (cRam0000000004f4a234 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a234 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if ((*(long *)(param_4 + 0x100) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_4 + 0x100) + 0x110), lVar7 != 0)) {
        param_3 = param_3 - fVar14;
        fVar14 = (float)(iStack_80 + -0xc);
        fVar11 = SQRT(param_3 * param_3 +
                      (fVar11 - fVar12) * (fVar11 - fVar12) +
                      (param_2 - fVar13) * (param_2 - fVar13)) * fVar14;
        fVar13 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar7,0);
        fVar13 = fVar11 * fVar13;
        fVar14 = fVar11 * fVar14;
        param_3 = fVar11 * param_3;
        LongCarrier__ShiftParts_24ab4a8
                  (fVar13,fVar14,param_3,*(undefined8 *)(param_4 + 0xa0),
                   *(undefined8 *)(param_4 + 0x120));
        LongCarrier__ShiftParts_24ab4a8
                  (fVar13 * 0.5,fVar14 * 0.5,param_3 * 0.5,*(undefined8 *)(param_4 + 0xa8),
                   *(undefined8 *)(param_4 + 0x128));
        puVar3 = PTR_DAT_049c68f8;
        puVar2 = PTR_DAT_049c68f0;
        puVar1 = PTR_DAT_049bed78;
        lVar7 = *(long *)(param_4 + 0xb0);
        if (lVar7 != 0) {
          iVar10 = 0;
          do {
            if (*(int *)(lVar7 + 0x18) <= iVar10) {
              LongCarrier__StretchCollider_24ab9ac(fVar13,fVar14,param_3,param_4);
              return;
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar7,iVar10,&lStack_98,*(undefined8 *)puVar2);
            if (lStack_98 == 0) break;
            uVar9 = UnityEngine_Component__get_transform_3c18724(lStack_98,0);
            if (*(long *)(param_4 + 0x140) == 0) break;
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (*(long *)(param_4 + 0x140),iVar10,&lStack_98,*(undefined8 *)puVar3);
            if (*(long *)(param_4 + 0x130) == 0) break;
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (*(long *)(param_4 + 0x130),iVar10,&uStack_7c,*(undefined8 *)puVar1);
            uVar6 = uStack_74;
            uVar5 = uStack_78;
            uVar4 = uStack_7c;
            if (*(long *)(param_4 + 0x138) == 0) break;
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (*(long *)(param_4 + 0x138),iVar10,&uStack_7c,*(undefined8 *)puVar1);
            uStack_a8 = uStack_90;
            lStack_b0 = lStack_98;
            uStack_a0 = uStack_88;
            LongCarrier__StretchPart_24ab5e8
                      (uVar4,uVar5,uVar6,uStack_7c,uStack_78,uStack_74,fVar11,param_4,uVar9,
                       &lStack_b0);
            lVar7 = *(long *)(param_4 + 0xb0);
            iVar10 = iVar10 + 1;
          } while (lVar7 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

