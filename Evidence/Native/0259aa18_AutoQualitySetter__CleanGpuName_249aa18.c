/* IL2CPP: AutoQualitySetter$$CleanGpuName
System_String_o* AutoQualitySetter__CleanGpuName (System_String_o* gpuName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03082148) */
/* WARNING: Removing unreachable block (ram,0x0308207c) */
/* IL2CPP: AutoQualitySetter$$CleanGpuName
   System_String_o* AutoQualitySetter__CleanGpuName (System_String_o* gpuName, const MethodInfo*
   method); */

long AutoQualitySetter__CleanGpuName_249aa18(long param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  if ((bRam0000000004f4baac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6188);
    FUN_021f03f8(PTR_DAT_049c6268);
    FUN_021f03f8(PTR_DAT_049c61b8);
    FUN_021f03f8(PTR_DAT_049c61c8);
    FUN_021f03f8(PTR_DAT_049b4500);
    FUN_021f03f8(PTR_DAT_049c61e8);
    FUN_021f03f8(PTR_DAT_049c6200);
    bRam0000000004f4baac = 1;
  }
  uVar3 = System_String__IsNullOrEmpty_2f7c924(param_1,0);
  puVar2 = PTR_DAT_049b4500;
  if ((uVar3 & 1) != 0) {
    return **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  if ((((param_1 == 0) ||
       (lVar4 = System_String__Replace_2f7fb18
                          (param_1,*(undefined8 *)PTR_DAT_049c61b8,*(undefined8 *)PTR_DAT_049b4500,0
                          ), lVar4 == 0)) ||
      (lVar4 = System_String__Replace_2f7fb18
                         (lVar4,*(undefined8 *)PTR_DAT_049c6200,*(undefined8 *)puVar2,0), lVar4 == 0
      )) || (((lVar4 = System_String__Replace_2f7fb18
                                 (lVar4,*(undefined8 *)PTR_DAT_049c61c8,*(undefined8 *)puVar2,0),
              lVar4 == 0 ||
              (lVar4 = System_String__Replace_2f7fb18
                                 (lVar4,*(undefined8 *)PTR_DAT_049c61e8,*(undefined8 *)puVar2,0),
              lVar4 == 0)) ||
             (lVar4 = System_String__Replace_2f7fb18
                                (lVar4,*(undefined8 *)PTR_DAT_049c6268,
                                 *(undefined8 *)PTR_DAT_049b6188,0), puVar2 = PTR_DAT_049b3bd0,
             lVar4 == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((int)*(uint *)(lVar4 + 0x10) < 1) {
    iVar7 = 0;
  }
  else {
    lVar5 = 0;
    uVar3 = (ulong)*(uint *)(lVar4 + 0x10);
    do {
      if ((int)uVar3 <= lVar5) {
        System_ThrowHelper__ThrowIndexOutOfRangeException_3120414(0);
      }
      uVar1 = *(undefined2 *)(lVar4 + 0x14 + lVar5 * 2);
      if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = System_Char__IsWhiteSpace_306f7c8(uVar1,0);
      if ((uVar3 & 1) == 0) break;
      uVar3 = (ulong)*(int *)(lVar4 + 0x10);
      lVar5 = lVar5 + 1;
    } while (lVar5 < (long)uVar3);
    iVar7 = (int)lVar5;
  }
  uVar3 = (ulong)(*(int *)(lVar4 + 0x10) + -1);
  do {
    iVar8 = (int)uVar3;
    if (iVar8 < iVar7) break;
    if ((long)*(int *)(lVar4 + 0x10) <= (long)(uVar3 & 0xffffffff)) {
      System_ThrowHelper__ThrowIndexOutOfRangeException_3120414(0);
    }
    uVar1 = *(undefined2 *)(lVar4 + 0x14 + uVar3 * 2);
    if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = System_Char__IsWhiteSpace_306f7c8(uVar1,0);
    uVar3 = uVar3 - 1;
  } while ((uVar6 & 1) != 0);
  iVar8 = (iVar8 - iVar7) + 1;
  if (iVar8 != *(int *)(lVar4 + 0x10)) {
    if (iVar8 != 0) {
      lVar5 = thunk_FUN_0222a544(iVar8);
      if (lVar5 != 0) {
        System_Buffer__Memmove_312d0c8(lVar5 + 0x14,lVar4 + (long)iVar7 * 2 + 0x14,iVar8 * 2,0);
        return lVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  return lVar4;
}

