/* IL2CPP: Monitors$$Deactivate
void Monitors__Deactivate (Monitors_o* __this, System_Type_o* monitorType, ITransition_o* transition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$Deactivate
   void Monitors__Deactivate (Monitors_o* __this, System_Type_o* monitorType, ITransition_o*
   transition, const MethodInfo* method); */

void Monitors__Deactivate_256e630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  if ((bRam0000000004f4c1ac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbfc8);
    bRam0000000004f4c1ac = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x20),param_2,&uStack_28,*(undefined8 *)PTR_DAT_049cbfc8);
    Monitors__Deactivate_256e214(param_1,uStack_28,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

