/* IL2CPP: ResourcesFileSystem.<GetFiles>d__0$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
System_Collections_Generic_IEnumerator_string__o* ResourcesFileSystem__GetFiles_d__0__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (ResourcesFileSystem__GetFiles_d__0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   ResourcesFileSystem.<GetFiles>d__0$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
   System_Collections_Generic_IEnumerator_string__o*
   ResourcesFileSystem__GetFiles_d__0__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
   (ResourcesFileSystem__GetFiles_d__0_o* __this, const MethodInfo* method); */

long ResourcesFileSystem__GetFiles_d__0__System_Collections_Generic_IEnumerable_System_String__GetEnumerator_2565338
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
                    /* try { // try from 02665368 to 02765377 has its CatchHandler @ 02665378 */
                    /* catch() { ... } // from try @ 026652e4 with catch @ 02665378
                       catch() { ... } // from try @ 02665368 with catch @ 02665378 */
                    /* try { // try from 0266537c to 0276537f has its CatchHandler @ 02665388 */
                    /* try { // try from 02665380 to 0276538b has its CatchHandler @ 02664a8c */
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x20),
     iVar2 = System_Environment__get_CurrentManagedThreadId_3145c3c(0), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar4 = param_1;
                    /* catch() { ... } // from try @ 0266537c with catch @ 02665388 */
                    /* try { // try from 0266538c to 027653b7 has its CatchHandler @ 0266538c
                       catch() { ... } // from try @ 0266538c with catch @ 0266538c
                       catch() { ... } // from try @ 026653f8 with catch @ 0266538c
                       catch() { ... } // from try @ 02665430 with catch @ 0266538c
                       catch() { ... } // from try @ 02665470 with catch @ 0266538c
                       catch() { ... } // from try @ 026654e4 with catch @ 0266538c */
  }
  else {
    lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cbb60);
    System_Object___ctor_3142338(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    uVar3 = System_Environment__get_CurrentManagedThreadId_3145c3c(0);
                    /* try { // try from 026653b8 to 027653bf has its CatchHandler @ 02665434 */
    *(undefined4 *)(lVar4 + 0x20) = uVar3;
  }
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  thunk_FUN_021f190c();
  return lVar4;
}

