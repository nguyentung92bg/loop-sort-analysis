/* IL2CPP: ConveyorView$$Awake
void ConveyorView__Awake (ConveyorView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorView$$Awake
   void ConveyorView__Awake (ConveyorView_o* __this, const MethodInfo* method); */

void ConveyorView__Awake_24b61e4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  GameBehaviourBase__Awake_24f68a8(param_5,0);
                    /* try { // try from 025b61f8 to 026b620b has its CatchHandler @ 025b62bc */
  plVar1 = *(long **)(param_5 + 0xd8);
  if (plVar1 == (long *)0x0) {
    uVar2 = WorldCanvasBase__GetImage_2498688(param_5,0x13d626de,0);
                    /* try { // try from 025b621c to 026b621f has its CatchHandler @ 025b62e0 */
    *(undefined8 *)(param_5 + 0xd8) = uVar2;
                    /* try { // try from 025b6220 to 026b6267 has its CatchHandler @ 025b62d4 */
    thunk_FUN_021f190c((long *)(param_5 + 0xd8),uVar2);
    plVar1 = *(long **)(param_5 + 0xd8);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  uVar3 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
  *(undefined4 *)(param_5 + 0xe0) = uVar3;
  *(undefined4 *)(param_5 + 0xe4) = param_2;
  *(undefined4 *)(param_5 + 0xe8) = param_3;
  *(undefined4 *)(param_5 + 0xec) = param_4;
  return;
}

