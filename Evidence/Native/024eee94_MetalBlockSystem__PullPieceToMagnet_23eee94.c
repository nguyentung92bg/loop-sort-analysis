/* IL2CPP: MetalBlockSystem$$PullPieceToMagnet
Cysharp_Threading_Tasks_UniTask_o MetalBlockSystem__PullPieceToMagnet (MetalBlockSystem_o* __this, MetalBlockSystem_MagnetPiece_o* piece, UnityEngine_Transform_o* magnetT, UnityEngine_Vector3_o targetLocal, UnityEngine_Vector3_o screenRight, System_Action_o* onContact, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$PullPieceToMagnet
   Cysharp_Threading_Tasks_UniTask_o MetalBlockSystem__PullPieceToMagnet (MetalBlockSystem_o*
   __this, MetalBlockSystem_MagnetPiece_o* piece, UnityEngine_Transform_o* magnetT,
   UnityEngine_Vector3_o targetLocal, UnityEngine_Vector3_o screenRight, System_Action_o* onContact,
   const MethodInfo* method); */

void MetalBlockSystem__PullPieceToMagnet_23eee94
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = PTR_DAT_049c2018;
                    /* try { // try from 024eeeb4 to 025eeebb has its CatchHandler @ 024ef110 */
  if ((bRam0000000004f4b63a & 1) == 0) {
                    /* try { // try from 024eeef8 to 025eef1f has its CatchHandler @ 024ef174 */
    FUN_021f03f8(PTR_DAT_049c2018);
    bRam0000000004f4b63a = 1;
  }
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  thunk_FUN_021f190c((ulong)&uStack_e0 | 8,0);
  uStack_a0 = param_7;
  thunk_FUN_021f190c(&uStack_a0,param_7);
  uStack_a8 = param_8;
  thunk_FUN_021f190c(&uStack_a8,param_8);
  uStack_c8 = param_9;
  thunk_FUN_021f190c(&uStack_c8,param_9);
  uStack_c0 = CONCAT44(param_2,param_1);
  uStack_b8 = CONCAT44(param_4,param_3);
  uStack_b0 = CONCAT44(param_6,param_5);
  uStack_90 = param_10;
  thunk_FUN_021f190c(&uStack_90,param_10);
                    /* try { // try from 024eef7c to 025eefa3 has its CatchHandler @ 024ef070 */
  uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_e0 | 8,&uStack_e0,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_e0 | 8,0);
  return;
}

