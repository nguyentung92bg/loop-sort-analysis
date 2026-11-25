/* IL2CPP: ButtonClickEffect$$OnPointerDown
void ButtonClickEffect__OnPointerDown (ButtonClickEffect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ButtonClickEffect$$OnPointerDown
   void ButtonClickEffect__OnPointerDown (ButtonClickEffect_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void ButtonClickEffect__OnPointerDown_257099c(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if ((bRam0000000004f4c1d8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c32e0);
    FUN_021f03f8(PTR_DAT_049c32e8);
    FUN_021f03f8(PTR_DAT_049c32f0);
    FUN_021f03f8(PTR_DAT_049c32f8);
    FUN_021f03f8(PTR_DAT_049c5858);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4c1d8 = 1;
  }
  auStack_68._0_8_ = 0;
  auStack_68._8_8_ = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if ((*(char *)(param_3 + 0x21) == '\0') && (*(char *)(param_3 + 0x48) == '\0')) {
    *(undefined1 *)(param_3 + 0x48) = 1;
    FUN_024f75b8(*(undefined8 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x38),1,0);
    lVar6 = UnityEngine_Component__get_transform_3c18724(param_3,0);
    if (lVar6 == 0) {
LAB_02670cd0:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__get_localScale_3c2dd20(lVar6,0);
    auStack_68 = LitMotion_LMotion__Create_2eaa1b4(0);
    puVar3 = PTR_DAT_049c2288;
    lVar6 = *(long *)PTR_DAT_049c2288;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar3;
    }
    auVar12 = FUN_02526574(auStack_68,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                           *(undefined8 *)PTR_DAT_049c2bc0);
    auStack_68 = auVar12;
    auVar12 = FUN_024f4e50(auStack_68,0x1b,*(undefined8 *)PTR_DAT_049c1680);
    uVar7 = UnityEngine_Component__get_transform_3c18724(param_3,0);
    auVar13 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar12._0_8_,auVar12._8_8_,uVar7,*(undefined8 *)PTR_DAT_049c1670);
    *(undefined1 (*) [12])(param_3 + 0x30) = auVar13;
    if (0.0 < *(float *)(param_3 + 0x24)) {
      lVar6 = *(long *)(param_3 + 0x50);
      if (lVar6 == 0) goto LAB_02670cd0;
      if (*(int *)(lVar6 + 0x18) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lVar6,&uStack_98,*(undefined8 *)PTR_DAT_049c32f8);
        puVar5 = PTR_DAT_049c32f0;
        puVar4 = PTR_DAT_049c32e8;
        puVar3 = PTR_DAT_049b8a18;
        uStack_78 = puStack_90;
        uStack_80 = uStack_98;
        puStack_90 = &uStack_80;
        uStack_70 = uStack_88;
        uStack_98 = 0;
        while( true ) {
          uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_80,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) break;
          lVar10 = *(long *)puVar5;
          lVar9 = *(long *)(lVar10 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
          lVar6 = lVar9;
          if ((uVar2 & 1) == 0) {
            lVar6 = FUN_02229718();
            lVar9 = *(long *)(lVar10 + 0x20);
            uVar2 = *(ushort *)(lVar9 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_02229718();
          }
          uVar7 = thunk_FUN_0224e54c(&uStack_80,
                                     *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60
                                    );
          func_0x04608620(&lStack_58,uVar7,uVar1);
          lVar6 = lStack_58;
          if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          fVar11 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lStack_58,0);
          if (cRam0000000004f4a198 == '\0') {
            FUN_021f03f8(puVar3);
            cRam0000000004f4a198 = '\x01';
          }
          lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
          param_2 = param_2 + *(float *)(lVar9 + 0x1c) * *(float *)(param_3 + 0x24);
          UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                    (fVar11 + *(float *)(lVar9 + 0x18) * *(float *)(param_3 + 0x24),param_2,lVar6,0)
          ;
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_80,*(undefined8 *)PTR_DAT_049c32e0);
      }
    }
  }
  return;
}

