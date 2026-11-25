/* IL2CPP: CustomFileSystem.<GetFiles>d__4$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
System_Collections_Generic_IEnumerator_string__o* CustomFileSystem__GetFiles_d__4__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (CustomFileSystem__GetFiles_d__4_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   CustomFileSystem.<GetFiles>d__4$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
   System_Collections_Generic_IEnumerator_string__o*
   CustomFileSystem__GetFiles_d__4__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
   (CustomFileSystem__GetFiles_d__4_o* __this, const MethodInfo* method); */

long CustomFileSystem__GetFiles_d__4__System_Collections_Generic_IEnumerable_System_String__GetEnumerator_255e010
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((bRam0000000004f4c0fc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb720);
    bRam0000000004f4c0fc = 1;
  }
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x20),
     iVar2 = System_Environment__get_CurrentManagedThreadId_3145c3c(0), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar4 = param_1;
  }
  else {
    lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb720);
    System_Object___ctor_3142338(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    uVar3 = System_Environment__get_CurrentManagedThreadId_3145c3c(0);
    *(undefined4 *)(lVar4 + 0x20) = uVar3;
  }
                    /* try { // try from 0265e098 to 0275e09f has its CatchHandler @ 0265e120 */
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  thunk_FUN_021f190c();
  return lVar4;
}

