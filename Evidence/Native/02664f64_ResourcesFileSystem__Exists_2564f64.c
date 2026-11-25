/* IL2CPP: ResourcesFileSystem$$Exists
bool ResourcesFileSystem__Exists (ResourcesFileSystem_o* __this, System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ResourcesFileSystem$$Exists
   bool ResourcesFileSystem__Exists (ResourcesFileSystem_o* __this, System_String_o* path, const
   MethodInfo* method); */

uint ResourcesFileSystem__Exists_2564f64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_049c60e8;
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 02664f68 to 02764f73 has its CatchHandler @ 02665208 */
                    /* try { // try from 02664f74 to 02764f7f has its CatchHandler @ 02665204 */
                    /* try { // try from 02664f80 to 02764f87 has its CatchHandler @ 02665200 */
  if ((bRam0000000004f4c14f & 1) == 0) {
                    /* try { // try from 02664f90 to 02764f9f has its CatchHandler @ 026651fc */
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c60e8);
                    /* try { // try from 02664fac to 02764fb7 has its CatchHandler @ 026651f8 */
    bRam0000000004f4c14f = 1;
  }
                    /* try { // try from 02664fb8 to 02764fc3 has its CatchHandler @ 026651f4 */
  uVar4 = UnityEngine_Resources__Load_object__26a73fc(param_2,*(undefined8 *)puVar2);
                    /* try { // try from 02664fc4 to 02764fcb has its CatchHandler @ 026651f0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
                    /* try { // try from 02664fd4 to 02764fe3 has its CatchHandler @ 026651ec */
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f584f8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0,0);
    bRam0000000004f584f8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__CompareBaseObjects_3c23098(uVar4,0);
  return (uVar3 ^ 0xffffffff) & 1;
}

