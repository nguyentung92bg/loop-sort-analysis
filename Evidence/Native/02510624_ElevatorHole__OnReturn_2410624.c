/* IL2CPP: ElevatorHole$$OnReturn
void ElevatorHole__OnReturn (ElevatorHole_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$OnReturn
   void ElevatorHole__OnReturn (ElevatorHole_o* __this, const MethodInfo* method); */

void ElevatorHole__OnReturn_2410624(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_58;
  
  if ((bRam0000000004f4b71d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2628);
    FUN_021f03f8(PTR_DAT_049c2630);
    FUN_021f03f8(PTR_DAT_049c2638);
    FUN_021f03f8(PTR_DAT_049c2618);
    FUN_021f03f8(PTR_DAT_049c2640);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b71d = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  GameBehaviourBase__OnReturn_24f6ea8(param_1,0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    UnityEngine_Transform__set_localPosition_3c2c450
              (*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),
               *(undefined4 *)(param_1 + 0x110),*(long *)(param_1 + 0xa8),0);
    if (*(long *)(param_1 + 0xa8) != 0) {
      UnityEngine_Transform__set_localScale_3c2ddfc
                (*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),
                 *(undefined4 *)(param_1 + 0x11c),*(long *)(param_1 + 0xa8),0);
      puVar9 = PTR_DAT_049c2638;
      puVar8 = PTR_DAT_049c2630;
      puVar7 = PTR_DAT_049c2628;
      puVar6 = PTR_DAT_049c2618;
      puVar4 = PTR_DAT_049b3b98;
      if (*(long *)(param_1 + 0xf0) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(param_1 + 0xf0),&uStack_98,*(undefined8 *)PTR_DAT_049c2640);
        puVar5 = PTR_DAT_049bbf90;
        puStack_78 = puStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        uStack_98 = 0;
        puStack_90 = &uStack_80;
        while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&uStack_80,*(undefined8 *)puVar8), (uVar10 & 1) != 0) {
          lVar14 = *(long *)puVar9;
          lVar11 = *(long *)(lVar14 + 0x20);
          uVar3 = *(ushort *)(lVar11 + 0x135);
          lVar12 = lVar11;
          if ((uVar3 & 1) == 0) {
            lVar12 = FUN_02229718();
            lVar11 = *(long *)(lVar14 + 0x20);
            uVar3 = *(ushort *)(lVar11 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
          if ((uVar3 & 1) == 0) {
            lVar11 = FUN_02229718();
          }
          uVar13 = thunk_FUN_0224e54c(&uStack_80,
                                      *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_58,uVar13,uVar1);
          lVar12 = lStack_58;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(lVar12,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar12 = UnityEngine_Component__get_transform_3c18724(lVar12,0);
            if (cRam0000000004f4a190 == '\0') {
              FUN_021f03f8(puVar5);
              cRam0000000004f4a190 = '\x01';
            }
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
            UnityEngine_Transform__set_localScale_3c2ddfc
                      (*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                       *(undefined4 *)(lVar11 + 0x14),lVar12,0);
          }
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_80,*(undefined8 *)puVar7);
        lVar12 = *(long *)(param_1 + 0xf0);
        if (lVar12 != 0) {
          lVar11 = *(long *)puVar6;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          uVar10 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
          if ((uVar10 & 1) == 0) {
            *(undefined4 *)(lVar12 + 0x18) = 0;
          }
          else {
            iVar2 = *(int *)(lVar12 + 0x18);
            *(undefined4 *)(lVar12 + 0x18) = 0;
            if (0 < iVar2) {
              System_Array__Clear_31229cc(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
            }
          }
          *(undefined4 *)(param_1 + 0xf8) = 0;
          lVar12 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                             (*(undefined8 *)(param_1 + 0xb0),0x5cac0bbb,0);
          if ((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) {
            lVar12 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar12 + 0x38),0);
            if (cRam0000000004f4a190 == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a190 = '\x01';
            }
            if (lVar12 != 0) {
              lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
              UnityEngine_Transform__set_localScale_3c2ddfc
                        (*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                         *(undefined4 *)(lVar11 + 0x14),lVar12,0);
              if ((*(long *)(param_1 + 0xb0) != 0) &&
                 (lVar12 = UnityEngine_Component__get_gameObject_3c187f4
                                     (*(long *)(param_1 + 0xb0),0), lVar12 != 0)) {
                UnityEngine_GameObject__SetActive_3c1ce34(lVar12,1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

