/* IL2CPP: SandFlowSystem$$Shape
SandFlowSystem_JellyShape_o SandFlowSystem__Shape (SandFlowSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$Shape
   SandFlowSystem_JellyShape_o SandFlowSystem__Shape (SandFlowSystem_o* __this, Carrier_o* carrier,
   const MethodInfo* method); */

void SandFlowSystem__Shape_24ce8c4(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [12];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined8 uStack_3c;
  float fStack_34;
  
  if (param_3 != 0) {
    auVar13 = Carrier__get_BlockSize_240813c(param_3,0);
    iVar1 = auVar13._8_4_;
    SandFlowSystem__Tray_24d00ec(&fStack_48,param_2,param_3);
    lVar2 = *(long *)(param_2 + 0x160);
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)(lVar2 + 0x14c);
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      fVar3 = (fStack_40 - *(float *)(lVar2 + 0x154)) + *(float *)(lVar2 + 0x160);
      fVar4 = fStack_34 + *(float *)(lVar2 + 0x154) + *(float *)(lVar2 + 0x160);
      fVar10 = (float)uVar7;
      *(float *)(param_1 + 4) = fVar3;
      *(float *)((long)param_1 + 0x2c) = fVar4;
      uVar11 = NEON_smax(auVar13._0_8_,0x100000001,4);
      fVar5 = (float)*(undefined8 *)(lVar2 + 0x158);
      fVar6 = (float)uStack_3c + fVar10 + fVar5;
      fVar9 = (float)((ulong)*(undefined8 *)(lVar2 + 0x158) >> 0x20);
      fVar8 = (float)((ulong)uStack_3c >> 0x20) + (float)((ulong)uVar7 >> 0x20) + fVar9;
      fVar12 = (fVar4 - fVar3) / (float)iVar1;
      fVar5 = (fStack_48 - fVar10) + fVar5;
      fStack_44 = fStack_44 + fVar9;
      uVar7 = NEON_scvtf(uVar11,4);
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(fVar8,fVar6);
      param_1[3] = CONCAT44(fStack_44,fVar5);
      fVar4 = (fVar6 - fVar5) / (float)uVar7;
      fVar10 = (fVar8 - fStack_44) / (float)((ulong)uVar7 >> 0x20);
      *(float *)((long)param_1 + 0x14) = fVar12;
      *(float *)(param_1 + 1) = fVar3 + fVar12 * 0.5;
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(fVar10,fVar4);
      *param_1 = CONCAT44(fStack_44 + fVar10 * 0.5,fVar5 + fVar4 * 0.5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

