/* IL2CPP: SelectBoosterSystem$$ApplyBlockUpMotion
void SelectBoosterSystem__ApplyBlockUpMotion (SelectBoosterSystem_o* __this, Carrier_o* carrier, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SelectBoosterSystem$$ApplyBlockUpMotion
   void SelectBoosterSystem__ApplyBlockUpMotion (SelectBoosterSystem_o* __this, Carrier_o* carrier,
   Block_o* block, const MethodInfo* method); */

void SelectBoosterSystem__ApplyBlockUpMotion_23fb870
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  float fStack_68;
  
  if ((bRam0000000004f4b67c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c23d0);
    FUN_021f03f8(PTR_DAT_049c23d8);
    FUN_021f03f8(PTR_DAT_049c23e0);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2370);
    bRam0000000004f4b67c = 1;
  }
  uStack_78 = 0;
  auStack_90._8_8_ = 0;
  uStack_80 = 0;
  auStack_90._0_8_ = 0;
  auVar10 = ZEXT816(0);
  if ((param_6 != 0) &&
     (lVar5 = UnityEngine_Component__get_transform_3c18724(param_6,0),
     auVar10._8_8_ = auStack_90._8_8_, auVar10._0_8_ = auStack_90._0_8_, lVar5 != 0)) {
    fVar9 = (float)UnityEngine_Transform__get_position_3c2d540(lVar5,0);
    auVar10._8_8_ = auStack_90._8_8_;
    auVar10._0_8_ = auStack_90._0_8_;
    if (*(long *)(param_4 + 0x80) != 0) {
      auStack_70._4_4_ = param_2;
      auStack_70._0_4_ = fVar9;
      fStack_68 = param_3;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_4 + 0x80),lVar5,auStack_70,*(undefined8 *)PTR_DAT_049c23d8);
      puVar4 = PTR_DAT_049c2370;
      auVar10._8_8_ = auStack_90._8_8_;
      auVar10._0_8_ = auStack_90._0_8_;
      if (*(long *)(param_4 + 0x78) != 0) {
        uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                          (*(long *)(param_4 + 0x78),lVar5,&uStack_80,
                           *(undefined8 *)PTR_DAT_049c23d0);
        if (((uVar6 & 1) != 0) && (uVar6 = FUN_024f7208(uStack_80,uStack_78,0), (uVar6 & 1) != 0)) {
          FUN_024f73c0(uStack_80,uStack_78,1,0);
        }
        puVar3 = PTR_DAT_049c20a0;
        puVar2 = PTR_DAT_049c1680;
        puVar1 = PTR_DAT_049b6110;
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_021f0574();
          lVar7 = *(long *)puVar4;
        }
        pfVar8 = *(float **)(lVar7 + 0xb8);
        auStack_90 = LitMotion_LMotion__Create_2eaa1b4
                               (fVar9,param_2,param_3,fVar9 + *pfVar8,param_2 + pfVar8[1],
                                param_3 + pfVar8[2],_UNK_013aa62c,0);
        auVar10 = FUN_024f4e50(auStack_90,3,*(undefined8 *)puVar2);
        auVar10 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                            (auVar10._0_8_,auVar10._8_8_,lVar5,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar11 = Extensions__AddTo_24d83f4(auVar10._0_8_,auVar10._8_8_ & 0xffffffff,param_5,0);
        auVar10 = auStack_90;
        if (*(long *)(param_4 + 0x78) != 0) {
          _auStack_70 = auVar11;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (*(long *)(param_4 + 0x78),lVar5,auStack_70,*(undefined8 *)PTR_DAT_049c23e0);
          return;
        }
      }
    }
  }
  auStack_90 = auVar10;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

