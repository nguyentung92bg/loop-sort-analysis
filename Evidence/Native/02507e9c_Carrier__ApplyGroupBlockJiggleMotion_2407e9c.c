/* IL2CPP: Carrier$$ApplyGroupBlockJiggleMotion
void Carrier__ApplyGroupBlockJiggleMotion (Carrier_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Carrier$$ApplyGroupBlockJiggleMotion
   void Carrier__ApplyGroupBlockJiggleMotion (Carrier_o* __this, Block_o* block, const MethodInfo*
   method); */

void Carrier__ApplyGroupBlockJiggleMotion_2407e9c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long lStack_28;
  
  if ((bRam0000000004f4b6c4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 02507ecc to 02607ee7 has its CatchHandler @ 025075e0 */
    FUN_021f03f8(PTR_DAT_049c1f78);
    FUN_021f03f8(PTR_DAT_049c1f90);
    bRam0000000004f4b6c4 = 1;
  }
                    /* try { // try from 02507ee8 to 02607eeb has its CatchHandler @ 02508084 */
  lStack_28 = 0;
  uVar1 = Carrier__TryGetGroupBlockOf_23ff3b0(param_1,param_2,&lStack_28);
  if ((uVar1 & 1) != 0) {
    if ((lStack_28 == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lStack_28,0), lVar2 == 0)) {
LAB_02508008:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02507e60 with catch @ 02508008 */
      FUN_021f06a0();
    }
    uVar1 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar2,0);
    if ((uVar1 & 1) != 0) {
      if (cRam0000000004f4a190 == '\0') {
                    /* try { // try from 02507f2c to 02607f5b has its CatchHandler @ 0250804c */
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
                    /* try { // try from 02507f5c to 02607fdb has its CatchHandler @ 025075e0 */
      auVar4 = LitMotion_LMotion_Punch__Create_2eaa764(0);
      auVar4 = LitMotion_MotionBuilderExtensions__WithFrequency___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688eb0
                         (auVar4._0_8_,auVar4._8_8_,5,*(undefined8 *)PTR_DAT_049c1f90);
      if (lStack_28 == 0) goto LAB_02508008;
      uVar3 = UnityEngine_Component__get_transform_3c18724(lStack_28,0);
      auVar4 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                         (auVar4._0_8_,auVar4._8_8_,uVar3,*(undefined8 *)PTR_DAT_049c1f78);
                    /* try { // try from 02507fdc to 02607fdf has its CatchHandler @ 02508004 */
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02507fe4 to 02607fe7 has its CatchHandler @ 02508000 */
                    /* try { // try from 02507fec to 02607fef has its CatchHandler @ 02507ff8 */
                    /* try { // try from 02507ff0 to 02608027 has its CatchHandler @ 025075e0 */
                    /* catch() { ... } // from try @ 02507a3c with catch @ 02507ff4 */
      Extensions__AddTo_24d83f4(auVar4._0_8_,auVar4._8_8_ & 0xffffffff,param_1,0);
    }
  }
                    /* catch() { ... } // from try @ 02507fec with catch @ 02507ff8 */
                    /* catch() { ... } // from try @ 02507c50 with catch @ 02507ffc */
                    /* catch() { ... } // from try @ 02507fe4 with catch @ 02508000 */
                    /* catch() { ... } // from try @ 02507fdc with catch @ 02508004 */
  return;
}

