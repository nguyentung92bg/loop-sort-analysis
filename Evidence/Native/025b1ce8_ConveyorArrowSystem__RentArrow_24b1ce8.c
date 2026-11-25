/* IL2CPP: ConveyorArrowSystem$$RentArrow
Dreamteck_Splines_SplineFollower_o* ConveyorArrowSystem__RentArrow (ConveyorArrowSystem_o* __this, bool follow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorArrowSystem$$RentArrow
   Dreamteck_Splines_SplineFollower_o* ConveyorArrowSystem__RentArrow (ConveyorArrowSystem_o*
   __this, bool follow, const MethodInfo* method); */

long ConveyorArrowSystem__RentArrow_24b1ce8(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_38;
  
  if ((bRam0000000004f4bb69 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6b80);
    FUN_021f03f8(PTR_DAT_049c6b88);
    bRam0000000004f4bb69 = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    lVar5 = *(long *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    uVar2 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x38),0);
    if ((lVar5 != 0) && (lVar5 = PrefabModule__Rent_2537bc4(lVar5,uVar6,uVar2,0), lVar5 != 0)) {
      lVar3 = UnityEngine_GameObject__get_transform_3c1ca74(lVar5,0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      puVar1 = PTR_DAT_049c6b80;
      if (lVar3 != 0) {
        lVar4 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        UnityEngine_Transform__set_localScale_3c2ddfc
                  (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                   *(undefined4 *)(lVar4 + 0x14),lVar3,0);
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (lVar5,&lStack_38,*(undefined8 *)puVar1);
        if (lStack_38 != 0) {
          Dreamteck_Splines_SplineFollower__set_follow_234ca34(lStack_38,param_2 & 1,0);
          if (*(long *)(param_1 + 0x48) != 0) {
            Conveyor__AddFollower_24b1440(*(long *)(param_1 + 0x48),lStack_38);
            if (*(long *)(param_1 + 0x58) != 0) {
              FUN_02333498(*(long *)(param_1 + 0x58),lStack_38,*(undefined8 *)PTR_DAT_049c6b88);
              return lStack_38;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

