/* IL2CPP: Monitors$$Register
void Monitors__Register (Monitors_o* __this, MonitorBase_o* _monitor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$Register
   void Monitors__Register (Monitors_o* __this, MonitorBase_o* _monitor, const MethodInfo* method);
    */

void Monitors__Register_256e004(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4c1a8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbef8);
    FUN_021f03f8(PTR_DAT_049cbfb0);
    FUN_021f03f8(PTR_DAT_049cbfb8);
    bRam0000000004f4c1a8 = 1;
  }
  Monitors__Deactivate_256e214(param_1,param_2,0);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = System_Object__GetType_3142aac(param_2,0);
    puVar1 = PTR_DAT_049cbef8;
    if (lVar3 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar3,uVar2,param_2,*(undefined8 *)PTR_DAT_049cbfb8);
      lVar3 = *(long *)(param_1 + 0x30);
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                (param_2,&lStack_38,*(undefined8 *)puVar1);
      if ((lStack_38 != 0) &&
         (uStack_24 = UnityEngine_Canvas__get_sortingOrder_3ec77d8(lStack_38,0), lVar3 != 0)) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (lVar3,param_2,&uStack_24,*(undefined8 *)PTR_DAT_049cbfb0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

