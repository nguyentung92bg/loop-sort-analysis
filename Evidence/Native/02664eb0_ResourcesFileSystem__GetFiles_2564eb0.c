/* IL2CPP: ResourcesFileSystem$$GetFiles
System_Collections_Generic_IEnumerable_string__o* ResourcesFileSystem__GetFiles (ResourcesFileSystem_o* __this, System_String_o* path, System_String_o* extension, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ResourcesFileSystem$$GetFiles
   System_Collections_Generic_IEnumerable_string__o* ResourcesFileSystem__GetFiles
   (ResourcesFileSystem_o* __this, System_String_o* path, System_String_o* extension, const
   MethodInfo* method); */

long ResourcesFileSystem__GetFiles_2564eb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049cbb60;
                    /* try { // try from 02664ebc to 02764ec7 has its CatchHandler @ 02665230 */
                    /* try { // try from 02664ec8 to 02764ed3 has its CatchHandler @ 0266522c */
  if ((bRam0000000004f4c14e & 1) == 0) {
                    /* try { // try from 02664ed4 to 02764edf has its CatchHandler @ 02665228 */
    FUN_021f03f8(PTR_DAT_049cbb60);
    bRam0000000004f4c14e = 1;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 02664eec to 02764ef7 has its CatchHandler @ 02665224 */
  System_Object___ctor_3142338(lVar3,0);
                    /* try { // try from 02664ef8 to 02764f03 has its CatchHandler @ 02665220 */
  *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
                    /* try { // try from 02664f04 to 02764f0f has its CatchHandler @ 0266521c */
  uVar2 = System_Environment__get_CurrentManagedThreadId_3145c3c(0);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  *(undefined8 *)(lVar3 + 0x30) = param_2;
                    /* try { // try from 02664f1c to 02764f27 has its CatchHandler @ 02665218 */
  thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x30),param_2);
                    /* try { // try from 02664f28 to 02764f33 has its CatchHandler @ 02665214 */
  return lVar3;
}

