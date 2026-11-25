/* IL2CPP: BlockPhysicsSystem$$OnConveyorSlotAddBlock
void BlockPhysicsSystem__OnConveyorSlotAddBlock (BlockPhysicsSystem_o* __this, ConveyorSlotAddBlockMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BlockPhysicsSystem$$OnConveyorSlotAddBlock
   void BlockPhysicsSystem__OnConveyorSlotAddBlock (BlockPhysicsSystem_o* __this,
   ConveyorSlotAddBlockMessage_o m, const MethodInfo* method); */

void BlockPhysicsSystem__OnConveyorSlotAddBlock_23e3808
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               long param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_54;
  
  uStack_54 = 0;
  if (((param_6 != 0) && (*(long *)(param_4 + 0x30) != 0)) &&
     (lVar1 = *(long *)(param_6 + 0x140), lVar1 != 0)) {
    UnityEngine_Rigidbody__set_mass_3c8a634
              (*(undefined4 *)(*(long *)(param_4 + 0x30) + 100),lVar1,0);
    if (*(long *)(param_4 + 0x30) != 0) {
      UnityEngine_Rigidbody__set_linearDamping_3c8a3d8
                (*(undefined4 *)(*(long *)(param_4 + 0x30) + 0x68),lVar1,0);
      if (*(long *)(param_4 + 0x30) != 0) {
        UnityEngine_Rigidbody__set_angularDamping_3c8a4ac
                  (*(undefined4 *)(*(long *)(param_4 + 0x30) + 0x6c),lVar1,0);
        if (*(long *)(param_4 + 0x30) != 0) {
          UnityEngine_Rigidbody__set_maxLinearVelocity_3c8ae28
                    (*(undefined4 *)(*(long *)(param_4 + 0x30) + 0x74),lVar1,0);
          UnityEngine_Rigidbody__set_isKinematic_3c8a7bc(lVar1,0,0);
          UnityEngine_Rigidbody__set_detectCollisions_3c8a944(lVar1,1,0);
          UnityEngine_Rigidbody__set_interpolation_3c8ad64(lVar1,1,0);
          UnityEngine_Rigidbody__set_collisionDetectionMode_3c8a880(lVar1,0,0);
          if (*(long *)(param_6 + 0x148) != 0) {
            UnityEngine_Collider__set_enabled_3c855c0(*(long *)(param_6 + 0x148),1,0);
            if (*(long *)(param_6 + 0x140) != 0) {
              fVar3 = (float)UnityEngine_Rigidbody__get_position_3c8aa08
                                       (*(long *)(param_6 + 0x140),0);
              fVar5 = param_2;
              fVar6 = param_3;
                    /* try { // try from 024e3908 to 025e392f has its CatchHandler @ 024e4060 */
              fVar4 = (float)BlockPhysicsSystem__GetTargetForcePosition_23e3a18(param_4,&uStack_54);
              if (cRam0000000004f4a55c == '\0') {
                FUN_021f03f8(PTR_DAT_049b8758);
                cRam0000000004f4a55c = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
                FUN_021f0574();
              }
                    /* try { // try from 024e396c to 025e3993 has its CatchHandler @ 024e405c */
              if ((SQRT((fVar6 - param_3) * (fVar6 - param_3) +
                        (fVar4 - fVar3) * (fVar4 - fVar3) + (fVar5 - param_2) * (fVar5 - param_2))
                   <= _UNK_013aa920) && (cRam0000000004f4a233 == '\0')) {
                    /* try { // try from 024e39ac to 025e39b3 has its CatchHandler @ 024e401c */
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a233 = '\x01';
              }
              if (*(long *)(param_4 + 0x30) != 0) {
                if ((bRam0000000004f5a0cf & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_04a28848,1,0);
                  bRam0000000004f5a0cf = 1;
                }
                if (lVar1 != 0) {
                  lVar2 = *(long *)(lVar1 + 0x10);
                  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
                  }
                  if (pcRam0000000004f5a170 == (code *)0x0) {
                    pcRam0000000004f5a170 = (code *)FUN_021f03bc(&UNK_013b212d);
                  }
                  (*pcRam0000000004f5a170)(lVar2,&stack0xffffffffffffffd4,1);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024e3a14 to 025e3a17 has its CatchHandler @ 024e3ff8 */
  FUN_021f06a0();
}

