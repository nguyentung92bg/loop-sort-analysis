/* IL2CPP: GameDebugger$$SetUIAlphaVisibility
void GameDebugger__SetUIAlphaVisibility (GameDebugger_o* __this, bool state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger$$SetUIAlphaVisibility
   void GameDebugger__SetUIAlphaVisibility (GameDebugger_o* __this, bool state, const MethodInfo*
   method); */

void GameDebugger__SetUIAlphaVisibility_2240948(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f49b0c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5330);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f49b0c = 1;
  }
  puVar2 = PTR_DAT_049b5330;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = UnityEngine_Object__FindObjectOfType_object__26954ac(*(undefined8 *)puVar2);
  if ((param_2 & 1) == 0) {
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) {
      UnityEngine_CanvasGroup__set_alpha_3ec2b80(0,*(long *)(lVar3 + 0x28),0);
                    /* try { // try from 023409f4 to 024409fb has its CatchHandler @ 02340acc */
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        uVar4 = 0;
        goto LAB_02340a00;
      }
    }
  }
  else if ((lVar3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) {
    UnityEngine_CanvasGroup__set_alpha_3ec2b80(0x3f800000,*(long *)(lVar3 + 0x28),0);
    lVar3 = *(long *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 02340ab4 with catch @ 023409d0 */
    if (lVar3 != 0) {
      uVar4 = 1;
LAB_02340a00:
      Monitors__SetAlphaVisibility_256efa4(lVar3,uVar4,0);
                    /* try { // try from 02340a10 to 02440a1b has its CatchHandler @ 02340ac8 */
      *(byte *)(param_1 + 0x30) = param_2 & 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

