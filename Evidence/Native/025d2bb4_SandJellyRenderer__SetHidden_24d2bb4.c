/* IL2CPP: SandJellyRenderer$$SetHidden
void SandJellyRenderer__SetHidden (SandJellyRenderer_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandJellyRenderer$$SetHidden
   void SandJellyRenderer__SetHidden (SandJellyRenderer_o* __this, UnityEngine_Material_o* material,
   const MethodInfo* method); */

void SandJellyRenderer__SetHidden_24d2bb4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bc22 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c7138);
    FUN_021f03f8(PTR_DAT_049c75d0);
    FUN_021f03f8(PTR_DAT_049c75d8);
    FUN_021f03f8(PTR_DAT_049c75e0);
    FUN_021f03f8(PTR_DAT_049c75e8);
    FUN_021f03f8(PTR_DAT_049c7520);
    FUN_021f03f8(PTR_DAT_049b8a08);
    FUN_021f03f8(PTR_DAT_049c75f0);
    FUN_021f03f8(PTR_DAT_049c37e8);
    FUN_021f03f8(PTR_DAT_049bc4f0);
    FUN_021f03f8(PTR_DAT_049c75f8);
    bRam0000000004f4bc22 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  puVar3 = PTR_DAT_049b8a08;
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (param_2 != 0) {
    uVar4 = UnityEngine_Material__HasProperty_3be6890(param_2,*(undefined8 *)PTR_DAT_049b8a08,0);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) {
      uVar5 = UnityEngine_Material__GetTexture_3bee464(param_2,*(undefined8 *)puVar3,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
    puVar2 = PTR_DAT_049c7138;
    if ((uVar4 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_049c7138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar7 == 0) goto LAB_025d2f98;
      UnityEngine_Material__SetTexture_3be6528
                (lVar7,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24),uVar5,0);
    }
    puVar2 = PTR_DAT_049c7138;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)PTR_DAT_049c7138;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar2;
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x28);
    SandJellyRenderer__HiddenColor_24d2f9c
              (0x3f000000,0x3f000000,0x3f000000,0x3f800000,param_2,*(undefined8 *)PTR_DAT_049c7520);
    if (lVar6 != 0) {
      UnityEngine_Material__SetVector_3bedac0(lVar6,uVar1,0);
      lVar7 = *(long *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c);
      SandJellyRenderer__HiddenColor_24d2f9c
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_2,*(undefined8 *)PTR_DAT_049c75f8
                );
      if (lVar7 != 0) {
        UnityEngine_Material__SetVector_3bedac0(lVar7,uVar1,0);
        lVar7 = *(long *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
        SandJellyRenderer__HiddenColor_24d2f9c(0,0,0,0,param_2,*(undefined8 *)PTR_DAT_049bc4f0);
        if (lVar7 != 0) {
          UnityEngine_Material__SetVector_3bedac0(lVar7,uVar1,0);
          lVar7 = *(long *)(param_1 + 0x10);
          uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x34);
          uVar8 = SandJellyRenderer__HiddenFloat_24d301c
                            (0x41000000,param_2,*(undefined8 *)PTR_DAT_049c75d8);
          uVar9 = SandJellyRenderer__HiddenFloat_24d301c
                            (_UNK_013aa4b8,param_2,*(undefined8 *)PTR_DAT_049c37e8);
          uVar10 = SandJellyRenderer__HiddenFloat_24d301c
                             (0x3f000000,param_2,*(undefined8 *)PTR_DAT_049c75f0);
          uVar11 = SandJellyRenderer__HiddenFloat_24d301c
                             (0x43340000,param_2,*(undefined8 *)PTR_DAT_049c75d0);
          if (lVar7 != 0) {
            UnityEngine_Material__SetVector_3bedac0(uVar8,uVar9,uVar10,uVar11,lVar7,uVar1,0);
            puVar3 = PTR_DAT_049c75e0;
            uVar4 = UnityEngine_Material__HasProperty_3be6890
                              (param_2,*(undefined8 *)PTR_DAT_049c75e0,0);
            if ((uVar4 & 1) != 0) {
              UnityEngine_Material__GetVector_3bee3c4(param_2,*(undefined8 *)puVar3,0);
            }
            lVar7 = *(long *)puVar2;
            lVar6 = *(long *)(param_1 + 0x10);
            if (*(int *)(lVar7 + 0xe4) == 0) {
              FUN_021f0574();
              lVar7 = *(long *)puVar2;
            }
            uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x38);
            SandJellyRenderer__HiddenFloat_24d301c
                      (0x3f800000,param_2,*(undefined8 *)PTR_DAT_049c75e8);
            if (lVar6 != 0) {
              if ((bRam0000000004f57351 & 1) == 0) {
                FUN_021f03f8(PTR_DAT_04a25ca8,uVar1,0);
                FUN_021f03f8(PTR_DAT_049b89f8);
                bRam0000000004f57351 = 1;
              }
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              lVar7 = *(long *)(lVar6 + 0x10);
              if (lVar7 != 0) {
                if (*(int *)(*(long *)PTR_DAT_049b89f8 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                if (pcRam0000000004f57538 == (code *)0x0) {
                  pcRam0000000004f57538 = (code *)FUN_021f03bc(&UNK_013cd0cb);
                }
                (*pcRam0000000004f57538)(lVar7,uVar1,&stack0xffffffffffffffc0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar6,0);
            }
          }
        }
      }
    }
  }
LAB_025d2f98:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

