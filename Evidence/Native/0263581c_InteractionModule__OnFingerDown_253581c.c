/* IL2CPP: InteractionModule$$OnFingerDown
void InteractionModule__OnFingerDown (InteractionModule_o* __this, Lean_Touch_LeanFinger_o* finger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$OnFingerDown
   void InteractionModule__OnFingerDown (InteractionModule_o* __this, Lean_Touch_LeanFinger_o*
   finger, const MethodInfo* method); */

void InteractionModule__OnFingerDown_253581c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  if ((bRam0000000004f4bf56 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca198);
    FUN_021f03f8(PTR_DAT_049ca1a0);
    FUN_021f03f8(PTR_DAT_049ca1a8);
    FUN_021f03f8(PTR_DAT_049ca1b0);
    FUN_021f03f8(PTR_DAT_049be018);
    bRam0000000004f4bf56 = 1;
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  if (param_2 != 0) {
    uVar3 = Lean_Touch_LeanFinger__get_IsOverGui_2e7b900(param_2,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      UnityEngine_Camera__ScreenPointToRay_3bceb78
                (&lStack_70,*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),0,
                 *(long *)(param_1 + 0x10),0);
      uVar2 = UnityEngine_LayerMask__op_Implicit_3c1e7dc(*(undefined4 *)(param_1 + 0x3c),0);
      if (*(int *)(*(long *)PTR_DAT_049be018 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049be018);
      }
      uStack_b0 = uStack_60;
      uStack_b8 = uStack_68;
      lStack_c0 = lStack_70;
      uVar3 = UnityEngine_Physics__Raycast_3c86a70(0x447a0000,&lStack_c0,&lStack_a0,uVar2,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = UnityEngine_RaycastHit__get_transform_3c89f0c(&lStack_a0,0);
      if (lVar4 != 0) {
        UnityEngine_Component__GetComponentInParent___Il2CppFullySharedGenericType__25c2048
                  (lVar4,1,&lStack_70,*(undefined8 *)PTR_DAT_049ca198);
        lVar4 = lStack_70;
        puVar1 = PTR_DAT_049ca1a0;
        plVar8 = *(long **)(param_1 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (lStack_70 == 0) {
            return;
          }
          if ((*(char *)(param_1 + 0x38) != '\0') && (lStack_70 != *(long *)(param_1 + 0x28))) {
            return;
          }
          plVar8 = (long *)thunk_FUN_0222c938(lStack_70,*(undefined8 *)PTR_DAT_049ca1a0);
          if (plVar8 != (long *)0x0) {
            lVar6 = *plVar8;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            uStack_118 = uStack_98;
            lStack_120 = lStack_a0;
            uStack_108 = uStack_88;
            uStack_110 = uStack_90;
            uStack_fc = uStack_7c;
            uStack_104 = uStack_84;
            uStack_100 = uStack_80;
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_02635abc;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar1,0);
LAB_02635abc:
            uStack_68 = uStack_118;
            lStack_70 = lStack_120;
            uStack_58 = uStack_108;
            uStack_60 = uStack_110;
            uStack_4c = uStack_fc;
            uStack_54 = uStack_104;
            uStack_50 = uStack_100;
            uVar3 = (*(code *)*puVar5)(plVar8,param_2,&lStack_70,puVar5[1]);
            if ((uVar3 & 1) == 0) {
              return;
            }
          }
          puVar1 = PTR_DAT_049ca1a8;
          lVar6 = thunk_FUN_0222c938(lVar4,*(undefined8 *)PTR_DAT_049ca1a8);
          if (lVar6 != 0) {
            uStack_148 = uStack_98;
            lStack_150 = lStack_a0;
            uStack_138 = uStack_88;
            uStack_140 = uStack_90;
            uStack_12c = uStack_7c;
            uStack_134 = uStack_84;
            uStack_130 = uStack_80;
            FUN_020206a0(0,*(undefined8 *)puVar1,lVar6,param_2,&lStack_150);
          }
        }
        else {
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          uStack_e8 = uStack_98;
          lStack_f0 = lStack_a0;
          uStack_d8 = uStack_88;
          uStack_e0 = uStack_90;
          uStack_cc = uStack_7c;
          uStack_d4 = uStack_84;
          uStack_d0 = uStack_80;
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049ca1b0) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02635a40;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049ca1b0,0);
LAB_02635a40:
          uStack_68 = uStack_e8;
          lStack_70 = lStack_f0;
          uStack_58 = uStack_d8;
          uStack_60 = uStack_e0;
          uStack_4c = uStack_cc;
          uStack_54 = uStack_d4;
          uStack_50 = uStack_d0;
          (*(code *)*puVar5)(plVar8,param_2,&lStack_70,puVar5[1]);
        }
                    /* try { // try from 02635a6c to 02735d43 has its CatchHandler @ 02635a6c
                       catch() { ... } // from try @ 02635a6c with catch @ 02635a6c
                       catch() { ... } // from try @ 02635db8 with catch @ 02635a6c
                       catch() { ... } // from try @ 02635e70 with catch @ 02635a6c
                       catch() { ... } // from try @ 02636000 with catch @ 02635a6c
                       catch() { ... } // from try @ 02636064 with catch @ 02635a6c
                       catch() { ... } // from try @ 0263647c with catch @ 02635a6c
                       catch() { ... } // from try @ 02636494 with catch @ 02635a6c
                       catch() { ... } // from try @ 02636500 with catch @ 02635a6c */
        *(long *)(param_1 + 0x20) = lVar4;
        thunk_FUN_021f190c((long *)(param_1 + 0x20),lVar4);
        if (*(long *)(param_1 + 0x18) != 0) {
          HapticModule__PlaySelection_2535208();
          if (*(long *)(param_1 + 0x40) == 0) {
            return;
          }
          Cysharp_Threading_Tasks_UniTaskCompletionSource__TrySetResult_37bf508
                    (*(long *)(param_1 + 0x40),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

