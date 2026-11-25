/* IL2CPP: VaultCarrier$$ApplyDamage
void VaultCarrier__ApplyDamage (VaultCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VaultCarrier$$ApplyDamage
   void VaultCarrier__ApplyDamage (VaultCarrier_o* __this, const MethodInfo* method); */

undefined1  [16] VaultCarrier__ApplyDamage_24afc18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
                    /* try { // try from 025afc30 to 026afc33 has its CatchHandler @ 025afd10 */
  if ((bRam0000000004f4bb54 & 1) == 0) {
                    /* try { // try from 025afc40 to 026afc43 has its CatchHandler @ 025afd08 */
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1f78);
                    /* try { // try from 025afc58 to 026afc5b has its CatchHandler @ 025afcfc */
    FUN_021f03f8(PTR_DAT_049c1f88);
    FUN_021f03f8(PTR_DAT_049c1f90);
                    /* try { // try from 025afc6c to 026afc9b has its CatchHandler @ 025afd1c */
    bRam0000000004f4bb54 = 1;
  }
  piVar7 = (int *)(param_1 + 0xc0);
  *piVar7 = *piVar7 + -1;
  lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                    (*(undefined8 *)(param_1 + 0xa0),0x5cac0bbb,0);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    uVar6 = System_Int32__ToString_30fbaa0(piVar7,0);
    puVar4 = PTR_DAT_049c1f90;
    puVar3 = PTR_DAT_049c1f88;
    puVar2 = PTR_DAT_049c1f78;
    puVar1 = PTR_DAT_049b6110;
    if (lVar5 != 0) {
                    /* try { // try from 025afcb4 to 026afcbf has its CatchHandler @ 025afd04 */
                    /* try { // try from 025afcc0 to 026afcdf has its CatchHandler @ 025afbac */
      TMPro_TMP_Text__SetText_3b0f78c(lVar5,uVar6,0);
                    /* try { // try from 025afce0 to 026afce3 has its CatchHandler @ 025afd18 */
                    /* try { // try from 025afce4 to 026afce7 has its CatchHandler @ 025afbac */
      if (cRam0000000004f4a190 == '\0') {
                    /* try { // try from 025afce8 to 026afceb has its CatchHandler @ 025afd10 */
                    /* try { // try from 025afcec to 026afcef has its CatchHandler @ 025afd0c */
                    /* try { // try from 025afcf0 to 026afcf3 has its CatchHandler @ 025afd00 */
        FUN_021f03f8(PTR_DAT_049bbf90);
                    /* try { // try from 025afcf4 to 026afcf7 has its CatchHandler @ 025afd1c */
                    /* try { // try from 025afcf8 to 026afcfb has its CatchHandler @ 025afd04 */
        cRam0000000004f4a190 = '\x01';
      }
                    /* catch() { ... } // from try @ 025afc58 with catch @ 025afcfc
                       try { // try from 025afcfc to 026afd33 has its CatchHandler @ 025afbac */
                    /* catch() { ... } // from try @ 025afcf0 with catch @ 025afd00 */
                    /* catch() { ... } // from try @ 025afcb4 with catch @ 025afd04
                       catch() { ... } // from try @ 025afcf8 with catch @ 025afd04 */
                    /* catch() { ... } // from try @ 025afc40 with catch @ 025afd08 */
                    /* catch() { ... } // from try @ 025afcec with catch @ 025afd0c */
                    /* catch() { ... } // from try @ 025afc30 with catch @ 025afd10
                       catch() { ... } // from try @ 025afce8 with catch @ 025afd10 */
                    /* catch() { ... } // from try @ 025afc10 with catch @ 025afd14 */
                    /* catch() { ... } // from try @ 025afce0 with catch @ 025afd18 */
                    /* catch() { ... } // from try @ 025afc6c with catch @ 025afd1c
                       catch() { ... } // from try @ 025afcf4 with catch @ 025afd1c */
                    /* try { // try from 025afd34 to 026afd4b has its CatchHandler @ 025afdd4 */
      auVar8 = LitMotion_LMotion_Punch__Create_2eaa764(0);
      auVar8 = LitMotion_MotionBuilderExtensions__WithFrequency___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688eb0
                         (auVar8._0_8_,auVar8._8_8_,1,*(undefined8 *)puVar4);
                    /* try { // try from 025afd4c to 026afdc3 has its CatchHandler @ 025afbac */
      auVar8 = LitMotion_MotionBuilderExtensions__WithDampingRatio___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688d9c
                         (0x3f800000,auVar8._0_8_,auVar8._8_8_,*(undefined8 *)puVar3);
      uVar6 = TMPro_TMP_Text__get_transform_3b0c9d0(lVar5,0);
      auVar8 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                         (auVar8._0_8_,auVar8._8_8_,uVar6,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar8._8_8_ = auVar8._8_8_ & 0xffffffff;
      if (param_1 != 0) {
        GameBehaviourBase__Register_24f4ce4(param_1,auVar8._0_8_,auVar8._8_8_,0);
        return auVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

