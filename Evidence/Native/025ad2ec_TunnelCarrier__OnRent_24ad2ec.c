/* IL2CPP: TunnelCarrier$$OnRent
void TunnelCarrier__OnRent (TunnelCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrier$$OnRent
   void TunnelCarrier__OnRent (TunnelCarrier_o* __this, const MethodInfo* method); */

void TunnelCarrier__OnRent_24ad2ec(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
                    /* try { // try from 025ad304 to 026ad307 has its CatchHandler @ 025ad3ec */
  if ((bRam0000000004f4bb43 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6680);
    FUN_021f03f8(PTR_DAT_049c6998);
    bRam0000000004f4bb43 = 1;
  }
                    /* try { // try from 025ad328 to 026ad337 has its CatchHandler @ 025ad3f0 */
  puVar1 = PTR_DAT_049c6998;
  GameBehaviourBase__OnRent_24f6c1c(param_1,0);
  if (*(long *)(param_1 + 0xb8) == 0) {
                    /* try { // try from 025ad348 to 026ad34b has its CatchHandler @ 025ad3ec */
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c6680);
    *(undefined8 *)(param_1 + 0xb8) = uStack_28;
                    /* try { // try from 025ad36c to 026ad373 has its CatchHandler @ 025ad3e4 */
    thunk_FUN_021f190c((long *)(param_1 + 0xb8));
  }
                    /* try { // try from 025ad374 to 026ad3d7 has its CatchHandler @ 025ad244 */
  GameBehaviourBase__RegisterView_object__261a35c(param_1,*(undefined8 *)puVar1);
  return;
}

