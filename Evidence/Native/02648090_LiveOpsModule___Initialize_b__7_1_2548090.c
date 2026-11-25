/* IL2CPP: LiveOpsModule$$<Initialize>b__7_1
int32_t LiveOpsModule___Initialize_b__7_1 (LiveOpsModule_o* __this, int32_t a, int32_t b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$<Initialize>b__7_1
   int32_t LiveOpsModule___Initialize_b__7_1 (LiveOpsModule_o* __this, int32_t a, int32_t b, const
   MethodInfo* method); */

void LiveOpsModule___Initialize_b__7_1_2548090(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049ca7f8;
  if ((bRam0000000004f4c01e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca7f8);
    bRam0000000004f4c01e = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_34 = param_2;
  System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
            (*(undefined8 *)(param_1 + 0x40),&uStack_34,&uStack_38,&uStack_3c,*(undefined8 *)puVar1)
  ;
  uStack_38 = 0;
  uStack_34 = param_3;
  System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
            (*(undefined8 *)(param_1 + 0x40),&uStack_34,&uStack_38,&uStack_40,*(undefined8 *)puVar1)
  ;
  System_Int32__CompareTo_30fba2c(&uStack_40,uStack_3c,0);
  return;
}

