/* IL2CPP: StickyBlockGroup$$Initialize
void StickyBlockGroup__Initialize (StickyBlockGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StickyBlockGroup$$Initialize
   void StickyBlockGroup__Initialize (StickyBlockGroup_o* __this, const MethodInfo* method); */

void StickyBlockGroup__Initialize_23f24c0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lStack_38;
  
                    /* catch() { ... } // from try @ 024f24b4 with catch @ 024f24c0 */
  puVar1 = PTR_DAT_049b5480;
  if ((bRam0000000004f4b645 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c1df8);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4b645 = 1;
  }
  puVar2 = PTR_DAT_049c1df8;
  uVar5 = *(undefined8 *)(param_4 + 0xe0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = Extensions__GetCenterPoint_object__25ef5a0(uVar5,*(undefined8 *)puVar2);
  lVar3 = UnityEngine_Component__get_transform_3c18724(param_4,0);
  if (lVar3 != 0) {
    UnityEngine_Transform__set_position_3c2d61c(uVar7,lVar3,0);
    if (*(long *)(param_4 + 0xe0) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(param_4 + 0xe0),0,&lStack_38,*(undefined8 *)PTR_DAT_049c1558);
      plVar6 = (long *)(param_4 + 0xb0);
      *plVar6 = lStack_38;
      thunk_FUN_021f190c(plVar6);
      lVar3 = UnityEngine_Component__get_transform_3c18724(param_4,0);
      if (lVar3 != 0) {
        fVar8 = (float)UnityEngine_Transform__get_position_3c2d540(lVar3,0);
        if ((*plVar6 != 0) &&
           (fVar10 = param_2, fVar11 = param_3,
           lVar3 = UnityEngine_Component__get_transform_3c18724(*plVar6,0), lVar3 != 0)) {
          fVar9 = (float)UnityEngine_Transform__get_position_3c2d540(lVar3,0);
          param_2 = param_2 - fVar10;
          param_3 = param_3 - fVar11;
          *(float *)(param_4 + 0xb8) = fVar8 - fVar9;
          *(float *)(param_4 + 0xbc) = param_2;
          *(float *)(param_4 + 0xc0) = param_3;
          if (*(long *)(param_4 + 0xb0) != 0) {
            plVar6 = *(long **)(*(long *)(param_4 + 0xb0) + 0x100);
            if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)PTR_DAT_049c1818)) {
                    /* try { // try from 024f2628 to 025f2743 has its CatchHandler @ 024f2628
                       catch() { ... } // from try @ 024f2628 with catch @ 024f2628
                       catch() { ... } // from try @ 024f29f8 with catch @ 024f2628
                       catch() { ... } // from try @ 024f2abc with catch @ 024f2628
                       catch() { ... } // from try @ 024f2b64 with catch @ 024f2628
                       catch() { ... } // from try @ 024f2ba4 with catch @ 024f2628
                       catch() { ... } // from try @ 024f2bf8 with catch @ 024f2628
                       catch() { ... } // from try @ 024f2c88 with catch @ 024f2628 */
              lVar3 = UnityEngine_Component__get_transform_3c18724(param_4,0);
              lVar4 = UnityEngine_Component__get_transform_3c18724(plVar6,0);
              if ((lVar4 == 0) || (UnityEngine_Transform__get_rotation_3c2d7a8(lVar4,0), lVar3 == 0)
                 ) goto LAB_024f2694;
              UnityEngine_Transform__set_rotation_3c2d86c(lVar3,0);
            }
            lVar3 = UnityEngine_Component__get_transform_3c18724(param_4,0);
            if (lVar3 != 0) {
              uVar7 = UnityEngine_Transform__get_localEulerAngles_3c2d8fc(lVar3,0);
              *(undefined4 *)(param_4 + 0xc4) = uVar7;
              *(float *)(param_4 + 200) = param_2;
              *(float *)(param_4 + 0xcc) = param_3;
              return;
            }
          }
        }
      }
    }
  }
LAB_024f2694:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

