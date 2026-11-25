/* IL2CPP: VideoRewardsScene$$SetSleeping
void VideoRewardsScene__SetSleeping (VideoRewardsScene_o* __this, bool sleeping, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsScene$$SetSleeping
   void VideoRewardsScene__SetSleeping (VideoRewardsScene_o* __this, bool sleeping, const
   MethodInfo* method); */

void VideoRewardsScene__SetSleeping_24697a0(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *(byte *)(param_1 + 0x80) = param_2;
  if (*(long *)(param_1 + 0x40) != 0) {
    UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(param_1 + 0x40),param_2 & 1,0);
    if (*(long *)(param_1 + 0x78) != 0) {
      UnityEngine_Behaviour__set_enabled_3c17eec(*(long *)(param_1 + 0x78),param_2 & 1,0);
      if ((param_2 & 1) != 0) {
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
                lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
                uStack_28 = *(undefined4 *)(lVar3 + 4);
                uStack_24 = *(undefined4 *)(lVar3 + 8);
                goto code_r0x03d2ddfc;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        lVar4 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x78),0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        if (lVar4 != 0) {
          uStack_28 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x10);
          uStack_24 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14);
code_r0x03d2ddfc:
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
            (*pcRam0000000004f58a78)(lVar3,auStack_2c);
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

