/* IL2CPP: CameraBoundsSystem$$CreateTargetGroup
void CameraBoundsSystem__CreateTargetGroup (CameraBoundsSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CameraBoundsSystem$$CreateTargetGroup
   void CameraBoundsSystem__CreateTargetGroup (CameraBoundsSystem_o* __this, const MethodInfo*
   method); */

void CameraBoundsSystem__CreateTargetGroup_24d5248(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar2 = PTR_DAT_049c76d0;
  puVar1 = PTR_DAT_049b3b90;
  if ((bRam0000000004f4bc39 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b90);
    FUN_021f03f8(PTR_DAT_049c76d8);
    FUN_021f03f8(PTR_DAT_049c76e0);
    FUN_021f03f8(PTR_DAT_049c76d0);
    FUN_021f03f8(PTR_DAT_049c76e8);
    FUN_021f03f8(PTR_DAT_049c76f0);
    bRam0000000004f4bc39 = 1;
  }
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_3c1db70(lVar5,*(undefined8 *)puVar2,0);
  puVar4 = PTR_DAT_049c76f0;
  puVar3 = PTR_DAT_049c76e8;
  puVar2 = PTR_DAT_049c76e0;
  puVar1 = PTR_DAT_049c76d8;
  if (lVar5 != 0) {
    uVar6 = UnityEngine_GameObject__get_transform_3c1ca74(lVar5,0);
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    thunk_FUN_021f190c();
    uVar6 = CameraBoundsSystem__CreateTarget_24d6484(param_1,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    thunk_FUN_021f190c();
    uVar6 = CameraBoundsSystem__CreateTarget_24d6484(param_1,*(undefined8 *)puVar4);
    *(undefined8 *)(param_1 + 0x80) = uVar6;
    thunk_FUN_021f190c();
    uVar6 = CameraBoundsSystem__CreateTarget_24d6484(param_1,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    thunk_FUN_021f190c();
    uVar6 = CameraBoundsSystem__CreateTarget_24d6484(param_1,*(undefined8 *)puVar2);
    puVar7 = (undefined8 *)(param_1 + 0x90);
    *puVar7 = uVar6;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                   ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

