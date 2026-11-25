/* IL2CPP: HighlightMonitor$$CreateWorldMask
void HighlightMonitor__CreateWorldMask (HighlightMonitor_o* __this, UnityEngine_Vector3_o worldPoint, UnityEngine_Vector2_o size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HighlightMonitor$$CreateWorldMask
   void HighlightMonitor__CreateWorldMask (HighlightMonitor_o* __this, UnityEngine_Vector3_o
   worldPoint, UnityEngine_Vector2_o size, const MethodInfo* method); */

void HighlightMonitor__CreateWorldMask_2444094
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lStack_58;
  
  if ((bRam0000000004f4b859 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c41a0);
    bRam0000000004f4b859 = 1;
  }
  HighlightMonitor__ShowMask_2443fe8(_UNK_013aa4f4,param_6);
  if (*(long *)(param_6 + 0xa8) != 0) {
    StatefulUI_Runtime_Core_ContainerView__AddInstance___Il2CppFullySharedGenericType__25c841c
              (*(long *)(param_6 + 0xa8),&lStack_58,*(undefined8 *)PTR_DAT_049c41a0);
    if (lStack_58 != 0) {
      lVar1 = UnityEngine_Component__get_transform_3c18724(lStack_58,0);
      if (cRam0000000004f4a191 == '\0') {
        FUN_021f03f8(PTR_DAT_049bc158);
        cRam0000000004f4a191 = '\x01';
      }
      if (lVar1 != 0) {
        puVar2 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
        UnityEngine_Transform__set_localRotation_3c2d9f0
                  (*puVar2,puVar2[1],puVar2[2],puVar2[3],lVar1,0);
        UnityEngine_Transform__set_position_3c2d61c(param_1,param_2,param_3,lVar1,0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        lVar3 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        fVar5 = *(float *)(lVar3 + 0xc);
        fVar6 = *(float *)(lVar3 + 0x10);
        fVar7 = *(float *)(lVar3 + 0x14);
        lVar3 = UnityEngine_Component__get_transform_3c18724(param_6,0);
        if (lVar3 != 0) {
          fVar4 = (float)UnityEngine_Transform__get_localScale_3c2dd20(lVar3,0);
          fVar4 = 1.0 / fVar4;
          UnityEngine_Transform__set_localScale_3c2ddfc
                    (fVar5 * fVar4,fVar6 * fVar4,fVar7 * fVar4,lVar1,0);
          UnityEngine_SpriteRenderer__set_size_3bc2d88(param_4,param_5,lStack_58,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

