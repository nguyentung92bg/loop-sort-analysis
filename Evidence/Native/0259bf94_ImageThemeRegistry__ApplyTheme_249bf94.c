/* IL2CPP: ImageThemeRegistry$$ApplyTheme
void ImageThemeRegistry__ApplyTheme (ImageThemeRegistry_o* __this, int32_t themeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ImageThemeRegistry$$ApplyTheme
   void ImageThemeRegistry__ApplyTheme (ImageThemeRegistry_o* __this, int32_t themeType, const
   MethodInfo* method); */

void ImageThemeRegistry__ApplyTheme_249bf94(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bab8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2bb8);
    FUN_021f03f8(PTR_DAT_049c6360);
    FUN_021f03f8(PTR_DAT_049c6368);
    bRam0000000004f4bab8 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  plVar3 = (long *)(param_1 + 0x30);
  uStack_30 = 0;
  if (*plVar3 == 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c2bb8);
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_24,uStack_28);
    thunk_FUN_021f190c(plVar3);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uStack_28 = param_2;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_2895c1c
                      (*(long *)(param_1 + 0x28),&uStack_28,*(undefined8 *)PTR_DAT_049c6360);
    lVar2 = *plVar3;
    if ((uVar1 & 1) == 0) {
      if (lVar2 == 0) goto LAB_0259c108;
      UnityEngine_Behaviour__set_enabled_3c17eec(lVar2,*(undefined1 *)(param_1 + 0x24),0);
      param_2 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      if (lVar2 == 0) goto LAB_0259c108;
      UnityEngine_Behaviour__set_enabled_3c17eec(lVar2,1,0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uStack_28 = param_2;
      uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                        (*(long *)(param_1 + 0x28),&uStack_28,&uStack_40,
                         *(undefined8 *)PTR_DAT_049c6368);
      if ((uVar1 & 1) != 0) {
        if (*plVar3 == 0) goto LAB_0259c108;
        UnityEngine_UI_Image__set_overrideSprite_3cfba84(*plVar3,uStack_40,0);
        if (_UNK_013aa3dc <=
            uStack_30._4_4_ * uStack_30._4_4_ +
            (float)uStack_30 * (float)uStack_30 +
            (float)uStack_38 * (float)uStack_38 + uStack_38._4_4_ * uStack_38._4_4_) {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_0259c108;
          (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
        }
      }
      return;
    }
  }
LAB_0259c108:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

