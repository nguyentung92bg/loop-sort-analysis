/* IL2CPP: CustomFileSystem$$OpenRead
System_IO_Stream_o* CustomFileSystem__OpenRead (CustomFileSystem_o* __this, System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CustomFileSystem$$OpenRead
   System_IO_Stream_o* CustomFileSystem__OpenRead (CustomFileSystem_o* __this, System_String_o*
   path, const MethodInfo* method); */

undefined8 CustomFileSystem__OpenRead_255d814(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lStack_58;
  
  if ((bRam0000000004f4c0fa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb728);
    FUN_021f03f8(PTR_DAT_049b4538);
    FUN_021f03f8(PTR_DAT_049b6270);
    FUN_021f03f8(PTR_DAT_049b4840);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c60e8);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049cb730);
    FUN_021f03f8(PTR_DAT_049cb738);
    FUN_021f03f8(PTR_DAT_049cb740);
    FUN_021f03f8(PTR_DAT_049b4730);
    FUN_021f03f8(PTR_DAT_049b4740);
    FUN_021f03f8(PTR_DAT_049bb3a0);
    FUN_021f03f8(PTR_DAT_049b4568);
    FUN_021f03f8(PTR_DAT_049cb748);
    bRam0000000004f4c0fa = 1;
  }
  puVar4 = PTR_DAT_049c60e8;
  puVar3 = PTR_DAT_049b4840;
  puVar1 = PTR_DAT_049b3b98;
  lStack_58 = 0;
  lVar7 = CustomFileSystem__UpdatePath_255d7e0(param_2);
  puVar5 = PTR_DAT_049cb728;
  puVar2 = PTR_DAT_049b6270;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    if (lVar7 == 0) goto LAB_0265dc68;
    iVar6 = System_String__LastIndexOf_2f82fd0(lVar7,0x2f,0);
    uVar8 = System_String__Substring_2f81c00(lVar7,iVar6 + 1,0);
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_021f0574(lVar12);
      lVar12 = *(long *)puVar2;
    }
    iVar6 = System_Array__IndexOf___Il2CppFullySharedGenericType__25a850c
                      (**(undefined8 **)(lVar12 + 0xb8),uVar8,*(undefined8 *)puVar5);
    if (-1 < iVar6) {
      uVar8 = System_String__Concat_2f7d424
                        (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049bb3a0,uVar8,0);
      lVar12 = UnityEngine_Resources__Load_object__26a73fc(uVar8,*(undefined8 *)puVar4);
      lVar13 = *(long *)puVar1;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_021f0574(lVar13);
      }
      uVar9 = UnityEngine_Object__op_Inequality_3c1b96c(lVar12,0,0);
      if ((uVar9 & 1) != 0) {
        if (lVar12 == 0) goto LAB_0265dc68;
        goto LAB_0265db50;
      }
    }
  }
  iVar6 = System_String__LastIndexOf_2f82fd0(lVar7,0x2f,0);
  uVar8 = System_String__Substring_2f81c00(lVar7,iVar6 + 1,0);
  lVar12 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,2);
  uVar10 = System_String__Concat_2f72b28(uVar8,*(undefined8 *)PTR_DAT_049cb738,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  *(undefined8 *)(lVar12 + 0x20) = uVar10;
  thunk_FUN_021f190c();
  uVar8 = System_String__Concat_2f72b28(uVar8,*(undefined8 *)PTR_DAT_049cb740,0);
  if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  *(undefined8 *)(lVar12 + 0x28) = uVar8;
  thunk_FUN_021f190c();
  puVar5 = PTR_DAT_049cb748;
  puVar2 = PTR_DAT_049b4538;
  if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
    uVar9 = 0;
    uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
    do {
      if (uVar14 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                         (*(long *)(param_1 + 0x10),*(undefined8 *)(lVar12 + 0x20 + uVar9 * 8),
                          &lStack_58,*(undefined8 *)puVar2);
      if (((uVar14 & 1) != 0) &&
         (uVar14 = System_String__Equals_2f7b508(lStack_58,*(undefined8 *)puVar5,0),
         (uVar14 & 1) == 0)) {
        if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lStack_58 = System_String__Substring_2f81c00(lStack_58,10,0);
        if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lStack_58 = System_String__Substring_2f7f570(lStack_58,0,*(int *)(lStack_58 + 0x10) + -3,0);
        if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lStack_58 = System_String__Replace_2f7fb18
                              (lStack_58,*(undefined8 *)PTR_DAT_049b4740,
                               *(undefined8 *)PTR_DAT_049b4568,0);
        if (lStack_58 != 0) {
          lStack_58 = System_String__Replace_2f7fb18
                                (lStack_58,*(undefined8 *)PTR_DAT_049cb730,
                                 *(undefined8 *)PTR_DAT_049b4730,0);
          plVar11 = (long *)System_Text_Encoding__get_UTF8_2f9af48(0);
          if (plVar11 != (long *)0x0) {
            uVar8 = (**(code **)(*plVar11 + 600))
                              (plVar11,lStack_58,*(undefined8 *)(*plVar11 + 0x260));
            uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
            System_IO_MemoryStream___ctor_30ad540(uVar10,uVar8,0);
            return uVar10;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(lVar12 + 0x18));
  }
  lVar12 = UnityEngine_Resources__Load_object__26a73fc(lVar7,*(undefined8 *)puVar4);
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    FUN_021f0574(lVar13);
  }
  uVar9 = UnityEngine_Object__op_Inequality_3c1b96c(lVar12,0,0);
  if ((uVar9 & 1) == 0) {
    uVar8 = thunk_FUN_02256840(PTR_DAT_049cb750);
    uVar8 = System_String__Concat_2f72b28(uVar8,lVar7,0);
    thunk_FUN_02256840(PTR_DAT_049b83c0);
    uVar10 = thunk_FUN_0222ca34();
    System_IO_FileNotFoundException___ctor_30ace60(uVar10,uVar8,0);
    uVar8 = thunk_FUN_02256840(PTR_DAT_049cb758);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar10,uVar8);
  }
  if (lVar12 != 0) {
LAB_0265db50:
    uVar8 = UnityEngine_TextAsset__get_bytes_3c21d34(lVar12,0);
    uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
    System_IO_MemoryStream___ctor_30ad540(uVar10,uVar8,0);
    return uVar10;
  }
LAB_0265dc68:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

