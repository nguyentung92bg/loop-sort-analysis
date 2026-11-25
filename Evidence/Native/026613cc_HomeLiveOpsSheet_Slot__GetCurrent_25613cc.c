/* IL2CPP: HomeLiveOpsSheet.Slot$$GetCurrent
int32_t HomeLiveOpsSheet_Slot__GetCurrent (HomeLiveOpsSheet_Slot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeLiveOpsSheet.Slot$$GetCurrent
   int32_t HomeLiveOpsSheet_Slot__GetCurrent (HomeLiveOpsSheet_Slot_o* __this, const MethodInfo*
   method); */

undefined4 HomeLiveOpsSheet_Slot__GetCurrent_25613cc(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4c121 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9230);
    FUN_021f03f8(PTR_DAT_049c9238);
    FUN_021f03f8(PTR_DAT_049c9240);
    FUN_021f03f8(PTR_DAT_049cb9d8);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c9248);
    bRam0000000004f4c121 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar5 = LiveOpsDevFilter__get_IsActive_252260c(0);
  if ((uVar5 & 1) == 0) {
LAB_02661548:
    puVar3 = PTR_DAT_049cb9d8;
    puVar2 = PTR_DAT_049b5480;
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
                    /* try { // try from 02661570 to 027615a3 has its CatchHandler @ 0266129c */
    uVar4 = CloudPrefsInt__get_Value_24e99c0(&uStack_70,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    Extensions__GetWrapped___Il2CppFullySharedGenericType__25efed0
              (uVar8,uVar4,&uStack_80,*(undefined8 *)puVar3);
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x30),&uStack_48,*(undefined8 *)PTR_DAT_049c9248);
    puVar3 = PTR_DAT_049c9240;
    puVar2 = PTR_DAT_049c9238;
    uStack_80 = 0;
    puStack_78 = &uStack_48;
    do {
      uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_48,*(undefined8 *)PTR_DAT_049c9230);
        goto LAB_02661548;
      }
      lVar9 = *(long *)puVar3;
      lVar6 = *(long *)(lVar9 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar7 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_02229718();
        lVar6 = *(long *)(lVar9 + 0x20);
        uVar1 = *(ushort *)(lVar6 + 0x135);
      }
      uVar4 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      uVar8 = thunk_FUN_0224e54c(&uStack_48,
                                 *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 02661504 to 0276150b has its CatchHandler @ 02661bdc */
      func_0x04608620(&uStack_24,uVar8,uVar4);
      uVar4 = uStack_24;
      uVar5 = LiveOpsDevFilter__IsAllowed_2522614(uStack_24,0);
    } while ((uVar5 & 1) == 0);
                    /* try { // try from 02661524 to 0276156f has its CatchHandler @ 02661be0 */
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_48,*(undefined8 *)PTR_DAT_049c9230);
    uStack_80._0_4_ = uVar4;
  }
                    /* try { // try from 026615a4 to 027615b3 has its CatchHandler @ 02661b98 */
  return (undefined4)uStack_80;
}

