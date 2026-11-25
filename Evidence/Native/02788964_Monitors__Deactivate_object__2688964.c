/* IL2CPP: Monitors$$Deactivate<object>
void Monitors__Deactivate_object_ (Monitors_o* __this, ITransition_o* transition, const MethodInfo_2688964* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$Deactivate<object>
   void Monitors__Deactivate_object_ (Monitors_o* __this, ITransition_o* transition, const
   MethodInfo_2688964* method); */

void Monitors__Deactivate_object__2688964(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)(param_3 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_02229774(param_3);
    puVar1 = *(undefined8 **)(param_3 + 0x38);
  }
  uVar2 = *puVar1;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = System_Type__GetTypeFromHandle_310ebfc(uVar2,0);
  if ((bRam0000000004f4c1ac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbfc8,uVar2,param_2,0);
    bRam0000000004f4c1ac = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x20),uVar2,&uStack_28,*(undefined8 *)PTR_DAT_049cbfc8);
    Monitors__Deactivate_256e214(param_1,uStack_28,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

