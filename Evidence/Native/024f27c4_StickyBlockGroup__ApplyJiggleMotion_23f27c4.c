/* IL2CPP: StickyBlockGroup$$ApplyJiggleMotion
void StickyBlockGroup__ApplyJiggleMotion (StickyBlockGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02507f08) */
/* WARNING: Removing unreachable block (ram,0x02507f14) */
/* WARNING: Removing unreachable block (ram,0x02507f20) */
/* WARNING: Removing unreachable block (ram,0x02507f2c) */
/* WARNING: Removing unreachable block (ram,0x02507f40) */
/* WARNING: Removing unreachable block (ram,0x02507f9c) */
/* WARNING: Removing unreachable block (ram,0x02507fe0) */
/* WARNING: Removing unreachable block (ram,0x02507fe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: StickyBlockGroup$$ApplyJiggleMotion
   void StickyBlockGroup__ApplyJiggleMotion (StickyBlockGroup_o* __this, const MethodInfo* method);
    */

void StickyBlockGroup__ApplyJiggleMotion_23f27c4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  
  if ((bRam0000000004f4b648 & 1) == 0) {
                    /* try { // try from 024f27e8 to 025f27ef has its CatchHandler @ 024f2b00 */
    FUN_021f03f8(PTR_DAT_049c1818);
                    /* try { // try from 024f27f4 to 025f27fb has its CatchHandler @ 024f2ae4 */
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 024f2800 to 025f280b has its CatchHandler @ 024f2ae0 */
    FUN_021f03f8(PTR_DAT_049c20f8);
                    /* try { // try from 024f2810 to 025f281b has its CatchHandler @ 024f2af8 */
    FUN_021f03f8(PTR_DAT_049c1f90);
    FUN_021f03f8(PTR_DAT_049c20f0);
    bRam0000000004f4b648 = 1;
  }
  if ((*(char *)(param_1 + 0xa8) == '\0') &&
     (uVar2 = FUN_024f7208(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8),0),
     puVar1 = PTR_DAT_049c20f0, (uVar2 & 1) == 0)) {
    uVar6 = *(undefined4 *)(param_1 + 0xc4);
    uVar7 = *(undefined4 *)(param_1 + 200);
    uVar8 = *(undefined4 *)(param_1 + 0xcc);
    lVar3 = *(long *)PTR_DAT_049c20f0;
                    /* try { // try from 024f285c to 025f2867 has its CatchHandler @ 024f2afc */
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
                    /* try { // try from 024f287c to 025f2883 has its CatchHandler @ 024f2acc */
    auVar9 = LitMotion_LMotion_Punch__Create_2eaa764
                       (uVar6,uVar7,uVar8,*(undefined4 *)(lVar3 + 4),*(undefined4 *)(lVar3 + 8),
                        *(undefined4 *)(lVar3 + 0xc),_UNK_013aa8b4,0);
                    /* try { // try from 024f2890 to 025f28af has its CatchHandler @ 024f2ad4 */
    auVar9 = LitMotion_MotionBuilderExtensions__WithFrequency___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688eb0
                       (auVar9._0_8_,auVar9._8_8_,5,*(undefined8 *)PTR_DAT_049c1f90);
    uVar4 = UnityEngine_Component__get_transform_3c18724(param_1,0);
                    /* try { // try from 024f28c4 to 025f28cb has its CatchHandler @ 024f2afc */
    auVar9 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalEulerAngles___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__267090c
                       (auVar9._0_8_,auVar9._8_8_,uVar4,*(undefined8 *)PTR_DAT_049c20f8);
                    /* try { // try from 024f28e4 to 025f28eb has its CatchHandler @ 024f2ac0 */
                    /* try { // try from 024f28ec to 025f28f7 has its CatchHandler @ 024f2adc */
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar10 = Extensions__AddTo_24d83f4(auVar9._0_8_,auVar9._8_8_ & 0xffffffff,param_1,0);
    lVar3 = *(long *)(param_1 + 0xb0);
                    /* try { // try from 024f2910 to 025f2917 has its CatchHandler @ 024f2abc */
    *(undefined1 (*) [12])(param_1 + 0xd0) = auVar10;
                    /* try { // try from 024f2918 to 025f2923 has its CatchHandler @ 024f2ad8 */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar5 = *(long **)(lVar3 + 0x100);
    if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)PTR_DAT_049c1818)) {
      if ((bRam0000000004f4b6c4 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b6110,lVar3,0);
        FUN_021f03f8(PTR_DAT_049c1f78);
        FUN_021f03f8(PTR_DAT_049c1f90);
        bRam0000000004f4b6c4 = 1;
      }
      uVar2 = Carrier__TryGetGroupBlockOf_23ff3b0(plVar5,lVar3,&stack0xffffffffffffffd8);
      if ((uVar2 & 1) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* try { // try from 024f293c to 025f294b has its CatchHandler @ 024f2bc4 */
  return;
}

