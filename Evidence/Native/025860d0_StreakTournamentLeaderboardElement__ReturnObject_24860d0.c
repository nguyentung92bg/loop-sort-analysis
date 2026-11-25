/* IL2CPP: StreakTournamentLeaderboardElement$$ReturnObject
void StreakTournamentLeaderboardElement__ReturnObject (StreakTournamentLeaderboardElement_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardElement$$ReturnObject
   void StreakTournamentLeaderboardElement__ReturnObject (StreakTournamentLeaderboardElement_o*
   __this, UnityEngine_Transform_o* t, const MethodInfo* method); */

void StreakTournamentLeaderboardElement__ReturnObject_24860d0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000004f4ba27 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4ba27 = 1;
  }
  lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                    (*(undefined8 *)(param_1 + 0x38),0x21c0801,0);
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) &&
     (uVar3 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(lVar2 + 0x20),0), param_2 != 0
     )) {
    UnityEngine_Transform__SetParent_3c2e060(param_2,uVar3,0,0);
    lVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
    puVar1 = PTR_DAT_049b3b98;
    if (lVar2 != 0) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar2,0,0);
      plVar6 = (long *)(param_1 + 0x50);
      lVar2 = *plVar6;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(lVar2,0,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
        if (*plVar6 == 0) goto LAB_0258620c;
        uVar5 = UnityEngine_Component__get_gameObject_3c187f4(*plVar6,0);
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          FUN_021f0574(lVar2);
        }
        uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,uVar5,0);
        if ((uVar4 & 1) != 0) {
          *plVar6 = 0;
          if (iRam0000000005174518 != 0) {
            FUN_023118d0(1L << ((ulong)plVar6 >> 0xc & 0x3f),
                         ((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
          }
          return;
        }
      }
      return;
    }
  }
LAB_0258620c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

