/* IL2CPP: SandFlowRenderer$$PrepareChunks
int32_t SandFlowRenderer__PrepareChunks (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$PrepareChunks
   int32_t SandFlowRenderer__PrepareChunks (SandFlowRenderer_o* __this, const MethodInfo* method);
    */

int SandFlowRenderer__PrepareChunks_24be418(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_049c6e10;
  if ((bRam0000000004f4bbd7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbd7 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x2f8);
  iVar2 = *(int *)(param_1 + 0x324);
  lVar4 = *(long *)(param_1 + 0x2d8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar4 != 0) {
    if (iVar2 < 0x21) {
      iVar2 = 0x20;
    }
    iVar2 = iVar2 * iVar1;
    UnityEngine_MaterialPropertyBlock__SetInt_3bdbcd4
              (lVar4,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x5c),iVar2,0);
    iVar1 = iVar2 + 0x7fe;
    if (-1 < iVar2 + 0x3ff) {
      iVar1 = iVar2 + 0x3ff;
    }
    return iVar1 >> 10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

