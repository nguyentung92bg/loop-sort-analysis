/* IL2CPP: CellBase$$TryGetElement<object>
bool CellBase__TryGetElement_object_ (CellBase_o* __this, const MethodInfo_25BD138* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellBase$$TryGetElement<object>
   bool CellBase__TryGetElement_object_ (CellBase_o* __this, const MethodInfo_25BD138* method); */

uint CellBase__TryGetElement_object__25bd138(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uStack_18;
  
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_02229774(param_2);
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  uStack_18 = 0;
  uVar1 = CellBase__TryGetElement_object__25bd180(param_1,&uStack_18,*puVar2);
  return uVar1 & 1;
}

