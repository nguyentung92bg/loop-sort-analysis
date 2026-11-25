/* IL2CPP: CollectItems$$TryCollectItem
void CollectItems__TryCollectItem (CollectItems_o* __this, HomeLiveOpsSlot_o slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectItems$$TryCollectItem
   void CollectItems__TryCollectItem (CollectItems_o* __this, HomeLiveOpsSlot_o slot, const
   MethodInfo* method); */

void CollectItems__TryCollectItem_250e810(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
                    /* try { // try from 0260e81c to 0270ed6f has its CatchHandler @ 0260e5e0 */
  if ((bRam0000000004f4bdea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b6370);
    bRam0000000004f4bdea = 1;
  }
  puVar5 = PTR_DAT_049b6370;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 0xa0);
    if (lVar10 != 0) {
      uVar1 = *(undefined4 *)param_2;
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar4 = PTR_DAT_049b6350;
      puVar3 = PTR_DAT_049b6348;
      iVar6 = Extensions__ToItem_24e79a8(uVar1,0);
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lVar10,&uStack_60,*(undefined8 *)puVar5);
      uStack_70 = 0;
      puStack_68 = &uStack_60;
      do {
        uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                          (&uStack_60,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_60,*(undefined8 *)PTR_DAT_049b6330);
          return;
        }
        lVar11 = *(long *)puVar4;
        lVar8 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
        lVar10 = lVar8;
        if ((uVar2 & 1) == 0) {
          lVar10 = FUN_02229718();
          lVar8 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
        }
        uVar9 = thunk_FUN_0224e54c(&uStack_60,
                                   *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x04608620(auStack_48,uVar9,uVar1);
      } while (iVar6 != auStack_48._0_4_);
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)PTR_DAT_049b6330);
      if (0 < auStack_48._4_4_) {
        uStack_88 = param_2[1];
        uStack_90 = *param_2;
        uStack_80 = param_2[2];
        CollectItems__ApplyCollectItemMotions_250ea4c(param_1,&uStack_90,auStack_48._4_4_,iVar6);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

