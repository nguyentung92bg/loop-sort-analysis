/* IL2CPP: LoseLifeVariant$$OnActivated
void LoseLifeVariant__OnActivated (LoseLifeVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseLifeVariant$$OnActivated
   void LoseLifeVariant__OnActivated (LoseLifeVariant_o* __this, const MethodInfo* method); */

void LoseLifeVariant__OnActivated_2490fac(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_24 [4];
  long lStack_18;
  
  if ((bRam0000000004f4ba6a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5ed8);
    bRam0000000004f4ba6a = 1;
  }
  auStack_24[0] = 0;
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0xce15919c,0)
  ;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar5 = LifeModule__IsEnabled_25460d4(*(long *)(param_1 + 0x48),0);
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_025910dc;
      uVar1 = LifeModule__IsUnlimited_2546110(*(long *)(param_1 + 0x48),0);
      uVar1 = uVar1 ^ 1;
    }
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar4,uVar1 & 1,0);
      auStack_24[0] = LoseLifeVariant__ApplyActivateMotion_24910e4(param_1);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_24,0);
      lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                        (param_1,0x1c8fde52,0);
      if (lVar4 != 0) {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                  (lVar4,&lStack_18,*(undefined8 *)PTR_DAT_049c5ed8);
        if (*(long *)(param_1 + 0x48) != 0) {
          uVar2 = LifeModule__GetCurrentLife_2545fc4(*(long *)(param_1 + 0x48),0);
          if (*(long *)(param_1 + 0x48) != 0) {
            uVar3 = LifeModule__GetMaxLife_25461e8(*(long *)(param_1 + 0x48),0);
            if (lStack_18 != 0) {
              HeartContainer__RefreshHeartDisplay_256c17c(lStack_18,uVar2,uVar3,0,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_025910dc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

