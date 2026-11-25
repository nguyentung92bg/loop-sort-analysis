/* IL2CPP: CreatePlayerProfileOffer$$CreateRandomProfile
PlayerProfile_o CreatePlayerProfileOffer__CreateRandomProfile (CreatePlayerProfileOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CreatePlayerProfileOffer$$CreateRandomProfile
   PlayerProfile_o CreatePlayerProfileOffer__CreateRandomProfile (CreatePlayerProfileOffer_o*
   __this, const MethodInfo* method); */

void CreatePlayerProfileOffer__CreateRandomProfile_25149a8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049b4e58;
                    /* try { // try from 026149b8 to 02714a03 has its CatchHandler @ 02614b4c */
  if ((bRam0000000004f4be0a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4e58);
    FUN_021f03f8(PTR_DAT_049b3c00);
    FUN_021f03f8(PTR_DAT_049c9318);
                    /* try { // try from 02614a04 to 02714a33 has its CatchHandler @ 02614628 */
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b5488);
    FUN_021f03f8(PTR_DAT_049c9320);
    FUN_021f03f8(PTR_DAT_049c9328);
    bRam0000000004f4be0a = 1;
  }
                    /* try { // try from 02614a34 to 02714a3f has its CatchHandler @ 02614b38 */
  uStack_50 = 0;
  uStack_48 = 0;
  lVar7 = FUN_021f04e4(*(undefined8 *)puVar2,7);
  puVar2 = PTR_DAT_049c9320;
  if (lVar7 != 0) {
                    /* try { // try from 02614a50 to 02714a5b has its CatchHandler @ 02614b28 */
    if (0 < *(int *)(lVar7 + 0x18)) {
      uVar10 = 0;
      do {
        lVar9 = *(long *)puVar2;
        if (lVar9 == 0) goto LAB_02614ba4;
                    /* try { // try from 02614a74 to 02714a7f has its CatchHandler @ 02614b2c */
        uVar6 = UnityEngine_Random__Range_3c11c94(0,*(undefined4 *)(lVar9 + 0x10),0);
        lVar9 = *(long *)puVar2;
        if (lVar9 == 0) goto LAB_02614ba4;
                    /* try { // try from 02614a90 to 02714a9b has its CatchHandler @ 02614b44 */
        uVar5 = System_String__get_Chars_2f7736c(lVar9,uVar6,0);
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        *(undefined2 *)(lVar7 + 0x20 + uVar10 * 2) = uVar5;
                    /* try { // try from 02614aac to 02714ab7 has its CatchHandler @ 02614b3c */
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)uVar1);
    }
    puVar2 = PTR_DAT_049c9328;
    uStack_50 = 0;
                    /* try { // try from 02614ad0 to 02714ae3 has its CatchHandler @ 02614b40 */
    uStack_48 = 0;
    uVar8 = System_String__CreateString_2f7a178(0,lVar7,0);
    uStack_50 = System_String__Format_2f73700(*(undefined8 *)puVar2,uVar8,0);
                    /* try { // try from 02614b00 to 02714b03 has its CatchHandler @ 02614bec */
    thunk_FUN_021f190c(&uStack_50,uStack_50);
    puVar4 = PTR_DAT_049c9318;
    puVar3 = PTR_DAT_049b5480;
    puVar2 = PTR_DAT_049b3c00;
    if ((*(long *)(param_2 + 0x28) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_2 + 0x28) + 0x18), lVar7 != 0)) {
                    /* try { // try from 02614b18 to 02714b1b has its CatchHandler @ 02614b34 */
                    /* try { // try from 02614b20 to 02714b23 has its CatchHandler @ 02614b30 */
                    /* try { // try from 02614b24 to 02714b6b has its CatchHandler @ 02614628 */
                    /* catch() { ... } // from try @ 02614a50 with catch @ 02614b28 */
                    /* catch() { ... } // from try @ 02614a74 with catch @ 02614b2c */
                    /* catch() { ... } // from try @ 02614b20 with catch @ 02614b30 */
                    /* catch() { ... } // from try @ 02614b18 with catch @ 02614b34 */
                    /* catch() { ... } // from try @ 02614a34 with catch @ 02614b38 */
      uVar8 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Keys_28958e8
                        (lVar7,*(undefined8 *)PTR_DAT_049b5488);
                    /* catch() { ... } // from try @ 02614aac with catch @ 02614b3c */
                    /* catch() { ... } // from try @ 02614ad0 with catch @ 02614b40 */
      uVar8 = System_Linq_Enumerable__ToList___Il2CppFullySharedGenericType__25e3b7c
                        (uVar8,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 02614a90 with catch @ 02614b44 */
                    /* catch() { ... } // from try @ 02614990 with catch @ 02614b48 */
                    /* catch() { ... } // from try @ 026149b8 with catch @ 02614b4c */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar3);
      }
      Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
                (uVar8,&uStack_38,*(undefined8 *)puVar4);
                    /* try { // try from 02614b6c to 02714b6f has its CatchHandler @ 02614bd8 */
                    /* try { // try from 02614b70 to 02714bb7 has its CatchHandler @ 02614628 */
      uStack_48 = uStack_38;
      thunk_FUN_021f190c(&uStack_48);
      param_1[1] = uStack_50;
      *param_1 = 0;
      param_1[2] = uStack_48;
      return;
    }
  }
LAB_02614ba4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

