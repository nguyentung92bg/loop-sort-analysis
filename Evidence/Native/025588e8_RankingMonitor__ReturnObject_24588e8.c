/* IL2CPP: RankingMonitor$$ReturnObject
void RankingMonitor__ReturnObject (RankingMonitor_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$ReturnObject
   void RankingMonitor__ReturnObject (RankingMonitor_o* __this, UnityEngine_Transform_o* t, const
   MethodInfo* method); */

void RankingMonitor__ReturnObject_24588e8(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x21c0801,0);
  if ((lVar4 != 0) && (uVar5 = UnityEngine_GameObject__get_transform_3c1ca74(lVar4,0), param_2 != 0)
     ) {
    UnityEngine_Transform__SetParent_3c2e060(param_2,uVar5,0,0);
    lVar4 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
      puVar1 = PTR_DAT_049b3b98;
      if ((bRam0000000004f4b903 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b3b98);
        bRam0000000004f4b903 = 1;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x108);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if (param_2 != 0) {
        uVar5 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
        if (*(long *)(param_1 + 0x108) != 0) {
          uVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x108),0);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_021f0574(lVar4);
          }
          uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,uVar3,0);
          if ((uVar2 & 1) != 0) {
            return;
          }
          *(undefined8 *)(param_1 + 0x108) = 0;
          if (iRam0000000005174518 != 0) {
            FUN_023118d0(1L << (param_1 + 0x108U >> 0xc & 0x3f),
                         (param_1 + 0x108U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
          }
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

