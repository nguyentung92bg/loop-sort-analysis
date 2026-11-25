/* IL2CPP: VoodooTuneProvider$$GetDataClassNew<object>
Il2CppObject* VoodooTuneProvider__GetDataClassNew_object_ (VoodooTuneProvider_o* __this, const MethodInfo_2730698* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooTuneProvider$$GetDataClassNew<object>
   Il2CppObject* VoodooTuneProvider__GetDataClassNew_object_ (VoodooTuneProvider_o* __this, const
   MethodInfo_2730698* method); */

undefined8 VoodooTuneProvider__GetDataClassNew_object__2730698(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_18;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_02229774(param_2);
    }
  }
                    /* try { // try from 028306d0 to 0293074b has its CatchHandler @ 02830850 */
  if (*(int *)(*(long *)PTR_DAT_049b5670 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = **(long **)(param_2 + 0x38);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049b6238);
    if (*(long *)(lVar3 + 0x38) == 0) {
      FUN_02229774(lVar3);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_049b6238 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = **(long **)(lVar3 + 0x38);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049b6238);
    if (*(long *)(lVar3 + 0x38) == 0) {
      FUN_02229774(lVar3);
    }
  }
  puVar1 = PTR_DAT_049b6238;
  lVar2 = *(long *)PTR_DAT_049b6238;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    lVar3 = **(long **)(lVar3 + 0x38);
    puVar4 = *(undefined8 **)(lVar3 + 0x38);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_02229774(lVar3);
      puVar4 = *(undefined8 **)(lVar3 + 0x38);
    }
    lVar2 = Voodoo_Tune_Core_VoodooTuneConfigurationManager__GetItems_object__272f1f0(lVar2,*puVar4)
    ;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) < 1) {
        System_Activator__CreateInstance___Il2CppFullySharedGenericType__2595548
                  (&uStack_18,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
      }
      else {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar2,0,&uStack_18,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28));
      }
      return uStack_18;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

