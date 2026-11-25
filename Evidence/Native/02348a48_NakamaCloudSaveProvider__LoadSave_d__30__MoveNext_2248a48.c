/* IL2CPP: NakamaCloudSaveProvider.<LoadSave>d__30$$MoveNext
void NakamaCloudSaveProvider__LoadSave_d__30__MoveNext (NakamaCloudSaveProvider__LoadSave_d__30_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02348d9c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: NakamaCloudSaveProvider.<LoadSave>d__30$$MoveNext
   void NakamaCloudSaveProvider__LoadSave_d__30__MoveNext (NakamaCloudSaveProvider__LoadSave_d__30_o
   __this, const MethodInfo* method); */

void NakamaCloudSaveProvider__LoadSave_d__30__MoveNext_2248a48(int *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_48;
  long lStack_40;
  int iStack_34;
  undefined8 uStack_28;
  
  if ((bRam0000000004f49b5e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b58f0);
    FUN_021f03f8(PTR_DAT_049b58f8);
    FUN_021f03f8(PTR_DAT_049b5078);
    FUN_021f03f8(PTR_DAT_049b5900);
                    /* try { // try from 02348a9c to 02448adb has its CatchHandler @ 02348a9c
                       catch() { ... } // from try @ 02348a9c with catch @ 02348a9c
                       catch() { ... } // from try @ 02348ae0 with catch @ 02348a9c */
    FUN_021f03f8(PTR_DAT_049b5908);
    FUN_021f03f8(PTR_DAT_049b5910);
    FUN_021f03f8(PTR_DAT_049b5918);
    bRam0000000004f49b5e = 1;
  }
  iStack_34 = *param_1;
  lStack_40 = *(long *)(param_1 + 6);
  uStack_48 = 0;
                    /* try { // try from 02348adc to 02448adf has its CatchHandler @ 02348b5c */
                    /* try { // try from 02348ae0 to 02448b6f has its CatchHandler @ 02348a9c */
  if (iStack_34 == 0) {
                    /* catch() { ... } // from try @ 02348adc with catch @ 02348b5c */
    uStack_48 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    iStack_34 = -1;
    *param_1 = -1;
  }
  else {
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar8 = *(long **)(lStack_40 + 0x10);
    *(undefined1 *)(lStack_40 + 0x29) = 1;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *plVar8;
    uVar9 = *(undefined8 *)(param_1 + 8);
    lVar10 = *(long *)PTR_DAT_049b58f8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
          goto LAB_02348b94;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar5 = FUN_02229a4c(plVar8);
LAB_02348b94:
    lVar5 = thunk_FUN_0220ec70(*(undefined8 *)(lVar5 + 8),lVar10);
    lVar5 = (**(code **)(lVar5 + 8))(plVar8,uVar9,lVar5);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_48 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar5,*(undefined8 *)PTR_DAT_049b5918);
    uVar6 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_48,*(undefined8 *)PTR_DAT_049b5910);
    if ((uVar6 & 1) == 0) {
      iStack_34 = 0;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_48;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c25c(param_1 + 2,&uStack_48,param_1,*(undefined8 *)PTR_DAT_049b58f0);
      uVar4 = 5;
      goto LAB_02348cc4;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_48,&uStack_28,*(undefined8 *)PTR_DAT_049b5908);
  if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined8 *)(lStack_40 + 0x18) = uStack_28;
  thunk_FUN_021f190c();
  lVar5 = lStack_40;
  if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar9 = *(undefined8 *)(lStack_40 + 0x18);
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5078);
  System_Object___ctor_3142338(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(lVar10 + 0x10),uVar9);
  *(long *)(lVar5 + 0x20) = lVar10;
  thunk_FUN_021f190c((long *)(lVar5 + 0x20),lVar10);
  lVar5 = lStack_40;
  if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lStack_40 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  bVar2 = Voodoo_Nakama_Storage_StorageObject_object___get_IsDefault_29b0a38
                    (*(long *)(lStack_40 + 0x18),*(undefined8 *)PTR_DAT_049b5900);
  *(byte *)(lVar5 + 0x28) = bVar2 & 1;
  uVar4 = 8;
LAB_02348cc4:
  if (iStack_34 < 0) {
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 *)(lStack_40 + 0x29) = 0;
  }
  cVar1 = cRam0000000004f49bfa;
  if ((uVar4 | 8) == 8) {
    *param_1 = -2;
    if (cVar1 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar8 = *(long **)(param_1 + 2);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_02348d7c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b56d0,2);
LAB_02348d7c:
      (*(code *)*puVar3)(plVar8,puVar3[1]);
    }
  }
  return;
}

