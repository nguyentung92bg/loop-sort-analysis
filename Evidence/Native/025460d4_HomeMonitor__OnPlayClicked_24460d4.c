/* IL2CPP: HomeMonitor$$OnPlayClicked
void HomeMonitor__OnPlayClicked (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$OnPlayClicked
   void HomeMonitor__OnPlayClicked (HomeMonitor_o* __this, const MethodInfo* method); */

ulong HomeMonitor__OnPlayClicked_24460d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [3];
  undefined1 auStack_24 [4];
  
  if ((bRam0000000004f4b862 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c4318);
    FUN_021f03f8(PTR_DAT_049c4320);
    FUN_021f03f8(PTR_DAT_049c4328);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4b862 = 1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar3 = GameMachine__CanEnter_object__261a478
                      (*(long *)(param_1 + 0xa0),*(undefined8 *)PTR_DAT_049c4318);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar3 = LifeModule__IsLifeAvailable_25460dc(*(long *)(param_1 + 0xb0),0);
      puVar2 = PTR_DAT_049c4330;
      puVar1 = PTR_DAT_049c3958;
      if ((uVar3 & 1) != 0) {
        if ((bRam0000000004f4b863 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c4330);
          bRam0000000004f4b863 = 1;
        }
        alStack_40[2] = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        alStack_40[1] = 0;
        alStack_40[0] = 0;
        thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
        alStack_40[0] = param_1;
        thunk_FUN_021f190c(alStack_40,param_1);
        uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                  ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar2);
        return 0;
      }
      lVar6 = *(long *)(param_1 + 0x30);
      lVar4 = *(long *)PTR_DAT_049c3958;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      auStack_24[0] = **(undefined1 **)(lVar4 + 0xb8);
      uVar5 = thunk_FUN_0222c66c(lVar4,auStack_24);
      if (lVar6 != 0) {
        Monitors__Additive_object__26888e8(lVar6,uVar5,1,*(undefined8 *)PTR_DAT_049c4328);
        lVar4 = *(long *)(param_1 + 0xb8);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
        System_Action___ctor_306b98c(uVar5,param_1,*(undefined8 *)PTR_DAT_049c4320,0);
        if (lVar4 != 0) {
          puVar7 = (undefined8 *)(lVar4 + 200);
          *puVar7 = uVar5;
          uVar3 = thunk_FUN_021f190c(puVar7,uVar5);
          return uVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

