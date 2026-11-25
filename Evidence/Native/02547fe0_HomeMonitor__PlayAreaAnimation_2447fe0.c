/* IL2CPP: HomeMonitor$$PlayAreaAnimation
void HomeMonitor__PlayAreaAnimation (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$PlayAreaAnimation
   void HomeMonitor__PlayAreaAnimation (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__PlayAreaAnimation_2447fe0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_28;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b878 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c43c8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b878 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x158);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((((*(long *)(param_1 + 0x158) != 0) &&
       (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (*(long *)(param_1 + 0x158),&lStack_28,*(undefined8 *)PTR_DAT_049c43c8),
       lStack_28 != 0)) && (*(long *)(lStack_28 + 0x20) != 0)) &&
     (lVar3 = Spine_Unity_SkeletonGraphic__get_AnimationState_331b0d0(*(long *)(lStack_28 + 0x20),0)
     , lVar3 != 0)) {
    *(undefined4 *)(lVar3 + 0x6c) = 0x3f800000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

