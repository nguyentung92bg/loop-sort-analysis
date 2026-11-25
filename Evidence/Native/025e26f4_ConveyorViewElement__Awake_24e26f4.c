/* IL2CPP: ConveyorViewElement$$Awake
void ConveyorViewElement__Awake (ConveyorViewElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorViewElement$$Awake
   void ConveyorViewElement__Awake (ConveyorViewElement_o* __this, const MethodInfo* method); */

void ConveyorViewElement__Awake_24e26f4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  plVar1 = *(long **)(param_5 + 0x68);
  if (plVar1 == (long *)0x0) {
    uVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                      (param_5,0xb41a6973,0);
    *(undefined8 *)(param_5 + 0x68) = uVar2;
    thunk_FUN_021f190c((long *)(param_5 + 0x68),uVar2);
    plVar1 = *(long **)(param_5 + 0x68);
    if (plVar1 == (long *)0x0) goto LAB_025e2780;
  }
  uVar3 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
  plVar1 = *(long **)(param_5 + 0x68);
  *(undefined4 *)(param_5 + 0x70) = uVar3;
  *(undefined4 *)(param_5 + 0x74) = param_2;
  *(undefined4 *)(param_5 + 0x78) = param_3;
  *(undefined4 *)(param_5 + 0x7c) = param_4;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x025e277c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))(0,0,0,0,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    return;
  }
LAB_025e2780:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

