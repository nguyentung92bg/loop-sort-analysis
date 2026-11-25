/* IL2CPP: ConveyorView$$Update
void ConveyorView__Update (ConveyorView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorView$$Update
   void ConveyorView__Update (ConveyorView_o* __this, const MethodInfo* method); */

void ConveyorView__Update_24b6258
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 025b6268 to 026b626b has its CatchHandler @ 025b62d0 */
  fVar2 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
                    /* try { // try from 025b626c to 026b62b3 has its CatchHandler @ 025b62c4 */
  plVar1 = *(long **)(param_5 + 0xd8);
  if (plVar1 != (long *)0x0) {
    fVar3 = (float)(**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    if ((*(long *)(param_5 + 0xb8) != 0) &&
       (plVar1 = *(long **)(param_5 + 0xd8), plVar1 != (long *)0x0)) {
      fVar2 = fVar2 * *(float *)(*(long *)(param_5 + 0xb8) + 0x80);
                    /* try { // try from 025b62b4 to 026b62b7 has its CatchHandler @ 025b62c0 */
                    /* catch() { ... } // from try @ 025b61a8 with catch @ 025b62b8
                       try { // try from 025b62b8 to 026b62fb has its CatchHandler @ 025b611c */
                    /* catch() { ... } // from try @ 025b61f8 with catch @ 025b62bc */
                    /* catch() { ... } // from try @ 025b62b4 with catch @ 025b62c0 */
                    /* catch() { ... } // from try @ 025b626c with catch @ 025b62c4 */
      fVar5 = 1.0;
      if (fVar2 <= 1.0) {
        fVar5 = fVar2;
      }
                    /* catch() { ... } // from try @ 025b61e0 with catch @ 025b62c8 */
                    /* catch() { ... } // from try @ 025b61d0 with catch @ 025b62cc */
                    /* catch() { ... } // from try @ 025b6268 with catch @ 025b62d0 */
                    /* catch() { ... } // from try @ 025b6220 with catch @ 025b62d4 */
      fVar4 = 0.0;
                    /* catch() { ... } // from try @ 025b61ac with catch @ 025b62d8 */
      if (0.0 <= fVar2) {
        fVar4 = fVar5;
      }
                    /* catch() { ... } // from try @ 025b618c with catch @ 025b62dc */
                    /* catch() { ... } // from try @ 025b621c with catch @ 025b62e0 */
                    /* catch() { ... } // from try @ 025b6168 with catch @ 025b62e4 */
                    /* WARNING: Could not recover jumptable at 0x025b62f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2a8))
                (fVar3 + ((float)*(undefined8 *)(param_5 + 0xf0) - fVar3) * fVar4,
                 param_2 + ((float)((ulong)*(undefined8 *)(param_5 + 0xf0) >> 0x20) - param_2) *
                           fVar4,
                 param_3 + ((float)*(undefined8 *)(param_5 + 0xf8) - param_3) * fVar4,
                 param_4 + ((float)((ulong)*(undefined8 *)(param_5 + 0xf8) >> 0x20) - param_4) *
                           fVar4,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

