/* IL2CPP: HomeSceneShapes$$get_Flash
UnityEngine_Texture2D_o* HomeSceneShapes__get_Flash (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShapes$$get_Flash
   UnityEngine_Texture2D_o* HomeSceneShapes__get_Flash (const MethodInfo* method); */

long HomeSceneShapes__get_Flash_2428d94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_049c33b0;
                    /* try { // try from 02528db0 to 02628dc7 has its CatchHandler @ 02528ed4 */
  if ((bRam0000000004f4b7a6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c33b8);
    FUN_021f03f8(PTR_DAT_049c33b0);
    FUN_021f03f8(PTR_DAT_049c3498);
    FUN_021f03f8(PTR_DAT_049c33c8);
                    /* try { // try from 02528de8 to 02628deb has its CatchHandler @ 02528ecc */
    bRam0000000004f4b7a6 = 1;
  }
  puVar2 = PTR_DAT_049c33c8;
                    /* try { // try from 02528df4 to 02628dfb has its CatchHandler @ 02528ec8 */
  lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar5 == 0) {
                    /* try { // try from 02528dfc to 02628e0b has its CatchHandler @ 02528b30 */
    lVar5 = *(long *)PTR_DAT_049c33c8;
                    /* try { // try from 02528e0c to 02628e1b has its CatchHandler @ 02528ee8 */
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar5 + 0xb8);
    lVar6 = puVar4[2];
                    /* try { // try from 02528e20 to 02628e37 has its CatchHandler @ 02528ed4 */
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
                    /* try { // try from 02528e38 to 02628e4b has its CatchHandler @ 02528b30 */
      uVar7 = *puVar4;
      lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c33b8);
                    /* try { // try from 02528e4c to 02628e5b has its CatchHandler @ 02528ed4 */
                    /* try { // try from 02528e60 to 02628e63 has its CatchHandler @ 02528ec4 */
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
                (lVar6,uVar7,*(undefined8 *)PTR_DAT_049c3498,0);
                    /* try { // try from 02528e6c to 02628e73 has its CatchHandler @ 02528ec0 */
                    /* try { // try from 02528e74 to 02628eb7 has its CatchHandler @ 02528eb8 */
      plVar3 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar3 = lVar6;
      thunk_FUN_021f190c(plVar3,lVar6);
    }
    lVar5 = HomeSceneShapes__Make_2428b8c(0x40,0x40,lVar6,1);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_021f190c(plVar3,lVar5);
  }
                    /* catch() { ... } // from try @ 02528e74 with catch @ 02528eb8 */
  return lVar5;
}

