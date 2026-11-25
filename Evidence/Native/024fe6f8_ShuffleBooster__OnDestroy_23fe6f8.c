/* IL2CPP: ShuffleBooster$$OnDestroy
void ShuffleBooster__OnDestroy (ShuffleBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBooster$$OnDestroy
   void ShuffleBooster__OnDestroy (ShuffleBooster_o* __this, const MethodInfo* method); */

void ShuffleBooster__OnDestroy_23fe6f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long alStack_38 [3];
  
  BoosterBase__OnDestroy_24e4d18(param_1,0);
  lVar2 = *(long *)(param_1 + 0xc0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4b694 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2368);
    FUN_021f03f8(PTR_DAT_049c22d8);
    bRam0000000004f4b694 = 1;
  }
  uStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  if (*(long *)(lVar2 + 0x30) != 0) {
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar2 + 0x30),lVar2,0);
    if (*(long *)(lVar2 + 0x38) != 0) {
      OutlineModule__ActivateRender_254f48c(*(long *)(lVar2 + 0x38),0);
      if ((*(long *)(lVar2 + 0x30) != 0) &&
         (lVar3 = Monitors__Get_object__26889d0
                            (*(long *)(lVar2 + 0x30),*(undefined8 *)PTR_DAT_049c2368), lVar3 != 0))
      {
        HighlightMonitor__HideMask_2444284(lVar3,0);
        puVar1 = PTR_DAT_049c22d8;
        lVar3 = *(long *)(lVar2 + 0x50);
        if (lVar3 != 0) {
          lStack_40 = 0;
          alStack_38[0] = 0;
          lStack_48 = (ulong)*(uint *)(lVar3 + 0x30) << 0x20;
          thunk_FUN_021f190c(&lStack_40,0);
          alStack_38[0] = *(long *)(lVar3 + 0x28);
          thunk_FUN_021f190c(alStack_38);
          lStack_58 = lStack_40;
          uStack_60 = lStack_48;
          lStack_50 = alStack_38[0];
          while( true ) {
            iVar5 = (int)uStack_60 + -1;
            uStack_60 = CONCAT44(uStack_60._4_4_,iVar5);
            if (iVar5 < 0) {
              uStack_60._4_4_ = uStack_60._4_4_ - 1;
              if ((int)uStack_60._4_4_ < 0) {
                return;
              }
              lVar3 = *(long *)(lStack_50 + (ulong)uStack_60._4_4_ * 8 + 0x20);
              lStack_58 = *(long *)(lVar3 + 0x18);
              uStack_60._0_4_ = iVar5;
              thunk_FUN_021f190c((ulong)&uStack_60 | 8);
              iVar5 = *(int *)(lVar3 + 0x30) + -1;
              uStack_60 = CONCAT44(uStack_60._4_4_,iVar5);
            }
            if (*(long *)(lVar2 + 0x58) == 0) break;
            plVar4 = (long *)FUN_024f6008(*(long *)(lVar2 + 0x58),
                                          *(undefined8 *)(lStack_58 + (long)iVar5 * 8 + 0x20),
                                          *(undefined8 *)puVar1);
            if ((*plVar4 == 0) || (lVar3 = *(long *)(*plVar4 + 0xf0), lVar3 == 0)) break;
            UnityEngine_GameObject__SetActive_3c1ce34(lVar3,0,0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

