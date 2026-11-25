/* IL2CPP: FlickerEffect$$Awake
void FlickerEffect__Awake (FlickerEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FlickerEffect$$Awake
   void FlickerEffect__Awake (FlickerEffect_o* __this, const MethodInfo* method); */

void FlickerEffect__Awake_2571650(long param_1)

{
  undefined *puVar1;
  float fVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049bc138;
  if ((bRam0000000004f4c1de & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc138);
    bRam0000000004f4c1de = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x40) = uStack_28;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x40));
  fVar2 = (float)UnityEngine_Random__get_value_3c11d1c(0);
  *(float *)(param_1 + 0x48) = fVar2 * 100.0;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2c);
  return;
}

