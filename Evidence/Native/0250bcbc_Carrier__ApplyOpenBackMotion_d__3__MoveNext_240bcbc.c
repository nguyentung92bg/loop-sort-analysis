/* IL2CPP: Carrier.<ApplyOpenBackMotion>d__3$$MoveNext
void Carrier__ApplyOpenBackMotion_d__3__MoveNext (Carrier__ApplyOpenBackMotion_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Carrier.<ApplyOpenBackMotion>d__3$$MoveNext
   void Carrier__ApplyOpenBackMotion_d__3__MoveNext (Carrier__ApplyOpenBackMotion_d__3_o __this,
   const MethodInfo* method); */

void Carrier__ApplyOpenBackMotion_d__3__MoveNext_240bcbc(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b6f0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2980);
    FUN_021f03f8(PTR_DAT_049c2978);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b6f0 = 1;
  }
  puVar1 = PTR_DAT_049b3b98;
  iVar2 = *param_1;
  lVar7 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (iVar2 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_0250bd90:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar8 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0250bec8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0250bec8:
      (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
    }
    auVar10 = LitMotion_LMotion__Create_2ea9f9c(0x42c80000,0,_UNK_013aa698,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar8 = *(undefined8 *)(lVar7 + 0xe0);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar10 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                        (auVar10._0_8_,auVar10._8_8_,uVar8,2,*(undefined8 *)PTR_DAT_049c2978);
    auVar10 = Extensions__AddTo_24d83f4(auVar10._0_8_,auVar10._8_8_ & 0xffffffff,lVar7,0);
    auVar10 = LitMotion_MotionHandleExtensions__AddTo_2eacb44
                        (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,*(undefined8 *)(lVar7 + 0xa0),0);
    uVar8 = GameBehaviourBase__get_ReturnToken_24f6818(lVar7,0);
    auVar10 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,uVar8,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = auVar10;
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
    uVar8 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0250c06c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0250c06c:
      iVar2 = (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c2980);
        return;
      }
    }
LAB_0250c080:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar8 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0250c100;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0250c100:
      (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
    }
    auVar10 = LitMotion_LMotion__Create_2ea9f9c(0x42c80000,0,_UNK_013aa4b8,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar8 = *(undefined8 *)(lVar7 + 0xd8);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar10 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                        (auVar10._0_8_,auVar10._8_8_,uVar8,0,*(undefined8 *)PTR_DAT_049c2978);
    auVar10 = Extensions__AddTo_24d83f4(auVar10._0_8_,auVar10._8_8_ & 0xffffffff,lVar7,0);
    auVar10 = LitMotion_MotionHandleExtensions__AddTo_2eacb44
                        (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,*(undefined8 *)(lVar7 + 0xa0),0);
    uVar8 = GameBehaviourBase__get_ReturnToken_24f6818(lVar7,0);
    auVar10 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,uVar8,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = auVar10;
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
    uVar8 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0250c2a4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0250c2a4:
      iVar2 = (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c2980);
        return;
      }
    }
  }
  else {
    if (iVar2 == 1) {
      auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
      goto LAB_0250c080;
    }
    if (iVar2 != 2) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar8 = *(undefined8 *)(lVar7 + 0xe0);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(uVar8,0,0);
      if ((uVar5 & 1) != 0) goto LAB_0250c38c;
      uVar8 = *(undefined8 *)(lVar7 + 0xd8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(uVar8,0,0);
      if ((uVar5 & 1) != 0) goto LAB_0250c38c;
      if (*(long *)(lVar7 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(lVar7 + 0xa0),0);
      if ((char)param_1[6] != '\0') {
        if (*(long *)(lVar7 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0xd8),0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
        if (*(long *)(lVar7 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar7 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0xe0),0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
        goto LAB_0250c38c;
      }
      if (*(long *)(lVar7 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0xe0),0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar4,1,0);
      if (*(long *)(lVar7 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0xd8),0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar4,1,0);
      if (*(long *)(lVar7 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c
                (0x42c80000,*(long *)(lVar7 + 0xe0),0,0);
      if (*(long *)(lVar7 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c
                (0x42c80000,*(long *)(lVar7 + 0xe0),2,0);
      if (*(long *)(lVar7 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c
                (0x42c80000,*(long *)(lVar7 + 0xd8),0,0);
      auVar10 = LitMotion_LMotion__Create_2ea9f9c(0x42c80000,0,_UNK_013aa838,0);
      uVar8 = *(undefined8 *)(lVar7 + 0xe0);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar1 = PTR_DAT_049c2978;
      auVar10 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                          (auVar10._0_8_,auVar10._8_8_,uVar8,0,*(undefined8 *)PTR_DAT_049c2978);
      auVar10 = Extensions__AddTo_24d83f4(auVar10._0_8_,auVar10._8_8_ & 0xffffffff,lVar7,0);
      auVar10 = LitMotion_MotionHandleExtensions__AddTo_2eacb44
                          (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,*(undefined8 *)(lVar7 + 0xa0),0)
      ;
      uVar8 = GameBehaviourBase__get_ReturnToken_24f6818(lVar7,0);
      LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,uVar8,0);
      auVar10 = LitMotion_LMotion__Create_2ea9f9c(0,0x42c80000,_UNK_013aa62c,0);
      auVar10 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                          (auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(lVar7 + 0xe0),2,
                           *(undefined8 *)puVar1);
      auVar10 = Extensions__AddTo_24d83f4(auVar10._0_8_,auVar10._8_8_ & 0xffffffff,lVar7,0);
      auVar10 = LitMotion_MotionHandleExtensions__AddTo_2eacb44
                          (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,*(undefined8 *)(lVar7 + 0xa0),0)
      ;
      uVar8 = GameBehaviourBase__get_ReturnToken_24f6818(lVar7,0);
      auStack_50 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                             (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,uVar8,0);
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      thunk_FUN_021f190c(auStack_50,0);
      auStack_60 = auStack_50;
      uVar5 = FUN_02511f18(auStack_60,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c2980);
        return;
      }
      goto LAB_0250bd90;
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
  uVar8 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar4 = *(long *)auStack_60._0_8_;
    uVar9 = auStack_60._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0250c338;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0250c338:
    (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar7 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0xe0),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
  if (*(long *)(lVar7 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0xd8),0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
LAB_0250c38c:
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

