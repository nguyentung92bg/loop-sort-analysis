/* IL2CPP: HeartContainer$$RefreshHeartDisplay
void HeartContainer__RefreshHeartDisplay (HeartContainer_o* __this, int32_t currentLife, int32_t maxLife, int32_t spendingLife, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HeartContainer$$RefreshHeartDisplay
   void HeartContainer__RefreshHeartDisplay (HeartContainer_o* __this, int32_t currentLife, int32_t
   maxLife, int32_t spendingLife, const MethodInfo* method); */

void HeartContainer__RefreshHeartDisplay_256c17c(long param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  
  if ((bRam0000000004f4c196 & 1) == 0) {
                    /* try { // try from 0266c1b4 to 0276c1bf has its CatchHandler @ 0266c29c */
    FUN_021f03f8(PTR_DAT_049cbed8);
    FUN_021f03f8(PTR_DAT_049cbee0);
                    /* try { // try from 0266c1cc to 0276c1db has its CatchHandler @ 0266c298 */
    FUN_021f03f8(PTR_DAT_049cbed0);
    bRam0000000004f4c196 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != 0) {
                    /* try { // try from 0266c1f0 to 0276c1fb has its CatchHandler @ 0266c294 */
    lVar7 = *(long *)PTR_DAT_049cbee0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    /* try { // try from 0266c208 to 0276c217 has its CatchHandler @ 0266c290 */
    uVar4 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar9 + 0x18) = 0;
    }
    else {
      iVar8 = *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      if (0 < iVar8) {
                    /* try { // try from 0266c228 to 0276c233 has its CatchHandler @ 0266c280 */
        System_Array__Clear_31229cc(*(undefined8 *)(lVar9 + 0x10),0,iVar8,0);
      }
    }
    if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 0266c240 to 0276c24f has its CatchHandler @ 0266c27c */
      StatefulUI_Runtime_Core_ContainerView__Clear_3347548(*(long *)(param_1 + 0x20),0);
      puVar3 = PTR_DAT_049cbed8;
      puVar2 = PTR_DAT_049cbed0;
      uVar1 = _UNK_013aa810;
      if (0 < param_3) {
        iVar8 = 0;
        do {
                    /* try { // try from 0266c274 to 0276c277 has its CatchHandler @ 0266c32c */
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0266c340;
                    /* try { // try from 0266c278 to 0276c27b has its CatchHandler @ 0266c2e8 */
                    /* catch() { ... } // from try @ 0266c240 with catch @ 0266c27c
                       try { // try from 0266c27c to 0276c357 has its CatchHandler @ 0266b824 */
          uVar5 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                            (*(long *)(param_1 + 0x20),0);
                    /* catch() { ... } // from try @ 0266c228 with catch @ 0266c280 */
                    /* catch() { ... } // from try @ 0266bb2c with catch @ 0266c284 */
                    /* catch() { ... } // from try @ 0266b9f8 with catch @ 0266c288 */
                    /* catch() { ... } // from try @ 0266b994 with catch @ 0266c28c */
          plVar6 = (long *)StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                     (uVar5,0x1a9a2c8b,0);
                    /* catch() { ... } // from try @ 0266c208 with catch @ 0266c290 */
                    /* catch() { ... } // from try @ 0266c1f0 with catch @ 0266c294 */
                    /* catch() { ... } // from try @ 0266c1cc with catch @ 0266c298 */
          if (iVar8 < param_2) {
                    /* catch() { ... } // from try @ 0266ba74 with catch @ 0266c2cc */
            uVar10 = 0x3f800000;
                    /* catch() { ... } // from try @ 0266ba54 with catch @ 0266c2d0 */
                    /* catch() { ... } // from try @ 0266ba30 with catch @ 0266c2d4 */
                    /* catch() { ... } // from try @ 0266ba24 with catch @ 0266c2d8 */
          }
          else {
                    /* catch() { ... } // from try @ 0266c1b4 with catch @ 0266c29c */
                    /* catch() { ... } // from try @ 0266bcac with catch @ 0266c2a0 */
                    /* catch() { ... } // from try @ 0266bf9c with catch @ 0266c2a4 */
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0266be64 with catch @ 0266c2a8 */
              FUN_021f0574();
            }
                    /* catch() { ... } // from try @ 0266bb34 with catch @ 0266c2ac */
                    /* catch() { ... } // from try @ 0266bb0c with catch @ 0266c2b0 */
                    /* catch() { ... } // from try @ 0266bb04 with catch @ 0266c2b4 */
                    /* catch() { ... } // from try @ 0266bae8 with catch @ 0266c2b8 */
                    /* catch() { ... } // from try @ 0266bac0 with catch @ 0266c2bc */
                    /* catch() { ... } // from try @ 0266baa4 with catch @ 0266c2c0 */
                    /* catch() { ... } // from try @ 0266ba90 with catch @ 0266c2c4 */
            uVar10 = StatefulUI_Runtime_Core_StatefulUiUtils__ChangeA_3350154
                               (0x3f800000,0x3f800000,0x3f800000,0x3f800000,uVar1,0);
                    /* catch() { ... } // from try @ 0266ba88 with catch @ 0266c2c8 */
          }
                    /* catch() { ... } // from try @ 0266ba1c with catch @ 0266c2dc */
          if (plVar6 == (long *)0x0) goto LAB_0266c340;
                    /* catch() { ... } // from try @ 0266ba0c with catch @ 0266c2e0 */
                    /* catch() { ... } // from try @ 0266b9d0 with catch @ 0266c2e4 */
                    /* catch() { ... } // from try @ 0266c278 with catch @ 0266c2e8 */
                    /* catch() { ... } // from try @ 0266bcd0 with catch @ 0266c2ec */
                    /* catch() { ... } // from try @ 0266bcb0 with catch @ 0266c2f0 */
          (**(code **)(*plVar6 + 0x2a8))(uVar10,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
                    /* catch() { ... } // from try @ 0266bb54 with catch @ 0266c2f4 */
                    /* catch() { ... } // from try @ 0266bfa4 with catch @ 0266c2f8 */
                    /* catch() { ... } // from try @ 0266bf7c with catch @ 0266c2fc */
                    /* catch() { ... } // from try @ 0266bf74 with catch @ 0266c300 */
          if ((iVar8 < param_2) && (param_2 - param_4 <= iVar8)) {
                    /* catch() { ... } // from try @ 0266bf58 with catch @ 0266c304 */
                    /* catch() { ... } // from try @ 0266bf30 with catch @ 0266c308 */
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_0266c340;
                    /* catch() { ... } // from try @ 0266bf14 with catch @ 0266c30c */
                    /* catch() { ... } // from try @ 0266bf00 with catch @ 0266c310 */
                    /* catch() { ... } // from try @ 0266bef8 with catch @ 0266c314 */
            FUN_02333498(*(long *)(param_1 + 0x28),plVar6,*(undefined8 *)puVar3);
          }
                    /* catch() { ... } // from try @ 0266bee4 with catch @ 0266c318 */
          iVar8 = iVar8 + 1;
                    /* catch() { ... } // from try @ 0266bec4 with catch @ 0266c31c */
                    /* catch() { ... } // from try @ 0266bea0 with catch @ 0266c320 */
        } while (param_3 != iVar8);
      }
                    /* catch() { ... } // from try @ 0266be94 with catch @ 0266c324 */
                    /* catch() { ... } // from try @ 0266be8c with catch @ 0266c328 */
                    /* catch() { ... } // from try @ 0266c274 with catch @ 0266c32c */
                    /* catch() { ... } // from try @ 0266be78 with catch @ 0266c330 */
                    /* catch() { ... } // from try @ 0266be38 with catch @ 0266c334 */
                    /* catch() { ... } // from try @ 0266bcf0 with catch @ 0266c338 */
                    /* catch() { ... } // from try @ 0266bfc4 with catch @ 0266c33c */
      return;
    }
  }
LAB_0266c340:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0266bc14 with catch @ 0266c340
                       catch() { ... } // from try @ 0266bdb0 with catch @ 0266c340
                       catch() { ... } // from try @ 0266c084 with catch @ 0266c340 */
  FUN_021f06a0();
}

