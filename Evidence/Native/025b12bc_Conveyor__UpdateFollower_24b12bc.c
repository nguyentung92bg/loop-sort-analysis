/* IL2CPP: Conveyor$$UpdateFollower
void Conveyor__UpdateFollower (Conveyor_o* __this, Dreamteck_Splines_SplineFollower_o* follower, float newSpeed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$UpdateFollower
   void Conveyor__UpdateFollower (Conveyor_o* __this, Dreamteck_Splines_SplineFollower_o* follower,
   float newSpeed, const MethodInfo* method); */

void Conveyor__UpdateFollower_24b12bc(undefined4 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [12];
  
                    /* try { // try from 025b12c0 to 026b12c3 has its CatchHandler @ 025b1394 */
                    /* try { // try from 025b12d4 to 026b12d7 has its CatchHandler @ 025b138c */
  if ((bRam0000000004f4bb62 & 1) == 0) {
                    /* try { // try from 025b12e8 to 026b1317 has its CatchHandler @ 025b13ac */
    FUN_021f03f8(PTR_DAT_049c6ae8);
    FUN_021f03f8(PTR_DAT_049c6af0);
    FUN_021f03f8(PTR_DAT_049c6af8);
    FUN_021f03f8(PTR_DAT_049c6b00);
                    /* try { // try from 025b1320 to 026b1347 has its CatchHandler @ 025b139c */
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4bb62 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_2 + 0x130) != 0) {
                    /* try { // try from 025b1348 to 026b1367 has its CatchHandler @ 025b122c */
    uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_2 + 0x130),param_3,&uStack_60,*(undefined8 *)PTR_DAT_049c6ae8
                      );
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 025b1368 to 026b136b has its CatchHandler @ 025b13a8 */
      FUN_024f75b8(uStack_60,uStack_58,1,0);
    }
    puVar2 = PTR_DAT_049c6b00;
    puVar1 = PTR_DAT_049b6110;
                    /* try { // try from 025b136c to 026b136f has its CatchHandler @ 025b122c */
    if (param_3 != 0) {
                    /* try { // try from 025b1370 to 026b1373 has its CatchHandler @ 025b13a0 */
                    /* try { // try from 025b1374 to 026b1377 has its CatchHandler @ 025b1398 */
                    /* try { // try from 025b1378 to 026b137b has its CatchHandler @ 025b1390 */
                    /* try { // try from 025b137c to 026b137f has its CatchHandler @ 025b13ac */
                    /* try { // try from 025b1380 to 026b1383 has its CatchHandler @ 025b1388 */
                    /* try { // try from 025b1384 to 026b1387 has its CatchHandler @ 025b139c */
                    /* catch() { ... } // from try @ 025b1380 with catch @ 025b1388
                       try { // try from 025b1388 to 026b13c3 has its CatchHandler @ 025b122c */
                    /* catch() { ... } // from try @ 025b12d4 with catch @ 025b138c */
                    /* catch() { ... } // from try @ 025b1378 with catch @ 025b1390 */
      auVar4 = LitMotion_LMotion__Create_2ea9f9c
                         (*(undefined4 *)(param_3 + 0x278),param_1,0x3f800000,0);
                    /* catch() { ... } // from try @ 025b12c0 with catch @ 025b1394 */
                    /* catch() { ... } // from try @ 025b1374 with catch @ 025b1398 */
                    /* catch() { ... } // from try @ 025b1320 with catch @ 025b139c
                       catch() { ... } // from try @ 025b1384 with catch @ 025b139c */
                    /* catch() { ... } // from try @ 025b12b0 with catch @ 025b13a0
                       catch() { ... } // from try @ 025b1370 with catch @ 025b13a0 */
                    /* catch() { ... } // from try @ 025b1290 with catch @ 025b13a4 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 025b1368 with catch @ 025b13a8 */
        FUN_021f0574();
      }
                    /* catch() { ... } // from try @ 025b12e8 with catch @ 025b13ac
                       catch() { ... } // from try @ 025b137c with catch @ 025b13ac */
      auVar4 = Extensions__BindToFollowerSpeed___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee624
                         (auVar4._0_8_,auVar4._8_8_,param_3,*(undefined8 *)puVar2);
                    /* try { // try from 025b13c4 to 026b13db has its CatchHandler @ 025b1464 */
      auVar5 = Extensions__AddTo_24d83f4(auVar4._0_8_,auVar4._8_8_ & 0xffffffff,param_2,0);
      if (*(long *)(param_2 + 0x128) != 0) {
                    /* try { // try from 025b13dc to 026b1453 has its CatchHandler @ 025b122c */
        auStack_50._0_4_ = param_1;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (*(long *)(param_2 + 0x128),param_3,auStack_50,*(undefined8 *)PTR_DAT_049c6af0);
        if (*(long *)(param_2 + 0x130) != 0) {
          auStack_50 = auVar5;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (*(long *)(param_2 + 0x130),param_3,auStack_50,*(undefined8 *)PTR_DAT_049c6af8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

