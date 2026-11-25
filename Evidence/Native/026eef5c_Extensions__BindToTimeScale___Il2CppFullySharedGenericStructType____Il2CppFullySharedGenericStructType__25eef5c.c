/* IL2CPP: Extensions$$BindToTimeScale<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
LitMotion_MotionHandle_o Extensions__BindToTimeScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (LitMotion_MotionBuilder_float__TOptions__TAdapter__o builder, const MethodInfo_25EEF5C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$BindToTimeScale<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>
   LitMotion_MotionHandle_o
   Extensions__BindToTimeScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_
   (LitMotion_MotionBuilder_float__TOptions__TAdapter__o builder, const MethodInfo_25EEF5C* method);
    */

void Extensions__BindToTimeScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eef5c
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_3 + 0x38);
                    /* try { // try from 026eef74 to 027eef8b has its CatchHandler @ 026ef010 */
  uStack_30 = param_1;
  uStack_28 = param_2;
  if (lVar1 == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    lVar1 = *(long *)(param_3 + 0x38);
    if (lVar1 == 0) {
      FUN_02229774(param_3);
      lVar1 = *(long *)(param_3 + 0x38);
    }
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 026eefa8 to 027eefab has its CatchHandler @ 026ef000 */
    lVar1 = FUN_02229718();
  }
                    /* try { // try from 026eefac to 027eefcf has its CatchHandler @ 026ef004 */
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar2 = *(long *)(param_3 + 0x38);
  lVar1 = *(long *)(lVar2 + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
                    /* try { // try from 026eefd0 to 027eefeb has its CatchHandler @ 026eeab4 */
    lVar2 = *(long *)(param_3 + 0x38);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(lVar2 + 0x10);
                    /* try { // try from 026eefec to 027eeffb has its CatchHandler @ 026ef010 */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02229718();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* catch() { ... } // from try @ 026eefa8 with catch @ 026ef000 */
                    /* catch() { ... } // from try @ 026eefac with catch @ 026ef004 */
    lVar1 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 026eef74 with catch @ 026ef010
                       catch() { ... } // from try @ 026eefec with catch @ 026ef010 */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02229718();
    }
                    /* try { // try from 026ef018 to 027ef01b has its CatchHandler @ 026ef114 */
                    /* try { // try from 026ef01c to 027ef037 has its CatchHandler @ 026eeab4 */
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    lVar1 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
                    /* try { // try from 026ef038 to 027ef03b has its CatchHandler @ 026ef044 */
                    /* catch() { ... } // from try @ 026ef038 with catch @ 026ef044 */
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (lVar1,uVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18),0);
                    /* try { // try from 026ef04c to 027ef053 has its CatchHandler @ 026ef114 */
    lVar2 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
                    /* try { // try from 026ef054 to 027ef08b has its CatchHandler @ 026eeab4 */
                    /* catch() { ... } // from try @ 026eec18 with catch @ 026ef058 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 026eef00 with catch @ 026ef05c */
      lVar2 = FUN_02229718();
    }
                    /* catch() { ... } // from try @ 026eeefc with catch @ 026ef060 */
    *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar1;
                    /* catch() { ... } // from try @ 026eed10 with catch @ 026ef06c */
    lVar2 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 026eebb4 with catch @ 026ef070
                       catch() { ... } // from try @ 026eec40 with catch @ 026ef070 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
                    /* try { // try from 026ef08c to 027ef0a3 has its CatchHandler @ 026ef104 */
    thunk_FUN_021f190c(*(long *)(lVar2 + 0xb8) + 8,lVar1);
    lVar2 = *(long *)(param_3 + 0x38);
  }
  FUN_024f6d0c(&uStack_30,lVar1,*(undefined8 *)(lVar2 + 0x20));
                    /* try { // try from 026ef0a4 to 027ef0f3 has its CatchHandler @ 026eeab4 */
  return;
}

