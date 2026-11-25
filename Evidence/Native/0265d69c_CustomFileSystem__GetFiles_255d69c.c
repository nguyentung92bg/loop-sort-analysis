/* IL2CPP: CustomFileSystem$$GetFiles
System_Collections_Generic_IEnumerable_string__o* CustomFileSystem__GetFiles (CustomFileSystem_o* __this, System_String_o* path, System_String_o* extension, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CustomFileSystem$$GetFiles
   System_Collections_Generic_IEnumerable_string__o* CustomFileSystem__GetFiles (CustomFileSystem_o*
   __this, System_String_o* path, System_String_o* extension, const MethodInfo* method); */

long CustomFileSystem__GetFiles_255d69c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049cb720;
  if ((bRam0000000004f4c0f8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb720);
    bRam0000000004f4c0f8 = 1;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
  uVar2 = System_Environment__get_CurrentManagedThreadId_3145c3c(0);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  *(undefined8 *)(lVar3 + 0x30) = param_2;
  thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x30),param_2);
  return lVar3;
}

