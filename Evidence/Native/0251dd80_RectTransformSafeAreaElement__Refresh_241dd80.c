/* IL2CPP: RectTransformSafeAreaElement$$Refresh
Cysharp_Threading_Tasks_UniTaskVoid_o RectTransformSafeAreaElement__Refresh (RectTransformSafeAreaElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RectTransformSafeAreaElement$$Refresh
   Cysharp_Threading_Tasks_UniTaskVoid_o RectTransformSafeAreaElement__Refresh
   (RectTransformSafeAreaElement_o* __this, const MethodInfo* method); */

undefined8 RectTransformSafeAreaElement__Refresh_241dd80(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c2f38;
                    /* try { // try from 0251dd8c to 0261dd8f has its CatchHandler @ 0251dd9c */
                    /* catch() { ... } // from try @ 0251dd8c with catch @ 0251dd9c */
                    /* try { // try from 0251dda0 to 0261dda7 has its CatchHandler @ 0251ddb0 */
  if ((bRam0000000004f4b768 & 1) == 0) {
                    /* try { // try from 0251dda8 to 0261ddb3 has its CatchHandler @ 0251db0c */
    FUN_021f03f8(PTR_DAT_049c2f38);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0251dda0 with catch @ 0251ddb0
                        */
    bRam0000000004f4b768 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
  uStack_40 = param_1;
  thunk_FUN_021f190c(&uStack_40,param_1);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
  return 0;
}

