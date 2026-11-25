/* IL2CPP: ResourcesFileSystem.<GetFiles>d__0$$System.Collections.IEnumerable.GetEnumerator
System_Collections_IEnumerator_o* ResourcesFileSystem__GetFiles_d__0__System_Collections_IEnumerable_GetEnumerator (ResourcesFileSystem__GetFiles_d__0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ResourcesFileSystem.<GetFiles>d__0$$System.Collections.IEnumerable.GetEnumerator
   System_Collections_IEnumerator_o*
   ResourcesFileSystem__GetFiles_d__0__System_Collections_IEnumerable_GetEnumerator
   (ResourcesFileSystem__GetFiles_d__0_o* __this, const MethodInfo* method); */

long ResourcesFileSystem__GetFiles_d__0__System_Collections_IEnumerable_GetEnumerator_25653dc
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((bRam0000000004f4c152 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbb60);
    bRam0000000004f4c152 = 1;
  }
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x20),
     iVar2 = System_Environment__get_CurrentManagedThreadId_3145c3c(0), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar4 = param_1;
  }
  else {
    lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cbb60);
    System_Object___ctor_3142338(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    uVar3 = System_Environment__get_CurrentManagedThreadId_3145c3c(0);
    *(undefined4 *)(lVar4 + 0x20) = uVar3;
  }
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  thunk_FUN_021f190c();
  return lVar4;
}

