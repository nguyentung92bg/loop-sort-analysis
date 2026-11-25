/* IL2CPP: HiddenCarrier$$OnRent
void HiddenCarrier__OnRent (HiddenCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenCarrier$$OnRent
   void HiddenCarrier__OnRent (HiddenCarrier_o* __this, const MethodInfo* method); */

void HiddenCarrier__OnRent_24a4d14(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c66b0;
                    /* try { // try from 025a4d28 to 026a4d73 has its CatchHandler @ 025a4e9c */
  if ((bRam0000000004f4bb03 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6680);
    FUN_021f03f8(PTR_DAT_049c66b0);
    bRam0000000004f4bb03 = 1;
  }
  GameBehaviourBase__OnRent_24f6c1c(param_1,0);
  GameBehaviourBase__RegisterView_object__261a35c(param_1,*(undefined8 *)puVar1);
                    /* try { // try from 025a4d74 to 026a4db7 has its CatchHandler @ 025a4c30 */
  if (*(long *)(param_1 + 0x110) == 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c6680);
    *(undefined8 *)(param_1 + 0x110) = uStack_28;
    thunk_FUN_021f190c(param_1 + 0x110);
  }
  return;
}

