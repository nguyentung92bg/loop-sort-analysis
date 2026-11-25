/* IL2CPP: AreaSheet.Row$$get_LevelRange
System_String_o* AreaSheet_Row__get_LevelRange (AreaSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Row$$get_LevelRange
   System_String_o* AreaSheet_Row__get_LevelRange (AreaSheet_Row_o* __this, const MethodInfo*
   method); */

void AreaSheet_Row__get_LevelRange_2558608(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_34;
  
  puVar3 = PTR_DAT_049b3cf0;
  if ((bRam0000000004f4c0c2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6400);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049b3cf0);
    FUN_021f03f8(PTR_DAT_049b3d10);
    FUN_021f03f8(PTR_DAT_049cb380);
    FUN_021f03f8(PTR_DAT_049c4b60);
    bRam0000000004f4c0c2 = 1;
  }
  lVar5 = *(long *)(*(long *)puVar3 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
  pcVar6 = (char *)thunk_FUN_0224e54c(&uStack_40,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80)
                                     );
  puVar4 = PTR_DAT_049cb380;
  if (*pcVar6 == '\0') {
    uStack_48 = CONCAT44(uStack_48._4_4_,*(undefined4 *)(param_1 + 0x24));
    uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_48);
    System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c4b60,uVar7,0);
  }
  else {
    uStack_48 = CONCAT44(uStack_48._4_4_,*(undefined4 *)(param_1 + 0x24));
    uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_48);
    lVar5 = *(long *)(*(long *)puVar3 + 0x20);
    uStack_40 = *(undefined8 *)(param_1 + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    puVar3 = PTR_DAT_049b3d10;
    pcVar6 = (char *)thunk_FUN_0224e54c(&uStack_40,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
    uVar10 = *(undefined8 *)puVar4;
    if (*pcVar6 == '\0') {
      uStack_48 = 0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_049b6400;
      lVar9 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar5 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718(lVar9);
        lVar5 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar5 + 0x135);
      }
      uVar1 = *(undefined4 *)(**(long **)(lVar9 + 0xc0) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar5 = FUN_02229718(lVar5);
      }
      uVar8 = thunk_FUN_0224e54c(&uStack_40,
                                 *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) + 0x20);
      func_0x04608620(&uStack_48,uVar8,uVar1);
      iStack_34 = (int)uStack_48;
      uStack_48 = 0;
      iStack_34 = iStack_34 + -1;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_48,&iStack_34,*(undefined8 *)PTR_DAT_049b3c20);
    }
    uVar8 = thunk_FUN_0222c66c(*(undefined8 *)puVar3,&uStack_48);
    System_String__Format_2f7dfac(uVar10,uVar7,uVar8,0);
  }
  return;
}

