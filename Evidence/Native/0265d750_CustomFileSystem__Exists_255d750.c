/* IL2CPP: CustomFileSystem$$Exists
bool CustomFileSystem__Exists (CustomFileSystem_o* __this, System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CustomFileSystem$$Exists
   bool CustomFileSystem__Exists (CustomFileSystem_o* __this, System_String_o* path, const
   MethodInfo* method); */

uint CustomFileSystem__Exists_255d750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_049c60e8;
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4c0f9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c60e8);
    bRam0000000004f4c0f9 = 1;
  }
  uVar4 = CustomFileSystem__UpdatePath_255d7e0(param_2);
  uVar4 = UnityEngine_Resources__Load_object__26a73fc(uVar4,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
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

