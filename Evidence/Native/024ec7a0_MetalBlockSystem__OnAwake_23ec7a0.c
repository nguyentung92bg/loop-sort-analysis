/* IL2CPP: MetalBlockSystem$$OnAwake
void MetalBlockSystem__OnAwake (MetalBlockSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$OnAwake
   void MetalBlockSystem__OnAwake (MetalBlockSystem_o* __this, const MethodInfo* method); */

void MetalBlockSystem__OnAwake_23ec7a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049c1ec8;
  puVar2 = PTR_DAT_049b5190;
  puVar1 = PTR_DAT_049b4308;
  if ((bRam0000000004f4b62e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049b5190);
    FUN_021f03f8(PTR_DAT_049c1ec8);
    bRam0000000004f4b62e = 1;
  }
  uStack_38 = 0;
  SystemBase__OnAwake_2555e24(param_1,0);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___ctor_306b98c(uVar4,param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Threading_CancellationToken__Register_3162a38(auStack_50,&uStack_38,uVar4,0);
  return;
}

