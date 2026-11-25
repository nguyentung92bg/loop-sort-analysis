/* IL2CPP: RankingMonitor$$ProvideData
void RankingMonitor__ProvideData (RankingMonitor_o* __this, UnityEngine_Transform_o* t, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$ProvideData
   void RankingMonitor__ProvideData (RankingMonitor_o* __this, UnityEngine_Transform_o* t, int32_t
   idx, const MethodInfo* method); */

void RankingMonitor__ProvideData_2458960(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte bStack_100;
  undefined8 uStack_ff;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined8 uStack_bf;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4b905 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3b08);
    FUN_021f03f8(PTR_DAT_049b5418);
    FUN_021f03f8(PTR_DAT_049b5420);
    bRam0000000004f4b905 = 1;
  }
  uStack_78 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((*(long *)(param_1 + 0xf8) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0xf8) + 0x60), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x18) <= param_3) {
LAB_02558b10:
      if (*(long *)(lVar1 + 0x28) == lStack_58) {
        return;
      }
      goto LAB_02558b50;
    }
    if (*(long *)(param_1 + 0x160) != 0) {
      uVar2 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(param_1 + 0x160),0);
      RankingMonitor__FetchLeaderboard_24574f0(param_1,param_3,uVar2);
      *(int *)(param_1 + 0x110) = param_3;
      if ((*(long *)(param_1 + 0xf8) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0xf8) + 0x60), lVar3 != 0)) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar3,param_3,&uStack_e0,*(undefined8 *)PTR_DAT_049b5420);
        uStack_78 = uStack_b7;
        uStack_80 = uStack_bf;
        uStack_98 = uStack_d8;
        uStack_a0 = uStack_e0;
        uStack_88 = uStack_c8;
        uStack_90 = uStack_d0;
        uStack_69 = (undefined1)uStack_a8;
        uStack_68 = (undefined7)((ulong)uStack_a8 >> 8);
        uStack_71 = uStack_b0;
        uStack_70 = uStack_af;
        if (param_2 != 0) {
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (param_2,&uStack_e0,*(undefined8 *)PTR_DAT_049c3b08);
          lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                            (uStack_e0,0x8359a792,0);
          if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
            UnityEngine_GameObject__SetActive_3c1ce34
                      (*(long *)(lVar3 + 0x20),(bStack_c0 & 1) == 0,0);
            if ((bStack_c0 & 1) == 0) {
              RankingMonitor__UpdateLocalPlayerTarget_24585f8(param_1,param_2);
              bStack_100 = bStack_c0;
              uStack_118 = uStack_98;
              uStack_120 = uStack_a0;
              uStack_108 = uStack_88;
              uStack_110 = uStack_90;
              uStack_e8 = CONCAT71(uStack_68,uStack_69);
              uStack_ff = uStack_80;
              RankingMonitor__CreatePlayerElement_2457654(param_1,uStack_e0,&uStack_120,param_3);
            }
            else {
              *(undefined8 *)(param_1 + 0x108) = uStack_e0;
              thunk_FUN_021f190c(param_1 + 0x108,uStack_e0);
              RankingMonitor__UpdateLocalPlayerElement_2457eb8(param_1);
            }
            goto LAB_02558b10;
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02558b50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

