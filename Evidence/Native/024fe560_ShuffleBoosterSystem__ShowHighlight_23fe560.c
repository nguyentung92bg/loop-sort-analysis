/* IL2CPP: ShuffleBoosterSystem$$ShowHighlight
void ShuffleBoosterSystem__ShowHighlight (ShuffleBoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ShuffleBoosterSystem$$ShowHighlight
   void ShuffleBoosterSystem__ShowHighlight (ShuffleBoosterSystem_o* __this, const MethodInfo*
   method); */

void ShuffleBoosterSystem__ShowHighlight_23fe560(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4b693 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2368);
    FUN_021f03f8(PTR_DAT_049c22d8);
    bRam0000000004f4b693 = 1;
  }
  uStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    Monitors__DisableRaycaster_256ea20(*(long *)(param_1 + 0x30),param_1,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      OutlineModule__DeactivateRender_254f494(*(long *)(param_1 + 0x38),0);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar2 = Monitors__Get_object__26889d0
                            (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c2368), lVar2 != 0)
         ) {
        HighlightMonitor__ShowMask_2443fe8(_UNK_013aa634,lVar2,0);
        puVar1 = PTR_DAT_049c22d8;
        lVar2 = *(long *)(param_1 + 0x50);
        if (lVar2 != 0) {
          lStack_40 = 0;
          lStack_38 = 0;
          lStack_48 = (ulong)*(uint *)(lVar2 + 0x30) << 0x20;
          thunk_FUN_021f190c(&lStack_40,0);
          lStack_38 = *(long *)(lVar2 + 0x28);
          thunk_FUN_021f190c(&lStack_38);
          lStack_58 = lStack_40;
          uStack_60 = lStack_48;
          lStack_50 = lStack_38;
          while( true ) {
            do {
              iVar5 = (int)uStack_60 + -1;
              uStack_60 = CONCAT44(uStack_60._4_4_,iVar5);
              if (iVar5 < 0) {
                uStack_60._4_4_ = uStack_60._4_4_ - 1;
                if ((int)uStack_60._4_4_ < 0) {
                  return;
                }
                lVar2 = *(long *)(lStack_50 + (ulong)uStack_60._4_4_ * 8 + 0x20);
                lStack_58 = *(long *)(lVar2 + 0x18);
                uStack_60._0_4_ = iVar5;
                thunk_FUN_021f190c((ulong)&uStack_60 | 8);
                iVar5 = *(int *)(lVar2 + 0x30) + -1;
                uStack_60 = CONCAT44(uStack_60._4_4_,iVar5);
              }
              if (*(long *)(param_1 + 0x58) == 0) goto LAB_024fe6f4;
              plVar3 = (long *)FUN_024f6008(*(long *)(param_1 + 0x58),
                                            *(undefined8 *)(lStack_58 + (long)iVar5 * 8 + 0x20),
                                            *(undefined8 *)puVar1);
              lVar2 = *plVar3;
              uVar4 = ShuffleBoosterSystem__CanShuffle_23febf4(param_1,lVar2);
            } while ((uVar4 & 1) == 0);
            if ((lVar2 == 0) || (*(long *)(lVar2 + 0xf0) == 0)) break;
            UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar2 + 0xf0),1,0);
          }
        }
      }
    }
  }
LAB_024fe6f4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

