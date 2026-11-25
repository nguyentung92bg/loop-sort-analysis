/* IL2CPP: ElevatorHole$$Arrive
void ElevatorHole__Arrive (ElevatorHole_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$Arrive
   void ElevatorHole__Arrive (ElevatorHole_o* __this, Carrier_o* carrier, const MethodInfo* method);
    */

undefined8 ElevatorHole__Arrive_24116e4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_58;
  
  if ((bRam0000000004f4b724 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1f78);
    FUN_021f03f8(PTR_DAT_049c1f88);
    FUN_021f03f8(PTR_DAT_049c1f90);
    FUN_021f03f8(PTR_DAT_049c1d58);
    bRam0000000004f4b724 = 1;
  }
  puVar2 = PTR_DAT_049c1f90;
  puVar1 = PTR_DAT_049c1f88;
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar9 = *(undefined4 *)(lVar4 + 0x10);
  uVar11 = *(undefined4 *)(lVar4 + 0x14);
  fVar13 = *(float *)(lVar4 + 0xc) * *(float *)(param_1 + 0xd4);
  auVar14 = LitMotion_LMotion_Punch__Create_2eaa764(0);
  auVar14 = LitMotion_MotionBuilderExtensions__WithFrequency___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688eb0
                      (auVar14._0_8_,auVar14._8_8_,2,*(undefined8 *)puVar2);
  auVar14 = LitMotion_MotionBuilderExtensions__WithDampingRatio___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688d9c
                      (0x3f800000,auVar14._0_8_,auVar14._8_8_,*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_049c1f78;
  puVar1 = PTR_DAT_049b6110;
  if (param_2 != 0) {
    uVar3 = UnityEngine_Component__get_transform_3c18724(param_2,0);
    auVar14 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar14._0_8_,auVar14._8_8_,uVar3,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__AddTo_24d83f4(auVar14._0_8_,auVar14._8_8_ & 0xffffffff,param_2,0);
    if ((*(long *)(param_1 + 0xe8) != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
      lVar5 = *(long *)(param_1 + 0xe0);
      lVar6 = *(long *)(*(long *)(param_1 + 0xe8) + 0x38);
      lVar4 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0xa0),0);
      if (lVar4 != 0) {
        uVar7 = UnityEngine_Transform__get_position_3c2d540(lVar4,0);
        uVar10 = uVar9;
        uVar12 = uVar11;
        lVar4 = UnityEngine_Component__get_transform_3c18724(param_1,0);
        puVar1 = PTR_DAT_049c1d58;
        if (lVar4 != 0) {
          uVar8 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar4,0);
          lVar4 = *(long *)puVar1;
          if (*(long *)(lVar4 + 0x38) == 0) {
            FUN_02229774(lVar4);
          }
          if (((lVar6 != 0) &&
              (uVar3 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0), lVar5 != 0)) &&
             (lVar5 = PrefabModule__Rent_2537de8
                                (uVar7,uVar9,uVar11,uVar8,uVar10,uVar12,fVar13,lVar5,uVar3,0),
             lVar5 != 0)) {
            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                      (lVar5,&uStack_58,*(undefined8 *)(*(long *)(lVar4 + 0x38) + 8));
            return uStack_58;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

