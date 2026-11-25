/* IL2CPP: Block$$SetDarkColor
void Block__SetDarkColor (Block_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Block$$SetDarkColor
   void Block__SetDarkColor (Block_o* __this, const MethodInfo* method); */

void Block__SetDarkColor_23dc434(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_s3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_38;
  
  uVar13 = 0;
  uVar14 = _UNK_013aa834;
  uVar12 = UnityEngine_Color__HSVToRGB_3c04b3c(0,0,_UNK_013aa834,1,0);
  uVar9 = *(undefined8 *)(param_1 + 0xe4);
  if ((bRam0000000004f4bd1b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c83b8,uVar9,0);
    FUN_021f03f8(PTR_DAT_049c83c0);
    FUN_021f03f8(PTR_DAT_049c83c8);
    FUN_021f03f8(PTR_DAT_049c83d0);
    FUN_021f03f8(PTR_DAT_049c83d8);
    FUN_021f03f8(PTR_DAT_049c83e0);
    bRam0000000004f4bd1b = 1;
  }
  lVar10 = *(long *)(param_1 + 0x50);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (lVar10 == 0) {
LAB_025f4f44:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar10 + 0x18) == 0) {
    UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c22a8
              (param_1,lVar10,*(undefined8 *)PTR_DAT_049c83b8);
    lVar10 = *(long *)(param_1 + 0x50);
    if (lVar10 == 0) goto LAB_025f4f44;
  }
  puVar5 = PTR_DAT_049c83d0;
  puVar4 = PTR_DAT_049c83c8;
  puVar3 = PTR_DAT_049c83c0;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar10,&uStack_78,*(undefined8 *)PTR_DAT_049c83d8);
  while (uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&uStack_78,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
    lVar11 = *(long *)puVar5;
    lVar7 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar10 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar7 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar8 = thunk_FUN_0224e54c(&uStack_78,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_38,uVar8,uVar1);
    GameBehaviourBase__InjectColorType_24f4fa0(uVar12,uVar13,uVar14,in_s3,param_1,uVar9,uStack_38);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_78,*(undefined8 *)puVar3);
  return;
}

