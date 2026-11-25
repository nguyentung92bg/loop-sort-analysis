/* IL2CPP: BattlePassSubMonitor$$ReturnObject
void BattlePassSubMonitor__ReturnObject (BattlePassSubMonitor_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$ReturnObject
   void BattlePassSubMonitor__ReturnObject (BattlePassSubMonitor_o* __this, UnityEngine_Transform_o*
   t, const MethodInfo* method); */

void BattlePassSubMonitor__ReturnObject_246df08(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x21c0801,0);
  if ((lVar1 != 0) && (uVar2 = UnityEngine_GameObject__get_transform_3c1ca74(lVar1,0), param_2 != 0)
     ) {
    UnityEngine_Transform__SetParent_3c2e060(param_2,uVar2,0,0);
    lVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
    if (lVar1 != 0) {
      if ((bRam0000000004f581f8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a251b8,0,0);
        bRam0000000004f581f8 = 1;
      }
      if (lVar1 != 0) {
        lVar3 = *(long *)(lVar1 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f582c8 == (code *)0x0) {
          pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
        }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f582c8)(lVar3,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

