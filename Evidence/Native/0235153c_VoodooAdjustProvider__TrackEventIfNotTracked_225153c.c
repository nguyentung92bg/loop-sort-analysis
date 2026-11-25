/* IL2CPP: VoodooAdjustProvider$$TrackEventIfNotTracked
void VoodooAdjustProvider__TrackEventIfNotTracked (System_String_o* eventToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$TrackEventIfNotTracked
   void VoodooAdjustProvider__TrackEventIfNotTracked (System_String_o* eventToken, const MethodInfo*
   method); */

void VoodooAdjustProvider__TrackEventIfNotTracked_225153c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049b5f90;
  puVar1 = PTR_DAT_049b5f88;
  if ((bRam0000000004f49b96 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f70);
    FUN_021f03f8(PTR_DAT_049b5f90);
    FUN_021f03f8(PTR_DAT_049b5f88);
    bRam0000000004f49b96 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar3 = System_String__Concat_2f7d424(*(undefined8 *)puVar1,param_1,*(undefined8 *)puVar2,0);
  CloudPrefsBool___ctor_24eafb8(&uStack_50,uVar3,0,0,0);
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
  uVar4 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_70,0);
  puVar1 = PTR_DAT_049b5f70;
  if ((uVar4 & 1) == 0) {
    CloudPrefsBool__Set_24eb1bc(&uStack_50,1,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    VoodooAdjustProvider__TrackEvent_22514a4(param_1);
  }
  return;
}

