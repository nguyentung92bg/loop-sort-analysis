/* IL2CPP: SandFlowSystem$$TryAdd
bool SandFlowSystem__TryAdd (SandFlowSystem_o* __this, Block_o* block, UnityEngine_Vector3_o destination, int32_t* index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$TryAdd
   bool SandFlowSystem__TryAdd (SandFlowSystem_o* __this, Block_o* block, UnityEngine_Vector3_o
   destination, int32_t* index, const MethodInfo* method); */

undefined4
SandFlowSystem__TryAdd_24c7750
          (undefined4 param_1,float param_2,float param_3,undefined4 param_4,long param_5,
          long param_6,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  uint uStack_44;
  
  if ((bRam0000000004f4bbf3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7218);
    FUN_021f03f8(PTR_DAT_049c7220);
    FUN_021f03f8(PTR_DAT_049c7228);
    FUN_021f03f8(PTR_DAT_049c7230);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbf3 = 1;
  }
  uStack_98 = 0;
  *param_7 = 0xffffffff;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (*(int *)(param_5 + 0x188) == 0x400) {
    return 0;
  }
  if (param_6 != 0) {
    uVar9 = *(undefined8 *)(param_6 + 0x138);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    if (*(int *)(param_6 + 0xe4) == -1) {
      return 0;
    }
    if (*(long *)(param_5 + 0x168) != 0) {
      if (*(float *)(*(long *)(param_5 + 0x168) + 0x318) <= _UNK_013aa94c) {
        return 0;
      }
      fVar15 = param_3;
      fVar14 = param_2;
      uVar11 = SandFlowRenderer__FindNearestDistance_24bfb4c(param_1);
      if (*(long *)(param_5 + 0x168) != 0) {
        SandFlowRenderer__SampleFrame_24bfc7c
                  (*(long *)(param_5 + 0x168),&uStack_a0,&uStack_b0,&uStack_c0);
        if (*(int *)(param_5 + 0x188) == 0) {
          if ((*(long *)(param_6 + 0x138) == 0) ||
             (lVar7 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_6 + 0x138),0),
             lVar7 == 0)) goto LAB_025c7bbc;
          uVar5 = UnityEngine_GameObject__get_layer_3c1cb44(lVar7,0);
          *(undefined4 *)(param_5 + 0x18c) = uVar5;
        }
        SandFlowSystem__AdvanceTravel_24c9b18(param_5);
        uVar1 = *(uint *)(param_5 + 0x188);
        *(uint *)(param_5 + 0x188) = uVar1 + 1;
        *param_7 = uVar1;
        lVar7 = *(long *)(param_5 + 0xb8);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_025c7bc0;
          plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = param_6;
          thunk_FUN_021f190c(plVar8,param_6);
          if (*(long *)(param_5 + 0xf0) != 0) {
            uStack_44 = *param_7;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                      (*(long *)(param_5 + 0xf0),param_6,&uStack_44,*(undefined8 *)PTR_DAT_049c7220)
            ;
            if (*(long *)(param_6 + 0x138) != 0) {
              lVar10 = *(long *)(param_5 + 0xb0);
              uVar2 = *param_7;
              uVar9 = UnityEngine_Renderer__get_sharedMaterial_3bddc88(*(long *)(param_6 + 0x138),0)
              ;
              uVar5 = SandFlowSystem__GetColor_24cea34(param_5,uVar9);
              uVar1 = *(int *)(param_5 + 400) + 1;
              *(uint *)(param_5 + 400) = uVar1;
              fVar16 = fVar15;
              fVar13 = fVar14;
              lVar7 = UnityEngine_Component__get_transform_3c18724(param_6,0);
              if (lVar7 != 0) {
                fVar12 = (float)UnityEngine_Transform__get_lossyScale_3c2f4f0(lVar7,0);
                if (cRam0000000004f4a55d == '\0') {
                  FUN_021f03f8(PTR_DAT_049b8758);
                  cRam0000000004f4a55d = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                fVar13 = SQRT(fVar16 * fVar16 + fVar12 * fVar12 + fVar13 * fVar13) * _UNK_013aa810;
                fVar16 = _UNK_013aa838;
                if (fVar13 <= _UNK_013aa838) {
                  fVar16 = fVar13;
                }
                fVar12 = _UNK_013aa698;
                if (_UNK_013aa698 <= fVar13) {
                  fVar12 = fVar16;
                }
                if ((*(long *)(param_5 + 0x168) != 0) && (lVar10 != 0)) {
                  if (*(uint *)(lVar10 + 0x18) <= uVar2) {
LAB_025c7bc0:
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a8();
                  }
                  uVar17 = *(undefined4 *)(*(long *)(param_5 + 0x168) + 800);
                  lVar10 = lVar10 + (long)(int)uVar2 * 0x90;
                  *(undefined8 *)(lVar10 + 0x44) = 0;
                  *(undefined8 *)(lVar10 + 0x3c) = 0;
                  *(undefined8 *)(lVar10 + 0x28) = 0;
                  *(undefined8 *)(lVar10 + 0x20) = 0;
                  *(undefined8 *)(lVar10 + 0x38) = 0;
                  *(undefined8 *)(lVar10 + 0x30) = 0;
                  *(undefined8 *)(lVar10 + 0x58) = 0;
                  *(undefined8 *)(lVar10 + 0x50) = 0;
                  *(undefined8 *)(lVar10 + 0x68) = 0;
                  *(undefined8 *)(lVar10 + 0x60) = 0;
                  *(undefined8 *)(lVar10 + 0x78) = 0;
                  *(undefined8 *)(lVar10 + 0x70) = 0;
                  *(undefined4 *)(lVar10 + 0x4c) = 0x3f800000;
                  *(undefined4 *)(lVar10 + 0x80) = uVar5;
                  *(float *)(lVar10 + 0x84) = fVar14;
                  *(float *)(lVar10 + 0x88) = fVar15;
                  *(undefined4 *)(lVar10 + 0x8c) = param_4;
                  *(float *)(lVar10 + 0xa0) = (float)uVar1;
                  *(float *)(lVar10 + 0xa4) = fVar12;
                  *(undefined8 *)(lVar10 + 0x90) = 0;
                  *(undefined8 *)(lVar10 + 0x98) = 0;
                  *(undefined4 *)(lVar10 + 0xa8) = uVar11;
                  *(undefined4 *)(lVar10 + 0xac) = uVar17;
                  lVar7 = *(long *)(param_5 + 0xb0);
                  if (lVar7 != 0) {
                    if (*(uint *)(lVar7 + 0x18) <= *param_7) goto LAB_025c7bc0;
                    SandFlowPacket__SetFrame_24bbd98
                              (param_1,param_2,param_3,(undefined4)uStack_a0,uStack_a0._4_4_,
                               uStack_98,lVar7 + (long)(int)*param_7 * 0x90 + 0x20);
                    if (*(long *)(param_5 + 0x150) != 0) {
                      lVar7 = *(long *)(param_6 + 0x138);
                      bVar3 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
                                        (*(long *)(param_5 + 0x150),lVar7,
                                         *(undefined8 *)PTR_DAT_049c7230);
                      if (*(long *)(param_5 + 0xf8) != 0) {
                        uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                                          (*(long *)(param_5 + 0xf8),lVar7,
                                           *(undefined8 *)PTR_DAT_049c7228);
                        if ((uVar6 & 1) == 0) {
                          if (lVar7 != 0) {
                            lVar10 = *(long *)(param_5 + 0xf8);
                            bVar4 = UnityEngine_Renderer__get_forceRenderingOff_3bdcf18(lVar7,0);
                            if (lVar10 != 0) {
                              uStack_44 = CONCAT31(uStack_44._1_3_,bVar4 & (bVar3 ^ 0xff)) &
                                          0xffffff01;
                              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                                        (lVar10,lVar7,&uStack_44,*(undefined8 *)PTR_DAT_049c7218);
                              goto LAB_025c7ba4;
                            }
                          }
                        }
                        else if (lVar7 != 0) {
LAB_025c7ba4:
                          UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc(lVar7,1,0);
                          return 1;
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
    }
  }
LAB_025c7bbc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

