/* IL2CPP: IPadOrientation$$get_IsActive
bool IPadOrientation__get_IsActive (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: IPadOrientation$$get_IsActive
   bool IPadOrientation__get_IsActive (const MethodInfo* method); */

undefined1 IPadOrientation__get_IsActive_24f7384(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049c8550;
  if ((bRam0000000004f4bd2f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8550);
    bRam0000000004f4bd2f = 1;
  }
  return **(undefined1 **)(*(long *)puVar1 + 0xb8);
}

