/* IL2CPP: ConveyorSlot$$SetPercent
void ConveyorSlot__SetPercent (ConveyorSlot_o* __this, double percent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlot$$SetPercent
   void ConveyorSlot__SetPercent (ConveyorSlot_o* __this, double percent, const MethodInfo* method);
    */

void ConveyorSlot__SetPercent_24b36ac
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined4 param_4,long param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 025b36c4 to 026b36c7 has its CatchHandler @ 025b36d0 */
  *(undefined8 *)(param_5 + 0x100) = param_1;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* catch() { ... } // from try @ 025b36c4 with catch @ 025b36d0 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* try { // try from 025b36d4 to 026b36db has its CatchHandler @ 025b36e4 */
  if (*(long *)(param_5 + 200) != 0) {
                    /* try { // try from 025b36dc to 026b36e7 has its CatchHandler @ 025b353c */
    Dreamteck_Splines_SplineComputer__Evaluate_2349114(&uStack_b0,*(long *)(param_5 + 200),0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b36d4 with catch @ 025b36e4
                        */
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    uStack_38 = uStack_78;
    uStack_40 = uStack_80;
    lVar4 = UnityEngine_Component__get_transform_3c18724(param_5,0);
    uVar3 = uStack_68;
    uVar1 = uStack_70;
    uVar7 = (undefined4)uStack_80;
    uVar6 = (undefined4)uStack_a0;
    uVar2 = uStack_70._4_4_;
    uVar5 = Dreamteck_Splines_SplineSample__get_rotation_23697d0(&uStack_70,0);
    if (lVar4 != 0) {
      UnityEngine_Transform__SetPositionAndRotation_3c2e2a0
                (uVar1 & 0xffffffff,uVar2,uVar3 & 0xffffffff,uVar5,uVar6,uVar7,param_4,lVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

