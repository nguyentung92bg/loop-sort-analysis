/* IL2CPP: GameObjectThemeRegistry$$SetTheme
void GameObjectThemeRegistry__SetTheme (GameObjectThemeRegistry_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameObjectThemeRegistry$$SetTheme
   void GameObjectThemeRegistry__SetTheme (GameObjectThemeRegistry_o* __this, const MethodInfo*
   method); */

void GameObjectThemeRegistry__SetTheme_249af74(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049c6298;
  if ((bRam0000000004f4bab0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6298);
    FUN_021f03f8(PTR_DAT_049c62a0);
    FUN_021f03f8(PTR_DAT_049c4230);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bab0 = 1;
  }
  lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 0259b020 with catch @ 0259aff8
                       catch() { ... } // from try @ 0259b058 with catch @ 0259aff8
                       catch() { ... } // from try @ 0259b080 with catch @ 0259aff8 */
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 0259b018 to 0269b01f has its CatchHandler @ 0259b038 */
    lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
                    /* try { // try from 0259b020 to 0269b053 has its CatchHandler @ 0259aff8 */
    if (lVar3 == 0) goto LAB_0259b0e4;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259b018 with catch @ 0259b038
                        */
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&uStack_30,*(undefined8 *)PTR_DAT_049c62a0);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uStack_30;
                    /* try { // try from 0259b054 to 0269b057 has its CatchHandler @ 0259b074 */
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8));
                    /* try { // try from 0259b058 to 0269b077 has its CatchHandler @ 0259aff8 */
    lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
    if (lVar3 == 0) goto LAB_0259b0e4;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
                    /* catch() { ... } // from try @ 0259b054 with catch @ 0259b074 */
                    /* try { // try from 0259b078 to 0269b07f has its CatchHandler @ 0259b088 */
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                    /* try { // try from 0259b080 to 0269b08b has its CatchHandler @ 0259aff8 */
    FUN_021f0574();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259b078 with catch @ 0259b088
                        */
                    /* try { // try from 0259b08c to 0269b117 has its CatchHandler @ 0259b08c
                       catch() { ... } // from try @ 0259b08c with catch @ 0259b08c
                       catch() { ... } // from try @ 0259b1b0 with catch @ 0259b08c
                       catch() { ... } // from try @ 0259b22c with catch @ 0259b08c */
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
       (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x10), lVar3 == 0)) {
LAB_0259b0e4:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&uStack_24,*(undefined8 *)PTR_DAT_049c4230);
    GameObjectThemeRegistry__ApplyTheme_249b0e8(param_1,uStack_24);
  }
  return;
}

