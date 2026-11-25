/* IL2CPP: SandPileField$$BeginDeposit
void SandPileField__BeginDeposit (SandPileField_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField$$BeginDeposit
   void SandPileField__BeginDeposit (SandPileField_o* __this, const MethodInfo* method); */

void SandPileField__BeginDeposit_24d401c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4bc2e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ef0);
    FUN_021f03f8(PTR_DAT_049c76a0);
    bRam0000000004f4bc2e = 1;
  }
  puVar1 = PTR_DAT_049c76a0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uStack_38 = 0;
    SandPileField__Fill___Il2CppFullySharedGenericStructType__26b5bac
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),&uStack_38,
               *(undefined8 *)PTR_DAT_049c76a0);
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar4 = 0;
      uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      puVar5 = (undefined8 *)(lVar3 + 0x28);
      do {
        if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        if (puVar5[-1] != 0) {
          uStack_34 = 0;
          SandPileField__Fill___Il2CppFullySharedGenericStructType__26b5bac
                    (puVar5[-1],*puVar5,&uStack_34,*(undefined8 *)puVar1);
        }
        uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 2;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    *(undefined1 *)(param_1 + 200) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

