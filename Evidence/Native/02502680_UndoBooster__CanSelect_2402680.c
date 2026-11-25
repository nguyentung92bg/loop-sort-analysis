/* IL2CPP: UndoBooster$$CanSelect
bool UndoBooster__CanSelect (UndoBooster_o* __this, VContainer_IObjectResolver_o* resolver, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UndoBooster$$CanSelect
   bool UndoBooster__CanSelect (UndoBooster_o* __this, VContainer_IObjectResolver_o* resolver, const
   MethodInfo* method); */

uint UndoBooster__CanSelect_2402680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lStack_28;
  
  puVar1 = PTR_DAT_049c2600;
  if ((bRam0000000004f4b69b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2600);
    bRam0000000004f4b69b = 1;
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
    uVar2 = UndoBoosterSystem__CanUndo_24026fc();
  }
  return uVar2 & 1;
}

