/* IL2CPP: HomeSceneShapes$$get_SoftDisc
UnityEngine_Texture2D_o* HomeSceneShapes__get_SoftDisc (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShapes$$get_SoftDisc
   UnityEngine_Texture2D_o* HomeSceneShapes__get_SoftDisc (const MethodInfo* method); */

long HomeSceneShapes__get_SoftDisc_242699c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_049c33b0;
  if ((bRam0000000004f4b7a5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c33b8);
                    /* try { // try from 025269cc to 026269cf has its CatchHandler @ 02526dc8 */
    FUN_021f03f8(PTR_DAT_049c33b0);
    FUN_021f03f8(PTR_DAT_049c33c0);
                    /* try { // try from 025269e4 to 026269f3 has its CatchHandler @ 02526dc4 */
    FUN_021f03f8(PTR_DAT_049c33c8);
    bRam0000000004f4b7a5 = 1;
  }
  puVar2 = PTR_DAT_049c33c8;
  lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar5 == 0) {
    lVar5 = *(long *)PTR_DAT_049c33c8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 02526a18 to 02626a1b has its CatchHandler @ 02526da0 */
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
                    /* try { // try from 02526a20 to 02626a27 has its CatchHandler @ 02526dc0 */
    puVar4 = *(undefined8 **)(lVar5 + 0xb8);
    lVar6 = puVar4[1];
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
                    /* try { // try from 02526a40 to 02626a67 has its CatchHandler @ 02526dd0 */
      uVar7 = *puVar4;
      lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c33b8);
                    /* try { // try from 02526a6c to 02626a77 has its CatchHandler @ 02526e04 */
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
                (lVar6,uVar7,*(undefined8 *)PTR_DAT_049c33c0,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar3 = lVar6;
      thunk_FUN_021f190c(plVar3,lVar6);
    }
    lVar5 = HomeSceneShapes__Make_2428b8c(0x40,0x40,lVar6,1);
                    /* try { // try from 02526aa8 to 02626ab3 has its CatchHandler @ 02526da8 */
    **(long **)(*(long *)puVar1 + 0xb8) = lVar5;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar5);
  }
                    /* try { // try from 02526ac8 to 02626acf has its CatchHandler @ 02526e00 */
  return lVar5;
}

