/* IL2CPP: Carrier$$GetNextColorType
ColorType_o Carrier__GetNextColorType (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetNextColorType
   ColorType_o Carrier__GetNextColorType (Carrier_o* __this, const MethodInfo* method); */

undefined8 Carrier__GetNextColorType_24095f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_28;
  long lStack_18;
  
  if ((bRam0000000004f4b6dc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4b6dc = 1;
  }
  uVar1 = Carrier__IsEmpty_23faccc(param_1);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1e0);
    if ((lVar2 != 0) &&
       (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar2,*(int *)(lVar2 + 0x18) + -1,&lStack_18,*(undefined8 *)PTR_DAT_049c1558),
       lStack_18 != 0)) {
      return *(undefined8 *)(lStack_18 + 0xe4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_28 = 0;
  ColorType___ctor_24f9bd8(&uStack_28,0,0,0);
  return uStack_28;
}

