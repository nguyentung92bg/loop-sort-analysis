/* IL2CPP: HomeMonitor$$HasHomeScene
bool HomeMonitor__HasHomeScene (HomeMonitor_o* __this, int32_t sceneIdx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$HasHomeScene
   bool HomeMonitor__HasHomeScene (HomeMonitor_o* __this, int32_t sceneIdx, const MethodInfo*
   method); */

uint HomeMonitor__HasHomeScene_2447cbc(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plStack_28;
  
  if ((bRam0000000004f4b874 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c43b0);
    FUN_021f03f8(PTR_DAT_049c43b8);
    bRam0000000004f4b874 = 1;
  }
  puVar1 = PTR_DAT_049c43b8;
  if ((*(long *)(param_1 + 0xe8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x50), lVar3 == 0)) {
LAB_02547da4:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(char *)(lVar3 + 0x48) != '\0') {
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB_02547da4;
    uVar2 = 0;
    if ((param_2 < 0) || (lVar3 = *(long *)(*(long *)(param_1 + 0xe0) + 0x28), lVar3 == 0))
    goto LAB_02547d90;
    if (param_2 < *(int *)(lVar3 + 0x18)) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar3,param_2,&plStack_28,*(undefined8 *)PTR_DAT_049c43b8);
      if (plStack_28 != (long *)0x0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar3,param_2,&plStack_28,*(undefined8 *)puVar1);
        if (plStack_28 == (long *)0x0) goto LAB_02547da4;
        uVar2 = (**(code **)(*plStack_28 + 0x248))(plStack_28,*(undefined8 *)(*plStack_28 + 0x250));
        goto LAB_02547d90;
      }
    }
  }
  uVar2 = 0;
LAB_02547d90:
  return uVar2 & 1;
}

