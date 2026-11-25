/* IL2CPP: Beardy.BeardyGridLayoutGroup$$.ctor
void Beardy_BeardyGridLayoutGroup___ctor (Beardy_BeardyGridLayoutGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Beardy.BeardyGridLayoutGroup$$.ctor
   void Beardy_BeardyGridLayoutGroup___ctor (Beardy_BeardyGridLayoutGroup_o* __this, const
   MethodInfo* method); */

void Beardy_BeardyGridLayoutGroup___ctor_24a0fc8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  cVar4 = cRam0000000004f49d57;
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x42c8000042c80000;
  if (cVar4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18,0);
    cRam0000000004f49d57 = '\x01';
    uVar5 = extraout_x1;
  }
  uVar8 = **(undefined8 **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined8 *)(param_1 + 0x70) = uVar8;
  puVar3 = PTR_DAT_049ded00;
  if ((bRam0000000004f5bf9a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c31e8,uVar5);
    FUN_021f03f8(PTR_DAT_049c31e0);
    FUN_021f03f8(PTR_DAT_049ded00);
    bRam0000000004f5bf9a = 1;
  }
  puVar2 = PTR_DAT_049c31e8;
  puVar1 = PTR_DAT_049c31e0;
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_RectOffset___ctor_3bd6814(uVar5,0);
  puVar7 = (undefined8 *)(param_1 + 0x20);
  *puVar7 = uVar5;
  thunk_FUN_021f190c(puVar7,uVar5);
  if (cRam0000000004f49d57 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f49d57 = '\x01';
  }
  uVar5 = *(undefined8 *)puVar1;
  lVar6 = *(long *)PTR_DAT_049b8a18;
  *(undefined8 *)(param_1 + 0x3c) = **(undefined8 **)(lVar6 + 0xb8);
  *(undefined8 *)(param_1 + 0x44) = **(undefined8 **)(lVar6 + 0xb8);
  *(undefined8 *)(param_1 + 0x4c) = **(undefined8 **)(lVar6 + 0xb8);
  uVar5 = thunk_FUN_0222ca34(uVar5);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar5);
  UnityEngine_EventSystems_UIBehaviour___ctor_3ef1f64(param_1,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_RectOffset___ctor_3bd6814(uVar5,0);
  *puVar7 = uVar5;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

