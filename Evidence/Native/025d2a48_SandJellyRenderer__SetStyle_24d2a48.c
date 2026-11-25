/* IL2CPP: SandJellyRenderer$$SetStyle
void SandJellyRenderer__SetStyle (SandJellyRenderer_o* __this, float bevel, float blend, float neck, float side, float gloss, float specular, float rim, float saturation, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandJellyRenderer$$SetStyle
   void SandJellyRenderer__SetStyle (SandJellyRenderer_o* __this, float bevel, float blend, float
   neck, float side, float gloss, float specular, float rim, float saturation, float value, const
   MethodInfo* method); */

void SandJellyRenderer__SetStyle_24d2a48
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,long param_8)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar5 = PTR_DAT_049c7138;
  if ((bRam0000000004f4bc21 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7138);
    bRam0000000004f4bc21 = 1;
  }
  lVar6 = *(long *)(param_8 + 0x10);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar6 != 0) {
    fVar10 = 1.0;
    fVar9 = fVar10;
    if (param_4 <= 1.0) {
      fVar9 = param_4;
    }
    fVar2 = 0.0;
    if (0.0 <= param_4) {
      fVar2 = fVar9;
    }
    fVar9 = fVar10;
    if (param_3 <= 1.0) {
      fVar9 = param_3;
    }
    fVar3 = 0.0;
    if (0.0 <= param_3) {
      fVar3 = fVar9;
    }
    fVar9 = 0.0;
    fVar8 = fVar9;
    if (0.0 <= param_2) {
      fVar8 = param_2;
    }
    fVar4 = fVar9;
    if (0.0 <= param_1) {
      fVar4 = param_1;
    }
    UnityEngine_Material__SetVector_3bedac0
              (fVar4,fVar8,fVar3,fVar2,lVar6,
               *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
    if (*(long *)(param_8 + 0x10) != 0) {
      fVar2 = fVar9;
      if (0.0 <= param_7) {
        fVar2 = param_7;
      }
      if (0.0 <= param_6) {
        fVar9 = param_6;
      }
      if (1.0 <= param_5) {
        fVar10 = param_5;
      }
      UnityEngine_Material__SetVector_3bedac0
                (fVar10,fVar9,fVar2,0,*(long *)(param_8 + 0x10),
                 *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1c),0);
      lVar6 = *(long *)(param_8 + 0x10);
      if (lVar6 != 0) {
        uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
        if ((bRam0000000004f57351 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a25ca8,uVar1,0);
          FUN_021f03f8(PTR_DAT_049b89f8);
          bRam0000000004f57351 = 1;
        }
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + 0x10);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar6,0);
          }
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
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

