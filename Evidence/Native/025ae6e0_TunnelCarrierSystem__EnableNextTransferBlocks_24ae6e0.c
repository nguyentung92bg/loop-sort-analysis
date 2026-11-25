/* IL2CPP: TunnelCarrierSystem$$EnableNextTransferBlocks
Cysharp_Threading_Tasks_UniTaskVoid_o TunnelCarrierSystem__EnableNextTransferBlocks (TunnelCarrierSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrierSystem$$EnableNextTransferBlocks
   Cysharp_Threading_Tasks_UniTaskVoid_o TunnelCarrierSystem__EnableNextTransferBlocks
   (TunnelCarrierSystem_o* __this, Carrier_o* carrier, const MethodInfo* method); */

undefined8
TunnelCarrierSystem__EnableNextTransferBlocks_24ae6e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c69f0;
                    /* try { // try from 025ae6f4 to 026ae6f7 has its CatchHandler @ 025ae7f8 */
  if ((bRam0000000004f4bb4f & 1) == 0) {
                    /* try { // try from 025ae714 to 026ae717 has its CatchHandler @ 025ae7f4 */
    FUN_021f03f8(PTR_DAT_049c69f0);
    bRam0000000004f4bb4f = 1;
  }
                    /* try { // try from 025ae724 to 026ae727 has its CatchHandler @ 025ae7e8 */
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* try { // try from 025ae738 to 026ae73b has its CatchHandler @ 025ae7e0 */
  uStack_78 = 0;
  uStack_80 = 0;
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_70 = param_1;
                    /* try { // try from 025ae74c to 026ae77b has its CatchHandler @ 025ae800 */
  thunk_FUN_021f190c(&uStack_70,param_1);
  uStack_68 = param_2;
  thunk_FUN_021f190c(&uStack_68,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
                    /* try { // try from 025ae784 to 026ae7a3 has its CatchHandler @ 025ae7f0 */
  return 0;
}

