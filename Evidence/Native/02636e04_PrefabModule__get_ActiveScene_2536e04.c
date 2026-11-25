/* IL2CPP: PrefabModule$$get_ActiveScene
UnityEngine_SceneManagement_Scene_o PrefabModule__get_ActiveScene (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$get_ActiveScene
   UnityEngine_SceneManagement_Scene_o PrefabModule__get_ActiveScene (const MethodInfo* method); */

undefined4 PrefabModule__get_ActiveScene_2536e04(void)

{
  undefined *puVar1;
  undefined4 uStack_14;
  
  puVar1 = PTR_DAT_049bb338;
  if ((bRam0000000004f4bf61 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb338);
    bRam0000000004f4bf61 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049bb338;
  if ((bRam0000000004f58c08 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb338);
    bRam0000000004f58c08 = 1;
  }
  uStack_14 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (pcRam0000000004f58c20 == (code *)0x0) {
    pcRam0000000004f58c20 = (code *)FUN_021f03bc(&UNK_013e51a7);
  }
  (*pcRam0000000004f58c20)(&uStack_14);
  return uStack_14;
}

