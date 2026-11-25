/* IL2CPP: ConveyorViewElement$$Update
void ConveyorViewElement__Update (ConveyorViewElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorViewElement$$Update
   void ConveyorViewElement__Update (ConveyorViewElement_o* __this, const MethodInfo* method); */

void ConveyorViewElement__Update_24e2784
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
  plVar1 = *(long **)(param_5 + 0x68);
  if (plVar1 != (long *)0x0) {
    fVar3 = (float)(**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
                    /* try { // try from 025e27b8 to 026e28cf has its CatchHandler @ 025e27b8
                       catch() { ... } // from try @ 025e27b8 with catch @ 025e27b8
                       catch() { ... } // from try @ 025e293c with catch @ 025e27b8
                       catch() { ... } // from try @ 025e2a54 with catch @ 025e27b8
                       catch() { ... } // from try @ 025e2a9c with catch @ 025e27b8
                       catch() { ... } // from try @ 025e2af0 with catch @ 025e27b8
                       catch() { ... } // from try @ 025e2b1c with catch @ 025e27b8 */
    if ((*(long *)(param_5 + 0x38) != 0) &&
       (plVar1 = *(long **)(param_5 + 0x68), plVar1 != (long *)0x0)) {
      fVar2 = fVar2 * *(float *)(*(long *)(param_5 + 0x38) + 0x80);
      fVar5 = 1.0;
      if (fVar2 <= 1.0) {
        fVar5 = fVar2;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar2) {
        fVar4 = fVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x025e2820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2a8))
                (fVar3 + ((float)*(undefined8 *)(param_5 + 0x80) - fVar3) * fVar4,
                 param_2 + ((float)((ulong)*(undefined8 *)(param_5 + 0x80) >> 0x20) - param_2) *
                           fVar4,
                 param_3 + ((float)*(undefined8 *)(param_5 + 0x88) - param_3) * fVar4,
                 param_4 + ((float)((ulong)*(undefined8 *)(param_5 + 0x88) >> 0x20) - param_4) *
                           fVar4,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

