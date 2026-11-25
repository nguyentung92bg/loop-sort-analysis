/* IL2CPP: LiveOpsModule$$IsJoined
bool LiveOpsModule__IsJoined (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$IsJoined
   bool LiveOpsModule__IsJoined (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo*
   method); */

uint LiveOpsModule__IsJoined_2546cc0(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4c015 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2c68);
    bRam0000000004f4c015 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar2 != 0)) {
    uStack_24 = param_2;
    uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar2,&uStack_24,*(undefined8 *)PTR_DAT_049c2f60);
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
LAB_02646da0:
      return uVar1 & 1;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar2 != 0)) {
      uStack_24 = param_2;
      lVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar2,&uStack_24,*(undefined8 *)PTR_DAT_049c2c68);
      if (lVar2 != 0) {
        uStack_58 = *(undefined8 *)(lVar2 + 0x40);
        uStack_60 = *(undefined8 *)(lVar2 + 0x38);
        uStack_48 = *(undefined8 *)(lVar2 + 0x50);
        uStack_50 = *(undefined8 *)(lVar2 + 0x48);
        uStack_38 = *(undefined8 *)(lVar2 + 0x60);
        uStack_40 = *(undefined8 *)(lVar2 + 0x58);
        uVar1 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                          (&uStack_60,*(undefined8 *)PTR_DAT_049b5f98);
        goto LAB_02646da0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

