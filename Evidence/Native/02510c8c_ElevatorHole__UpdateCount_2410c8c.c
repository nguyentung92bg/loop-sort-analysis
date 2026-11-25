/* IL2CPP: ElevatorHole$$UpdateCount
void ElevatorHole__UpdateCount (ElevatorHole_o* __this, bool animate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ElevatorHole$$UpdateCount
   void ElevatorHole__UpdateCount (ElevatorHole_o* __this, bool animate, const MethodInfo* method);
    */

void ElevatorHole__UpdateCount_2410c8c(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iStack_24;
  
  if ((bRam0000000004f4b726 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c1f78);
    FUN_021f03f8(PTR_DAT_049c1f88);
    FUN_021f03f8(PTR_DAT_049c1f90);
    bRam0000000004f4b726 = 1;
  }
  iStack_24 = 0;
  if (*(long *)(param_1 + 0xf0) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0xf0) + 0x18) + ~*(uint *)(param_1 + 0xf8);
    iStack_24 = iVar1;
    if ((*(long *)(param_1 + 0xb0) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xb0),0),
       lVar2 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar2,0 < iVar1,0);
      if (0 < iVar1) {
        uVar4 = *(undefined8 *)(param_1 + 0xb0);
        uVar3 = System_Int32__ToString_30fbaa0(&iStack_24,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (uVar4,0x5cac0bbb,uVar3,0);
        if ((param_2 & 1) != 0) {
          lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                            (*(undefined8 *)(param_1 + 0xb0),0x5cac0bbb,0);
          if (lVar2 != 0) {
            lVar2 = *(long *)(lVar2 + 0x38);
            if (cRam0000000004f4a190 == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a190 = '\x01';
            }
            auVar5 = LitMotion_LMotion_Punch__Create_2eaa764(0);
            auVar5 = LitMotion_MotionBuilderExtensions__WithFrequency___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688eb0
                               (auVar5._0_8_,auVar5._8_8_,1,*(undefined8 *)PTR_DAT_049c1f90);
            auVar5 = LitMotion_MotionBuilderExtensions__WithDampingRatio___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688d9c
                               (0x3f800000,auVar5._0_8_,auVar5._8_8_,*(undefined8 *)PTR_DAT_049c1f88
                               );
            if (lVar2 != 0) {
              uVar3 = TMPro_TMP_Text__get_transform_3b0c9d0(lVar2,0);
              auVar5 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                 (auVar5._0_8_,auVar5._8_8_,uVar3,*(undefined8 *)PTR_DAT_049c1f78);
              if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
                FUN_021f0574();
              }
              Extensions__AddTo_24d83f4(auVar5._0_8_,auVar5._8_8_ & 0xffffffff,param_1,0);
              return;
            }
          }
          goto LAB_02510e80;
        }
      }
      return;
    }
  }
LAB_02510e80:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

