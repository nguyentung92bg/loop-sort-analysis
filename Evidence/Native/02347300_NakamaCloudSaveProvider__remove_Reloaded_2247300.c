/* IL2CPP: NakamaCloudSaveProvider$$remove_Reloaded
void NakamaCloudSaveProvider__remove_Reloaded (NakamaCloudSaveProvider_o* __this, System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider$$remove_Reloaded
   void NakamaCloudSaveProvider__remove_Reloaded (NakamaCloudSaveProvider_o* __this,
   System_Action_o* value, const MethodInfo* method); */

void NakamaCloudSaveProvider__remove_Reloaded_2247300(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f49b4d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    bRam0000000004f49b4d = 1;
  }
  puVar1 = PTR_DAT_049b4308;
  lVar5 = *(long *)(param_1 + 0x30);
  while ((plVar3 = (long *)System_Delegate__Remove_314582c(lVar5,param_2,0), plVar3 == (long *)0x0
         || (*plVar3 == *(long *)puVar1))) {
    lVar4 = FUN_022290c4((long *)(param_1 + 0x30),plVar3,lVar5);
    bVar2 = lVar4 == lVar5;
    lVar5 = lVar4;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0a20(plVar3);
}

