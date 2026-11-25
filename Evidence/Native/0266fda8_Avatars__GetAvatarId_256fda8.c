/* IL2CPP: Avatars$$GetAvatarId
System_String_o* Avatars__GetAvatarId (Avatars_o* __this, PlayerProfile_o profile, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Avatars$$GetAvatarId
   System_String_o* Avatars__GetAvatarId (Avatars_o* __this, PlayerProfile_o profile, const
   MethodInfo* method); */

undefined8 Avatars__GetAvatarId_256fda8(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 0266fdb8 to 0276fdc3 has its CatchHandler @ 0266fe7c */
  if ((bRam0000000004f4c1c4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc0e0);
                    /* try { // try from 0266fdd0 to 0276fddf has its CatchHandler @ 0266fe78 */
    FUN_021f03f8(PTR_DAT_049c5a98);
    bRam0000000004f4c1c4 = 1;
  }
  puVar3 = (undefined8 *)(param_2 + 0x10);
  uVar2 = System_String__IsNullOrEmpty_2f7c924(*puVar3,0);
  puVar1 = PTR_DAT_049c5a98;
  puVar4 = (undefined8 *)puVar1;
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0266fe08 to 0276fe0f has its CatchHandler @ 0266ff24 */
                    /* try { // try from 0266fe10 to 0276fe4b has its CatchHandler @ 0266f868 */
    uVar2 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_2895c1c
                      (*(long *)(param_1 + 0x18),*puVar3,*(undefined8 *)PTR_DAT_049cc0e0);
    puVar4 = puVar3;
    if ((uVar2 & 1) == 0) {
      puVar4 = (undefined8 *)puVar1;
    }
  }
  return *puVar4;
}

