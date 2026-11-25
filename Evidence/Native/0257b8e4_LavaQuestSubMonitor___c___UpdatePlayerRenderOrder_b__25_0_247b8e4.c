/* IL2CPP: LavaQuestSubMonitor.<>c$$<UpdatePlayerRenderOrder>b__25_0
int32_t LavaQuestSubMonitor___c___UpdatePlayerRenderOrder_b__25_0 (LavaQuestSubMonitor___c_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* left, StatefulUI_Runtime_Core_StatefulComponent_o* right, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor.<>c$$<UpdatePlayerRenderOrder>b__25_0
   int32_t LavaQuestSubMonitor___c___UpdatePlayerRenderOrder_b__25_0 (LavaQuestSubMonitor___c_o*
   __this, StatefulUI_Runtime_Core_StatefulComponent_o* left,
   StatefulUI_Runtime_Core_StatefulComponent_o* right, const MethodInfo* method); */

void LavaQuestSubMonitor___c___UpdatePlayerRenderOrder_b__25_0_247b8e4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  if (((param_5 != 0) &&
      (lVar1 = UnityEngine_Component__get_transform_3c18724(param_5,0), param_6 != 0)) &&
     (lVar2 = UnityEngine_Component__get_transform_3c18724(param_6,0), lVar2 != 0)) {
    uVar3 = UnityEngine_Transform__get_position_3c2d540(lVar2,0);
    uStack_30 = CONCAT44(param_2,uVar3);
    uStack_28 = param_3;
    if (lVar1 != 0) {
      UnityEngine_Transform__get_position_3c2d540(lVar1,0);
      System_Single__CompareTo_311213c(param_2,(ulong)&uStack_30 | 4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

