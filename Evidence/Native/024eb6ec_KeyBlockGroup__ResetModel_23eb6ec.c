/* IL2CPP: KeyBlockGroup$$ResetModel
void KeyBlockGroup__ResetModel (KeyBlockGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: KeyBlockGroup$$ResetModel
   void KeyBlockGroup__ResetModel (KeyBlockGroup_o* __this, const MethodInfo* method); */

void KeyBlockGroup__ResetModel_23eb6ec(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xa8);
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  if (lVar3 != 0) {
    puVar1 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Transform__set_localPosition_3c2c450(*puVar1,puVar1[1],puVar1[2],lVar3,0);
    lVar3 = *(long *)(param_1 + 0xa8);
    if (cRam0000000004f4a191 == '\0') {
      FUN_021f03f8(PTR_DAT_049bc158);
      cRam0000000004f4a191 = '\x01';
    }
    if (lVar3 != 0) {
      puVar1 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
      UnityEngine_Transform__set_localRotation_3c2d9f0
                (*puVar1,puVar1[1],puVar1[2],puVar1[3],lVar3,0);
      lVar3 = *(long *)(param_1 + 0xa8);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if (lVar3 != 0) {
        if ((bRam0000000004f58a11 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a11 = 1;
        }
        if (lVar3 != 0) {
          lVar2 = *(long *)(lVar3 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
          }
          if (pcRam0000000004f58a78 == (code *)0x0) {
            pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
          }
          (*pcRam0000000004f58a78)(lVar2,&stack0xffffffffffffffd4);
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

