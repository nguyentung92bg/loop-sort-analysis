/* IL2CPP: Store$$get_PlayBundleId
System_String_o* Store__get_PlayBundleId (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03cc7a40) */
/* IL2CPP: Store$$get_PlayBundleId
   System_String_o* Store__get_PlayBundleId (const MethodInfo* method); */

undefined8 Store__get_PlayBundleId_24f942c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f4bd32 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    bRam0000000004f4bd32 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f566d7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    bRam0000000004f566d7 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (pcRam0000000004f567a0 == (code *)0x0) {
    pcRam0000000004f567a0 = (code *)FUN_021f03bc(&UNK_013b0fc0);
  }
  (*pcRam0000000004f567a0)(&uStack_30);
  uVar2 = UnityEngine_Bindings_OutStringMarshaller__GetStringAndDispose_3c33030
                    (uStack_30,uStack_28,0);
  return uVar2;
}

