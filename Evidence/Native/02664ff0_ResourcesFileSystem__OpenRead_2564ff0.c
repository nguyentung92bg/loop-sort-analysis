/* IL2CPP: ResourcesFileSystem$$OpenRead
System_IO_Stream_o* ResourcesFileSystem__OpenRead (ResourcesFileSystem_o* __this, System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ResourcesFileSystem$$OpenRead
   System_IO_Stream_o* ResourcesFileSystem__OpenRead (ResourcesFileSystem_o* __this,
   System_String_o* path, const MethodInfo* method); */

undefined8 ResourcesFileSystem__OpenRead_2564ff0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_049c60e8;
                    /* try { // try from 02664ff0 to 02764ffb has its CatchHandler @ 026651e8 */
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 02664ffc to 02765007 has its CatchHandler @ 026651e4 */
                    /* try { // try from 02665008 to 0276500f has its CatchHandler @ 026651e0 */
                    /* try { // try from 02665018 to 0276501f has its CatchHandler @ 026651dc */
  if ((bRam0000000004f4c150 & 1) == 0) {
                    /* try { // try from 02665020 to 0276502b has its CatchHandler @ 026651d8 */
    FUN_021f03f8(PTR_DAT_049b4840);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 0266503c to 02765047 has its CatchHandler @ 026651d4 */
    FUN_021f03f8(PTR_DAT_049c60e8);
    bRam0000000004f4c150 = 1;
  }
  lVar3 = UnityEngine_Resources__Load_object__26a73fc(param_2,*(undefined8 *)puVar2);
                    /* try { // try from 02665058 to 02765067 has its CatchHandler @ 026651d0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02665068 to 02765073 has its CatchHandler @ 026651cc */
    FUN_021f0574(*(long *)puVar1);
  }
                    /* try { // try from 02665074 to 0276507b has its CatchHandler @ 026651c8 */
  uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(lVar3,0,0);
  puVar1 = PTR_DAT_049b4840;
  if ((uVar4 & 1) != 0) {
    if (lVar3 != 0) {
      uVar5 = UnityEngine_TextAsset__get_bytes_3c21d34(lVar3,0);
                    /* try { // try from 02665098 to 027650a3 has its CatchHandler @ 026651c4 */
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 026650b0 to 027650bb has its CatchHandler @ 026651c0 */
      System_IO_MemoryStream___ctor_30ad540(uVar6,uVar5,0);
                    /* try { // try from 026650bc to 027650c7 has its CatchHandler @ 026651bc */
                    /* try { // try from 026650c8 to 027650cf has its CatchHandler @ 026651b8 */
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar5 = thunk_FUN_02256840(PTR_DAT_049cb750);
  uVar5 = System_String__Concat_2f72b28(uVar5,param_2,0);
                    /* try { // try from 026650ec to 027650f7 has its CatchHandler @ 026651b4 */
  thunk_FUN_02256840(PTR_DAT_049b83c0);
  uVar6 = thunk_FUN_0222ca34();
                    /* try { // try from 02665104 to 0276510f has its CatchHandler @ 026651b0 */
  System_IO_FileNotFoundException___ctor_30ace60(uVar6,uVar5,0);
                    /* try { // try from 02665110 to 0276511b has its CatchHandler @ 026651ac */
  uVar5 = thunk_FUN_02256840(PTR_DAT_049cbb68);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0266511c to 02765123 has its CatchHandler @ 026651a8 */
  FUN_021f0564(uVar6,uVar5);
}

