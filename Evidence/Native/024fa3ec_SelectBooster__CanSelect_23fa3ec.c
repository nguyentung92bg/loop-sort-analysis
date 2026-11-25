/* IL2CPP: SelectBooster$$CanSelect
bool SelectBooster__CanSelect (SelectBooster_o* __this, VContainer_IObjectResolver_o* resolver, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SelectBooster$$CanSelect
   bool SelectBooster__CanSelect (SelectBooster_o* __this, VContainer_IObjectResolver_o* resolver,
   const MethodInfo* method); */

uint SelectBooster__CanSelect_23fa3ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lStack_28;
  
  puVar1 = PTR_DAT_049c23a0;
  if ((bRam0000000004f4b672 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c23a0);
    bRam0000000004f4b672 = 1;
  }
  lStack_28 = 0;
  uVar3 = FUN_024f7024(param_2,&lStack_28,*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar2 = SelectBoosterSystem__CanSelect_23fa468();
  }
  return uVar2 & 1;
}

