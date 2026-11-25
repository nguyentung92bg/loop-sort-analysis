/* IL2CPP: ConveyorSpeedSystem$$OnUpdate
void ConveyorSpeedSystem__OnUpdate (ConveyorSpeedSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ConveyorSpeedSystem$$OnUpdate
   void ConveyorSpeedSystem__OnUpdate (ConveyorSpeedSystem_o* __this, float deltaTime, const
   MethodInfo* method); */

void ConveyorSpeedSystem__OnUpdate_24b58a8(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4bb8d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1ae0);
    FUN_021f03f8(PTR_DAT_049c6ca8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bb8d = 1;
  }
                    /* try { // try from 025b5900 to 026b595b has its CatchHandler @ 025b5d88 */
  SystemBase__OnUpdate_2555ef8(param_1,param_2,0);
  uVar4 = ConveyorSpeedSystem__IsLastCarrier_24b5b40(param_2);
  puVar2 = PTR_DAT_049b5310;
  lVar7 = *(long *)(param_2 + 0x30);
  if (lVar7 != 0) {
    Conveyor__ComputeSlotCounts_24b0e80
              (lVar7,*(undefined8 *)(lVar7 + 0x100),lVar7 + 0x114,lVar7 + 0x118,lVar7 + 0x11c);
    lVar5 = *(long *)puVar2;
    iVar1 = *(int *)(lVar7 + 0x114);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    lVar7 = *(long *)(lVar5 + 0xb8);
                    /* try { // try from 025b5960 to 026b59bb has its CatchHandler @ 025b5d84 */
    uStack_58 = *(undefined8 *)(lVar7 + 0x68);
    uStack_60 = *(undefined8 *)(lVar7 + 0x60);
    uStack_48 = *(undefined8 *)(lVar7 + 0x78);
    uStack_50 = *(undefined8 *)(lVar7 + 0x70);
    iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_60,0);
    if (*(long *)(param_2 + 0x40) != 0) {
      uVar6 = GameMachine__IsInState_object__261a580
                        (*(long *)(param_2 + 0x40),*(undefined8 *)PTR_DAT_049c6ca8);
      fVar12 = _UNK_013aa62c;
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)(param_2 + 0x60);
        if (lVar7 == 0) goto LAB_025b5b3c;
        if ((*(char *)(lVar7 + 0x1d) == '\0') || (iVar1 != 0)) {
          if (*(char *)(lVar7 + 0x1e) == '\0') {
            fVar12 = _UNK_013aa658;
            if ((1 < iVar3 || iVar1 < 1) && (uVar4 & 1) == 0) {
              if (*(char *)(lVar7 + 0x1c) == '\0') {
                fVar12 = 1.0;
              }
              else {
                lVar7 = *(long *)(param_2 + 0x30);
                if (lVar7 == 0) goto LAB_025b5b3c;
                Conveyor__ComputeSlotCounts_24b0e80
                          (lVar7,*(undefined8 *)(lVar7 + 0x100),lVar7 + 0x114,lVar7 + 0x118,
                           lVar7 + 0x11c);
                    /* try { // try from 025b5a1c to 026b5a23 has its CatchHandler @ 025b5d74 */
                fVar12 = _UNK_013aa658;
                    /* try { // try from 025b5a30 to 026b5a37 has its CatchHandler @ 025b5d70 */
                if (*(int *)(lVar7 + 0x114) != *(int *)(lVar7 + 0x11c)) {
                  fVar12 = 1.0;
                }
              }
            }
          }
          else {
                    /* try { // try from 025b59c0 to 026b5a1b has its CatchHandler @ 025b5d80 */
            uVar4 = ConveyorSpeedSystem__IsHoldInputActive_24b5cf8(param_2);
            fVar12 = 1.0;
            if ((uVar4 & 1) != 0) {
              if (*(long *)(param_2 + 0x60) == 0) goto LAB_025b5b3c;
              fVar12 = *(float *)(*(long *)(param_2 + 0x60) + 0x18);
            }
          }
        }
      }
      uVar4 = ConveyorSpeedSystem__IsSpeedBoostActive_24b5ddc(param_2);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_2 + 0x40) == 0) goto LAB_025b5b3c;
        uVar4 = GameMachine__IsInState_object__261a580
                          (*(long *)(param_2 + 0x40),*(undefined8 *)PTR_DAT_049c1ae0);
        if ((uVar4 & 1) != 0) {
          if (1.0 <= fVar12) {
            if (*(long *)(param_2 + 0x68) == 0) goto LAB_025b5b3c;
            fVar8 = *(float *)(*(long *)(param_2 + 0x68) + 0x1c);
            if (fVar12 <= fVar8) {
              fVar12 = fVar8;
            }
          }
          ConveyorSpeedSystem__ConsumeSpeedBoost_24b5ebc(param_1,param_2);
        }
      }
                    /* try { // try from 025b5a94 to 026b5a97 has its CatchHandler @ 025b5b88 */
      if (*(long *)(param_2 + 0x30) != 0) {
        fVar8 = *(float *)(*(long *)(param_2 + 0x30) + 0x144);
                    /* try { // try from 025b5aa0 to 026b5aa7 has its CatchHandler @ 025b5b90 */
        if (cRam0000000004f4a18f == '\0') {
                    /* try { // try from 025b5aa8 to 026b5ab3 has its CatchHandler @ 025b5b8c */
          FUN_021f03f8(PTR_DAT_049bbf30);
          cRam0000000004f4a18f = '\x01';
        }
                    /* try { // try from 025b5abc to 026b5abf has its CatchHandler @ 025b5db8 */
        fVar10 = ABS(fVar8);
        fVar9 = ABS(fVar12);
        if (ABS(fVar12) <= fVar10) {
          fVar9 = fVar10;
        }
        fVar11 = **(float **)(*(long *)PTR_DAT_049bbf30 + 0xb8) * 8.0;
        fVar10 = fVar9 * _UNK_013aa8a0;
        if (fVar9 * _UNK_013aa8a0 <= fVar11) {
          fVar10 = fVar11;
        }
        if (fVar10 <= ABS(fVar8 - fVar12)) {
          lVar7 = *(long *)(param_2 + 0x30);
          if (lVar7 == 0) goto LAB_025b5b3c;
          *(float *)(lVar7 + 0x144) = fVar12;
          *(float *)(lVar7 + 0x140) = fVar12 * *(float *)(lVar7 + 0x13c);
          Conveyor__UpdateSpeed_24b1114();
        }
                    /* try { // try from 025b5b24 to 026b5b53 has its CatchHandler @ 025b5dbc */
        return;
      }
    }
  }
LAB_025b5b3c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

