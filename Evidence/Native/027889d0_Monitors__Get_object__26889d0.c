/* IL2CPP: Monitors$$Get<object>
Il2CppObject* Monitors__Get_object_ (Monitors_o* __this, const MethodInfo_26889D0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$Get<object>
   Il2CppObject* Monitors__Get_object_ (Monitors_o* __this, const MethodInfo_26889D0* method); */

long Monitors__Get_object__26889d0(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_28;
  
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_021f03f8(PTR_DAT_049cbfc8);
    puVar2 = *(undefined8 **)(param_2 + 0x38);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_02229774(param_2);
      puVar2 = *(undefined8 **)(param_2 + 0x38);
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *puVar2;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = System_Type__GetTypeFromHandle_310ebfc(uVar4,0);
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (lVar3,uVar4,&lStack_28,*(undefined8 *)PTR_DAT_049cbfc8);
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718(lVar3);
    }
    if (lStack_28 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = thunk_FUN_0222c938(lStack_28,lVar3);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(lStack_28,lVar3);
      }
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

