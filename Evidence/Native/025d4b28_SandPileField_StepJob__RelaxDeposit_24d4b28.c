/* IL2CPP: SandPileField.StepJob$$RelaxDeposit
void SandPileField_StepJob__RelaxDeposit (SandPileField_StepJob_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField.StepJob$$RelaxDeposit
   void SandPileField_StepJob__RelaxDeposit (SandPileField_StepJob_o __this, const MethodInfo*
   method); */

void SandPileField_StepJob__RelaxDeposit_24d4b28(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  puVar3 = PTR_DAT_049c76c8;
  if ((bRam0000000004f4bc33 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c76c8);
    bRam0000000004f4bc33 = 1;
  }
  Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___CopyFrom_28f49d4
            (param_1 + 4,*param_1,param_1[1],*(undefined8 *)puVar3);
  if (0 < *(int *)((long)param_1 + 0x8c)) {
    iVar7 = 0;
    do {
      if (0 < (int)*(uint *)(param_1 + 9)) {
        func_0x04608670(param_1[8],0,(ulong)*(uint *)(param_1 + 9) << 2);
      }
      if (0 < *(int *)((long)param_1 + 0x84)) {
        iVar8 = 0;
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          iVar10 = 0;
          do {
            iVar1 = *(int *)((long)param_1 + 0x84);
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar9 / iVar1;
            }
            SandPileField_StepJob__Transfer_24d5080
                      (*(undefined4 *)(param_1 + 0x13),param_1,iVar8 + iVar10,
                       iVar10 + (iVar9 - iVar2 * iVar1) * 0xc);
            if (iVar10 == 0xb) break;
            iVar1 = iVar10 + 1;
            SandPileField_StepJob__Transfer_24d5080
                      (*(undefined4 *)((long)param_1 + 0x9c),param_1,iVar8 + iVar10,iVar1 + iVar8);
            iVar10 = iVar1;
          } while (iVar1 != 0xc);
          iVar8 = iVar8 + 0xc;
        } while (iVar9 < *(int *)((long)param_1 + 0x84));
      }
      uVar4 = (ulong)*(uint *)(param_1 + 5);
      if (0 < (int)*(uint *)(param_1 + 5)) {
        pfVar5 = (float *)param_1[4];
        pfVar6 = (float *)param_1[8];
        do {
          uVar4 = uVar4 - 1;
          *pfVar5 = *pfVar5 + *pfVar6;
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
        } while (uVar4 != 0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)((long)param_1 + 0x8c));
  }
  return;
}

