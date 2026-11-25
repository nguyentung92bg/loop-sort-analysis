/* IL2CPP: IPadOrientation$$set_IsActive
void IPadOrientation__set_IsActive (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: IPadOrientation$$set_IsActive
   void IPadOrientation__set_IsActive (bool value, const MethodInfo* method); */

void IPadOrientation__set_IsActive_24f73cc(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049c8550;
  if ((bRam0000000004f4bd30 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8550);
    bRam0000000004f4bd30 = 1;
  }
  **(byte **)(*(long *)puVar1 + 0xb8) = param_1 & 1;
  return;
}

