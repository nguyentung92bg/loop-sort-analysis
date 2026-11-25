/* IL2CPP: LoseSystem$$GetMinCompleteBlockCount
int32_t LoseSystem__GetMinCompleteBlockCount (LoseSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseSystem$$GetMinCompleteBlockCount
   int32_t LoseSystem__GetMinCompleteBlockCount (LoseSystem_o* __this, const MethodInfo* method); */

int LoseSystem__GetMinCompleteBlockCount_24e08ac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4bc61 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c22d8);
    bRam0000000004f4bc61 = 1;
  }
  puVar2 = PTR_DAT_049c22d8;
  lVar7 = *(long *)(param_1 + 0xb0);
  uStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  if (lVar7 == 0) {
LAB_025e0a18:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lStack_40 = 0;
  lStack_38 = 0;
  lStack_48 = (ulong)*(uint *)(lVar7 + 0x30) << 0x20;
  thunk_FUN_021f190c(&lStack_40,0);
  lStack_38 = *(long *)(lVar7 + 0x28);
  thunk_FUN_021f190c(&lStack_38);
  lStack_58 = lStack_40;
  uStack_60 = lStack_48;
  lStack_50 = lStack_38;
  iVar3 = 0x7fffffff;
LAB_025e094c:
  iVar6 = iVar3;
  iVar3 = (int)uStack_60 + -1;
  uStack_60 = CONCAT44(uStack_60._4_4_,iVar3);
  if (iVar3 < 0) {
    uVar1 = uStack_60._4_4_ - 1;
    uStack_60 = CONCAT44(uVar1,iVar3);
    if ((int)uVar1 < 0) {
      if (iVar6 == 0x7fffffff) {
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_025e0a18;
        iVar6 = *(int *)(*(long *)(param_1 + 0x80) + 0x15c);
      }
      return iVar6;
    }
    lVar7 = *(long *)(lStack_50 + (ulong)uVar1 * 8 + 0x20);
    lStack_58 = *(long *)(lVar7 + 0x18);
    thunk_FUN_021f190c((ulong)&uStack_60 | 8);
    iVar3 = *(int *)(lVar7 + 0x30) + -1;
    uStack_60 = CONCAT44(uStack_60._4_4_,iVar3);
  }
  if (*(long *)(param_1 + 200) == 0) goto LAB_025e0a18;
                    /* try { // try from 025e09ac to 026e0ae7 has its CatchHandler @ 025e09ac
                       catch() { ... } // from try @ 025e09ac with catch @ 025e09ac
                       catch() { ... } // from try @ 025e0b54 with catch @ 025e09ac
                       catch() { ... } // from try @ 025e0cd4 with catch @ 025e09ac
                       catch() { ... } // from try @ 025e0d3c with catch @ 025e09ac
                       catch() { ... } // from try @ 025e0dd0 with catch @ 025e09ac
                       catch() { ... } // from try @ 025e0dfc with catch @ 025e09ac */
  plVar4 = (long *)FUN_024f6008(*(long *)(param_1 + 200),
                                *(undefined8 *)(lStack_58 + (long)iVar3 * 8 + 0x20),
                                *(undefined8 *)puVar2);
  lVar7 = *plVar4;
  if (lVar7 == 0) goto LAB_025e0a18;
  iVar3 = iVar6;
  if (((*(char *)(lVar7 + 0x1b1) == '\0') &&
      (uVar5 = Carrier__CanBeginTransferEnter_23fad1c(lVar7,0), (uVar5 & 1) != 0)) &&
     (iVar3 = Carrier__GetCompleteBlockCount_24095bc(lVar7,0), iVar6 <= iVar3)) {
    iVar3 = iVar6;
  }
  goto LAB_025e094c;
}

