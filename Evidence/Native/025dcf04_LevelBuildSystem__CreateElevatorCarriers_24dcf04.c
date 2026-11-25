/* IL2CPP: LevelBuildSystem$$CreateElevatorCarriers
void LevelBuildSystem__CreateElevatorCarriers (LevelBuildSystem_o* __this, int32_t hostType, UnityEngine_Transform_o* hostT, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025dd1f0) */
/* IL2CPP: LevelBuildSystem$$CreateElevatorCarriers
   void LevelBuildSystem__CreateElevatorCarriers (LevelBuildSystem_o* __this, int32_t hostType,
   UnityEngine_Transform_o* hostT, const MethodInfo* method); */

void LevelBuildSystem__CreateElevatorCarriers_24dcf04
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined4 param_6,long param_7)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [16];
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_049c65e0;
  if ((bRam0000000004f4bc51 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c65c8);
    FUN_021f03f8(PTR_DAT_049c65e0);
    FUN_021f03f8(PTR_DAT_049c2740);
    FUN_021f03f8(PTR_DAT_049c2748);
    FUN_021f03f8(PTR_DAT_049c2750);
    FUN_021f03f8(PTR_DAT_049c2778);
    FUN_021f03f8(PTR_DAT_049c6610);
    FUN_021f03f8(PTR_DAT_049c2788);
    bRam0000000004f4bc51 = 1;
  }
  puVar3 = PTR_DAT_049c65c8;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_60 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_68,*(undefined8 *)puVar3);
  lVar7 = *(long *)(param_5 + 0x40);
  puStack_a8 = auStack_60;
  lStack_b0 = 0;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_78 = *(undefined8 *)(lVar7 + 0x40);
  uStack_80 = *(undefined8 *)(lVar7 + 0x38);
  uStack_70 = *(undefined8 *)(lVar7 + 0x48);
  lVar7 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                    (&uStack_80,*(undefined8 *)PTR_DAT_049c2788);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar4 = CarrierSheet_Row__TryGetElevatorQueue_255b3ac(lVar7,param_6,lStack_68,0);
  if ((uVar4 & 1) == 0) {
    lVar7 = 0;
  }
  else {
    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_68,&uStack_c8,*(undefined8 *)PTR_DAT_049c2778);
    puVar3 = PTR_DAT_049c2750;
    puVar2 = PTR_DAT_049c2748;
    puStack_98 = puStack_c0;
    uStack_a0 = uStack_c8;
    uStack_90 = uStack_b8;
    uStack_c8 = 0;
    puStack_c0 = &uStack_a0;
    while( true ) {
      uVar4 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_a0,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) break;
      lVar8 = *(long *)puVar3;
      lVar5 = *(long *)(lVar8 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
      lVar7 = lVar5;
      uVar12 = param_4;
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_02229718();
        lVar5 = *(long *)(lVar8 + 0x20);
        uVar1 = *(ushort *)(lVar5 + 0x135);
        uVar12 = param_4;
      }
      uVar10 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      uVar6 = thunk_FUN_0224e54c(&uStack_a0,
                                 *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_44,uVar6,uVar10);
      lVar7 = LevelBuildSystem__CreateCarrier_24dca7c(param_5,uStack_44);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = UnityEngine_Component__get_transform_3c18724(lVar7,0);
      if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = UnityEngine_Transform__get_position_3c2d540(param_7,0);
      uVar10 = param_2;
      uVar11 = param_3;
      param_4 = UnityEngine_Transform__get_rotation_3c2d7a8(param_7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_Transform__SetPositionAndRotation_3c2e2a0
                (uVar9,param_2,param_3,param_4,uVar10,uVar11,uVar12,lVar7,0);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_a0,*(undefined8 *)PTR_DAT_049c2740);
    lVar7 = lStack_b0;
  }
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (puStack_a8,*(undefined8 *)PTR_DAT_049c6610);
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698(lVar7);
}

