/* IL2CPP: CustomFileSystem$$.ctor
void CustomFileSystem___ctor (CustomFileSystem_o* __this, System_Collections_Generic_Dictionary_string__string__o* args, System_String_o* funnelFolder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CustomFileSystem$$.ctor
   void CustomFileSystem___ctor (CustomFileSystem_o* __this,
   System_Collections_Generic_Dictionary_string__string__o* args, System_String_o* funnelFolder,
   const MethodInfo* method); */

void CustomFileSystem___ctor_255d658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  System_Object___ctor_3142338(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x10),param_2);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = param_3;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

