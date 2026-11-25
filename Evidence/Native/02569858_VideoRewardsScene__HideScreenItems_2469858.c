/* IL2CPP: VideoRewardsScene$$HideScreenItems
void VideoRewardsScene__HideScreenItems (VideoRewardsScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsScene$$HideScreenItems
   void VideoRewardsScene__HideScreenItems (VideoRewardsScene_o* __this, const MethodInfo* method);
    */

void VideoRewardsScene__HideScreenItems_2469858(long param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  puVar1 = PTR_DAT_049bbf90;
  if (lVar4 != 0) {
    puVar2 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc(*puVar2,puVar2[1],puVar2[2],lVar4,0);
    lVar4 = *(long *)(param_1 + 0x28);
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a233 = '\x01';
    }
    if (lVar4 != 0) {
      puVar2 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc(*puVar2,puVar2[1],puVar2[2],lVar4,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar4 = TMPro_TMP_Text__get_rectTransform_3b0ca7c(*(long *)(param_1 + 0x30),0);
        if (cRam0000000004f4a233 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a233 = '\x01';
        }
        if (lVar4 != 0) {
          if ((bRam0000000004f58a11 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26ad0,0);
            bRam0000000004f58a11 = 1;
          }
          if (lVar4 != 0) {
            lVar3 = *(long *)(lVar4 + 0x10);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
            }
            if (pcRam0000000004f58a78 == (code *)0x0) {
              pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
            }
            (*pcRam0000000004f58a78)(lVar3,&stack0xffffffffffffffd4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

