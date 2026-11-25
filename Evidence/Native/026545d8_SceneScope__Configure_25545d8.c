/* IL2CPP: SceneScope$$Configure
void SceneScope__Configure (SceneScope_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneScope$$Configure
   void SceneScope__Configure (SceneScope_o* __this, VContainer_IContainerBuilder_o* builder, const
   MethodInfo* method); */

void SceneScope__Configure_25545d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_c8 [72];
  ulong auStack_80 [10];
  
  puVar1 = PTR_DAT_049cafc8;
  if ((bRam0000000004f4c09a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cafd0);
    FUN_021f03f8(PTR_DAT_049cafd8);
    FUN_021f03f8(PTR_DAT_049cafc8);
    FUN_021f03f8(PTR_DAT_049c9790);
                    /* try { // try from 02654638 to 0275465f has its CatchHandler @ 026547d8 */
    bRam0000000004f4c09a = 1;
  }
  VContainer_Unity_LifetimeScope__Configure_3f2c494(param_1,param_2,0);
  lVar10 = *(long *)puVar1;
  puVar9 = *(undefined8 **)(lVar10 + 0x38);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_02229774(lVar10);
    puVar9 = *(undefined8 **)(lVar10 + 0x38);
  }
  uVar11 = *puVar9;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar11 = System_Type__GetTypeFromHandle_310ebfc(uVar11,0);
                    /* try { // try from 0265469c to 027546c7 has its CatchHandler @ 026547d4 */
  FUN_0235c5e4(param_2,uVar11,1,0);
  SceneScope__HandleSceneComponents_255484c(param_1,param_2);
  SceneScope__HandleWorld_2554e5c(param_1,param_2);
  SceneScope__HandleSystems_2554f6c(param_1,param_2);
  SceneScope__HandleSheetContainer_255565c(param_1,param_2);
  plVar7 = *(long **)(param_1 + 0x80);
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 026546dc to 027546eb has its CatchHandler @ 026547bc */
    uVar4 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
    puVar1 = PTR_DAT_049cafd8;
    plVar7 = *(long **)(param_1 + 0x80);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 026546f0 to 02754703 has its CatchHandler @ 026547cc */
      uVar11 = *(undefined8 *)(param_1 + 0x88);
                    /* try { // try from 02654704 to 0275470f has its CatchHandler @ 026547c8 */
      uVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
                    /* try { // try from 02654718 to 0275471b has its CatchHandler @ 026547d0 */
                    /* try { // try from 0265471c to 027547a7 has its CatchHandler @ 02654528 */
      auStack_80[8] = 0;
      auStack_80[1] = 0;
      auStack_80[0] = 0;
      auStack_80[3] = 0;
      auStack_80[2] = 0;
      auStack_80[5] = 0;
      auStack_80[4] = 0;
      auStack_80[7] = 0;
      auStack_80[6] = 0;
      Level___ctor_25557b8(auStack_80,uVar4,uVar11,uVar5,*(undefined8 *)(param_1 + 0x70));
      func_0x04608620(auStack_c8,auStack_80,0x48);
      FUN_025e86c8(param_2,auStack_c8,*(undefined8 *)puVar1);
      plVar7 = *(long **)(param_1 + 0x80);
      if (plVar7 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        if ((uVar8 & 1) == 0) {
                    /* try { // try from 026547b0 to 027547f3 has its CatchHandler @ 02654528 */
          uVar2 = 0;
        }
        else {
          plVar7 = *(long **)(param_1 + 0x80);
          if (plVar7 == (long *)0x0) goto LAB_02654848;
          lVar10 = *(long *)(param_1 + 0x90);
          iVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
          if (lVar10 == 0) goto LAB_02654848;
          auStack_80[0] = CONCAT44(auStack_80[0]._4_4_,iVar6 + -1);
          uVar2 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                            (lVar10,auStack_80,*(undefined8 *)PTR_DAT_049c9790);
                    /* try { // try from 026547a8 to 027547ab has its CatchHandler @ 026547c4 */
                    /* try { // try from 026547ac to 027547af has its CatchHandler @ 026547c0 */
        }
        plVar7 = *(long **)(param_1 + 0x80);
        if (plVar7 != (long *)0x0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026546dc with catch @ 026547bc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026547ac with catch @ 026547c0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026547a8 with catch @ 026547c4
                        */
          uVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02654704 with catch @ 026547c8
                        */
          if ((uVar8 & 1) == 0) {
            uVar3 = 0;
LAB_0265480c:
                    /* try { // try from 0265480c to 02754817 has its CatchHandler @ 02654528 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02654804 with catch @ 02654814
                        */
            auStack_80[0] = CONCAT71(auStack_80[0]._1_7_,uVar2) & 0xffffffffffffff01;
            auStack_80[0] =
                 CONCAT62(auStack_80[0]._2_6_,CONCAT11(uVar3,(undefined1)auStack_80[0])) &
                 0xffffffffffff01ff;
            FUN_025e86c8(param_2,auStack_80,*(undefined8 *)PTR_DAT_049cafd0);
            return;
          }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026546f0 with catch @ 026547cc
                        */
          plVar7 = *(long **)(param_1 + 0x80);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02654718 with catch @ 026547d0
                        */
          if (plVar7 != (long *)0x0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0265469c with catch @ 026547d4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02654638 with catch @ 026547d8
                        */
            lVar10 = *(long *)(param_1 + 0x90);
            uVar4 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
            if (lVar10 != 0) {
                    /* try { // try from 026547f4 to 027547f7 has its CatchHandler @ 02654800 */
              auStack_80[0] = CONCAT44(auStack_80[0]._4_4_,uVar4);
                    /* catch() { ... } // from try @ 026547f4 with catch @ 02654800 */
              uVar3 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                                (lVar10,auStack_80,*(undefined8 *)PTR_DAT_049c9790);
                    /* try { // try from 02654804 to 0275480b has its CatchHandler @ 02654814 */
              goto LAB_0265480c;
            }
          }
        }
      }
    }
  }
LAB_02654848:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

