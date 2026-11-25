/* IL2CPP: SelectBoosterSystem$$ApplyBlockDownMotion
void SelectBoosterSystem__ApplyBlockDownMotion (SelectBoosterSystem_o* __this, Carrier_o* carrier, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SelectBoosterSystem$$ApplyBlockDownMotion
   void SelectBoosterSystem__ApplyBlockDownMotion (SelectBoosterSystem_o* __this, Carrier_o*
   carrier, Block_o* block, const MethodInfo* method); */

void SelectBoosterSystem__ApplyBlockDownMotion_23fbab0
               (undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  undefined1 auStack_50 [12];
  
  if ((bRam0000000004f4b67d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c23e8);
    FUN_021f03f8(PTR_DAT_049c23d0);
    FUN_021f03f8(PTR_DAT_049c23e0);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2370);
    bRam0000000004f4b67d = 1;
  }
  fStack_58 = 0.0;
  uStack_60 = 0;
  uStack_68 = 0;
  auStack_80._8_8_ = 0;
  uStack_70 = 0;
  auStack_80._0_8_ = 0;
  auVar9 = ZEXT816(0);
  if ((param_6 != 0) &&
     (lVar4 = UnityEngine_Component__get_transform_3c18724(param_6,0),
     auVar9._8_8_ = auStack_80._8_8_, auVar9._0_8_ = auStack_80._0_8_, lVar4 != 0)) {
    uVar7 = UnityEngine_Transform__get_position_3c2d540(lVar4,0);
    auVar9._8_8_ = auStack_80._8_8_;
    auVar9._0_8_ = auStack_80._0_8_;
    if (*(long *)(param_4 + 0x80) != 0) {
      uVar5 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (*(long *)(param_4 + 0x80),lVar4,&uStack_60,*(undefined8 *)PTR_DAT_049c23e8)
      ;
      puVar1 = PTR_DAT_049c2370;
      if ((uVar5 & 1) == 0) {
        lVar6 = *(long *)PTR_DAT_049c2370;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_021f0574();
          lVar6 = *(long *)puVar1;
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        uStack_60 = CONCAT44((float)param_2 - (float)((ulong)uVar8 >> 0x20),
                             (float)uVar7 - (float)uVar8);
        fStack_58 = param_3 - *(float *)(*(undefined8 **)(lVar6 + 0xb8) + 1);
      }
      puVar3 = PTR_DAT_049c20a0;
      puVar2 = PTR_DAT_049c1680;
      puVar1 = PTR_DAT_049b6110;
      auVar9._8_8_ = auStack_80._8_8_;
      auVar9._0_8_ = auStack_80._0_8_;
      if (*(long *)(param_4 + 0x78) != 0) {
        uVar5 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                          (*(long *)(param_4 + 0x78),lVar4,&uStack_70,
                           *(undefined8 *)PTR_DAT_049c23d0);
        if (((uVar5 & 1) != 0) && (uVar5 = FUN_024f7208(uStack_70,uStack_68,0), (uVar5 & 1) != 0)) {
          FUN_024f73c0(uStack_70,uStack_68,1,0);
        }
        auStack_80 = LitMotion_LMotion__Create_2eaa1b4
                               (uVar7,param_2,param_3,(undefined4)uStack_60,uStack_60._4_4_,
                                fStack_58,_UNK_013aa62c,0);
        auVar9 = FUN_024f4e50(auStack_80,3,*(undefined8 *)puVar2);
        auVar9 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                           (auVar9._0_8_,auVar9._8_8_,lVar4,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_50 = Extensions__AddTo_24d83f4(auVar9._0_8_,auVar9._8_8_ & 0xffffffff,param_5,0);
        auVar9 = auStack_80;
        if (*(long *)(param_4 + 0x78) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (*(long *)(param_4 + 0x78),lVar4,auStack_50,*(undefined8 *)PTR_DAT_049c23e0);
          return;
        }
      }
    }
  }
  auStack_80 = auVar9;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

