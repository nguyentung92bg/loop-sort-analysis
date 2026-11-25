/* IL2CPP: SandFlowSystem$$OnBlockTakeOff
void SandFlowSystem__OnBlockTakeOff (SandFlowSystem_o* __this, BlockTakeOffMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$OnBlockTakeOff
   void SandFlowSystem__OnBlockTakeOff (SandFlowSystem_o* __this, BlockTakeOffMessage_o m, const
   MethodInfo* method); */

void SandFlowSystem__OnBlockTakeOff_24c70e4(long param_1,long param_2,long param_3)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bbde & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c71f8);
    FUN_021f03f8(PTR_DAT_049c7130);
    bRam0000000004f4bbde = 1;
  }
  uStack_48 = 0;
  lStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    fVar6 = *(float *)(*(long *)(param_1 + 0x40) + 0x144);
    fVar1 = 1.0;
    if (1.0 <= fVar6) {
      fVar1 = fVar6;
    }
    if ((*(long *)(param_1 + 0x160) != 0) && (param_3 != 0)) {
      fVar7 = *(float *)(*(long *)(param_1 + 0x160) + 0x98);
      fVar6 = _UNK_013aa810;
      if (_UNK_013aa810 <= fVar7) {
        fVar6 = fVar7;
      }
      fVar7 = _UNK_013aa810;
      Block__SetMotionDurationMultiplier_23dc644
                ((*(float *)(param_1 + 0x1ac) / fVar1) * fVar6,param_3,0);
      lVar4 = *(long *)(param_1 + 0x110);
      uStack_48 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      lStack_50 = param_3;
      thunk_FUN_021f190c(&lStack_50,param_3);
      if ((param_2 != 0) &&
         (lVar3 = UnityEngine_Component__get_transform_3c18724(param_2,0), puVar2 = PTR_DAT_049c7130
         , lVar3 != 0)) {
        uVar5 = UnityEngine_Transform__get_position_3c2d540(lVar3,0);
        uStack_48 = CONCAT44(fVar6,uVar5);
        uStack_40 = CONCAT44(uStack_40._4_4_,fVar7);
        uVar5 = UnityEngine_Time__get_time_3c295c8(0);
        uStack_40 = CONCAT44(uVar5,(undefined4)uStack_40);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uStack_38 = CONCAT44(uStack_38._4_4_,*(float *)(param_3 + 0xf8) * _UNK_013aa8f4);
        if (lVar4 != 0) {
          uStack_68 = uStack_48;
          lStack_70 = lStack_50;
          uStack_58 = uStack_38;
          uStack_60 = uStack_40;
          FUN_02333498(lVar4,&lStack_70,*(undefined8 *)PTR_DAT_049c71f8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

