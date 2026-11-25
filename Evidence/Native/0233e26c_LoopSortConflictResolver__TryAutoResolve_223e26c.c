/* IL2CPP: LoopSortConflictResolver$$TryAutoResolve
bool LoopSortConflictResolver__TryAutoResolve (LoopSortConflictResolver_o* __this, CloudSaveConflict_o* conflict, int32_t* resolution, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver$$TryAutoResolve
   bool LoopSortConflictResolver__TryAutoResolve (LoopSortConflictResolver_o* __this,
   CloudSaveConflict_o* conflict, int32_t* resolution, const MethodInfo* method); */

undefined8
LoopSortConflictResolver__TryAutoResolve_223e26c
          (undefined8 param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar1 = CloudSaveConflict__get_CloudLevel_24ebb94(param_2,0);
  if ((iVar1 < 2) || (iVar1 = CloudSaveConflict__get_LocalLevel_24eba0c(param_2,0), 1 < iVar1)) {
    iVar1 = CloudSaveConflict__get_LocalLevel_24eba0c(param_2,0);
    if (((iVar1 < 2) || (iVar1 = CloudSaveConflict__get_CloudLevel_24ebb94(param_2,0), 1 < iVar1))
       && ((iVar1 = CloudSaveConflict__get_LocalLevel_24eba0c(param_2,0), 1 < iVar1 ||
           (iVar1 = CloudSaveConflict__get_CloudLevel_24ebb94(param_2,0), 1 < iVar1)))) {
      uVar3 = 0;
      uVar2 = 0;
      goto LAB_0233e314;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  uVar2 = 1;
LAB_0233e314:
  *param_3 = uVar3;
  return uVar2;
}

