/* IL2CPP: WinStandartVariant$$RebuildResultVerticalLayout
void WinStandartVariant__RebuildResultVerticalLayout (WinStandartVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant$$RebuildResultVerticalLayout
   void WinStandartVariant__RebuildResultVerticalLayout (WinStandartVariant_o* __this, const
   MethodInfo* method); */

void WinStandartVariant__RebuildResultVerticalLayout_2495308(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f4ba98 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049befe0);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4ba98 = 1;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    UnityEngine_Behaviour__set_enabled_3c17eec(*(long *)(param_1 + 0xb8),1,0);
    puVar1 = PTR_DAT_049befe0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      plVar2 = (long *)UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0xb8),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar1);
      }
      if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_049bc0c8)) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(plVar2);
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_3ed78b8(plVar2,0);
      lVar3 = *(long *)(param_1 + 0xb8);
      if (lVar3 != 0) {
        if ((bRam0000000004f5817b & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a266d8,0,0);
          bRam0000000004f5817b = 1;
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar4 = *(long *)(lVar3 + 0x10);
        if (lVar4 != 0) {
          if (pcRam0000000004f58188 == (code *)0x0) {
            pcRam0000000004f58188 = (code *)FUN_021f03bc(&UNK_013d0ea3);
          }
                    /* WARNING: Could not recover jumptable at 0x03d17f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004f58188)(lVar4,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

