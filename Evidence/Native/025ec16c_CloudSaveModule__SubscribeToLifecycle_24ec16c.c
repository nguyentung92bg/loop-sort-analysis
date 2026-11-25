/* IL2CPP: CloudSaveModule$$SubscribeToLifecycle
void CloudSaveModule__SubscribeToLifecycle (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$SubscribeToLifecycle
   void CloudSaveModule__SubscribeToLifecycle (CloudSaveModule_o* __this, const MethodInfo* method);
    */

void CloudSaveModule__SubscribeToLifecycle_24ec16c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000004f4bcdb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c7ff8);
    FUN_021f03f8(PTR_DAT_049c8000);
    bRam0000000004f4bcdb = 1;
  }
  puVar1 = PTR_DAT_049b5230;
                    /* try { // try from 025ec1c8 to 026ec1cf has its CatchHandler @ 025ec288 */
  if (*(char *)(param_1 + 0x2b) != '\0') {
    return;
  }
                    /* try { // try from 025ec1e8 to 026ec233 has its CatchHandler @ 025ec28c */
  *(undefined1 *)(param_1 + 0x2b) = 1;
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar4,param_1,*(undefined8 *)PTR_DAT_049c7ff8,0);
  if (*(int *)(*(long *)PTR_DAT_049b3bf8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Application__add_focusChanged_3bc895c(uVar4,0);
                    /* try { // try from 025ec234 to 026ec247 has its CatchHandler @ 025ebf00 */
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
                    /* try { // try from 025ec248 to 026ec24b has its CatchHandler @ 025ec28c */
                    /* try { // try from 025ec24c to 026ec27f has its CatchHandler @ 025ebf00 */
  System_Action___ctor_306b98c(uVar4,param_1,*(undefined8 *)PTR_DAT_049c8000,0);
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f56755 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308,0);
    FUN_021f03f8(PTR_DAT_049b3bf8);
    bRam0000000004f56755 = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_049b4308;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
  do {
    plVar6 = (long *)System_Delegate__Combine_3145640(lVar5,uVar4,0);
    if (plVar6 != (long *)0x0) {
      if (*plVar6 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(plVar6);
      }
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = FUN_022290c4(*(long *)(lVar7 + 0xb8) + 0x38,plVar6,lVar5);
    bVar3 = lVar7 != lVar5;
    lVar5 = lVar7;
  } while (bVar3);
  return;
}

