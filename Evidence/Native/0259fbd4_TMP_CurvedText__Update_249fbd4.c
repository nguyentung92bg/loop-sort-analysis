/* IL2CPP: TMP_CurvedText$$Update
void TMP_CurvedText__Update (TMP_CurvedText_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TMP_CurvedText$$Update
   void TMP_CurvedText__Update (TMP_CurvedText_o* __this, const MethodInfo* method); */

void TMP_CurvedText__Update_249fbd4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bae7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bae7 = 1;
  }
  TMP_CurvedText__CacheTextComponent_249fb3c(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    fVar7 = *(float *)(param_1 + 0x20);
    fVar8 = *(float *)(param_1 + 0x34);
    if (cRam0000000004f4a18f == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf30);
      cRam0000000004f4a18f = '\x01';
    }
    fVar4 = ABS(fVar7);
    fVar5 = ABS(fVar8);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar6 = **(float **)(*(long *)PTR_DAT_049bbf30 + 0xb8) * 8.0;
    fVar5 = fVar4 * _UNK_013aa8a0;
    if (fVar4 * _UNK_013aa8a0 <= fVar6) {
      fVar5 = fVar6;
    }
    if (fVar5 <= ABS(fVar8 - fVar7)) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      TMPro_TMP_Text__set_havePropertiesChanged_3b0c998(*(long *)(param_1 + 0x28),1,0);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  return;
}

