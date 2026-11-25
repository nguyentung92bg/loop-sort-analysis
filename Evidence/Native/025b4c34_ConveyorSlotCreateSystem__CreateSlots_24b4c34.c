/* IL2CPP: ConveyorSlotCreateSystem$$CreateSlots
Cysharp_Threading_Tasks_UniTaskVoid_o ConveyorSlotCreateSystem__CreateSlots (ConveyorSlotCreateSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlotCreateSystem$$CreateSlots
   Cysharp_Threading_Tasks_UniTaskVoid_o ConveyorSlotCreateSystem__CreateSlots
   (ConveyorSlotCreateSystem_o* __this, const MethodInfo* method); */

undefined8 ConveyorSlotCreateSystem__CreateSlots_24b4c34(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c6c58;
                    /* try { // try from 025b4c4c to 026b4c97 has its CatchHandler @ 025b4e88 */
  if ((bRam0000000004f4bb87 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6c58);
    bRam0000000004f4bb87 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_021f190c(&uStack_50,param_1);
                    /* try { // try from 025b4c98 to 026b4caf has its CatchHandler @ 025b49e8 */
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
                    /* try { // try from 025b4cb0 to 026b4cb7 has its CatchHandler @ 025b4e88 */
  return 0;
}

