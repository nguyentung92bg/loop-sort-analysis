/* IL2CPP: SpeechTextEffect$$OnEnable
void SpeechTextEffect__OnEnable (SpeechTextEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SpeechTextEffect$$OnEnable
   void SpeechTextEffect__OnEnable (SpeechTextEffect_o* __this, const MethodInfo* method); */

void SpeechTextEffect__OnEnable_25731e4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4c1eb & 1) == 0) {
                    /* try { // try from 02673210 to 02773217 has its CatchHandler @ 02673424 */
    FUN_021f03f8(PTR_DAT_049c5b08);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 02673220 to 02773227 has its CatchHandler @ 02673420 */
    bRam0000000004f4c1eb = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar4,0,0);
                    /* try { // try from 02673250 to 0277325b has its CatchHandler @ 02673414 */
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 0267325c to 027732db has its CatchHandler @ 026730b8 */
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c5b08);
    *(undefined8 *)(param_1 + 0x28) = uStack_28;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28));
    plVar3 = *(long **)(param_1 + 0x28);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar4 = (**(code **)(*plVar3 + 0x548))(plVar3,*(undefined8 *)(*plVar3 + 0x550));
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    thunk_FUN_021f190c();
  }
  SpeechTextEffect__Play_25732c0(param_1);
  return;
}

