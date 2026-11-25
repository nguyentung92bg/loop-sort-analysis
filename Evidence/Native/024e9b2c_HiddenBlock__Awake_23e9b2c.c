/* IL2CPP: HiddenBlock$$Awake
void HiddenBlock__Awake (HiddenBlock_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenBlock$$Awake
   void HiddenBlock__Awake (HiddenBlock_o* __this, const MethodInfo* method); */

void HiddenBlock__Awake_23e9b2c(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c1c88;
  if ((bRam0000000004f4b613 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c88);
    bRam0000000004f4b613 = 1;
  }
  GameBehaviourBase__Awake_24f68a8(param_1,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0xb0) = uStack_28;
                    /* try { // try from 024e9b8c to 025e9b97 has its CatchHandler @ 024e9c18 */
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xb0));
                    /* try { // try from 024e9b9c to 025e9baf has its CatchHandler @ 024e9c54 */
  return;
}

