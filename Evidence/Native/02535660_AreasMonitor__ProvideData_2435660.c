/* IL2CPP: AreasMonitor$$ProvideData
void AreasMonitor__ProvideData (AreasMonitor_o* __this, UnityEngine_Transform_o* t, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$ProvideData
   void AreasMonitor__ProvideData (AreasMonitor_o* __this, UnityEngine_Transform_o* t, int32_t idx,
   const MethodInfo* method); */

void AreasMonitor__ProvideData_2435660(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  int iStack_24;
  
  if ((bRam0000000004f4b7f6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3b08);
    FUN_021f03f8(PTR_DAT_049c3a88);
    bRam0000000004f4b7f6 = 1;
  }
  if (param_2 != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_2,&uStack_38,*(undefined8 *)PTR_DAT_049c3b08);
    if (((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0x98) != 0)) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x50), lVar1 != 0)) {
      iStack_24 = *(int *)(*(long *)(param_1 + 0xd0) + 0x28) - param_3;
      uVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar1,&iStack_24,*(undefined8 *)PTR_DAT_049c3a88);
      AreasMonitor__CreateElement_2435728(param_1,uStack_38,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

