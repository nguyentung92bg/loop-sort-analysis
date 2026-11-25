/* IL2CPP: LavaQuestSubMonitor$$BuildPlayerOffsets
System_Collections_Generic_List_Vector3__o* LavaQuestSubMonitor__BuildPlayerOffsets (int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LavaQuestSubMonitor$$BuildPlayerOffsets
   System_Collections_Generic_List_Vector3__o* LavaQuestSubMonitor__BuildPlayerOffsets (int32_t
   count, const MethodInfo* method); */

long LavaQuestSubMonitor__BuildPlayerOffsets_2479eec(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  
  if ((bRam0000000004f4b9e0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bed58);
    FUN_021f03f8(PTR_DAT_049c58f8);
    FUN_021f03f8(PTR_DAT_049bed70);
    FUN_021f03f8(PTR_DAT_049bed80);
    bRam0000000004f4b9e0 = 1;
  }
  if (cRam0000000004f4b79c == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4b79c = '\x01';
  }
  puVar4 = PTR_DAT_049b8758;
  if ((*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) &&
     (FUN_021f0574(), cRam0000000004f4b79c == '\0')) {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4b79c = '\x01';
  }
  fVar11 = (float)(int)SQRT((float)param_1);
  iVar6 = (int)fVar11;
  fVar11 = (float)param_1 / (float)(int)fVar11;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c58f8;
  fVar13 = 0.0;
  iVar1 = -0x80000000;
  if ((float)(int)fVar11 != INFINITY) {
    iVar1 = (int)fVar11;
  }
  fStack_90 = 0.0;
  if (1 < iVar6) {
    fVar13 = (_UNK_013aa38c / (float)(iVar6 + -1)) * _UNK_013aa62c;
  }
  if (iVar1 + -1 != 0 && 0 < iVar1) {
    fStack_90 = (_UNK_013aa768 / (float)(iVar1 + -1)) * _UNK_013aa62c;
  }
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bed80);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd184
            (lVar5,param_1,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_049bed58;
  fVar3 = _UNK_013aa878;
  fVar2 = _UNK_013aa768;
  fVar11 = _UNK_013aa38c;
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      if (0 < iVar6) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        iVar8 = 0;
        fVar9 = 0.5;
        if (iVar1 != 1) {
          fVar9 = (float)iVar7 / (float)(iVar1 + -1);
        }
        fVar10 = 1.0;
        if (fVar9 <= 1.0) {
          fVar10 = fVar9;
        }
        fVar14 = 0.0;
        if (0.0 <= fVar9) {
          fVar14 = fVar10 * fVar2 + 0.0;
        }
        do {
          if (param_1 <= *(int *)(lVar5 + 0x18)) break;
          fVar9 = 0.5;
          if (iVar6 != 1) {
            fVar9 = (float)iVar8 / (float)(iVar6 + -1);
          }
          fVar10 = 1.0;
          if (fVar9 <= 1.0) {
            fVar10 = fVar9;
          }
          fVar12 = fVar3;
          if (0.0 <= fVar9) {
            fVar12 = fVar10 * fVar11 + fVar3;
          }
          fVar9 = (float)UnityEngine_Random__Range_3c11c54(-fVar13,fVar13,0);
          fStack_88 = (float)UnityEngine_Random__Range_3c11c54(-fStack_90,fStack_90,0);
          fStack_88 = fStack_88 + fVar14;
          uStack_84 = 0;
          fStack_8c = fVar12 + fVar9;
          FUN_02333498(lVar5,&fStack_8c,*(undefined8 *)puVar4);
          iVar8 = iVar8 + 1;
        } while (iVar6 != iVar8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar1);
  }
  return lVar5;
}

