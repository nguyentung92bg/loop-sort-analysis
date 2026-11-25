/* IL2CPP: StreakTournamentLeaderboardElement$$ProvideData
void StreakTournamentLeaderboardElement__ProvideData (StreakTournamentLeaderboardElement_o* __this, UnityEngine_Transform_o* t, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardElement$$ProvideData
   void StreakTournamentLeaderboardElement__ProvideData (StreakTournamentLeaderboardElement_o*
   __this, UnityEngine_Transform_o* t, int32_t idx, const MethodInfo* method); */

void StreakTournamentLeaderboardElement__ProvideData_2486210(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  byte bStack_110;
  undefined8 uStack_10f;
  undefined8 uStack_107;
  undefined8 uStack_ff;
  undefined8 uStack_f7;
  undefined8 uStack_ef;
  undefined8 uStack_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined8 uStack_c7;
  undefined8 uStack_bf;
  undefined8 uStack_b7;
  undefined8 uStack_af;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined8 uStack_59;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4ba28 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3b08);
    FUN_021f03f8(PTR_DAT_049c5bc8);
    FUN_021f03f8(PTR_DAT_049c5b20);
    bRam0000000004f4ba28 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x58);
  uStack_59 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_61 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) <= param_3) {
LAB_02586370:
      if (*(long *)(lVar1 + 0x28) == lStack_48) {
        return;
      }
      goto LAB_025863ac;
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar4,param_3,&bStack_d0,*(undefined8 *)PTR_DAT_049c5b20);
    bVar3 = bStack_d0;
    uStack_90 = CONCAT17(uStack_c8,uStack_cf);
    uStack_88 = uStack_c7;
    uStack_78 = uStack_b7;
    uStack_80 = uStack_bf;
    uStack_68 = uStack_a7;
    uStack_70 = uStack_af;
    uStack_59 = uStack_98;
    uStack_61 = uStack_a0;
    uStack_60 = uStack_9f;
    if (param_2 != 0) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                (param_2,&bStack_d0,*(undefined8 *)PTR_DAT_049c3b08);
      uVar2 = CONCAT71(uStack_cf,bStack_d0);
      lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (uVar2,0x8359a792,0);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x20) != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar4 + 0x20),(bVar3 & 1) == 0,0);
        if ((bVar3 & 1) == 0) {
          bStack_110 = bVar3;
          uStack_107 = uStack_88;
          uStack_10f = uStack_90;
          uStack_f7 = uStack_78;
          uStack_ff = uStack_80;
          uStack_ef = uStack_70;
          uStack_d8 = uStack_59;
          StreakTournamentLeaderboardElement__CreatePlayerElement_2485bfc
                    (param_1,uVar2,&bStack_110,param_3);
        }
        else {
          *(undefined8 *)(param_1 + 0x50) = uVar2;
          thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar2);
        }
        goto LAB_02586370;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_025863ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

