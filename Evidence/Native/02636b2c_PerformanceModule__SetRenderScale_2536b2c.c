/* IL2CPP: PerformanceModule$$SetRenderScale
void PerformanceModule__SetRenderScale (PerformanceModule_o* __this, float scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PerformanceModule$$SetRenderScale
   void PerformanceModule__SetRenderScale (PerformanceModule_o* __this, float scale, const
   MethodInfo* method); */

void PerformanceModule__SetRenderScale_2536b2c(float param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_50 [16];
  double dStack_38;
  
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (cRam0000000004f4bf9d == '\0') {
    FUN_021f03f8(PTR_DAT_049c8550);
    cRam0000000004f4bf9d = '\x01';
  }
  if (**(char **)(*(long *)PTR_DAT_049c8550 + 0xb8) != '\0') {
    return;
  }
  auStack_50 = UnityEngine_Screen__get_currentResolution_3bd8184(0);
  iVar2 = UnityEngine_Resolution__get_width_3bda0dc(auStack_50,0);
  if (cRam0000000004f4a004 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a004 = '\x01';
  }
  puVar1 = PTR_DAT_049b8758;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  dVar5 = (double)((float)iVar2 * param_1);
  dVar4 = (double)FUN_04608690(dVar5,&dStack_38);
  if (0.0 <= (float)iVar2 * param_1) {
    if (dVar4 == 0.5) {
      dVar4 = 1.0;
      goto LAB_02636c1c;
    }
    dVar5 = (double)(long)(dVar5 + 0.5);
  }
  else if (dVar4 == -0.5) {
    dVar4 = -1.0;
LAB_02636c1c:
    dVar5 = dStack_38;
    if (((long)dStack_38 & 1U) != 0) {
      dVar5 = dStack_38 + dVar4;
    }
  }
  else {
    dVar5 = (double)(long)(dVar5 + -0.5);
  }
  iVar2 = -0x80000000;
  if (dVar5 != INFINITY) {
    iVar2 = (int)dVar5;
  }
  auVar6 = UnityEngine_Screen__get_currentResolution_3bd8184(0);
  auStack_50 = auVar6;
  iVar3 = UnityEngine_Resolution__get_height_3bda0e4(auStack_50,0);
  if (cRam0000000004f4a004 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a004 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  dVar5 = (double)((float)iVar3 * param_1);
  dVar4 = (double)FUN_04608690(dVar5,&dStack_38);
  if (0.0 <= (float)iVar3 * param_1) {
    if (dVar4 != 0.5) {
      dStack_38 = (double)(long)(dVar5 + 0.5);
      goto LAB_02636d14;
    }
    dVar4 = 1.0;
  }
  else {
    if (dVar4 != -0.5) {
      dStack_38 = (double)(long)(dVar5 + -0.5);
      goto LAB_02636d14;
    }
    dVar4 = -1.0;
  }
  if (((long)dStack_38 & 1U) != 0) {
    dStack_38 = dStack_38 + dVar4;
  }
LAB_02636d14:
  iVar3 = -0x80000000;
  if (dStack_38 != INFINITY) {
    iVar3 = (int)dStack_38;
  }
  UnityEngine_Screen__SetResolution_3bd83dc(iVar2,iVar3,1,0);
  return;
}

