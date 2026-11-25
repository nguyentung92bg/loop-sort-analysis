/* IL2CPP: EditorHelperModule$$.ctor
void EditorHelperModule___ctor (EditorHelperModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EditorHelperModule$$.ctor
   void EditorHelperModule___ctor (EditorHelperModule_o* __this, const MethodInfo* method); */

undefined1  [16] EditorHelperModule___ctor_2534dd4(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bf4d & 1) == 0) {
                    /* try { // try from 02634df4 to 02734df7 has its CatchHandler @ 02634e0c */
                    /* try { // try from 02634df8 to 02734dfb has its CatchHandler @ 02634e08 */
                    /* try { // try from 02634dfc to 02734e33 has its CatchHandler @ 02634c48 */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02634dbc with catch @ 02634e00
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02634da0 with catch @ 02634e04
                        */
    bRam0000000004f4bf4d = 1;
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02634df8 with catch @ 02634e08
                        */
  lVar2 = *(long *)puVar1;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02634df4 with catch @ 02634e0c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02634db0 with catch @ 02634e10
                        */
  if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02634d20 with catch @ 02634e14
                        */
    FUN_021f0574();
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02634d40 with catch @ 02634e18
                        */
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 0x68);
  uVar4 = *(undefined8 *)(lVar2 + 0x60);
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
                    /* try { // try from 02634e34 to 02734e37 has its CatchHandler @ 02634e50 */
  thunk_FUN_021f190c(param_1 + 0x20,0);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
                    /* try { // try from 02634e38 to 02734e53 has its CatchHandler @ 02634c48 */
  return auVar6;
}

