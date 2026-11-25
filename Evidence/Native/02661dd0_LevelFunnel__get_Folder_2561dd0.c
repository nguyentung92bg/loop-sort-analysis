/* IL2CPP: LevelFunnel$$get_Folder
System_String_o* LevelFunnel__get_Folder (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelFunnel$$get_Folder
   System_String_o* LevelFunnel__get_Folder (const MethodInfo* method); */

long LevelFunnel__get_Folder_2561dd0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_049b6270;
  if ((bRam0000000004f4c132 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6270);
    FUN_021f03f8(PTR_DAT_049cba08);
    bRam0000000004f4c132 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49c03 == '\0') {
    FUN_021f03f8(PTR_DAT_049b6270);
    cRam0000000004f49c03 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  uVar5 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49c03 == '\0') {
      FUN_021f03f8(PTR_DAT_049b6270);
      cRam0000000004f49c03 = '\x01';
    }
    puVar3 = PTR_DAT_049cba08;
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar2;
    }
    lVar6 = *(long *)puVar3;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if ((lVar6 == 0) || (iVar1 = *(int *)(lVar6 + 0x10), iVar1 == 0)) {
      if ((lVar4 == 0) || (lVar6 = lVar4, *(int *)(lVar4 + 0x10) == 0)) {
        lVar6 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
      }
    }
    else if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != 0)) {
      lVar7 = thunk_FUN_0222a544(*(int *)(lVar4 + 0x10) + iVar1,lVar4,0);
      System_String__FillStringChecked_2f7d2e8(lVar7,0,lVar6);
      System_String__FillStringChecked_2f7d2e8(lVar7,iVar1,lVar4);
      lVar6 = lVar7;
    }
    return lVar6;
  }
  return 0;
}

