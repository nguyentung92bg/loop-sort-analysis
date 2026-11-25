/* IL2CPP: ShuffleBooster$$CanSelect
bool ShuffleBooster__CanSelect (ShuffleBooster_o* __this, VContainer_IObjectResolver_o* resolver, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBooster$$CanSelect
   bool ShuffleBooster__CanSelect (ShuffleBooster_o* __this, VContainer_IObjectResolver_o* resolver,
   const MethodInfo* method); */

uint ShuffleBooster__CanSelect_23fe89c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lStack_28;
  
  puVar1 = PTR_DAT_049c24e8;
  if ((bRam0000000004f4b687 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c24e8);
    bRam0000000004f4b687 = 1;
  }
  lStack_28 = 0;
  uVar2 = FUN_024f7024(param_2,&lStack_28,*(undefined8 *)puVar1);
  if (((uVar2 & 1) != 0) && (lStack_28 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  return uVar2 & 1;
}

