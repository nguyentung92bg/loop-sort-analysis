/* IL2CPP: SandPileField$$Configure
void SandPileField__Configure (SandPileField_o* __this, float length, float halfWidth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandPileField$$Configure
   void SandPileField__Configure (SandPileField_o* __this, float length, float halfWidth, const
   MethodInfo* method); */

void SandPileField__Configure_24d3ad4(float param_1,float param_2,long param_3)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4bc29 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7688);
    FUN_021f03f8(PTR_DAT_049c7690);
    FUN_021f03f8(PTR_DAT_049c6ee0);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    FUN_021f03f8(PTR_DAT_049c6f30);
    bRam0000000004f4bc29 = 1;
  }
  if (((param_1 <= _UNK_013aa94c) || (param_2 <= _UNK_013aa94c)) ||
     ((*(float *)(param_3 + 0xbc) == param_1 && (*(float *)(param_3 + 0xd0) == param_2)))) {
    return;
  }
  *(float *)(param_3 + 0xbc) = param_1;
  cVar3 = cRam0000000004f4b79c;
  fVar2 = _UNK_013aa8ac;
  *(float *)(param_3 + 0xd0) = param_2;
  if (cVar3 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4b79c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  iVar4 = (int)(param_1 / fVar2);
  if (0x1ff < iVar4) {
    iVar4 = 0x200;
  }
  if (iVar4 < 9) {
    iVar4 = 8;
  }
  uVar9 = NEON_fmov(0x41400000,4);
  iVar1 = 8;
  if ((float)(int)(param_1 / fVar2) != INFINITY) {
    iVar1 = iVar4;
  }
  *(int *)(param_3 + 0xcc) = iVar1;
  iVar4 = iVar1 * 0xc;
  *(ulong *)(param_3 + 0xc0) =
       CONCAT44((param_2 + param_2) / (float)((ulong)uVar9 >> 0x20),param_1 / (float)iVar1);
  SandPileField__Allocate_24d3d5c(param_3 + 0x30,iVar4);
  lVar5 = *(long *)(param_3 + 0x40);
  if (lVar5 != 0) {
    uVar7 = 0;
    lVar6 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar7) {
        SandPileField__Allocate_24d3d5c(param_3 + 0x48,iVar4);
        SandPileField__Allocate_24d3d5c(param_3 + 0x58,iVar4);
        SandPileField__Allocate_24d3d5c(param_3 + 0x68,iVar4);
        SandPileField__Allocate_24d3d5c(param_3 + 0x78,*(undefined4 *)(param_3 + 0xcc));
        plVar8 = (long *)(param_3 + 0xa8);
        if (*plVar8 != 0) {
          Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                    (plVar8,*(undefined8 *)PTR_DAT_049c7688);
        }
        lStack_50 = 0;
        uStack_48 = 0;
        Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
                  (&lStack_50,iVar4,4,1,*(undefined8 *)PTR_DAT_049c7690);
        *(undefined8 *)(param_3 + 0xb0) = uStack_48;
        *plVar8 = lStack_50;
        if (*(long *)(param_3 + 0x98) == 0) {
          lStack_50 = 0;
          uStack_48 = 0;
          Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
                    (&lStack_50,2,4,1,*(undefined8 *)PTR_DAT_049c6ee0);
          *(undefined8 *)(param_3 + 0xa0) = uStack_48;
          *(long *)(param_3 + 0x98) = lStack_50;
        }
        *(undefined4 *)(param_3 + 0xd4) = 0;
        *(undefined1 *)(param_3 + 0xc9) = 1;
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar5 = lVar5 + lVar6;
      lVar6 = lVar6 + 0x10;
      uVar7 = uVar7 + 1;
      SandPileField__Allocate_24d3d5c(lVar5,iVar4);
      lVar5 = *(long *)(param_3 + 0x40);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

