/* IL2CPP: AreasMonitor$$GetLastLevel
int32_t AreasMonitor__GetLastLevel (AreasMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$GetLastLevel
   int32_t AreasMonitor__GetLastLevel (AreasMonitor_o* __this, const MethodInfo* method); */

undefined4 AreasMonitor__GetLastLevel_2437abc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lStack_18;
  
  if ((bRam0000000004f4b806 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3c10);
    FUN_021f03f8(PTR_DAT_049c3c18);
    bRam0000000004f4b806 = 1;
  }
  if ((((*(long *)(param_1 + 0x98) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x50), lVar1 != 0)) &&
      (lVar1 = AreaSheet__GetArea_25579c0(lVar1,0x7fffffff,0), lVar1 != 0)) &&
     (lVar2 = *(long *)(lVar1 + 0x30), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) < 1) {
      puVar3 = (undefined4 *)(lVar1 + 0x24);
    }
    else {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar2,0,&lStack_18,*(undefined8 *)PTR_DAT_049c3c18);
      if (lStack_18 == 0) goto LAB_02537b68;
      puVar3 = (undefined4 *)(lStack_18 + 0x14);
    }
    return *puVar3;
  }
LAB_02537b68:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

