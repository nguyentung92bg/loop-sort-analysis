/* IL2CPP: LockCarrierGroup$$OnLevelAnimationEnd
Cysharp_Threading_Tasks_UniTaskVoid_o LockCarrierGroup__OnLevelAnimationEnd (LockCarrierGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LockCarrierGroup$$OnLevelAnimationEnd
   Cysharp_Threading_Tasks_UniTaskVoid_o LockCarrierGroup__OnLevelAnimationEnd (LockCarrierGroup_o*
   __this, const MethodInfo* method); */

undefined8 LockCarrierGroup__OnLevelAnimationEnd_24a7228(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c6798;
  if ((bRam0000000004f4bb1d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6798);
                    /* try { // try from 025a7258 to 026a725b has its CatchHandler @ 025a72b8 */
                    /* try { // try from 025a725c to 026a725f has its CatchHandler @ 025a72b4 */
    bRam0000000004f4bb1d = 1;
  }
                    /* try { // try from 025a7260 to 026a72db has its CatchHandler @ 025a7014 */
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_021f190c(&uStack_50,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a71cc with catch @ 025a72b0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a725c with catch @ 025a72b4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a7258 with catch @ 025a72b8
                        */
  return 0;
}

