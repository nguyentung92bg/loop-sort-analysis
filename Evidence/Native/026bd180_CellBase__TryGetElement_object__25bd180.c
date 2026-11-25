/* IL2CPP: CellBase$$TryGetElement<object>
bool CellBase__TryGetElement_object_ (CellBase_o* __this, Il2CppObject** resultElement, const MethodInfo_25BD180* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellBase$$TryGetElement<object>
   bool CellBase__TryGetElement_object_ (CellBase_o* __this, Il2CppObject** resultElement, const
   MethodInfo_25BD180* method); */

uint CellBase__TryGetElement_object__25bd180(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_38;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049cce38);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_02229774(param_3);
    }
  }
  puVar1 = PTR_DAT_049b3bd0;
  *param_2 = 0;
  lStack_38 = 0;
  lVar4 = *(long *)(param_1 + 0xe0);
  uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_Type__GetTypeFromHandle_310ebfc(uVar5,0);
  if (lVar4 != 0) {
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar4,uVar5,&lStack_38,*(undefined8 *)PTR_DAT_049cce38);
    lVar4 = lStack_38;
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718(lVar6);
      }
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_0222c938(lVar4,lVar6);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar4,lVar6);
        }
      }
      *param_2 = lVar3;
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718(lVar6);
      }
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_0222c938(lVar4,lVar6);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar4,lVar6);
        }
      }
      thunk_FUN_021f190c(param_2,lVar3);
    }
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

