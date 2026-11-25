/* IL2CPP: AreasMonitor$$get_DisplayLevel
float AreasMonitor__get_DisplayLevel (AreasMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$get_DisplayLevel
   float AreasMonitor__get_DisplayLevel (AreasMonitor_o* __this, const MethodInfo* method); */

float AreasMonitor__get_DisplayLevel_2434050(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_30;
  float fStack_24;
  
  puVar3 = PTR_DAT_049b99c8;
  if ((bRam0000000004f4b7ee & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b99c0);
    FUN_021f03f8(PTR_DAT_049b99c8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b7ee = 1;
  }
  lVar5 = *(long *)(*(long *)puVar3 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x118);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
  pcVar6 = (char *)thunk_FUN_0224e54c(&uStack_30,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80)
                                     );
  puVar3 = PTR_DAT_049b5310;
  if (*pcVar6 == '\0') {
    lVar5 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar3;
    }
    iVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar5 + 0xb8) + 0x60,0);
    fStack_24 = (float)(iVar4 + 1);
  }
  else {
    lVar9 = *(long *)PTR_DAT_049b99c0;
    lVar8 = *(long *)(lVar9 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar5 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718(lVar8);
      lVar5 = *(long *)(lVar9 + 0x20);
      uVar2 = *(ushort *)(lVar5 + 0x135);
    }
    uVar1 = *(undefined4 *)(**(long **)(lVar8 + 0xc0) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar5 = FUN_02229718(lVar5);
    }
    uVar7 = thunk_FUN_0224e54c(&uStack_30,
                               *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) + 0x20);
    func_0x04608620(&fStack_24,uVar7,uVar1);
  }
  return fStack_24;
}

