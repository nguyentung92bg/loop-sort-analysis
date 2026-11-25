/* IL2CPP: ConveyorRedSystem$$OnUpdate
void ConveyorRedSystem__OnUpdate (ConveyorRedSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorRedSystem$$OnUpdate
   void ConveyorRedSystem__OnUpdate (ConveyorRedSystem_o* __this, float deltaTime, const MethodInfo*
   method); */

void ConveyorRedSystem__OnUpdate_24b3560(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  SystemBase__OnUpdate_2555ef8(param_2,0);
  if (*(long *)(param_2 + 0x30) != 0) {
    fVar2 = (float)Conveyor__GetOccupiedSlotRatio01_24b0d98();
    if (*(long *)(param_2 + 0x38) != 0) {
      fVar9 = *(float *)(*(long *)(param_2 + 0x38) + 0x78);
      fVar3 = (float)UnityEngine_Time__get_time_3c295c8(0);
      if (fVar9 <= fVar2) {
                    /* try { // try from 025b35e4 to 026b35e7 has its CatchHandler @ 025b3698 */
        lVar1 = *(long *)(param_2 + 0x38);
        if (lVar1 == 0) goto LAB_025b3698;
                    /* try { // try from 025b35f4 to 026b35fb has its CatchHandler @ 025b36a4 */
        uVar8 = *(undefined8 *)(lVar1 + 0x70);
        uVar7 = *(undefined8 *)(lVar1 + 0x68);
                    /* try { // try from 025b3600 to 026b3607 has its CatchHandler @ 025b36a0 */
        fVar3 = (fVar3 - *(float *)(param_2 + 0x60)) * *(float *)(lVar1 + 0x7c);
                    /* try { // try from 025b3608 to 026b364b has its CatchHandler @ 025b353c */
        fVar2 = (float)(int)(fVar3 * 0.5);
        fVar3 = fVar3 - (fVar2 + fVar2);
        fVar2 = 2.0;
        if (fVar3 <= 2.0) {
          fVar2 = fVar3;
        }
        fVar9 = -1.0;
        if (0.0 <= fVar3) {
          fVar9 = fVar2 + -1.0;
        }
        param_1 = 1.0 - ABS(fVar9);
        fVar2 = 1.0;
        if (param_1 <= 1.0) {
          fVar2 = param_1;
        }
                    /* try { // try from 025b364c to 026b364f has its CatchHandler @ 025b36a4 */
        uVar6 = *(undefined8 *)(param_2 + 0x48);
        uVar4 = *(undefined8 *)(param_2 + 0x40);
      }
      else {
                    /* try { // try from 025b35ac to 026b35c7 has its CatchHandler @ 025b36a8 */
        *(float *)(param_2 + 0x60) = fVar3;
        UnityEngine_Time__get_time_3c295c8(0);
        if (*(long *)(param_2 + 0x38) == 0) goto LAB_025b3698;
        param_1 = *(float *)(*(long *)(param_2 + 0x38) + 0x80) * param_1;
        fVar2 = 1.0;
        if (param_1 <= 1.0) {
          fVar2 = param_1;
        }
        uVar8 = *(undefined8 *)(param_2 + 0x48);
        uVar7 = *(undefined8 *)(param_2 + 0x40);
        uVar6 = *(undefined8 *)(param_2 + 0x58);
        uVar4 = *(undefined8 *)(param_2 + 0x50);
      }
      fVar3 = 0.0;
                    /* try { // try from 025b3650 to 026b3697 has its CatchHandler @ 025b369c */
      if (0.0 <= param_1) {
        fVar3 = fVar2;
      }
      fVar2 = (float)((ulong)uVar4 >> 0x20);
      fVar9 = (float)((ulong)uVar6 >> 0x20);
      if (*(long *)(param_2 + 0x30) != 0) {
        fVar2 = fVar2 + ((float)((ulong)uVar7 >> 0x20) - fVar2) * fVar3;
        uVar7 = CONCAT44(fVar2,(float)uVar4 + ((float)uVar7 - (float)uVar4) * fVar3);
        fVar5 = (float)uVar6 + ((float)uVar8 - (float)uVar6) * fVar3;
        fVar9 = fVar9 + ((float)((ulong)uVar8 >> 0x20) - fVar9) * fVar3;
        Conveyor__SetSideColor_24b0834(uVar7,fVar2,fVar5,fVar9);
        *(ulong *)(param_2 + 0x58) = CONCAT44(fVar9,fVar5);
        *(undefined8 *)(param_2 + 0x50) = uVar7;
        return;
      }
    }
  }
LAB_025b3698:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b35e4 with catch @ 025b3698
                       try { // try from 025b3698 to 026b36c3 has its CatchHandler @ 025b353c */
  FUN_021f06a0();
}

