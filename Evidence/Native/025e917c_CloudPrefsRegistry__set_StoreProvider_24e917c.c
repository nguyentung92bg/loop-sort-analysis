/* IL2CPP: CloudPrefsRegistry$$set_StoreProvider
void CloudPrefsRegistry__set_StoreProvider (System_Func_ICloudPrefsStore__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsRegistry$$set_StoreProvider
   void CloudPrefsRegistry__set_StoreProvider (System_Func_ICloudPrefsStore__o* value, const
   MethodInfo* method); */

void CloudPrefsRegistry__set_StoreProvider_24e917c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_049c7f20;
  if ((bRam0000000004f4bca9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
    bRam0000000004f4bca9 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
  *puVar3 = param_1;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

