/* IL2CPP: CloudSaveModule$$<InitializeSdk>b__10_0
ICloudPrefsStore_o* CloudSaveModule___InitializeSdk_b__10_0 (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$<InitializeSdk>b__10_0
   ICloudPrefsStore_o* CloudSaveModule___InitializeSdk_b__10_0 (CloudSaveModule_o* __this, const
   MethodInfo* method); */

void CloudSaveModule___InitializeSdk_b__10_0_24ee4e0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bcea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8008);
    bRam0000000004f4bcea = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025ee57c to 026ee677 has its CatchHandler @ 025ee57c
                       catch() { ... } // from try @ 025ee57c with catch @ 025ee57c
                       catch() { ... } // from try @ 025ee6e4 with catch @ 025ee57c
                       catch() { ... } // from try @ 025ee7ec with catch @ 025ee57c
                       catch() { ... } // from try @ 025ee8dc with catch @ 025ee57c
                       catch() { ... } // from try @ 025ee910 with catch @ 025ee57c
                       catch() { ... } // from try @ 025ee934 with catch @ 025ee57c
                       catch() { ... } // from try @ 025ee958 with catch @ 025ee57c
                       catch() { ... } // from try @ 025ee97c with catch @ 025ee57c */
    FUN_021f06a0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_025ee568;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049c8008,0);
LAB_025ee568:
                    /* WARNING: Could not recover jumptable at 0x025ee578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

