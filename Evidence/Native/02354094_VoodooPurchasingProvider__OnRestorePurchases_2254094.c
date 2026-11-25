/* IL2CPP: VoodooPurchasingProvider$$OnRestorePurchases
void VoodooPurchasingProvider__OnRestorePurchases (VoodooPurchasingProvider_o* __this, bool result, System_String_o* errorMessage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$OnRestorePurchases
   void VoodooPurchasingProvider__OnRestorePurchases (VoodooPurchasingProvider_o* __this, bool
   result, System_String_o* errorMessage, const MethodInfo* method); */

void VoodooPurchasingProvider__OnRestorePurchases_2254094
               (long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uStack_40;
  undefined1 auStack_34 [4];
  
  auStack_34[0] = param_2;
  if ((bRam0000000004f49baa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5378);
    FUN_021f03f8(PTR_DAT_049b6188);
    FUN_021f03f8(PTR_DAT_049b6190);
    bRam0000000004f49baa = 1;
  }
  puVar3 = PTR_DAT_049b6190;
  puVar2 = PTR_DAT_049b6188;
  puVar1 = PTR_DAT_049b3c58;
  uStack_40 = 0;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x28) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_Boolean__ToString_306efc8(auStack_34,0);
  uVar5 = System_String__Concat_2f7dbac(*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar2,param_3,0)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  UnityEngine_Debug__Log_3bd0be4(uVar5,0);
  uVar4 = auStack_34[0];
  plVar10 = *(long **)(param_1 + 0x40);
  uStack_40 = param_3;
  thunk_FUN_021f190c(&uStack_40,param_3);
  uVar5 = uStack_40;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b5378) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_023541f0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b5378,0);
LAB_023541f0:
  (*(code *)*puVar6)(plVar10,uVar4,uVar5,puVar6[1]);
  return;
}

