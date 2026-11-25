/* IL2CPP: MessagePipeInstaller.<>c$$<Install>b__0_0
void MessagePipeInstaller___c___Install_b__0_0 (MessagePipeInstaller___c_o* __this, VContainer_IObjectResolver_o* container, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MessagePipeInstaller.<>c$$<Install>b__0_0
   void MessagePipeInstaller___c___Install_b__0_0 (MessagePipeInstaller___c_o* __this,
   VContainer_IObjectResolver_o* container, const MethodInfo* method); */

void MessagePipeInstaller___c___Install_b__0_0_25092cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 auStack_38 [2];
  
  uVar4 = MessagePipe_ObjectResolverExtensions__AsServiceProvider_2f37184(param_2,0);
  puVar3 = PTR_DAT_049e2648;
  puVar2 = PTR_DAT_049e2640;
  puVar1 = PTR_DAT_049cd708;
  if ((bRam0000000004f4ece3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e2640,0);
    FUN_021f03f8(PTR_DAT_049e2648);
    FUN_021f03f8(PTR_DAT_049cd708);
    bRam0000000004f4ece3 = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
  MessagePipe_DependencyInjectionShims__GetRequiredService___Il2CppFullySharedGenericType__25d2960
            (uVar4,auStack_38,*(undefined8 *)puVar2);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = auStack_38[0];
  thunk_FUN_021f190c();
  MessagePipe_DependencyInjectionShims__GetRequiredService___Il2CppFullySharedGenericType__25d2960
            (uVar4,auStack_38,*(undefined8 *)puVar3);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = auStack_38[0];
  thunk_FUN_021f190c();
  return;
}

