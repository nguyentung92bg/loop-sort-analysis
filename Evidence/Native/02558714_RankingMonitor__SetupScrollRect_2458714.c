/* IL2CPP: RankingMonitor$$SetupScrollRect
void RankingMonitor__SetupScrollRect (RankingMonitor_o* __this, int32_t localPlayerRank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$SetupScrollRect
   void RankingMonitor__SetupScrollRect (RankingMonitor_o* __this, int32_t localPlayerRank, const
   MethodInfo* method); */

void RankingMonitor__SetupScrollRect_2458714(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_48;
  
  if ((bRam0000000004f4b904 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4b40);
    FUN_021f03f8(PTR_DAT_049b5418);
    FUN_021f03f8(PTR_DAT_049c4b98);
    FUN_021f03f8(PTR_DAT_049c3a68);
    FUN_021f03f8(PTR_DAT_049c3a70);
    bRam0000000004f4b904 = 1;
  }
  if ((*(long *)(param_1 + 0xf8) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0xf8) + 0x60), lVar7 != 0)) {
    iVar3 = *(int *)(lVar7 + 0x18);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0x21c0801,0);
    if (lVar7 != 0) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lVar7,&lStack_48,*(undefined8 *)PTR_DAT_049c4b40);
      if (lStack_48 != 0) {
        *(long *)(lStack_48 + 0x20) = param_1;
        thunk_FUN_021f190c((long *)(lStack_48 + 0x20),param_1);
        *(long *)(lStack_48 + 400) = param_1;
        thunk_FUN_021f190c(lStack_48 + 400,param_1);
        *(int *)(lStack_48 + 0x28) = iVar3;
        puVar5 = PTR_DAT_049c4b98;
        puVar4 = PTR_DAT_049c3a68;
        if (*(long *)(lStack_48 + 0xc0) != 0) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c
                    (*(long *)(lStack_48 + 0xc0),0);
          lVar7 = *(long *)(lStack_48 + 0xc0);
          uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
          UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
                    (uVar6,param_1,*(undefined8 *)puVar5,0);
          if (lVar7 != 0) {
            UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener_29e5738
                      (lVar7,uVar6,*(undefined8 *)PTR_DAT_049c3a70);
            iVar1 = iVar3 + -8;
            if (param_2 <= iVar3 + -8) {
              iVar1 = param_2 + -4;
            }
            iVar2 = iVar1;
            if (iVar3 + -1 <= iVar1) {
              iVar2 = iVar3 + -1;
            }
            iVar3 = 0;
            if (-1 < iVar1) {
              iVar3 = iVar2;
            }
            UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c(0,lStack_48,iVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

