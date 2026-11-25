/* IL2CPP: ReviveSystem$$IncreaseCapacity
void ReviveSystem__IncreaseCapacity (ReviveSystem_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveSystem$$IncreaseCapacity
   void ReviveSystem__IncreaseCapacity (ReviveSystem_o* __this, int32_t type, const MethodInfo*
   method); */

undefined8 ReviveSystem__IncreaseCapacity_24e0eb4(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  
                    /* try { // try from 025e0ec4 to 026e0ecb has its CatchHandler @ 025e0fd0 */
  lVar7 = ReviveSystem__GetRevive_24e0f1c();
  puVar2 = PTR_DAT_049c2220;
  if (param_2 == 0) {
    if (lVar7 == 0) goto LAB_025e0f18;
    param_2 = *(int *)(lVar7 + 0x18);
  }
  if (param_2 == 6) {
                    /* try { // try from 025e0ee4 to 026e0f2f has its CatchHandler @ 025e0fd4 */
    if ((lVar7 != 0) && (lVar9 = *(long *)(param_1 + 0x38), lVar9 != 0)) {
      iVar1 = *(int *)(lVar7 + 0x20);
      if (0 < iVar1) {
        do {
          if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          ConveyorSlotCreateSystem__AddConveyorSlot_24b4d74(*(long *)(lVar9 + 0x30),0);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if ((bRam0000000004f4b671 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c2318);
        FUN_021f03f8(PTR_DAT_049bdd48);
        FUN_021f03f8(PTR_DAT_049b89e8);
        FUN_021f03f8(PTR_DAT_049c2248);
        bRam0000000004f4b671 = 1;
      }
      if ((*(long *)(lVar9 + 0x40) != 0) &&
         (lVar7 = PrefabModuleExtensions__Rent_object__269ed94
                            (*(undefined8 *)(lVar9 + 0x38),
                             *(undefined8 *)(*(long *)(lVar9 + 0x40) + 0x48),
                             *(undefined8 *)PTR_DAT_049c2248), puVar2 = PTR_DAT_049c2318, lVar7 != 0
         )) {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                  (lVar7,&plStack_48,*(undefined8 *)PTR_DAT_049b89e8);
        plVar3 = plStack_48;
        UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1cf0
                  (lVar7,&plStack_48,*(undefined8 *)puVar2);
        plVar4 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          Dreamteck_Splines_SplineUser__set_spline_235ab08
                    (plStack_48,*(undefined8 *)(lVar9 + 0x48),0);
          if (cRam0000000004f4a55e == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a55e = '\x01';
          }
          lVar5 = *(long *)(lVar9 + 0x50);
          if (lVar5 != 0) {
            lVar8 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
            fVar11 = *(float *)(lVar8 + 0x18);
            fVar12 = *(float *)(lVar8 + 0x1c);
            fVar13 = *(float *)(lVar8 + 0x20);
            if (*(char *)(lVar5 + 0x2c0) == '\0') {
              fVar10 = 0.0;
            }
            else {
              fVar10 = (float)SandFlowSystem__get_OverlayLift_24ce614(lVar5,0);
            }
            Dreamteck_Splines_MeshGenerator__set_offset_2335d44
                      (fVar11 * fVar10,fVar12 * fVar10,fVar13 * fVar10,plVar4,0);
            puVar2 = PTR_DAT_049bdd48;
            if (*(long *)(lVar9 + 0x58) != 0) {
              Dreamteck_Splines_SplineUser__set_clipTo_235accc
                        (*(undefined8 *)(*(long *)(lVar9 + 0x58) + 0x168),plVar4,0);
              (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                        (plVar4,&plStack_48,*(undefined8 *)puVar2);
              if ((plStack_48 != (long *)0x0) &&
                 (uVar6 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(plStack_48,0),
                 plVar3 != (long *)0x0)) {
                UnityEngine_ParticleSystemRenderer__set_mesh_3c80a10(plVar3,uVar6,0);
                uVar6 = UnityEngine_ParticleSystem__Play_3c7e874(lVar7,0);
                return uVar6;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 != 0) {
      if ((bRam0000000004f4b65b & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c2220,0);
        bRam0000000004f4b65b = 1;
      }
      uStack_58 = 0;
      uStack_60 = 0;
      plStack_48 = (long *)0x0;
      thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
      thunk_FUN_021f190c(&stack0xffffffffffffffb0,lVar7);
      uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
      Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar2);
      return 0;
    }
  }
LAB_025e0f18:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

