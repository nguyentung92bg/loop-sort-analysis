/* IL2CPP: RendererThemeRegistry$$ApplyTheme
void RendererThemeRegistry__ApplyTheme (RendererThemeRegistry_o* __this, int32_t themeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RendererThemeRegistry$$ApplyTheme
   void RendererThemeRegistry__ApplyTheme (RendererThemeRegistry_o* __this, int32_t themeType, const
   MethodInfo* method); */

void RendererThemeRegistry__ApplyTheme_249cfe8(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bac9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6438);
    FUN_021f03f8(PTR_DAT_049c6440);
    FUN_021f03f8(PTR_DAT_049c6448);
    bRam0000000004f4bac9 = 1;
  }
  uStack_30 = 0;
  plVar2 = (long *)(param_1 + 0x28);
  if (*plVar2 == 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c6438);
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_24,uStack_28);
    thunk_FUN_021f190c(plVar2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uStack_28 = param_2;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_2895c1c
                      (*(long *)(param_1 + 0x20),&uStack_28,*(undefined8 *)PTR_DAT_049c6440);
    if (*(long *)(param_1 + 0x20) != 0) {
      if ((uVar1 & 1) == 0) {
        param_2 = 0;
      }
      uStack_28 = param_2;
      uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                        (*(long *)(param_1 + 0x20),&uStack_28,&uStack_30,
                         *(undefined8 *)PTR_DAT_049c6448);
      if ((uVar1 & 1) != 0) {
        if (*plVar2 == 0) goto LAB_0259d0e4;
        UnityEngine_Renderer__set_sharedMaterials_3bddc94(*plVar2,uStack_30,0);
      }
      return;
    }
  }
LAB_0259d0e4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

