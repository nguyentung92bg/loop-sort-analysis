/* IL2CPP: LevelBuildSystem$$ApplyCameraRotation
void LevelBuildSystem__ApplyCameraRotation (LevelBuildSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03d2e85c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelBuildSystem$$ApplyCameraRotation
   void LevelBuildSystem__ApplyCameraRotation (LevelBuildSystem_o* __this, const MethodInfo*
   method); */

void LevelBuildSystem__ApplyCameraRotation_24dd598(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    if (0.0 < *(float *)(lVar2 + 0x38)) {
      return;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      fVar4 = *(float *)(lVar2 + 0x20) + *(float *)(*(long *)(param_1 + 0x40) + 0x70);
      if (fVar4 == 0.0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x88);
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55e = '\x01';
      }
      if (lVar2 != 0) {
        uVar3 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x18);
        lVar1 = UnityEngine_Component__get_transform_3c18724(lVar2);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Transform__TransformDirection_3c2e88c(uVar3);
        fVar4 = fVar4 * _UNK_013aa948;
        if ((bRam0000000004f58a19 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0);
          bRam0000000004f58a19 = 1;
        }
        if (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x10);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
          }
          if (pcRam0000000004f58ab0 == (code *)0x0) {
            pcRam0000000004f58ab0 = (code *)FUN_021f03bc(&UNK_013d2e34);
          }
          (*pcRam0000000004f58ab0)(fVar4,lVar1,&stack0xffffffffffffffd4);
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

