/* IL2CPP: iOSATTHandler$$Start
void iOSATTHandler__Start (iOSATTHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: iOSATTHandler$$Start
   void iOSATTHandler__Start (iOSATTHandler_o* __this, const MethodInfo* method); */

void iOSATTHandler__Start_24a0848(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uStack_14;
  
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

