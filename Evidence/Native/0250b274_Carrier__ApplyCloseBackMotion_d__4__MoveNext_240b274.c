/* IL2CPP: Carrier.<ApplyCloseBackMotion>d__4$$MoveNext
void Carrier__ApplyCloseBackMotion_d__4__MoveNext (Carrier__ApplyCloseBackMotion_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Carrier.<ApplyCloseBackMotion>d__4$$MoveNext
   void Carrier__ApplyCloseBackMotion_d__4__MoveNext (Carrier__ApplyCloseBackMotion_d__4_o __this,
   const MethodInfo* method); */

void Carrier__ApplyCloseBackMotion_d__4__MoveNext_240b274(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b6ef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2970);
    FUN_021f03f8(PTR_DAT_049c2978);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b6ef = 1;
  }
  puVar3 = PTR_DAT_049c2978;
  puVar2 = PTR_DAT_049b6110;
  puVar1 = PTR_DAT_049b3b98;
  lVar9 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_0250b334:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar11 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_60._0_8_;
      uVar10 = auStack_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0250b4a8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0250b4a8:
      (*(code *)*puVar5)(uVar11,uVar10,puVar5[1]);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar9 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c(0,*(long *)(lVar9 + 0xe0),0,0);
    if (*(long *)(lVar9 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c(0,*(long *)(lVar9 + 0xe0),2,0);
    if (*(long *)(lVar9 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar9 + 0xe0),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
    auVar12 = LitMotion_LMotion__Create_2ea9f9c(0,0x42c80000,_UNK_013aa698,0);
    uVar11 = *(undefined8 *)(lVar9 + 0xe0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar12 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                        (auVar12._0_8_,auVar12._8_8_,uVar11,2,*(undefined8 *)puVar3);
    auVar12 = Extensions__AddTo_24d83f4(auVar12._0_8_,auVar12._8_8_ & 0xffffffff,lVar9,0);
    auVar12 = LitMotion_MotionHandleExtensions__AddTo_2eacb44
                        (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,*(undefined8 *)(lVar9 + 0xa0),0);
    uVar11 = GameBehaviourBase__get_ReturnToken_24f6818(lVar9,0);
    auVar12 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,uVar11,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = auVar12;
    thunk_FUN_021f190c(auStack_50,0);
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar11 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_60._0_8_;
      uVar10 = auStack_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0250b68c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0250b68c:
      iVar4 = (*(code *)*puVar5)(uVar11,uVar10,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c2970);
        return;
      }
    }
  }
  else {
    if (*param_1 != 1) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar11 = *(undefined8 *)(lVar9 + 0xe0);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar11,0,0);
      if ((uVar7 & 1) != 0) goto LAB_0250b844;
      uVar11 = *(undefined8 *)(lVar9 + 0xd8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar11,0,0);
      if ((uVar7 & 1) != 0) goto LAB_0250b844;
      if (*(long *)(lVar9 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(lVar9 + 0xa0),0);
      if ((char)param_1[6] != '\0') {
        if (*(long *)(lVar9 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar9 + 0xd8),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
        if (*(long *)(lVar9 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar9 + 0xe0),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
        if (*(long *)(lVar9 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c
                  (0x42c80000,*(long *)(lVar9 + 0xd8),0,0);
        if (*(long *)(lVar9 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c
                  (0x42c80000,*(long *)(lVar9 + 0xe0),0,0);
        goto LAB_0250b844;
      }
      if (*(long *)(lVar9 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar9 + 0xe0),0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0,0);
      if (*(long *)(lVar9 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c(0,*(long *)(lVar9 + 0xd8),0,0);
      if (*(long *)(lVar9 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar9 + 0xd8),0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
      auVar12 = LitMotion_LMotion__Create_2ea9f9c(0,0x42c80000,_UNK_013aa4b8,0);
      uVar11 = *(undefined8 *)(lVar9 + 0xd8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar12 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                          (auVar12._0_8_,auVar12._8_8_,uVar11,0,*(undefined8 *)puVar3);
      auVar12 = Extensions__AddTo_24d83f4(auVar12._0_8_,auVar12._8_8_ & 0xffffffff,lVar9,0);
      auVar12 = LitMotion_MotionHandleExtensions__AddTo_2eacb44
                          (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,*(undefined8 *)(lVar9 + 0xa0),0)
      ;
      uVar11 = GameBehaviourBase__get_ReturnToken_24f6818(lVar9,0);
      auStack_50 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                             (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,uVar11,0);
      puVar1 = PTR_DAT_049b5138;
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      thunk_FUN_021f190c(auStack_50,0);
      auStack_60 = auStack_50;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar11 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)auStack_60._0_8_;
        uVar10 = auStack_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0250ba84;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0250ba84:
        iVar4 = (*(code *)*puVar5)(uVar11,uVar10,puVar5[1]);
        if (iVar4 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
          thunk_FUN_021f190c(param_1 + 8,0);
          FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c2970);
          return;
        }
      }
      goto LAB_0250b334;
    }
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar11 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0250b724;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0250b724:
    (*(code *)*puVar5)(uVar11,uVar10,puVar5[1]);
  }
  auVar12 = LitMotion_LMotion__Create_2ea9f9c(0x42c80000,0,_UNK_013aa838,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar11 = *(undefined8 *)(lVar9 + 0xe0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar12 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                      (auVar12._0_8_,auVar12._8_8_,uVar11,2,*(undefined8 *)puVar3);
  auVar12 = Extensions__AddTo_24d83f4(auVar12._0_8_,auVar12._8_8_ & 0xffffffff,lVar9,0);
  auVar12 = LitMotion_MotionHandleExtensions__AddTo_2eacb44
                      (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,*(undefined8 *)(lVar9 + 0xa0),0);
  uVar11 = GameBehaviourBase__get_ReturnToken_24f6818(lVar9,0);
  LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
            (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,uVar11,0);
  auVar12 = LitMotion_LMotion__Create_2ea9f9c(0,0x42c80000,_UNK_013aa62c,0);
  auVar12 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                      (auVar12._0_8_,auVar12._8_8_,*(undefined8 *)(lVar9 + 0xe0),0,
                       *(undefined8 *)puVar3);
  auVar12 = Extensions__AddTo_24d83f4(auVar12._0_8_,auVar12._8_8_ & 0xffffffff,lVar9,0);
  auVar12 = LitMotion_MotionHandleExtensions__AddTo_2eacb44
                      (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,*(undefined8 *)(lVar9 + 0xa0),0);
  uVar11 = GameBehaviourBase__get_ReturnToken_24f6818(lVar9,0);
  LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
            (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,uVar11,0);
LAB_0250b844:
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

