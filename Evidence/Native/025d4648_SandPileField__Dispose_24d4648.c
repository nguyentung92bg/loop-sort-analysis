/* IL2CPP: SandPileField$$Dispose
void SandPileField__Dispose (SandPileField_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField$$Dispose
   void SandPileField__Dispose (SandPileField_o* __this, const MethodInfo* method); */

void SandPileField__Dispose_24d4648(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4bc31 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6f10);
    FUN_021f03f8(PTR_DAT_049c7688);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    FUN_021f03f8(PTR_DAT_049c6f30);
    bRam0000000004f4bc31 = 1;
  }
  puVar2 = PTR_DAT_049c6f10;
  lStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
              ((long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c6f10);
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        plVar1 = (long *)(lVar4 + 0x20 + uVar5 * 0x10);
        lStack_38 = plVar1[1];
        lStack_40 = *plVar1;
        if (lStack_40 != 0) {
          Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                    (&lStack_40,*(undefined8 *)puVar2);
        }
        uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                ((long *)(param_1 + 0x48),*(undefined8 *)puVar2);
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                ((long *)(param_1 + 0x58),*(undefined8 *)puVar2);
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                ((long *)(param_1 + 0x68),*(undefined8 *)puVar2);
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                ((long *)(param_1 + 0x78),*(undefined8 *)puVar2);
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                ((long *)(param_1 + 0x88),*(undefined8 *)puVar2);
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                ((long *)(param_1 + 0x98),*(undefined8 *)puVar2);
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                ((long *)(param_1 + 0xa8),*(undefined8 *)PTR_DAT_049c7688);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

