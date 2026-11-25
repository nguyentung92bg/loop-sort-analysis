/* IL2CPP: CapacityBoosterSystem$$GrowBelt
void CapacityBoosterSystem__GrowBelt (CapacityBoosterSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CapacityBoosterSystem$$GrowBelt
   void CapacityBoosterSystem__GrowBelt (CapacityBoosterSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

void CapacityBoosterSystem__GrowBelt_23f4b24(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_049c2238;
  if ((bRam0000000004f4b65c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c2240);
    FUN_021f03f8(PTR_DAT_049c2248);
    FUN_021f03f8(PTR_DAT_049c2250);
    FUN_021f03f8(PTR_DAT_049c2258);
    FUN_021f03f8(PTR_DAT_049c2238);
    bRam0000000004f4b65c = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  CapacityBoosterSystem___c__DisplayClass18_0___ctor_23f7788(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_1;
    thunk_FUN_021f190c((long *)(lVar2 + 0x18),param_1);
    if (*(long *)(param_1 + 0x68) != 0) {
      if (1.0 <= *(double *)(*(long *)(param_1 + 0x68) + 0x168)) {
        return;
      }
      if ((param_2 != 0) && (*(long *)(param_2 + 0x108) != 0)) {
        lVar4 = *(long *)(param_1 + 0x70);
        UnityEngine_Transform__get_position_3c2d540(*(long *)(param_2 + 0x108),0);
        if (lVar4 != 0) {
          Dreamteck_Splines_SplineComputer__Project_2349550(auStack_80,lVar4,0);
          if (*(long *)(param_1 + 0x70) != 0) {
            dVar5 = (double)Dreamteck_Splines_SplineComputer__Travel_2349410
                                      (uStack_48,_UNK_013aa3e8,*(long *)(param_1 + 0x70),1,0);
            lVar4 = *(long *)(param_1 + 0x68);
            *(double *)(lVar2 + 0x28) = dVar5;
            if (lVar4 != 0) {
              if (dVar5 <= *(double *)(lVar4 + 0x168)) {
                return;
              }
              Conveyor__SetEndPercent_24b03dc(lVar4,0);
              if (*(long *)(param_1 + 0x78) != 0) {
                BlockTransferSystem__SetRemoveTransferBlockTargets_23e4fcc();
                if (*(long *)(param_1 + 0x80) != 0) {
                  ConveyorArrowSystem__Extend_24b1b94(*(long *)(param_1 + 0x80),0);
                  FUN_024f75b8(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),1,0);
                  if (*(long *)(param_1 + 0x68) != 0) {
                    lVar4 = *(long *)(param_1 + 0x50);
                    *(undefined8 *)(lVar2 + 0x20) =
                         *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x170);
                    if (lVar4 != 0) {
LAB_024f4d0c:
                      UnityEngine_ParticleSystem__Play_3c7e874(lVar4,0);
                      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x50);
                      thunk_FUN_021f190c();
                      auStack_40 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa8fc,0);
                      auVar6 = FUN_024f4e50(auStack_40,5,*(undefined8 *)PTR_DAT_049c1358);
                      auStack_40 = auVar6;
                      uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
                      System_Action___ctor_306b98c(uVar3,lVar2,*(undefined8 *)PTR_DAT_049c2250,0);
                      auVar6 = FUN_024f6b84(auStack_40,uVar3,*(undefined8 *)PTR_DAT_049c2240);
                      auStack_40 = auVar6;
                      uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
                      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                                (uVar3,lVar2,*(undefined8 *)PTR_DAT_049c2258,0);
                      auVar6 = FUN_024f6d0c(auStack_40,uVar3,*(undefined8 *)PTR_DAT_049c20a8);
                      uVar3 = *(undefined8 *)(param_1 + 0x68);
                      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      auVar7 = Extensions__AddTo_24d83f4
                                         (auVar6._0_8_,auVar6._8_8_ & 0xffffffff,uVar3,0);
                      *(undefined1 (*) [12])(param_1 + 0x40) = auVar7;
                      return;
                    }
                    if (*(long *)(param_1 + 0x60) != 0) {
                      uVar3 = PrefabModuleExtensions__Rent_object__269ed94
                                        (*(undefined8 *)(param_1 + 0x58),
                                         *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),
                                         *(undefined8 *)PTR_DAT_049c2248);
                      *(undefined8 *)(param_1 + 0x50) = uVar3;
                      thunk_FUN_021f190c((long *)(param_1 + 0x50),uVar3);
                      lVar4 = *(long *)(param_1 + 0x50);
                      if (lVar4 != 0) goto LAB_024f4d0c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

