/* IL2CPP: SandFlowSystem$$EnterNeck
float SandFlowSystem__EnterNeck (float share, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$EnterNeck
   float SandFlowSystem__EnterNeck (float share, const MethodInfo* method); */

float SandFlowSystem__EnterNeck_24c9f60(float param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar4;
  ulong uVar3;
  ulong uVar5;
  float fVar6;
  int iVar7;
  int iVar9;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_049c7130;
  if ((bRam0000000004f4bbf7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7130);
    bRam0000000004f4bbf7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar2 = param_1 / _UNK_013aa5f0;
  fVar4 = (param_1 - _UNK_013aa8a8) / (1.0 - _UNK_013aa8a8);
  uVar5 = NEON_fmov(0x3f800000,4);
  fVar6 = (float)(uVar5 >> 0x20);
  iVar7 = -(uint)(fVar2 < 0.0);
  iVar9 = -(uint)(fVar4 < 0.0);
  uVar3 = CONCAT44(fVar4,fVar2) ^
          (CONCAT44(fVar4,fVar2) ^ uVar5) &
          CONCAT44(-(uint)(fVar6 < fVar4),-(uint)((float)uVar5 < fVar2));
  fVar2 = (float)CONCAT13((byte)(uVar3 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                          CONCAT12((byte)(uVar3 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                   CONCAT11((byte)(uVar3 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                            (byte)uVar3 & ~(byte)iVar7)));
  uVar8 = NEON_fmov(0x40400000,4);
  fVar4 = (float)(CONCAT17((byte)(uVar3 >> 0x38) & ~(byte)((uint)iVar9 >> 0x18),
                           CONCAT16((byte)(uVar3 >> 0x30) & ~(byte)((uint)iVar9 >> 0x10),
                                    CONCAT15((byte)(uVar3 >> 0x28) & ~(byte)((uint)iVar9 >> 8),
                                             CONCAT14((byte)(uVar3 >> 0x20) & ~(byte)iVar9,fVar2))))
                 >> 0x20);
  fVar2 = fVar2 * fVar2 * (float)uVar8 - fVar2 * fVar2 * (fVar2 + fVar2);
  fVar4 = fVar4 * fVar4 * (float)((ulong)uVar8 >> 0x20) - fVar4 * fVar4 * (fVar4 + fVar4);
  return (1.0 - (fVar4 + (fVar6 - fVar4) * 0.0)) * (fVar2 + ((float)uVar5 - fVar2) * 0.0);
}

