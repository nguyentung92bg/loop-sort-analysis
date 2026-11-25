/* IL2CPP: ConveyorColliderSystem$$OnLevelBuildComplete
void ConveyorColliderSystem__OnLevelBuildComplete (ConveyorColliderSystem_o* __this, LevelBuildCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorColliderSystem$$OnLevelBuildComplete
   void ConveyorColliderSystem__OnLevelBuildComplete (ConveyorColliderSystem_o* __this,
   LevelBuildCompleteMessage_o m, const MethodInfo* method); */

void ConveyorColliderSystem__OnLevelBuildComplete_24b28ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long lStack_28;
  
  if ((bRam0000000004f4bb70 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6a68);
    FUN_021f03f8(PTR_DAT_049c6a78);
    FUN_021f03f8(PTR_DAT_049c3bd8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bb70 = 1;
  }
  puVar2 = PTR_DAT_049c3bd8;
  puVar1 = PTR_DAT_049b3b98;
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar5 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x40),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    lVar6 = UnityEngine_Object__Instantiate_object__2695b80(uVar8,uVar5,*(undefined8 *)puVar2);
    if ((lVar6 != 0) &&
       (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (lVar6,&lStack_28,*(undefined8 *)PTR_DAT_049c6a78), lVar6 = lStack_28,
       lStack_28 != 0)) {
                    /* catch() { ... } // from try @ 025b2990 with catch @ 025b2974
                       catch() { ... } // from try @ 025b29c8 with catch @ 025b2974
                       catch() { ... } // from try @ 025b29f0 with catch @ 025b2974 */
      Dreamteck_Splines_SplineUser__set_spline_235ab08(lStack_28,*(undefined8 *)(param_1 + 0x40),0);
                    /* try { // try from 025b2988 to 026b298f has its CatchHandler @ 025b29a8 */
      if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 025b2990 to 026b29c3 has its CatchHandler @ 025b2974 */
        lVar7 = *(long *)(param_1 + 0x48);
        if (1.0 <= *(double *)(*(long *)(param_1 + 0x50) + 0x168)) {
                    /* try { // try from 025b29f0 to 026b29fb has its CatchHandler @ 025b2974 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b29e8 with catch @ 025b29f8
                        */
          if ((lVar7 != 0) &&
             (lVar7 = Dreamteck_Splines_SplineMesh__GetChannel_234e16c(lVar7,0,0), lVar7 != 0)) {
            uVar3 = *(undefined4 *)(lVar7 + 0xbc);
LAB_025b2a04:
            iVar4 = Dreamteck_Splines_SplineMesh__GetChannelCount_234e124(lVar6,0);
            if (0 < iVar4) {
              iVar9 = 0;
              do {
                lVar7 = Dreamteck_Splines_SplineMesh__GetChannel_234e16c(lVar6,iVar9,0);
                if (lVar7 == 0) goto LAB_025b2a5c;
                Dreamteck_Splines_SplineMesh_Channel__set_count_234eb34(lVar7,uVar3,0);
                iVar9 = iVar9 + 1;
              } while (iVar4 != iVar9);
            }
            return;
          }
        }
        else if (lVar7 != 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b2988 with catch @ 025b29a8
                        */
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (lVar7,&lStack_28,*(undefined8 *)PTR_DAT_049c6a68);
                    /* try { // try from 025b29c4 to 026b29c7 has its CatchHandler @ 025b29e4 */
                    /* try { // try from 025b29c8 to 026b29e7 has its CatchHandler @ 025b2974 */
          if ((*(long *)(param_1 + 0x40) != 0) &&
             (Dreamteck_Splines_SplineComputer__CalculateLength_2349594
                        (0,0x3ff0000000000000,*(long *)(param_1 + 0x40),0), lStack_28 != 0)) {
            uVar3 = SplineMeshAutoCount__CountFor_249f538(lStack_28,0);
                    /* catch() { ... } // from try @ 025b29c4 with catch @ 025b29e4 */
                    /* try { // try from 025b29e8 to 026b29ef has its CatchHandler @ 025b29f8 */
            goto LAB_025b2a04;
          }
        }
      }
    }
  }
LAB_025b2a5c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

