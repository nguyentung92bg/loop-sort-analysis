/* IL2CPP: CollectionBarSubMonitor$$ProvideData
void CollectionBarSubMonitor__ProvideData (CollectionBarSubMonitor_o* __this, UnityEngine_Transform_o* t, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarSubMonitor$$ProvideData
   void CollectionBarSubMonitor__ProvideData (CollectionBarSubMonitor_o* __this,
   UnityEngine_Transform_o* t, int32_t idx, const MethodInfo* method); */

void CollectionBarSubMonitor__ProvideData_2471d14(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  int iStack_24;
  
  if ((bRam0000000004f4b9ab & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c55e0);
    FUN_021f03f8(PTR_DAT_049c3b08);
    FUN_021f03f8(PTR_DAT_049c55e8);
    bRam0000000004f4b9ab = 1;
  }
  if (param_2 != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_2,&uStack_38,*(undefined8 *)PTR_DAT_049c3b08);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0xd8), lVar1 != 0)) {
      iStack_24 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                            (lVar1,*(undefined8 *)PTR_DAT_049c55e0);
      if (*(long *)(param_1 + 0x50) != 0) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0xd8);
        if (lVar1 != 0) {
          iStack_24 = iStack_24 - param_3;
          uVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                            (lVar1,&iStack_24,*(undefined8 *)PTR_DAT_049c55e8);
          CollectionBarSubMonitor__FillProgressElement_2471e00(param_1,uStack_38,uVar2);
                    /* try { // try from 02571df8 to 02671fbb has its CatchHandler @ 02571df8
                       catch() { ... } // from try @ 02571df8 with catch @ 02571df8
                       catch() { ... } // from try @ 02572028 with catch @ 02571df8
                       catch() { ... } // from try @ 025720bc with catch @ 02571df8
                       catch() { ... } // from try @ 02572178 with catch @ 02571df8
                       catch() { ... } // from try @ 025722c8 with catch @ 02571df8
                       catch() { ... } // from try @ 02572398 with catch @ 02571df8
                       catch() { ... } // from try @ 025723c4 with catch @ 02571df8
                       catch() { ... } // from try @ 02572418 with catch @ 02571df8
                       catch() { ... } // from try @ 0257243c with catch @ 02571df8 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

