/* IL2CPP: MetalBlock$$ProcessFeature
void MetalBlock__ProcessFeature (MetalBlock_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlock$$ProcessFeature
   void MetalBlock__ProcessFeature (MetalBlock_o* __this, int32_t featureType, System_String_o*
   data, const MethodInfo* method); */

void MetalBlock__ProcessFeature_23ec5ac(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b62c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1ec0);
    bRam0000000004f4b62c = 1;
  }
  if (param_2 != 0x1f) {
    return;
  }
  lVar5 = *(long *)(param_1 + 200);
  uStack_28 = 0;
  ColorType___ctor_24f9bd8(&uStack_28,0xffffffff,0,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0xe4) = uStack_28;
    GameBehaviourBase__InjectColorType_24f4d78(0,0,0,0,lVar5,uStack_28,0);
    if (*(long *)(param_1 + 200) != 0) {
      Block__DisableTransferEnter_23dcea8(*(long *)(param_1 + 200),param_1);
      lVar5 = *(long *)(param_1 + 200);
      if (lVar5 != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0xb8);
        *(undefined8 *)(lVar5 + 0x110) = *(undefined8 *)(param_1 + 0xb0);
        thunk_FUN_021f190c(lVar5 + 0x110);
        *(undefined8 *)(lVar5 + 0x118) = uVar1;
        thunk_FUN_021f190c(lVar5 + 0x118,uVar1);
        lVar5 = *(long *)(param_1 + 200);
        iVar2 = UnityEngine_Random__Range_3c11c94(0,4,0);
        iVar3 = UnityEngine_Random__Range_3c11c94(0,4,0);
        iVar4 = UnityEngine_Random__Range_3c11c94(0,4,0);
        fStack_3c = (float)iVar3 * 90.0 * _UNK_013aa948;
        fStack_38 = (float)iVar4 * 90.0 * _UNK_013aa948;
        fStack_34 = _UNK_013aa948;
        uStack_40 = UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                              ((float)iVar2 * 90.0 * _UNK_013aa948,0);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_58,&uStack_40,*(undefined8 *)PTR_DAT_049c1ec0);
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x128) = uStack_50;
          *(undefined8 *)(lVar5 + 0x120) = uStack_58;
          *(undefined4 *)(lVar5 + 0x130) = uStack_48;
          if (*(long *)(param_1 + 0xa0) != 0) {
            UnityEngine_Renderer__set_sharedMaterial_3bddc8c
                      (*(long *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

