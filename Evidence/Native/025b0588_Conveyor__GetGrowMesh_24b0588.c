/* IL2CPP: Conveyor$$GetGrowMesh
Dreamteck_Splines_SplineMesh_o* Conveyor__GetGrowMesh (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$GetGrowMesh
   Dreamteck_Splines_SplineMesh_o* Conveyor__GetGrowMesh (Conveyor_o* __this, const MethodInfo*
   method); */

long Conveyor__GetGrowMesh_24b0588(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bb5d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6a70);
    FUN_021f03f8(PTR_DAT_049c6a78);
    FUN_021f03f8(PTR_DAT_049c6a80);
    FUN_021f03f8(PTR_DAT_049c6a88);
    FUN_021f03f8(PTR_DAT_049c3bd8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bb5d = 1;
  }
  plVar5 = (long *)(param_1 + 0xd8);
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(lVar6,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x38);
      uVar3 = UnityEngine_Component__get_transform_3c18724(param_1,0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574(lVar6);
      }
      lVar6 = UnityEngine_Object__Instantiate_object__2695b80
                        (uVar7,uVar3,*(undefined8 *)PTR_DAT_049c3bd8);
      if (lVar6 != 0) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (lVar6,&uStack_40,*(undefined8 *)PTR_DAT_049c6a78);
        *plVar5 = CONCAT44(uStack_3c,uStack_40);
        thunk_FUN_021f190c(plVar5);
        if (*plVar5 != 0) {
          Dreamteck_Splines_SplineUser__set_spline_235ab08
                    (*plVar5,*(undefined8 *)(param_1 + 0xb8),0);
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                    (lVar6,&uStack_40,*(undefined8 *)PTR_DAT_049c6a70);
          *(undefined8 *)(param_1 + 0xe0) = CONCAT44(uStack_3c,uStack_40);
          thunk_FUN_021f190c((undefined8 *)(param_1 + 0xe0));
          if (*(long *)(param_1 + 200) != 0) {
            RendererPropertyRegistry__AddRenderer_249cc44
                      (*(long *)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0),0);
            lVar6 = *(long *)(*(long *)PTR_DAT_049c6a80 + 0x20);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02229718();
            }
            pcVar4 = (char *)thunk_FUN_0224e54c(param_1 + 0xe8,
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
            if (*pcVar4 != '\0') {
              System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                        (param_1 + 0xe8,&uStack_40,*(undefined8 *)PTR_DAT_049c6a88);
              Conveyor__SetSideColor_24b0834(uStack_40,uStack_3c,uStack_38,uStack_34,param_1);
            }
            goto LAB_025b0758;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_025b0758:
  return *plVar5;
}

