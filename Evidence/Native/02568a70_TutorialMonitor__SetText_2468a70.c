/* IL2CPP: TutorialMonitor$$SetText
void TutorialMonitor__SetText (TutorialMonitor_o* __this, System_String_o* text, float offset, UnityEngine_Vector3_o worldPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TutorialMonitor$$SetText
   void TutorialMonitor__SetText (TutorialMonitor_o* __this, System_String_o* text, float offset,
   UnityEngine_Vector3_o worldPoint, const MethodInfo* method); */

void TutorialMonitor__SetText_2468a70
               (float param_1,undefined4 param_2,float param_3,undefined4 param_4,long param_5,
               long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [128];
  long alStack_1f0 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4b973 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ef0);
    FUN_021f03f8(PTR_DAT_049c53b0);
    FUN_021f03f8(PTR_DAT_049c53b8);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4b973 = 1;
  }
  auStack_280._0_8_ = 0;
  auStack_280._8_8_ = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((*(long *)(param_5 + 0xc0) != 0) &&
     (lVar3 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(param_5 + 0xc0),0),
     puVar2 = PTR_DAT_049b3b98, lVar3 != 0)) {
    plVar4 = (long *)UnityEngine_Transform__get_parent_3c2d470(lVar3,0);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else if (*plVar4 != *(long *)PTR_DAT_049bc0c8) {
      plVar4 = (long *)0x0;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(plVar4,0,0);
    if ((uVar5 & 1) != 0) {
LAB_02568d58:
      if (*(long *)(lVar1 + 0x28) == lStack_68) {
        return;
      }
      goto LAB_02568d9c;
    }
    if ((plVar4 != (long *)0x0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(plVar4,0), lVar3 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar3,1,0);
      MonitorBase__WorldToCanvasSpace_256cc8c(param_2,param_3,param_4,param_5,plVar4,0);
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                (plVar4,alStack_1f0,*(undefined8 *)PTR_DAT_049c2ef0);
      if (alStack_1f0[0] != 0) {
        fVar7 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(alStack_1f0[0],0);
        if (cRam0000000004f4a196 == '\0') {
          FUN_021f03f8(PTR_DAT_049b8a18);
          cRam0000000004f4a196 = '\x01';
        }
        UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                  (fVar7 + *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x10) * param_1,
                   param_3 + *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x14) *
                             param_1,alStack_1f0[0],0);
        if (param_6 != 0) {
          fVar7 = (float)*(int *)(param_6 + 0x10) * _UNK_013aa85c;
          Unity_Collections_FixedString128Bytes__op_Implicit_390eda0
                    (alStack_1f0,**(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
          func_0x04608620(&uStack_f0,alStack_1f0,0x80);
          Unity_Collections_FixedString128Bytes__op_Implicit_390eda0(auStack_270,param_6,0);
          func_0x04608620(&uStack_170,auStack_270,0x80);
          auStack_280 = LitMotion_LMotion_String__Create128Bytes_2eaa4d8
                                  (fVar7,&uStack_f0,&uStack_170,0);
          puVar2 = PTR_DAT_049c2288;
          lVar3 = *(long *)PTR_DAT_049c2288;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            FUN_021f0574();
            lVar3 = *(long *)puVar2;
          }
          auVar8 = FUN_02526574(auStack_280,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x60),
                                *(undefined8 *)PTR_DAT_049c53b8);
          auVar8 = LitMotion_Extensions_LitMotionTextMeshProExtensions__BindToText___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266eb90
                             (auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(param_5 + 0xc0),
                              *(undefined8 *)PTR_DAT_049c53b0);
          uVar6 = UnityEngine_Component__get_gameObject_3c187f4(param_5,0);
          LitMotion_MotionHandleExtensions__AddTo_2eacb88
                    (auVar8._0_8_,auVar8._8_8_ & 0xffffffff,uVar6,0);
          goto LAB_02568d58;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02568d9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

