/* IL2CPP: CapacityBooster$$CanSelect
bool CapacityBooster__CanSelect (CapacityBooster_o* __this, VContainer_IObjectResolver_o* resolver, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CapacityBooster$$CanSelect
   bool CapacityBooster__CanSelect (CapacityBooster_o* __this, VContainer_IObjectResolver_o*
   resolver, const MethodInfo* method); */

bool CapacityBooster__CanSelect_23f485c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lStack_28;
  
  puVar1 = PTR_DAT_049c2218;
  if ((bRam0000000004f4b659 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2218);
    bRam0000000004f4b659 = 1;
  }
  lStack_28 = 0;
  uVar2 = FUN_024f7024(param_2,&lStack_28,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_28 + 0x30) != 0) {
      return *(int *)(*(long *)(lStack_28 + 0x30) + 0x30) != 0;
    }
  }
  return false;
}

