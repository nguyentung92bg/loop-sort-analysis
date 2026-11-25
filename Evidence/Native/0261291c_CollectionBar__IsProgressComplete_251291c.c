/* IL2CPP: CollectionBar$$IsProgressComplete
bool CollectionBar__IsProgressComplete (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$IsProgressComplete
   bool CollectionBar__IsProgressComplete (CollectionBar_o* __this, const MethodInfo* method); */

bool CollectionBar__IsProgressComplete_251291c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  int iStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4bdfe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4bdfe = 1;
  }
  lVar5 = CollectionBar__GetLastProgressData_25126d8(param_1);
  lVar6 = CollectionBar__GetCurrentProgressData_2511d90(param_1);
  puVar2 = PTR_DAT_049c2cf0;
  if (lVar5 != 0) {
    plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar8[1] + 0xfc);
    uVar7 = thunk_FUN_0224e54c(lVar5,*(undefined8 *)(*plVar8 + 0x80));
    func_0x04608620(&iStack_38,uVar7,uVar1);
    if (lVar6 != 0) {
      plVar8 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar8[1] + 0xfc);
      uVar7 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar8 + 0x80));
      func_0x04608620(&iStack_34,uVar7,uVar1);
      if (iStack_34 < iStack_38) {
        bVar3 = false;
      }
      else {
        iVar4 = CollectionBar__GetCurrentTokenCount_251276c(param_1);
        bVar3 = *(int *)(lVar5 + 0x20) <= iVar4;
      }
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

