/* IL2CPP: FulfillRewardMonitor$$GetItemTarget
UnityEngine_Transform_o* FulfillRewardMonitor__GetItemTarget (FulfillRewardMonitor_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor$$GetItemTarget
   UnityEngine_Transform_o* FulfillRewardMonitor__GetItemTarget (FulfillRewardMonitor_o* __this,
   int32_t item, const MethodInfo* method); */

undefined8 FulfillRewardMonitor__GetItemTarget_2441a5c(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_38;
  
  if ((bRam0000000004f4b84d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2300);
    FUN_021f03f8(PTR_DAT_049c4108);
    FUN_021f03f8(PTR_DAT_049c1ae0);
    bRam0000000004f4b84d = 1;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar1 = GameMachine__IsInState_object__261a580
                      (*(long *)(param_1 + 0xa8),*(undefined8 *)PTR_DAT_049c4108);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0xa8) != 0) {
        uVar1 = GameMachine__IsInState_object__261a580
                          (*(long *)(param_1 + 0xa8),*(undefined8 *)PTR_DAT_049c1ae0);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0xb8) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20);
          lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                            (uVar5,0xbc1c109a,0);
          if (lVar2 != 0) {
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                      (lVar2,&lStack_38,*(undefined8 *)PTR_DAT_049c2300);
            lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                              (uVar5,0xf6f322b4,0);
            if (lVar2 != 0) {
              uVar3 = UnityEngine_Component__get_transform_3c18724(lVar2,0);
              lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                                (uVar5,0x61f37587,0);
              if ((lVar2 != 0) && (*(long *)(lVar2 + 0x38) != 0)) {
                uVar5 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar2 + 0x38),0);
                if (param_2 < 0xb) {
                  if (param_2 == 1) {
                    return uVar3;
                  }
                  if (param_2 != 10) {
                    return uVar5;
                  }
                  if (lStack_38 == 0) goto LAB_02541cb0;
                  uVar5 = 2;
                }
                else if (param_2 == 0xb) {
                  if (lStack_38 == 0) goto LAB_02541cb0;
                  uVar5 = 5;
                }
                else if (param_2 == 0xd) {
                  if (lStack_38 == 0) goto LAB_02541cb0;
                  uVar5 = 6;
                }
                else {
                  if (param_2 != 0xc) {
                    return uVar5;
                  }
                  if (lStack_38 == 0) goto LAB_02541cb0;
                  uVar5 = 4;
                }
                lVar2 = BoosterContainer__GetBoosterView_256bc28(lStack_38,uVar5,0);
                if (lVar2 != 0) {
                  uVar5 = UnityEngine_Component__get_transform_3c18724(lVar2,0);
                  return uVar5;
                }
              }
            }
          }
        }
      }
    }
    else if (*(long *)(param_1 + 0xb0) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x20);
      lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                        (uVar5,0x42a43c4,0);
      if (((lVar2 != 0) &&
          (lVar2 = UnityEngine_Component__get_transform_3c18724(lVar2,0), lVar2 != 0)) &&
         (lVar2 = UnityEngine_Transform__get_parent_3c2d470(lVar2,0), lVar2 != 0)) {
        uVar3 = UnityEngine_Component__get_transform_3c18724(lVar2,0);
        lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                          (uVar5,0xce15919c,0);
        if (lVar2 != 0) {
          uVar4 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar2,0);
          lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                            (uVar5,0xc616a039,0);
          if (lVar2 != 0) {
            uVar5 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar2,0);
            if (param_2 == 1) {
              return uVar5;
            }
            if (param_2 == 2) {
              return uVar4;
            }
            return uVar3;
          }
        }
      }
    }
  }
LAB_02541cb0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

