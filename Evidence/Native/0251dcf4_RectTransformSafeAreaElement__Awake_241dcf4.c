/* IL2CPP: RectTransformSafeAreaElement$$Awake
void RectTransformSafeAreaElement__Awake (RectTransformSafeAreaElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RectTransformSafeAreaElement$$Awake
   void RectTransformSafeAreaElement__Awake (RectTransformSafeAreaElement_o* __this, const
   MethodInfo* method); */

void RectTransformSafeAreaElement__Awake_241dcf4(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c2ef0;
                    /* try { // try from 0251dd04 to 0261dd53 has its CatchHandler @ 0251db0c */
  if ((bRam0000000004f4b767 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ef0);
    bRam0000000004f4b767 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x20) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20));
                    /* try { // try from 0251dd54 to 0261dd57 has its CatchHandler @ 0251dd68 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0251dbb4 with catch @ 0251dd58
                       try { // try from 0251dd58 to 0261dd8b has its CatchHandler @ 0251db0c */
  return;
}

