/* IL2CPP: EconomyMonitor$$OnEconomyAdd
void EconomyMonitor__OnEconomyAdd (EconomyMonitor_o* __this, EconomyAddMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyMonitor$$OnEconomyAdd
   void EconomyMonitor__OnEconomyAdd (EconomyMonitor_o* __this, EconomyAddMessage_o m, const
   MethodInfo* method); */

void EconomyMonitor__OnEconomyAdd_243cc98(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_049c2698;
  if ((bRam0000000004f4b82b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e30);
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c3e78);
    FUN_021f03f8(PTR_DAT_049c3e80);
    FUN_021f03f8(PTR_DAT_049c3e88);
    FUN_021f03f8(PTR_DAT_049c2698);
    FUN_021f03f8(PTR_DAT_049c3e90);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b82b = 1;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  uStack_50 = 0;
  lStack_48 = 0;
  lVar7 = *(long *)(*(long *)puVar4 + 0x20);
  uStack_60 = 0;
  uStack_58 = 0;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  pcVar8 = (char *)thunk_FUN_0224e54c(param_2 + 0x30,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar8 != '\0' && iVar1 == 1) {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_2 + 0x30,&uStack_70,*(undefined8 *)PTR_DAT_049c3e90);
    EconomyMonitor__ApplyGoldParticleMotion_243cf64
              ((undefined4)uStack_70,uStack_70._4_4_,puStack_68._0_4_,param_1,uVar12,
               *(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
               *(undefined8 *)(param_2 + 0x40));
    if (*(long *)(param_1 + 200) == 0) {
LAB_0253cef8:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,1);
    uVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 200),&uStack_70,&lStack_48,
                       *(undefined8 *)PTR_DAT_049c3e30);
    if ((uVar9 & 1) != 0) {
      if (lStack_48 == 0) goto LAB_0253cef8;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lStack_48,&uStack_60,*(undefined8 *)PTR_DAT_049c3e88);
      puVar6 = PTR_DAT_049c3e80;
      puVar5 = PTR_DAT_049c3e78;
      puVar4 = PTR_DAT_049b3b98;
      uStack_70 = 0;
      puStack_68 = &uStack_60;
      while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_60,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
        lVar13 = *(long *)puVar6;
        lVar10 = *(long *)(lVar13 + 0x20);
        uVar3 = *(ushort *)(lVar10 + 0x135);
        lVar7 = lVar10;
        if ((uVar3 & 1) == 0) {
          lVar7 = FUN_02229718();
          lVar10 = *(long *)(lVar13 + 0x20);
          uVar3 = *(ushort *)(lVar10 + 0x135);
        }
        uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar11 = thunk_FUN_0224e54c(&uStack_60,
                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_38,uVar11,uVar2);
        uVar11 = uStack_38;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar9 = UnityEngine_Object__op_Equality_3c1eeb4(uVar11,uVar12,0);
        if ((uVar9 & 1) == 0) {
          EconomyMonitor__UpdateView_243c9f8(param_1,1,uVar11);
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)PTR_DAT_049c3e70);
    }
  }
  return;
}

