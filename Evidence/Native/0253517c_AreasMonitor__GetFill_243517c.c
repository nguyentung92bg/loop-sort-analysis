/* IL2CPP: AreasMonitor$$GetFill
float AreasMonitor__GetFill (AreasMonitor_o* __this, AreasMonitor_AreaView_o* areaView, float level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$GetFill
   float AreasMonitor__GetFill (AreasMonitor_o* __this, AreasMonitor_AreaView_o* areaView, float
   level, const MethodInfo* method); */

undefined1  [16] AreasMonitor__GetFill_243517c(ulong param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int aiStack_68 [2];
  long lStack_60;
  float fStack_58;
  undefined8 uStack_48;
  
  fVar12 = (float)param_1;
  if ((bRam0000000004f4b800 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3ae8);
    FUN_021f03f8(PTR_DAT_049c3af0);
    FUN_021f03f8(PTR_DAT_049b3cf0);
    param_1 = FUN_021f03f8(PTR_DAT_049b45b8);
    bRam0000000004f4b800 = 1;
  }
  puVar2 = PTR_DAT_049c3af0;
  uStack_48 = 0;
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    iVar1 = *(int *)(*(long *)(param_3 + 0x10) + 0x24);
    param_1 = 0;
    if ((float)iVar1 <= fVar12) {
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_025353b8;
      iVar6 = *(int *)(*(long *)(param_3 + 0x28) + 0x18);
      fVar10 = *(float *)(param_3 + 0x20);
      do {
        iVar5 = iVar1;
        fVar7 = fVar10;
        iVar6 = iVar6 + -1;
        param_1 = (ulong)(uint)fVar7;
        if (iVar6 < 0) {
          if (*(long *)(param_3 + 0x10) == 0) goto LAB_025353b8;
          uStack_48 = *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x28);
          lVar3 = *(long *)(*(long *)PTR_DAT_049b3cf0 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02229718();
          }
          pcVar4 = (char *)thunk_FUN_0224e54c(&uStack_48,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
          if (*pcVar4 == '\0') {
            fVar10 = *(float *)(param_2 + 0x120);
            fStack_58 = *(float *)(param_2 + 0xf4) / *(float *)(param_3 + 0x18) + 1.0;
            fVar12 = 1.0;
            if (fVar10 <= 1.0) {
              fVar12 = fVar10;
            }
            fVar9 = 0.0;
            if (0.0 <= fVar10) {
              fVar9 = fVar12;
            }
            goto LAB_02535390;
          }
          fVar9 = (float)iVar5;
          System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                    (&uStack_48,aiStack_68,*(undefined8 *)PTR_DAT_049b45b8);
          fVar10 = 0.0;
          if (fVar9 != (float)aiStack_68[0]) {
            fVar9 = (fVar12 - fVar9) / ((float)aiStack_68[0] - fVar9);
            fVar12 = 1.0;
            if (fVar9 <= 1.0) {
              fVar12 = fVar9;
            }
            fVar10 = 0.0;
            if (0.0 <= fVar9) {
              fVar10 = fVar12;
            }
          }
          fVar9 = 0.0;
          if (0.0 <= fVar10) {
            fVar9 = fVar10;
          }
          fVar9 = (1.0 - fVar7) * fVar9;
          goto LAB_02535398;
        }
        if ((*(long *)(param_3 + 0x28) == 0) ||
           (param_1 = System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                                (*(long *)(param_3 + 0x28),iVar6,aiStack_68,*(undefined8 *)puVar2),
           lStack_60 == 0)) goto LAB_025353b8;
        fVar9 = (float)*(int *)(lStack_60 + 0x14);
        fVar10 = fStack_58;
        iVar1 = *(int *)(lStack_60 + 0x14);
      } while (fVar9 <= fVar12);
      fVar11 = (float)iVar5;
      fVar10 = 0.0;
      if (fVar11 != fVar9) {
        fVar9 = (fVar12 - fVar11) / (fVar9 - fVar11);
        fVar12 = 1.0;
        if (fVar9 <= 1.0) {
          fVar12 = fVar9;
        }
        fVar10 = 0.0;
        if (0.0 <= fVar9) {
          fVar10 = fVar12;
        }
      }
      fVar9 = 0.0;
      if (0.0 <= fVar10) {
        fVar9 = fVar10;
      }
LAB_02535390:
      fVar9 = (fStack_58 - fVar7) * fVar9;
LAB_02535398:
      param_1 = (ulong)(uint)(fVar7 + fVar9);
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_1;
    return auVar8;
  }
LAB_025353b8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(param_1);
}

