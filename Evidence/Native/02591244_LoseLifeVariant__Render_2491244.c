/* IL2CPP: LoseLifeVariant$$Render
void LoseLifeVariant__Render (LoseLifeVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseLifeVariant$$Render
   void LoseLifeVariant__Render (LoseLifeVariant_o* __this, const MethodInfo* method); */

void LoseLifeVariant__Render_2491244(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_34;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4ba6c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b6188);
    FUN_021f03f8(PTR_DAT_049ba9d8);
    FUN_021f03f8(PTR_DAT_049ba9e0);
    bRam0000000004f4ba6c = 1;
  }
  puVar1 = PTR_DAT_049b6128;
  uStack_28 = 0;
  uStack_34 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    uStack_28 = LifeModule__GetRemainingTime_2545e88(*(long *)(param_1 + 0x48),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    iVar4 = System_TimeSpan__get_Minutes_3116ae0(&uStack_28,0);
    puVar2 = PTR_DAT_049ba9d8;
    if (iVar4 < 1) {
      uVar5 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uStack_34 = System_TimeSpan__get_Minutes_3116ae0(&uStack_28,0);
      uVar5 = System_Int32__ToString_30fbaa0(&uStack_34,0);
      uVar5 = System_String__Concat_2f72b28(uVar5,*(undefined8 *)puVar2,0);
    }
    puVar3 = PTR_DAT_049ba9e0;
    puVar2 = PTR_DAT_049b6188;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_34 = System_TimeSpan__get_Seconds_3116b28(&uStack_28,0);
    uVar6 = System_Int32__ToString_30fbaa0(&uStack_34,0);
    uVar5 = System_String__Concat_2f7dbac(uVar5,*(undefined8 *)puVar2,uVar6,*(undefined8 *)puVar3,0)
    ;
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xce1592a9,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

