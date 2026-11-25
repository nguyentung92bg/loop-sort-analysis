/* IL2CPP: RisingMotesEffect$$Update
void RisingMotesEffect__Update (RisingMotesEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RisingMotesEffect$$Update
   void RisingMotesEffect__Update (RisingMotesEffect_o* __this, const MethodInfo* method); */

void RisingMotesEffect__Update_2572d3c(long param_1)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar8 = (float)UnityEngine_Time__get_time_3c295c8(0);
  }
  else {
    fVar8 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
  }
  fVar2 = _UNK_013aa868;
  fVar1 = _UNK_013aa860;
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    uVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= (int)uVar5) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x50);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_02672f2c:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar4 = *(long *)(param_1 + 0x58);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_02672f2c;
      lVar7 = (long)(int)uVar5;
      fVar14 = fVar8 - *(float *)(lVar3 + lVar7 * 4 + 0x20);
      if (*(float *)(lVar4 + lVar7 * 4 + 0x20) <= fVar14) {
        RisingMotesEffect__Spawn_2572bc4(fVar8,param_1,uVar5);
        fVar14 = 0.0;
      }
      lVar3 = *(long *)(param_1 + 0x60);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_02672f2c;
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_02672f2c;
      plVar6 = *(long **)(lVar4 + lVar7 * 8 + 0x20);
      if (plVar6 == (long *)0x0) break;
      lVar3 = lVar3 + lVar7 * 8;
      fVar13 = *(float *)(lVar3 + 0x20);
      fVar12 = *(float *)(lVar3 + 0x24);
      lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(plVar6,0);
      if (lVar3 == 0) break;
      fVar12 = fVar12 + fVar14 * *(float *)(param_1 + 0x24);
      fVar9 = (float)FUN_046086e0(fVar14 * fVar2 + (float)(int)uVar5);
      uVar11 = 0;
      UnityEngine_Transform__set_localPosition_3c2c450
                (fVar13 + fVar9 * *(float *)(param_1 + 0x30),fVar12,0,lVar3,0);
      uVar10 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
      lVar3 = *(long *)(param_1 + 0x58);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_02672f2c;
      fVar14 = (float)FUN_046086e0((fVar14 / *(float *)(lVar3 + lVar7 * 4 + 0x20)) * fVar1);
      (**(code **)(*plVar6 + 0x2a8))
                (uVar10,fVar12,uVar11,*(float *)(param_1 + 0x34) * fVar14,plVar6,
                 *(undefined8 *)(*plVar6 + 0x2b0));
      lVar3 = *(long *)(param_1 + 0x48);
      uVar5 = uVar5 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

