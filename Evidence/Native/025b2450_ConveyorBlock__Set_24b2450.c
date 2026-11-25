/* IL2CPP: ConveyorBlock$$Set
void ConveyorBlock__Set (ConveyorBlock_o* __this, Dreamteck_Splines_SplineComputer_o* spline, ConveyorSlot_o* first, ConveyorSlot_o* last, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ConveyorBlock$$Set
   void ConveyorBlock__Set (ConveyorBlock_o* __this, Dreamteck_Splines_SplineComputer_o* spline,
   ConveyorSlot_o* first, ConveyorSlot_o* last, const MethodInfo* method); */

void ConveyorBlock__Set_24b2450(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_58;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bb6d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049bddd0);
    FUN_021f03f8(PTR_DAT_049bddd8);
    bRam0000000004f4bb6d = 1;
  }
  puVar1 = PTR_DAT_049b6110;
  uStack_38 = 0;
  dStack_58 = 0.0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_3 != 0) {
    uStack_38 = *(undefined8 *)(param_3 + 0x100);
    if (param_4 != 0) {
      dStack_58 = *(double *)(param_4 + 0x100) + _UNK_013a8660;
      ConveyorBlock__HandleClosedSpline_24b261c(param_1,param_2,&uStack_38,&dStack_58);
      uVar7 = uStack_38;
      dVar6 = dStack_58;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar10 = (float)Extensions__CalculateLengthUnclamped_24e6704(uVar7,dVar6,param_2,0);
      puVar2 = PTR_DAT_049bddd8;
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 != 0) {
        iVar11 = *(int *)(lVar8 + 0x18);
        iVar9 = 0;
        do {
          if (*(int *)(lVar8 + 0x18) <= iVar9) {
            return;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar8,iVar9,&uStack_e0,*(undefined8 *)puVar2);
          uVar3 = uStack_e0;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Extensions__TravelUnclamped_24e666c
                    (uVar7,(fVar10 / (float)iVar11) * (float)iVar9,param_2,1,0);
          if (param_2 == 0) break;
          Dreamteck_Splines_SplineComputer__Evaluate_2349114(&uStack_e0,param_2,0);
          uStack_98 = uStack_d8;
          uStack_a0 = uStack_e0;
          uVar4 = uStack_a0;
          uStack_88 = uStack_c8;
          uStack_90 = uStack_d0;
          uStack_78 = uStack_b8;
          uStack_80 = uStack_c0;
          uStack_68 = uStack_a8;
          uStack_70 = uStack_b0;
          if (uVar3 == 0) break;
          uStack_a0._4_4_ = (undefined4)(uStack_e0 >> 0x20);
          uVar5 = uStack_a0._4_4_;
          uStack_a0 = uVar4;
          UnityEngine_Transform__set_position_3c2d61c
                    (uStack_e0 & 0xffffffff,uVar5,uStack_d8 & 0xffffffff,uVar3,0);
          Dreamteck_Splines_SplineSample__get_rotation_23697d0(&uStack_a0,0);
          UnityEngine_Transform__set_rotation_3c2d86c(uVar3,0);
          lVar8 = *(long *)(param_1 + 0xb0);
          iVar9 = iVar9 + 1;
        } while (lVar8 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

