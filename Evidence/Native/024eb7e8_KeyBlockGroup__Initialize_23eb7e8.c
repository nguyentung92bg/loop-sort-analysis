/* IL2CPP: KeyBlockGroup$$Initialize
void KeyBlockGroup__Initialize (KeyBlockGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: KeyBlockGroup$$Initialize
   void KeyBlockGroup__Initialize (KeyBlockGroup_o* __this, const MethodInfo* method); */

void KeyBlockGroup__Initialize_23eb7e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lStack_38;
  
  puVar1 = PTR_DAT_049b5480;
  if ((bRam0000000004f4b61f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c1df8);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b61f = 1;
  }
  puVar2 = PTR_DAT_049c1df8;
  fVar11 = 0.0;
  fVar13 = 0.0;
  GameBehaviourBase__InjectColorType_24f4d78(0,0,0,0,param_1,*(undefined8 *)(param_1 + 0xb0),0);
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = Extensions__GetCenterPoint_object__25ef5a0(uVar6,*(undefined8 *)puVar2);
  lVar3 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (lVar3 != 0) {
    UnityEngine_Transform__set_position_3c2d61c(uVar8,lVar3,0);
    if (*(long *)(param_1 + 0xd8) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(param_1 + 0xd8),0,&lStack_38,*(undefined8 *)PTR_DAT_049c1558);
      plVar7 = (long *)(param_1 + 0xc0);
      *plVar7 = lStack_38;
      thunk_FUN_021f190c(plVar7);
      lVar3 = UnityEngine_Component__get_transform_3c18724(param_1,0);
      if (lVar3 != 0) {
        fVar9 = (float)UnityEngine_Transform__get_position_3c2d540(lVar3,0);
        if ((*plVar7 != 0) &&
           (fVar12 = fVar11, fVar14 = fVar13,
           lVar3 = UnityEngine_Component__get_transform_3c18724(*plVar7,0), lVar3 != 0)) {
          fVar10 = (float)UnityEngine_Transform__get_position_3c2d540(lVar3,0);
          *(float *)(param_1 + 200) = fVar9 - fVar10;
          *(float *)(param_1 + 0xcc) = fVar11 - fVar12;
          *(float *)(param_1 + 0xd0) = fVar13 - fVar14;
          if (*(long *)(param_1 + 0xc0) != 0) {
            plVar7 = *(long **)(*(long *)(param_1 + 0xc0) + 0x100);
            if (plVar7 == (long *)0x0) {
              plVar7 = (long *)0x0;
            }
            else if (*plVar7 != *(long *)PTR_DAT_049c1818) {
              plVar7 = (long *)0x0;
            }
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(plVar7,0,0);
            if ((uVar4 & 1) == 0) {
              lVar3 = UnityEngine_Component__get_transform_3c18724(param_1,0);
              if (((plVar7 == (long *)0x0) ||
                  (lVar5 = UnityEngine_Component__get_transform_3c18724(plVar7,0), lVar5 == 0)) ||
                 (UnityEngine_Transform__get_rotation_3c2d7a8(lVar5,0), lVar3 == 0))
              goto LAB_024eba00;
              UnityEngine_Transform__set_rotation_3c2d86c(lVar3,0);
            }
            return;
          }
        }
      }
    }
  }
LAB_024eba00:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

