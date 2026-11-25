/* IL2CPP: SandFlowSystem$$ShowCube
void SandFlowSystem__ShowCube (SandFlowSystem_o* __this, Block_o* block, float share, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$ShowCube
   void SandFlowSystem__ShowCube (SandFlowSystem_o* __this, Block_o* block, float share, const
   MethodInfo* method); */

void SandFlowSystem__ShowCube_24c7d1c(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_3 != 0) && (*(long *)(param_3 + 0x138) != 0)) {
    UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc
              (*(long *)(param_3 + 0x138),param_1 <= _UNK_013aa688,0);
    lVar1 = UnityEngine_Component__get_transform_3c18724(param_3,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    if ((*(long *)(param_2 + 0x50) != 0) && (lVar1 != 0)) {
      if ((bRam0000000004f58a11 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26ad0,0);
        bRam0000000004f58a11 = 1;
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

