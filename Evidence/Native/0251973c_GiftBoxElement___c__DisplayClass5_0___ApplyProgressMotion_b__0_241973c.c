/* IL2CPP: GiftBoxElement.<>c__DisplayClass5_0$$<ApplyProgressMotion>b__0
void GiftBoxElement___c__DisplayClass5_0___ApplyProgressMotion_b__0 (GiftBoxElement___c__DisplayClass5_0_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GiftBoxElement.<>c__DisplayClass5_0$$<ApplyProgressMotion>b__0
   void GiftBoxElement___c__DisplayClass5_0___ApplyProgressMotion_b__0
   (GiftBoxElement___c__DisplayClass5_0_o* __this, float x, const MethodInfo* method); */

void GiftBoxElement___c__DisplayClass5_0___ApplyProgressMotion_b__0_241973c
               (float param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iStack_14;
  
  if ((bRam0000000004f4b751 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2e68);
    bRam0000000004f4b751 = 1;
  }
  if (cRam0000000004f4b79c == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4b79c = '\x01';
  }
  puVar1 = PTR_DAT_049c2e68;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  iStack_14 = -0x80000000;
  if ((float)(int)(param_1 * 100.0) != INFINITY) {
    iStack_14 = (int)(param_1 * 100.0);
  }
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_14);
  uVar2 = System_String__Format_2f73700(*(undefined8 *)puVar1,uVar2,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    UnityEngine_UI_Image__set_fillAmount_3cfbca8(param_1,*(long *)(param_2 + 0x10),0);
    if (*(long *)(param_2 + 0x18) != 0) {
      TMPro_TMP_Text__SetText_3b0f78c(*(long *)(param_2 + 0x18),uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

