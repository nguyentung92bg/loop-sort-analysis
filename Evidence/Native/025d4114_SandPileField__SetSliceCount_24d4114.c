/* IL2CPP: SandPileField$$SetSliceCount
void SandPileField__SetSliceCount (SandPileField_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField$$SetSliceCount
   void SandPileField__SetSliceCount (SandPileField_o* __this, int32_t count, const MethodInfo*
   method); */

void SandPileField__SetSliceCount_24d4114(long param_1,uint param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if ((bRam0000000004f4bc2d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c76b0);
    FUN_021f03f8(PTR_DAT_049c6f10);
    FUN_021f03f8(PTR_DAT_049c6ee0);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    bRam0000000004f4bc2d = 1;
  }
  puVar2 = PTR_DAT_049c6f10;
  lStack_50 = 0;
  lStack_48 = 0;
  lVar6 = *(long *)(param_1 + 0x40);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  if (lVar6 != 0) {
    uVar4 = (uint)*(ulong *)(lVar6 + 0x18);
    if (param_2 != uVar4) {
      if (0 < (int)uVar4) {
        uVar7 = 0;
        uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                    /* try { // try from 025d41ac to 026d4237 has its CatchHandler @ 025d41ac
                       catch() { ... } // from try @ 025d41ac with catch @ 025d41ac
                       catch() { ... } // from try @ 025d42c0 with catch @ 025d41ac
                       catch() { ... } // from try @ 025d4340 with catch @ 025d41ac */
        do {
          if (uVar5 <= uVar7) goto LAB_025d4288;
          plVar1 = (long *)(lVar6 + 0x20 + uVar7 * 0x10);
          lStack_48 = plVar1[1];
          lStack_50 = *plVar1;
          if (lStack_50 != 0) {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                      (&lStack_50,*(undefined8 *)puVar2);
            uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
          }
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)uVar5);
      }
      uVar3 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049c76b0,param_2);
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      thunk_FUN_021f190c((long *)(param_1 + 0x40),uVar3);
      puVar2 = PTR_DAT_049c6ee0;
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar7 = 0;
        do {
          lVar6 = *(long *)(param_1 + 0x40);
                    /* try { // try from 025d4238 to 026d425b has its CatchHandler @ 025d430c */
          uStack_60 = 0;
          uStack_58 = 0;
          Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
                    (&uStack_60,*(undefined4 *)(param_1 + 0x38),4,1,*(undefined8 *)puVar2);
          if (lVar6 == 0) goto LAB_025d428c;
          if (*(uint *)(lVar6 + 0x18) <= uVar7) {
LAB_025d4288:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar6 = lVar6 + uVar7 * 0x10;
          uVar7 = uVar7 + 1;
          *(undefined8 *)(lVar6 + 0x28) = uStack_58;
          *(undefined8 *)(lVar6 + 0x20) = uStack_60;
        } while (param_2 != uVar7);
      }
      SandPileField__BeginDeposit_24d401c(param_1);
    }
                    /* try { // try from 025d4278 to 026d427b has its CatchHandler @ 025d4300 */
                    /* try { // try from 025d4280 to 026d4283 has its CatchHandler @ 025d4304 */
    return;
  }
LAB_025d428c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

