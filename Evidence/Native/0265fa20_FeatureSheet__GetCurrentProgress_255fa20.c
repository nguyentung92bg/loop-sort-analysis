/* IL2CPP: FeatureSheet$$GetCurrentProgress
FeatureSheet_Progress_o FeatureSheet__GetCurrentProgress (FeatureSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FeatureSheet$$GetCurrentProgress
   FeatureSheet_Progress_o FeatureSheet__GetCurrentProgress (FeatureSheet_o* __this, const
   MethodInfo* method); */

undefined1  [16] FeatureSheet__GetCurrentProgress_255fa20(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  if ((bRam0000000004f4c10c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb8d8);
    FUN_021f03f8(PTR_DAT_049cb8e0);
    FUN_021f03f8(PTR_DAT_049cb8e8);
    FUN_021f03f8(PTR_DAT_049cb8f0);
    bRam0000000004f4c10c = 1;
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = *(undefined8 *)(param_1 + 0x60);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  iVar8 = CloudPrefsInt__get_Value_24e99c0(&uStack_70,0);
  puVar6 = PTR_DAT_049cb8e8;
  puVar5 = PTR_DAT_049cb8e0;
  puVar4 = PTR_DAT_049cb8d8;
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x48),&uStack_b8,*(undefined8 *)PTR_DAT_049cb8f0);
  uStack_80 = uStack_a8;
  uStack_88 = puStack_b0;
  uStack_90 = uStack_b8;
  uStack_b8 = 0;
  puStack_b0 = &uStack_90;
  uVar7 = 0;
  do {
    uVar13 = uVar7;
    uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_90,*(undefined8 *)puVar5);
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_90,*(undefined8 *)puVar4);
      lStack_a0 = 0;
      uStack_98 = 0;
      goto LAB_0265fc04;
    }
    lVar14 = *(long *)puVar6;
    lVar10 = *(long *)(lVar14 + 0x20);
    uVar3 = *(ushort *)(lVar10 + 0x135);
    lVar11 = lVar10;
    if ((uVar3 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar10 = *(long *)(lVar14 + 0x20);
      uVar3 = *(ushort *)(lVar10 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar3 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_38,uVar12,uVar1);
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar2 = *(int *)(lStack_38 + 0x1c);
    uVar7 = uVar13;
  } while (((iVar2 < 1) || (*(char *)(lStack_38 + 0x18) == '\0')) ||
          (uVar7 = iVar2 - 1, iVar2 <= iVar8));
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_90,*(undefined8 *)puVar4);
  lStack_a0 = lStack_38;
  uStack_98 = 0;
  fVar15 = (float)(int)(*(int *)(lStack_38 + 0x1c) + ~uVar13);
  thunk_FUN_021f190c(&lStack_a0,lStack_38);
  uStack_98 = CONCAT44((float)(int)(iVar8 - uVar13) / fVar15,
                       (float)(int)((iVar8 - uVar13) + -1) / fVar15);
LAB_0265fc04:
  auVar16._8_8_ = uStack_98;
  auVar16._0_8_ = lStack_a0;
  return auVar16;
}

