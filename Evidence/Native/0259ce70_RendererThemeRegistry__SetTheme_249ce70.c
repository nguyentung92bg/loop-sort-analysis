/* IL2CPP: RendererThemeRegistry$$SetTheme
void RendererThemeRegistry__SetTheme (RendererThemeRegistry_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RendererThemeRegistry$$SetTheme
   void RendererThemeRegistry__SetTheme (RendererThemeRegistry_o* __this, const MethodInfo* method);
    */

void RendererThemeRegistry__SetTheme_249ce70(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049c6430;
  if ((bRam0000000004f4bac8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c62a0);
    FUN_021f03f8(PTR_DAT_049c4230);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6430);
    bRam0000000004f4bac8 = 1;
  }
  lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
    if (lVar3 == 0) goto LAB_0259cfe0;
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&uStack_30,*(undefined8 *)PTR_DAT_049c62a0);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uStack_30;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8));
    lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
    if (lVar3 == 0) goto LAB_0259cfe0;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
       (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x10), lVar3 == 0)) {
LAB_0259cfe0:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&uStack_24,*(undefined8 *)PTR_DAT_049c4230);
    RendererThemeRegistry__ApplyTheme_249cfe8(param_1,uStack_24);
  }
  return;
}

