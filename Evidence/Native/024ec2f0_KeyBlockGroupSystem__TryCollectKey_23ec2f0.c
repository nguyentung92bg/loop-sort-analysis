/* IL2CPP: KeyBlockGroupSystem$$TryCollectKey
void KeyBlockGroupSystem__TryCollectKey (KeyBlockGroupSystem_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: KeyBlockGroupSystem$$TryCollectKey
   void KeyBlockGroupSystem__TryCollectKey (KeyBlockGroupSystem_o* __this, Block_o* block, const
   MethodInfo* method); */

void KeyBlockGroupSystem__TryCollectKey_23ec2f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lStack_28;
  
  if ((bRam0000000004f4b628 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1e90);
    bRam0000000004f4b628 = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0xb0),param_2,&lStack_28,*(undefined8 *)PTR_DAT_049c1e90)
    ;
    if ((uVar1 & 1) != 0) {
      if (lStack_28 == 0) goto LAB_024ec368;
      KeyBlockGroup__Collect_23eba78();
    }
    return;
  }
LAB_024ec368:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

