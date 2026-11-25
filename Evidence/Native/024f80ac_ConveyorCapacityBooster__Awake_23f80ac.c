/* IL2CPP: ConveyorCapacityBooster$$Awake
void ConveyorCapacityBooster__Awake (ConveyorCapacityBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorCapacityBooster$$Awake
   void ConveyorCapacityBooster__Awake (ConveyorCapacityBooster_o* __this, const MethodInfo*
   method); */

void ConveyorCapacityBooster__Awake_23f80ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  BoosterBase__Awake_24e4ca4(param_1,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    UnityEngine_Canvas__set_worldCamera_3ec8164
              (*(long *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xe0),0);
    lVar1 = *(long *)(param_1 + 0xb8);
    if (lVar1 != 0) {
      if ((bRam0000000004f5bdef & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a386c8,0);
        bRam0000000004f5bdef = 1;
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f5be70 == (code *)0x0) {
          pcRam0000000004f5be70 = (code *)FUN_021f03bc(&UNK_013b9d44);
        }
                    /* WARNING: Could not recover jumptable at 0x03fc7558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f5be70)(0x3f800000,lVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

