/* IL2CPP: HomeSceneShapes$$get_Foam
UnityEngine_Texture2D_o* HomeSceneShapes__get_Foam (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShapes$$get_Foam
   UnityEngine_Texture2D_o* HomeSceneShapes__get_Foam (const MethodInfo* method); */

long HomeSceneShapes__get_Foam_2426ea0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
                    /* try { // try from 02526ea0 to 02626ea7 has its CatchHandler @ 02526edc */
  puVar1 = PTR_DAT_049c33b0;
                    /* try { // try from 02526ea8 to 02626ebf has its CatchHandler @ 0252661c */
  if ((bRam0000000004f4b7a8 & 1) == 0) {
                    /* try { // try from 02526ec0 to 02626ecf has its CatchHandler @ 02526ee4 */
    FUN_021f03f8(PTR_DAT_049c33b8);
                    /* try { // try from 02526ed4 to 02626ed7 has its CatchHandler @ 02526edc */
    FUN_021f03f8(PTR_DAT_049c33b0);
                    /* catch() { ... } // from try @ 02526e94 with catch @ 02526ed8 */
                    /* catch() { ... } // from try @ 02526ea0 with catch @ 02526edc
                       catch() { ... } // from try @ 02526ed4 with catch @ 02526edc */
    FUN_021f03f8(PTR_DAT_049c33e0);
                    /* catch() { ... } // from try @ 02526e60 with catch @ 02526ee4
                       catch() { ... } // from try @ 02526ec0 with catch @ 02526ee4 */
                    /* try { // try from 02526eec to 02626eef has its CatchHandler @ 02526fe8 */
    FUN_021f03f8(PTR_DAT_049c33c8);
                    /* try { // try from 02526ef0 to 02626f0f has its CatchHandler @ 0252661c */
    bRam0000000004f4b7a8 = 1;
  }
  puVar2 = PTR_DAT_049c33c8;
  lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  if (lVar5 == 0) {
                    /* try { // try from 02526f10 to 02626f13 has its CatchHandler @ 02526fcc */
    lVar5 = *(long *)PTR_DAT_049c33c8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
                    /* try { // try from 02526f20 to 02626f27 has its CatchHandler @ 02526fe8 */
      lVar5 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar5 + 0xb8);
                    /* try { // try from 02526f28 to 02626f3b has its CatchHandler @ 0252661c */
    lVar6 = puVar4[4];
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
                    /* try { // try from 02526f3c to 02626f53 has its CatchHandler @ 02526fd8 */
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar7 = *puVar4;
                    /* try { // try from 02526f54 to 02626fbb has its CatchHandler @ 0252661c */
      lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c33b8);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
                (lVar6,uVar7,*(undefined8 *)PTR_DAT_049c33e0,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar3 = lVar6;
      thunk_FUN_021f190c(plVar3,lVar6);
    }
    lVar5 = HomeSceneShapes__Make_2428b8c(0x42,0x10,lVar6,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar3 = lVar5;
    thunk_FUN_021f190c(plVar3,lVar5);
  }
                    /* try { // try from 02526fbc to 02626fcb has its CatchHandler @ 02526fd8 */
  return lVar5;
}

