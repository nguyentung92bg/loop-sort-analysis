/* IL2CPP: NakamaBootstrapper$$Update
void NakamaBootstrapper__Update (NakamaBootstrapper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$Update
   void NakamaBootstrapper__Update (NakamaBootstrapper_o* __this, const MethodInfo* method); */

void NakamaBootstrapper__Update_2244f1c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_14;
  
                    /* try { // try from 02344f24 to 02444f2f has its CatchHandler @ 02344f60 */
                    /* try { // try from 02344f30 to 02444f7b has its CatchHandler @ 02344e28 */
  if ((bRam0000000004f49b3c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b54a0);
    FUN_021f03f8(PTR_DAT_049b56a0);
    bRam0000000004f49b3c = 1;
  }
                    /* catch() { ... } // from try @ 02344f24 with catch @ 02344f60 */
  if ((*(char *)(param_1 + 0x49) == '\0') &&
     (uVar3 = UniTimer__get_IsRunning_3f0efa0(param_1 + 0x30,0), puVar1 = PTR_DAT_049b54a0,
     (uVar3 & 1) == 0)) {
                    /* try { // try from 02344f7c to 02444ff3 has its CatchHandler @ 02344f7c
                       catch() { ... } // from try @ 02344f7c with catch @ 02344f7c
                       catch() { ... } // from try @ 02345008 with catch @ 02344f7c */
    lVar4 = *(long *)PTR_DAT_049b54a0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    uVar5 = System_String__Concat_2f72b28
                      (*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),*(undefined8 *)PTR_DAT_049b56a0,
                       0);
    if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b3c58);
    }
    UnityEngine_Debug__LogWarning_3bcf90c(uVar5,0);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Threading_CancellationTokenSource__Cancel_31658dc(*(long *)(param_1 + 0x28),0);
    if (*(char *)(param_1 + 0x49) == '\0') {
                    /* try { // try from 02345008 to 02445033 has its CatchHandler @ 02344f7c */
      *(undefined1 *)(param_1 + 0x49) = 1;
      puVar1 = PTR_DAT_049bb338;
      if ((bRam0000000004f5c3d7 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049bb338);
        bRam0000000004f5c3d7 = 1;
      }
      uStack_14 = 0;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uStack_14 = UnityEngine_SceneManagement_SceneManager__GetActiveScene_3c33e7c(0);
      iVar2 = UnityEngine_SceneManagement_Scene__get_buildIndex_3c335d0(&uStack_14,0);
      UnityEngine_SceneManagement_SceneManager__LoadScene_3c347ec(iVar2 + 1,0);
      return;
    }
  }
                    /* try { // try from 02344ff4 to 02445007 has its CatchHandler @ 0234501c */
  return;
}

