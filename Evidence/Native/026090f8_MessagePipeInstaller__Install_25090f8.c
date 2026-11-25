/* IL2CPP: MessagePipeInstaller$$Install
void MessagePipeInstaller__Install (MessagePipeInstaller_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MessagePipeInstaller$$Install
   void MessagePipeInstaller__Install (MessagePipeInstaller_o* __this,
   VContainer_IContainerBuilder_o* builder, const MethodInfo* method); */

void MessagePipeInstaller__Install_25090f8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_049c8f98;
  if ((bRam0000000004f4bdb1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8fa0);
    FUN_021f03f8(PTR_DAT_049c8fa8);
    FUN_021f03f8(PTR_DAT_049c8fb0);
    FUN_021f03f8(PTR_DAT_049c8f98);
    bRam0000000004f4bdb1 = 1;
  }
  MessagePipe_ContainerBuilderExtensions__RegisterMessagePipe_2f36d14(param_2,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar7 = puVar4[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar8 = *puVar4;
    lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c8fa0);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (lVar7,uVar8,*(undefined8 *)PTR_DAT_049c8fb0,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar7;
    thunk_FUN_021f190c(plVar3,lVar7);
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c8fa8) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 8) * 0x10 + 0x138);
        goto LAB_02609234;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c8fa8,8);
LAB_02609234:
                    /* WARNING: Could not recover jumptable at 0x0260924c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(param_2,lVar7,puVar4[1]);
  return;
}

