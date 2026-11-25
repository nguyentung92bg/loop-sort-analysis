/* IL2CPP: AreaSheet$$GetPickedArea
AreaSheet_Row_o* AreaSheet__GetPickedArea (AreaSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet$$GetPickedArea
   AreaSheet_Row_o* AreaSheet__GetPickedArea (AreaSheet_o* __this, const MethodInfo* method); */

long AreaSheet__GetPickedArea_2557dc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_38;
  
  if ((bRam0000000004f4c0bc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb2d0);
    FUN_021f03f8(PTR_DAT_049cb358);
    FUN_021f03f8(PTR_DAT_049cb2e0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049cb360);
    FUN_021f03f8(PTR_DAT_049cb300);
    bRam0000000004f4c0bc = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  if (*(char *)(param_1 + 0x48) != '\0') {
    lVar5 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
    uVar6 = CloudPrefsInt__HasValue_24e9b24(*(long *)(lVar5 + 0xb8) + 0xa0,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    lVar5 = AreaSheet__GetReachedArea_2557fac(param_1);
    if (lVar5 == 0) {
      return 0;
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    iVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar7 + 0xb8) + 0xc0,0);
    puVar2 = PTR_DAT_049cb300;
    if (iVar3 != *(int *)(lVar5 + 0x20)) {
      return 0;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = *(long *)PTR_DAT_049cb300;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    puVar9 = *(undefined8 **)(lVar5 + 0xb8);
    lVar7 = puVar9[4];
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar11 = *puVar9;
      lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb2e0);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                (lVar7,uVar11,*(undefined8 *)PTR_DAT_049cb360,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar8 = lVar7;
      thunk_FUN_021f190c(plVar8,lVar7);
    }
    System_Linq_Enumerable__FirstOrDefault___Il2CppFullySharedGenericType__25dd410
              (uVar10,lVar7,&lStack_38,*(undefined8 *)PTR_DAT_049cb358);
    if (lStack_38 != 0) {
      lVar5 = *(long *)puVar1;
      iVar3 = *(int *)(lStack_38 + 0x24);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar1;
      }
      iVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar5 + 0xb8) + 0x60,0);
      if (iVar4 + 1 < iVar3) {
        return 0;
      }
      return lStack_38;
    }
  }
  return 0;
}

