/* IL2CPP: BoosterContainer$$GetBoosterView
StatefulUI_Runtime_Core_StatefulComponent_o* BoosterContainer__GetBoosterView (BoosterContainer_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterContainer$$GetBoosterView
   StatefulUI_Runtime_Core_StatefulComponent_o* BoosterContainer__GetBoosterView
   (BoosterContainer_o* __this, int32_t boosterType, const MethodInfo* method); */

undefined8 BoosterContainer__GetBoosterView_256bc28(long param_1,undefined4 param_2)

{
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4c191 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbe78);
    bRam0000000004f4c191 = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uStack_24 = param_2;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x90),&uStack_24,&uStack_30,*(undefined8 *)PTR_DAT_049cbe78);
    return uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

