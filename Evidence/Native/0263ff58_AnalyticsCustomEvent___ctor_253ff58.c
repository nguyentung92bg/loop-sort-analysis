/* IL2CPP: AnalyticsCustomEvent$$.ctor
void AnalyticsCustomEvent___ctor (AnalyticsCustomEvent_o __this, System_String_o* eventName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsCustomEvent$$.ctor
   void AnalyticsCustomEvent___ctor (AnalyticsCustomEvent_o __this, System_String_o* eventName,
   const MethodInfo* method); */

void AnalyticsCustomEvent___ctor_253ff58(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_049b4340;
  puVar1 = PTR_DAT_049b4338;
                    /* try { // try from 0263ff60 to 0273ff6f has its CatchHandler @ 0263ff70 */
                    /* catch() { ... } // from try @ 0263fec8 with catch @ 0263ff70
                       catch() { ... } // from try @ 0263ff60 with catch @ 0263ff70 */
                    /* try { // try from 0263ff74 to 0273ff77 has its CatchHandler @ 0263ff80 */
                    /* try { // try from 0263ff78 to 0273ff83 has its CatchHandler @ 0263f174 */
                    /* catch() { ... } // from try @ 0263fea8 with catch @ 0263ff80
                       catch() { ... } // from try @ 0263ff74 with catch @ 0263ff80 */
  if ((bRam0000000004f4bfc5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    bRam0000000004f4bfc5 = 1;
  }
  *param_1 = param_2;
  thunk_FUN_021f190c(param_1,param_2);
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar3,*(undefined8 *)puVar1);
  param_1 = param_1 + 1;
  *param_1 = uVar3;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)param_1 >> 0xc & 0x3f),
                 ((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

