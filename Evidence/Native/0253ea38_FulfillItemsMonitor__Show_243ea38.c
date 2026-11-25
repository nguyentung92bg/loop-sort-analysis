/* IL2CPP: FulfillItemsMonitor$$Show
void FulfillItemsMonitor__Show (FulfillItemsMonitor_o* __this, UnityEngine_Vector3_o worldPosition, System_Collections_Generic_IReadOnlyList_FulfillPayout__o* payouts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillItemsMonitor$$Show
   void FulfillItemsMonitor__Show (FulfillItemsMonitor_o* __this, UnityEngine_Vector3_o
   worldPosition, System_Collections_Generic_IReadOnlyList_FulfillPayout__o* payouts, const
   MethodInfo* method); */

undefined8
FulfillItemsMonitor__Show_243ea38
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,long *param_5
          )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = param_4;
  if ((bRam0000000004f4b83a & 1) == 0) {
    uVar2 = FUN_021f03f8(PTR_DAT_049c3fe0);
    bRam0000000004f4b83a = 1;
  }
  if (param_5 != (long *)0x0) {
    lVar4 = *param_5;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c3fe0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0253ead4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(param_5,*(long *)PTR_DAT_049c3fe0,0);
LAB_0253ead4:
    uVar2 = (*(code *)*puVar3)(param_5,puVar3[1]);
    puVar1 = PTR_DAT_049c3fe8;
    if ((int)uVar2 != 0) {
      if ((bRam0000000004f4b83c & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c3fe8);
        bRam0000000004f4b83c = 1;
      }
      uStack_50 = 0;
      plStack_88 = (long *)0x0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      thunk_FUN_021f190c((ulong)&uStack_a0 | 8,0);
      uStack_90 = param_4;
      thunk_FUN_021f190c(&uStack_90,param_4);
      uStack_80 = CONCAT44(param_2,param_1);
      uStack_78 = CONCAT44(uStack_78._4_4_,param_3);
      plStack_88 = param_5;
      thunk_FUN_021f190c(&plStack_88,param_5);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
      Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                ((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar1);
      return 0;
    }
  }
  return uVar2;
}

