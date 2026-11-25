/* IL2CPP: FulfillModule$$SuppressFulfill
System_IDisposable_o* FulfillModule__SuppressFulfill (FulfillModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$SuppressFulfill
   System_IDisposable_o* FulfillModule__SuppressFulfill (FulfillModule_o* __this, const MethodInfo*
   method); */

long FulfillModule__SuppressFulfill_2543dd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049ca6e8;
  if ((bRam0000000004f4bff1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca6e8);
    bRam0000000004f4bff1 = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  lVar3 = thunk_FUN_0222ca34(uVar2);
  System_Object___ctor_3142338(lVar3,0);
  *(long *)(lVar3 + 0x10) = param_1;
  thunk_FUN_021f190c((long *)(lVar3 + 0x10),param_1);
  return lVar3;
}

