/* IL2CPP: TwinkleEffect$$Update
void TwinkleEffect__Update (TwinkleEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TwinkleEffect$$Update
   void TwinkleEffect__Update (TwinkleEffect_o* __this, const MethodInfo* method); */

void TwinkleEffect__Update_2412378
               (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long param_5)

{
  long lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  
  fVar10 = (float)EffectBase__GetEffectTime_25704a0(param_5,0);
  puVar5 = PTR_DAT_049bbf90;
  fVar4 = _UNK_013aa948;
  fVar3 = _UNK_013aa860;
  lVar6 = *(long *)(param_5 + 0x40);
  if (lVar6 == 0) {
LAB_0251260c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar9 = 0;
LAB_025123dc:
  if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar9) {
    return;
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_02512634;
  lVar8 = *(long *)(param_5 + 0x48);
  if (lVar8 == 0) goto LAB_0251260c;
  if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_02512634;
  lVar6 = *(long *)(lVar6 + uVar9 * 8 + 0x20);
  fVar11 = param_4;
  if (*(float *)(lVar8 + uVar9 * 4 + 0x20) < 0.0) {
    lVar8 = *(long *)(param_5 + 0x50);
    if (lVar8 == 0) goto LAB_0251260c;
    if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_02512634;
    lVar1 = lVar8 + uVar9 * 4;
    if (*(float *)(lVar1 + 0x20) < 0.0) {
      param_2 = (ulong)*(uint *)(param_5 + 0x28);
      fVar11 = (float)UnityEngine_Random__Range_3c11c54(0,param_2,0);
      if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_02512634;
      lVar8 = *(long *)(param_5 + 0x50);
      *(float *)(lVar1 + 0x20) = fVar10 + fVar11;
      if (lVar8 == 0) goto LAB_0251260c;
    }
    fVar14 = (float)param_3;
    fVar16 = (float)param_2;
    if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_02512634;
    fVar11 = param_4;
    if (fVar10 < *(float *)(lVar8 + uVar9 * 4 + 0x20)) goto LAB_02512600;
    lVar8 = *(long *)(param_5 + 0x48);
    if (lVar8 == 0) goto LAB_0251260c;
    if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_02512634;
    cVar2 = *(char *)(param_5 + 0x21);
    *(float *)(lVar8 + uVar9 * 4 + 0x20) = fVar10;
    if (cVar2 != '\0') {
      if (*(long *)(param_5 + 0x38) != 0) {
        uVar15 = UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_5 + 0x38),0);
        fVar11 = param_4;
        uVar12 = UnityEngine_Random__Range_3c11c54(uVar15,fVar14 + (float)uVar15,0);
        uVar13 = UnityEngine_Random__Range_3c11c54(fVar16,param_4 + fVar16,0);
        if (lVar6 != 0) {
          UnityEngine_Transform__set_localPosition_3c2c450(uVar12,uVar13,0,lVar6,0);
          lVar8 = *(long *)(param_5 + 0x48);
          if (lVar8 != 0) goto LAB_02512508;
        }
      }
      goto LAB_0251260c;
    }
  }
LAB_02512508:
  if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_02512634;
  fVar16 = (fVar10 - *(float *)(lVar8 + uVar9 * 4 + 0x20)) / *(float *)(param_5 + 0x2c);
  if (1.0 <= fVar16) {
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(puVar5);
      cRam0000000004f4a233 = '\x01';
    }
    if (lVar6 == 0) goto LAB_0251260c;
    puVar7 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
    param_3 = (ulong)(uint)puVar7[2];
    UnityEngine_Transform__set_localScale_3c2ddfc(*puVar7,puVar7[1],lVar6,0);
    lVar6 = *(long *)(param_5 + 0x48);
    if (lVar6 == 0) goto LAB_0251260c;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_02512634:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    lVar8 = *(long *)(param_5 + 0x50);
    *(undefined4 *)(lVar6 + uVar9 * 4 + 0x20) = 0xbf800000;
    param_2 = (ulong)*(uint *)(param_5 + 0x28);
    fVar16 = (float)UnityEngine_Random__Range_3c11c54(*(undefined4 *)(param_5 + 0x24),0);
    if (lVar8 == 0) goto LAB_0251260c;
    if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_02512634;
    *(float *)(lVar8 + uVar9 * 4 + 0x20) = fVar10 + fVar16;
  }
  else {
    if (lVar6 == 0) goto LAB_0251260c;
    fVar14 = (float)FUN_046086e0(fVar16 * fVar3);
    fVar14 = fVar14 * *(float *)(param_5 + 0x30);
    UnityEngine_Transform__set_localScale_3c2ddfc(fVar14,fVar14,0x3f800000,lVar6,0);
    param_2 = 0;
    param_3 = (ulong)(uint)(fVar16 * *(float *)(param_5 + 0x34) * fVar4);
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0);
    UnityEngine_Transform__set_localRotation_3c2d9f0(lVar6,0);
  }
LAB_02512600:
  lVar6 = *(long *)(param_5 + 0x40);
  uVar9 = uVar9 + 1;
  param_4 = fVar11;
  if (lVar6 == 0) goto LAB_0251260c;
  goto LAB_025123dc;
}

