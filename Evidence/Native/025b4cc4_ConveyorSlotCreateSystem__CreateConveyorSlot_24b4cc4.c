/* IL2CPP: ConveyorSlotCreateSystem$$CreateConveyorSlot
ConveyorSlot_o* ConveyorSlotCreateSystem__CreateConveyorSlot (ConveyorSlotCreateSystem_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlotCreateSystem$$CreateConveyorSlot
   ConveyorSlot_o* ConveyorSlotCreateSystem__CreateConveyorSlot (ConveyorSlotCreateSystem_o* __this,
   UnityEngine_Transform_o* parent, const MethodInfo* method); */

undefined8 ConveyorSlotCreateSystem__CreateConveyorSlot_24b4cc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
                    /* try { // try from 025b4cc8 to 026b4ccb has its CatchHandler @ 025b4e1c */
                    /* try { // try from 025b4ccc to 026b4d43 has its CatchHandler @ 025b49e8 */
  if ((bRam0000000004f4bb88 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6c60);
    FUN_021f03f8(PTR_DAT_049c6c68);
    bRam0000000004f4bb88 = 1;
  }
  if (((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
     (lVar1 = PrefabModule__Rent_2537bc4
                        (*(long *)(param_1 + 0x48),*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50)
                         ,param_2,0), lVar1 != 0)) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar1,&uStack_28,*(undefined8 *)PTR_DAT_049c6c60);
    if (*(long *)(param_1 + 0x70) != 0) {
                    /* try { // try from 025b4d44 to 026b4d4b has its CatchHandler @ 025b4e30 */
      FUN_02333498(*(long *)(param_1 + 0x70),uStack_28,*(undefined8 *)PTR_DAT_049c6c68);
                    /* try { // try from 025b4d64 to 026b4daf has its CatchHandler @ 025b4e3c */
      return uStack_28;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

