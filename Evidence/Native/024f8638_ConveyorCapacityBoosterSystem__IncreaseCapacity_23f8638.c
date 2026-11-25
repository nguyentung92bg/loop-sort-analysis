/* IL2CPP: ConveyorCapacityBoosterSystem$$IncreaseCapacity
void ConveyorCapacityBoosterSystem__IncreaseCapacity (ConveyorCapacityBoosterSystem_o* __this, int32_t units, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorCapacityBoosterSystem$$IncreaseCapacity
   void ConveyorCapacityBoosterSystem__IncreaseCapacity (ConveyorCapacityBoosterSystem_o* __this,
   int32_t units, const MethodInfo* method); */

void ConveyorCapacityBoosterSystem__IncreaseCapacity_23f8638(long param_1,int param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long *plStack_48;
  
  if (0 < param_2) {
    do {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      ConveyorSlotCreateSystem__AddConveyorSlot_24b4d74(*(long *)(param_1 + 0x30),0);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if ((bRam0000000004f4b671 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2318);
    FUN_021f03f8(PTR_DAT_049bdd48);
    FUN_021f03f8(PTR_DAT_049b89e8);
    FUN_021f03f8(PTR_DAT_049c2248);
    bRam0000000004f4b671 = 1;
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar4 = PrefabModuleExtensions__Rent_object__269ed94
                        (*(undefined8 *)(param_1 + 0x38),
                         *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x48),
                         *(undefined8 *)PTR_DAT_049c2248), puVar1 = PTR_DAT_049c2318, lVar4 != 0)) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lVar4,&plStack_48,*(undefined8 *)PTR_DAT_049b89e8);
    plVar2 = plStack_48;
    UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1cf0
              (lVar4,&plStack_48,*(undefined8 *)puVar1);
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      Dreamteck_Splines_SplineUser__set_spline_235ab08(plStack_48,*(undefined8 *)(param_1 + 0x48),0)
      ;
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55e = '\x01';
      }
      lVar5 = *(long *)(param_1 + 0x50);
      if (lVar5 != 0) {
        lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        fVar9 = *(float *)(lVar7 + 0x18);
        fVar10 = *(float *)(lVar7 + 0x1c);
        fVar11 = *(float *)(lVar7 + 0x20);
        if (*(char *)(lVar5 + 0x2c0) == '\0') {
          fVar8 = 0.0;
        }
        else {
          fVar8 = (float)SandFlowSystem__get_OverlayLift_24ce614(lVar5,0);
        }
        Dreamteck_Splines_MeshGenerator__set_offset_2335d44
                  (fVar9 * fVar8,fVar10 * fVar8,fVar11 * fVar8,plVar3,0);
        puVar1 = PTR_DAT_049bdd48;
        if (*(long *)(param_1 + 0x58) != 0) {
          Dreamteck_Splines_SplineUser__set_clipTo_235accc
                    (*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x168),plVar3,0);
          (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (plVar3,&plStack_48,*(undefined8 *)puVar1);
          if ((plStack_48 != (long *)0x0) &&
             (uVar6 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(plStack_48,0),
             plVar2 != (long *)0x0)) {
            UnityEngine_ParticleSystemRenderer__set_mesh_3c80a10(plVar2,uVar6,0);
            UnityEngine_ParticleSystem__Play_3c7e874(lVar4,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

