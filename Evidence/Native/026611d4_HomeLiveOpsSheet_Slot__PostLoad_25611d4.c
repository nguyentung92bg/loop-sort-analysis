/* IL2CPP: HomeLiveOpsSheet.Slot$$PostLoad
void HomeLiveOpsSheet_Slot__PostLoad (HomeLiveOpsSheet_Slot_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeLiveOpsSheet.Slot$$PostLoad
   void HomeLiveOpsSheet_Slot__PostLoad (HomeLiveOpsSheet_Slot_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void HomeLiveOpsSheet_Slot__PostLoad_25611d4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  puVar4 = PTR_DAT_049cb9d0;
  puVar3 = PTR_DAT_049cb430;
  puVar2 = PTR_DAT_049c2cf0;
  if ((bRam0000000004f4c120 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c94d0);
    FUN_021f03f8(PTR_DAT_049c91e0);
    FUN_021f03f8(PTR_DAT_049cb430);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049cb9d0);
    bRam0000000004f4c120 = 1;
  }
  Cathei_BakingSheet_SheetRow___Il2CppFullySharedGenericType___PostLoad_2986178
            (param_1,param_2,*(undefined8 *)puVar3);
  plVar7 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar7[1] + 0xfc);
  uVar5 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar7 + 0x80));
  func_0x04608620(&uStack_70,uVar5,uVar1);
  puVar2 = PTR_DAT_049b3bd0;
                    /* try { // try from 0266129c to 02761503 has its CatchHandler @ 0266129c
                       catch() { ... } // from try @ 0266129c with catch @ 0266129c
                       catch() { ... } // from try @ 02661570 with catch @ 0266129c
                       catch() { ... } // from try @ 026618ac with catch @ 0266129c
                       catch() { ... } // from try @ 02661c00 with catch @ 0266129c
                       catch() { ... } // from try @ 02661c40 with catch @ 0266129c */
  uStack_44 = (undefined4)uStack_70;
  uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_44);
  uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar4,uVar5,0);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  CloudPrefsInt___ctor_24e98a8(&uStack_70,uVar5,0,0,0);
  *(undefined8 *)(param_1 + 0x40) = uStack_68;
  *(undefined8 *)(param_1 + 0x38) = uStack_70;
  *(undefined8 *)(param_1 + 0x50) = uStack_58;
  *(undefined8 *)(param_1 + 0x48) = uStack_60;
  thunk_FUN_021f190c(param_1 + 0x40,0);
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar6 = System_String__Split_2f802dc(*(long *)(param_1 + 0x28),10,0,0),
     puVar4 = PTR_DAT_049c94d0, puVar3 = PTR_DAT_049c91e0, lVar6 != 0)) {
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar9 = 0;
      uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar5 = *(undefined8 *)(lVar6 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          FUN_021f0574();
        }
        System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                  (uVar5,1,&uStack_70,*(undefined8 *)puVar4);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_026613c4;
        FUN_02333498(*(long *)(param_1 + 0x30),&uStack_70,*(undefined8 *)puVar3);
        uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    return;
  }
LAB_026613c4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

