/* IL2CPP: Avatars$$GetProfileAvatar
UnityEngine_Sprite_o* Avatars__GetProfileAvatar (Avatars_o* __this, PlayerProfile_o profile, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Avatars$$GetProfileAvatar
   UnityEngine_Sprite_o* Avatars__GetProfileAvatar (Avatars_o* __this, PlayerProfile_o profile,
   const MethodInfo* method); */

undefined8 Avatars__GetProfileAvatar_256fe34(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 0266fe4c to 0276fe57 has its CatchHandler @ 0266ff24 */
  if ((bRam0000000004f4c1c5 & 1) == 0) {
                    /* try { // try from 0266fe58 to 0276fe5b has its CatchHandler @ 0266fedc */
                    /* try { // try from 0266fe5c to 0276fe5f has its CatchHandler @ 0266fec8 */
    FUN_021f03f8(PTR_DAT_049cc0e8);
                    /* try { // try from 0266fe60 to 0276fe63 has its CatchHandler @ 0266feb8 */
                    /* try { // try from 0266fe64 to 0276fe67 has its CatchHandler @ 0266fed4 */
    bRam0000000004f4c1c5 = 1;
  }
                    /* try { // try from 0266fe68 to 0276fe6b has its CatchHandler @ 0266feb4 */
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
                    /* try { // try from 0266fe6c to 0276fe6f has its CatchHandler @ 0266feb0 */
  uStack_40 = param_2[2];
                    /* try { // try from 0266fe70 to 0276fe73 has its CatchHandler @ 0266fea4 */
                    /* try { // try from 0266fe74 to 0276fe77 has its CatchHandler @ 0266fe9c */
                    /* catch() { ... } // from try @ 0266fdd0 with catch @ 0266fe78
                       try { // try from 0266fe78 to 0276feff has its CatchHandler @ 0266f868 */
  uStack_30 = 0;
  uStack_28 = 0;
                    /* catch() { ... } // from try @ 0266fdb8 with catch @ 0266fe7c */
                    /* catch() { ... } // from try @ 0266f9e0 with catch @ 0266fe80 */
                    /* catch() { ... } // from try @ 0266fd94 with catch @ 0266fe84 */
  uVar1 = Avatars__GetAvatarId_256fda8(param_1,&uStack_50);
                    /* catch() { ... } // from try @ 0266fd7c with catch @ 0266fe88 */
                    /* catch() { ... } // from try @ 0266fbd0 with catch @ 0266fe8c */
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 0266fa04 with catch @ 0266fe90 */
                    /* catch() { ... } // from try @ 0266f9e4 with catch @ 0266fe94 */
                    /* catch() { ... } // from try @ 0266f9c8 with catch @ 0266fe98 */
                    /* catch() { ... } // from try @ 0266fe74 with catch @ 0266fe9c */
                    /* catch() { ... } // from try @ 0266f9ac with catch @ 0266fea0 */
                    /* catch() { ... } // from try @ 0266fe70 with catch @ 0266fea4 */
                    /* catch() { ... } // from try @ 0266f990 with catch @ 0266fea8 */
    uVar2 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_1 + 0x18),uVar1,&uStack_30,*(undefined8 *)PTR_DAT_049cc0e8);
                    /* catch() { ... } // from try @ 0266f904 with catch @ 0266feac */
                    /* catch() { ... } // from try @ 0266fe6c with catch @ 0266feb0 */
                    /* catch() { ... } // from try @ 0266fe68 with catch @ 0266feb4 */
                    /* catch() { ... } // from try @ 0266fe60 with catch @ 0266feb8 */
                    /* catch() { ... } // from try @ 0266fbf4 with catch @ 0266febc */
    if ((uVar2 & 1) == 0) {
      uStack_30 = 0;
    }
                    /* catch() { ... } // from try @ 0266fbd4 with catch @ 0266fec0 */
                    /* catch() { ... } // from try @ 0266fbb8 with catch @ 0266fec4 */
    return uStack_30;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0266fe5c with catch @ 0266fec8 */
  FUN_021f06a0();
}

