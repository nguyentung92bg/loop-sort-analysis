/* IL2CPP: HomeSceneFog$$Dispose
void HomeSceneFog__Dispose (HomeSceneFog_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFog$$Dispose
   void HomeSceneFog__Dispose (HomeSceneFog_o* __this, const MethodInfo* method); */

void HomeSceneFog__Dispose_2430178(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f4b7d5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3848);
    FUN_021f03f8(PTR_DAT_049c3850);
                    /* try { // try from 025301b4 to 026301b7 has its CatchHandler @ 02530238 */
                    /* try { // try from 025301b8 to 02630207 has its CatchHandler @ 0253022c */
    FUN_021f03f8(PTR_DAT_049c3858);
    FUN_021f03f8(PTR_DAT_049c3860);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7d5 = 1;
  }
  puVar6 = PTR_DAT_049c3858;
  puVar5 = PTR_DAT_049c3850;
  puVar4 = PTR_DAT_049c3848;
  puVar3 = PTR_DAT_049b3b98;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 02530208 to 02630217 has its CatchHandler @ 0252fd8c */
                    /* try { // try from 02530218 to 02630227 has its CatchHandler @ 025302a8 */
                    /* try { // try from 02530228 to 0263026b has its CatchHandler @ 0252fd8c */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x10),&uStack_70,*(undefined8 *)PTR_DAT_049c3860);
                    /* catch() { ... } // from try @ 025301b8 with catch @ 0253022c */
  uStack_80 = 0;
  puStack_78 = &uStack_70;
                    /* catch() { ... } // from try @ 025301b4 with catch @ 02530238 */
  while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&uStack_70,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
    lVar11 = *(long *)puVar6;
                    /* catch() { ... } // from try @ 02530168 with catch @ 02530244 */
    lVar8 = *(long *)(lVar11 + 0x20);
                    /* catch() { ... } // from try @ 02530134 with catch @ 02530248 */
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 025300fc with catch @ 02530254 */
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
                    /* try { // try from 02530270 to 0263027f has its CatchHandler @ 0252fd8c */
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 02530280 to 0263028f has its CatchHandler @ 02530294 */
      lVar8 = FUN_02229718();
    }
                    /* catch() { ... } // from try @ 0253026c with catch @ 02530290 */
                    /* catch() { ... } // from try @ 02530280 with catch @ 02530294 */
    uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 0253029c to 026302af has its CatchHandler @ 025302b8 */
                    /* catch() { ... } // from try @ 0253007c with catch @ 025302a8
                       catch() { ... } // from try @ 02530218 with catch @ 025302a8 */
    func_0x04608620(auStack_a8,uVar10,uVar1);
    uVar10 = uStack_a0;
                    /* try { // try from 025302b0 to 026302bb has its CatchHandler @ 0252fd8c */
                    /* catch() { ... } // from try @ 0253029c with catch @ 025302b8 */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Object__Destroy_3c24380(uVar10,0);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_70,*(undefined8 *)puVar4);
  return;
}

