/* IL2CPP: HeartContainer$$Awake
void HeartContainer__Awake (HeartContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HeartContainer$$Awake
   void HeartContainer__Awake (HeartContainer_o* __this, const MethodInfo* method); */

void HeartContainer__Awake_256be1c(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049cbea0;
                    /* try { // try from 0266be38 to 0276be4f has its CatchHandler @ 0266c334 */
  if ((bRam0000000004f4c195 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbea0);
    bRam0000000004f4c195 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
                    /* try { // try from 0266be64 to 0276be67 has its CatchHandler @ 0266c2a8 */
  *(undefined8 *)(param_1 + 0x20) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20));
                    /* try { // try from 0266be78 to 0276be7f has its CatchHandler @ 0266c330 */
  return;
}

