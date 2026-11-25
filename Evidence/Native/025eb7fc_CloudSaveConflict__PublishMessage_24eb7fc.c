/* IL2CPP: CloudSaveConflict$$PublishMessage
bool CloudSaveConflict__PublishMessage (CloudSaveConflict_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveConflict$$PublishMessage
   bool CloudSaveConflict__PublishMessage (CloudSaveConflict_o* __this, const MethodInfo* method);
    */

undefined8 CloudSaveConflict__PublishMessage_24eb7fc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long lStack_18;
  
  if ((bRam0000000004f4bcd1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f98);
    FUN_021f03f8(PTR_DAT_049c7fa0);
    bRam0000000004f4bcd1 = 1;
  }
  lStack_18 = 0;
  uVar2 = MessagePipe_GlobalMessagePipe__get_IsInitialized_2f2e684(0);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x38) == '\0') {
      plVar3 = (long *)MessagePipe_GlobalMessagePipe__GetPublisher___Il2CppFullySharedGenericType__261c5e8
                                 (*(undefined8 *)PTR_DAT_049c7f98);
      if (plVar3 == (long *)0x0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x38) = 1;
      lStack_18 = param_1;
      thunk_FUN_021f190c(&lStack_18,param_1);
      lVar1 = lStack_18;
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c7fa0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025eb8dc;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plVar3,*(long *)PTR_DAT_049c7fa0,0);
LAB_025eb8dc:
      (*(code *)*puVar4)(plVar3,lVar1,puVar4[1]);
    }
    uVar5 = 1;
  }
  return uVar5;
}

