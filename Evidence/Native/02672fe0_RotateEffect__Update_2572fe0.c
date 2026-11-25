/* IL2CPP: RotateEffect$$Update
void RotateEffect__Update (RotateEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03d2d86c) */
/* WARNING: Removing unreachable block (ram,0x03d2d890) */
/* WARNING: Removing unreachable block (ram,0x03d2d8a4) */
/* WARNING: Removing unreachable block (ram,0x03d2d8a8) */
/* WARNING: Removing unreachable block (ram,0x03d2d8b0) */
/* WARNING: Removing unreachable block (ram,0x03d2d8bc) */
/* WARNING: Removing unreachable block (ram,0x03d2d8c8) */
/* WARNING: Removing unreachable block (ram,0x03d2d8dc) */
/* WARNING: Removing unreachable block (ram,0x03d2d8f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RotateEffect$$Update
   void RotateEffect__Update (RotateEffect_o* __this, const MethodInfo* method); */

void RotateEffect__Update_2572fe0(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar3 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
  }
  else {
    fVar3 = (float)UnityEngine_Time__get_unscaledDeltaTime_3c29788(0);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (cRam0000000004f4a55a == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55a = '\x01';
  }
  if (lVar2 != 0) {
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
              (fVar3 * *(float *)(param_1 + 0x24) *
               *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x48) * _UNK_013aa948,0,1,0)
    ;
    UnityEngine_Transform__get_localRotation_3c2d92c();
    if ((bRam0000000004f58a0f & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a26ad0);
      bRam0000000004f58a0f = 1;
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar1 = *(long *)(lVar2 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000004f58a68 == (code *)0x0) {
        pcRam0000000004f58a68 = (code *)FUN_021f03bc(&UNK_013d4d69);
      }
      (*pcRam0000000004f58a68)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

