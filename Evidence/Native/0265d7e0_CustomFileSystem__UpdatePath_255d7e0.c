/* IL2CPP: CustomFileSystem$$UpdatePath
System_String_o* CustomFileSystem__UpdatePath (System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0307f5d4) */
/* IL2CPP: CustomFileSystem$$UpdatePath
   System_String_o* CustomFileSystem__UpdatePath (System_String_o* path, const MethodInfo* method);
    */

long CustomFileSystem__UpdatePath_255d7e0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  undefined *puVar6;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar2 = System_String__LastIndexOf_2f82fd0(param_1,0x2e,0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0) {
    thunk_FUN_02256840(PTR_DAT_049b5000,0,iVar2,0);
    uVar3 = thunk_FUN_0222ca34();
    uVar4 = thunk_FUN_02256840(PTR_DAT_049ccb88);
    puVar6 = PTR_DAT_049e44f0;
  }
  else if (iVar2 < 0) {
    thunk_FUN_02256840(PTR_DAT_049b5000,0,iVar2,0);
    uVar3 = thunk_FUN_0222ca34();
    uVar4 = thunk_FUN_02256840(PTR_DAT_049ccb70);
    puVar6 = PTR_DAT_049e4348;
  }
  else {
    if (-1 < iVar1 - iVar2) {
      if (iVar2 == 0) {
        param_1 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
      }
      else if (iVar1 != iVar2) {
        lVar7 = thunk_FUN_0222a544(iVar2);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Buffer__Memmove_312d0c8(lVar7 + 0x14,param_1 + 0x14,iVar2 << 1,0);
        return lVar7;
      }
      return param_1;
    }
    thunk_FUN_02256840(PTR_DAT_049b5000,0,iVar2,0);
    uVar3 = thunk_FUN_0222ca34();
    uVar4 = thunk_FUN_02256840(PTR_DAT_049ccb70);
    puVar6 = PTR_DAT_049e44f8;
  }
  uVar5 = thunk_FUN_02256840(puVar6);
  System_ArgumentOutOfRangeException___ctor_3068f9c(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_02256840(PTR_DAT_049e4500);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar3,uVar4);
}

