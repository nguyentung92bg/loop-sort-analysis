/* IL2CPP: StickyBlockGroupSystem$$AddStickyToCarrier
void StickyBlockGroupSystem__AddStickyToCarrier (StickyBlockGroupSystem_o* __this, Carrier_o* carrier, StickyBlockGroup_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StickyBlockGroupSystem$$AddStickyToCarrier
   void StickyBlockGroupSystem__AddStickyToCarrier (StickyBlockGroupSystem_o* __this, Carrier_o*
   carrier, StickyBlockGroup_o* instance, const MethodInfo* method); */

void StickyBlockGroupSystem__AddStickyToCarrier_23f37e4
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  if ((bRam0000000004f4b651 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2180);
    FUN_021f03f8(PTR_DAT_049c21b0);
    FUN_021f03f8(PTR_DAT_049c21b8);
    FUN_021f03f8(PTR_DAT_049c21c0);
    FUN_021f03f8(PTR_DAT_049c21c8);
    bRam0000000004f4b651 = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x78),param_2,&lStack_28,*(undefined8 *)PTR_DAT_049c2180)
    ;
    if ((uVar1 & 1) == 0) {
      lVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c21c8);
      System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                (lVar2,*(undefined8 *)PTR_DAT_049c21c0);
      lStack_28 = lVar2;
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_024f38e8;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0x78),param_2,lVar2,*(undefined8 *)PTR_DAT_049c21b0);
    }
    if (lStack_28 != 0) {
      FUN_02333498(lStack_28,param_3,*(undefined8 *)PTR_DAT_049c21b8);
      return;
    }
  }
LAB_024f38e8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

