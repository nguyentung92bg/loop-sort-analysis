/* IL2CPP: Avatars$$GetProfileAvatarSkeleton
Spine_Unity_SkeletonDataAsset_o* Avatars__GetProfileAvatarSkeleton (Avatars_o* __this, PlayerProfile_o profile, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Avatars$$GetProfileAvatarSkeleton
   Spine_Unity_SkeletonDataAsset_o* Avatars__GetProfileAvatarSkeleton (Avatars_o* __this,
   PlayerProfile_o profile, const MethodInfo* method); */

undefined8 Avatars__GetProfileAvatarSkeleton_256fecc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* catch() { ... } // from try @ 0266fba0 with catch @ 0266fecc */
                    /* catch() { ... } // from try @ 0266fa24 with catch @ 0266fed0 */
                    /* catch() { ... } // from try @ 0266f8ec with catch @ 0266fed4
                       catch() { ... } // from try @ 0266fe64 with catch @ 0266fed4 */
                    /* catch() { ... } // from try @ 0266fc14 with catch @ 0266fed8 */
                    /* catch() { ... } // from try @ 0266fb74 with catch @ 0266fedc
                       catch() { ... } // from try @ 0266fe58 with catch @ 0266fedc */
                    /* catch() { ... } // from try @ 0266fae4 with catch @ 0266fee0
                       catch() { ... } // from try @ 0266fcd4 with catch @ 0266fee0 */
  if ((bRam0000000004f4c1c6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc0e8);
    bRam0000000004f4c1c6 = 1;
  }
                    /* try { // try from 0266ff00 to 0276ff03 has its CatchHandler @ 0266ff10 */
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
                    /* catch() { ... } // from try @ 0266ff00 with catch @ 0266ff10 */
  uStack_30 = 0;
  uStack_28 = 0;
                    /* try { // try from 0266ff18 to 0276ff1f has its CatchHandler @ 0266ffc8 */
  uVar1 = Avatars__GetAvatarId_256fda8(param_1,&uStack_50);
                    /* try { // try from 0266ff20 to 0276ff3f has its CatchHandler @ 0266f868 */
                    /* catch() { ... } // from try @ 0266fe08 with catch @ 0266ff24
                       catch() { ... } // from try @ 0266fe4c with catch @ 0266ff24 */
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 0266ff40 to 0276ff57 has its CatchHandler @ 0266ffb8 */
    uVar2 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_1 + 0x18),uVar1,&uStack_30,*(undefined8 *)PTR_DAT_049cc0e8);
    if ((uVar2 & 1) == 0) {
      uStack_28 = 0;
    }
                    /* try { // try from 0266ff58 to 0276ffa7 has its CatchHandler @ 0266f868 */
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

