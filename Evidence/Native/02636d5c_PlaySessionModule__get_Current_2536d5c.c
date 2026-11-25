/* IL2CPP: PlaySessionModule$$get_Current
PlaySessionBase_o* PlaySessionModule__get_Current (PlaySessionModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlaySessionModule$$get_Current
   PlaySessionBase_o* PlaySessionModule__get_Current (PlaySessionModule_o* __this, const MethodInfo*
   method); */

long PlaySessionModule__get_Current_2536d5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000004f4bf60 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca1e0);
    bRam0000000004f4bf60 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049ca1e0);
      MainPlaySession___ctor_24fba10(lVar1,uVar2,0);
      *(long *)(param_1 + 0x18) = lVar1;
      thunk_FUN_021f190c((long *)(param_1 + 0x18),lVar1);
    }
  }
  return lVar1;
}

