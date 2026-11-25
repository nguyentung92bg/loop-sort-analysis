/* IL2CPP: GameBootstrapState$$.ctor
void GameBootstrapState___ctor (GameBootstrapState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBootstrapState$$.ctor
   void GameBootstrapState___ctor (GameBootstrapState_o* __this, const MethodInfo* method); */

void GameBootstrapState___ctor_24fc1bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04a39a60;
  if ((bRam0000000004f5c3ad & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a39a60);
    bRam0000000004f5c3ad = 1;
  }
  puVar1 = PTR_DAT_049cfd58;
  lVar5 = *(long *)puVar2;
  if ((bRam0000000004f4caaf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cfd58);
    bRam0000000004f4caaf = 1;
  }
  UnityHFSM_ActionState___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_27ae878
            (param_1,1,0,**(undefined8 **)(*(long *)(lVar5 + 0x20) + 0xc0));
  FUN_0200ffd0(param_1,*(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x20) + 0x80),0);
  FUN_0200ffd0(param_1,*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x20) + 0x80)
                       + 0x20,0);
  FUN_0200ffd0(param_1,*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x20) + 0x80)
                       + 0x40,0);
  FUN_0200ffd0(param_1,*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x20) + 0x80)
                       + 0x60,0);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityHFSM_Timer___ctor_3f0b6f4(uVar4,0);
  lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x20) + 0x80) + 0x80;
  FUN_021f0418(lVar5,8);
  puVar3 = (undefined8 *)thunk_FUN_0224e54c(param_1,lVar5);
  *puVar3 = uVar4;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0,0);
  }
  return;
}

