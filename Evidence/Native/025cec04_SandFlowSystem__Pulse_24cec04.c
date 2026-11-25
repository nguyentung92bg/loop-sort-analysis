/* IL2CPP: SandFlowSystem$$Pulse
float SandFlowSystem__Pulse (float value, float rise, float hold, float fall, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$Pulse
   float SandFlowSystem__Pulse (float value, float rise, float hold, float fall, const MethodInfo*
   method); */

float SandFlowSystem__Pulse_24cec04(float param_1,float param_2,float param_3,float param_4)

{
  float fVar2;
  ulong uVar1;
  float fVar3;
  ulong uVar4;
  float fVar5;
  int iVar6;
  int iVar8;
  undefined8 uVar7;
  
  param_2 = param_1 / param_2;
  fVar2 = (param_1 - param_3) / (param_4 - param_3);
  uVar4 = NEON_fmov(0x3f800000,4);
  fVar5 = (float)(uVar4 >> 0x20);
  iVar6 = -(uint)(param_2 < 0.0);
  iVar8 = -(uint)(fVar2 < 0.0);
  uVar1 = CONCAT44(fVar2,param_2) ^
          (CONCAT44(fVar2,param_2) ^ uVar4) &
          CONCAT44(-(uint)(fVar5 < fVar2),-(uint)((float)uVar4 < param_2));
  fVar2 = (float)CONCAT13((byte)(uVar1 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                          CONCAT12((byte)(uVar1 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                   CONCAT11((byte)(uVar1 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                            (byte)uVar1 & ~(byte)iVar6)));
  uVar7 = NEON_fmov(0x40400000,4);
  fVar3 = (float)(CONCAT17((byte)(uVar1 >> 0x38) & ~(byte)((uint)iVar8 >> 0x18),
                           CONCAT16((byte)(uVar1 >> 0x30) & ~(byte)((uint)iVar8 >> 0x10),
                                    CONCAT15((byte)(uVar1 >> 0x28) & ~(byte)((uint)iVar8 >> 8),
                                             CONCAT14((byte)(uVar1 >> 0x20) & ~(byte)iVar8,fVar2))))
                 >> 0x20);
  fVar2 = fVar2 * fVar2 * (float)uVar7 - fVar2 * fVar2 * (fVar2 + fVar2);
  fVar3 = fVar3 * fVar3 * (float)((ulong)uVar7 >> 0x20) - fVar3 * fVar3 * (fVar3 + fVar3);
  return (1.0 - (fVar3 + (fVar5 - fVar3) * 0.0)) * (fVar2 + ((float)uVar4 - fVar2) * 0.0);
}

