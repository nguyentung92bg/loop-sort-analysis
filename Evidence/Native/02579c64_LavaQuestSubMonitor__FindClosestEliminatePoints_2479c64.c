/* IL2CPP: LavaQuestSubMonitor$$FindClosestEliminatePoints
void LavaQuestSubMonitor__FindClosestEliminatePoints (LavaQuestSubMonitor_o* __this, UnityEngine_Vector3_o from, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$FindClosestEliminatePoints
   void LavaQuestSubMonitor__FindClosestEliminatePoints (LavaQuestSubMonitor_o* __this,
   UnityEngine_Vector3_o from, const MethodInfo* method); */

void LavaQuestSubMonitor__FindClosestEliminatePoints_2479c64
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_049c58d0;
  uVar11 = param_2;
  uVar12 = param_3;
  if ((bRam0000000004f4b9dc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c58d8);
    FUN_021f03f8(PTR_DAT_049bed58);
    FUN_021f03f8(PTR_DAT_049c58e0);
    FUN_021f03f8(PTR_DAT_049c58e8);
    FUN_021f03f8(PTR_DAT_049c58f0);
    FUN_021f03f8(PTR_DAT_049c58d0);
    bRam0000000004f4b9dc = 1;
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar4,0);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x10) = param_1;
    *(undefined4 *)(lVar4 + 0x14) = param_2;
    *(undefined4 *)(lVar4 + 0x18) = param_3;
    lVar8 = *(long *)(param_4 + 0xb8);
    if (lVar8 != 0) {
      lVar7 = *(long *)PTR_DAT_049c58e0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(lVar8 + 0x18) = 0;
      }
      else {
        iVar2 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        if (0 < iVar2) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar8 + 0x10),0,iVar2,0);
        }
      }
      lVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (*(undefined8 *)(param_4 + 0x68),0x138477b5,0);
      if ((lVar8 != 0) &&
         (lVar8 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar8,0),
         lVar8 != 0)) {
        iVar2 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar8,0);
        puVar1 = PTR_DAT_049bed58;
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            lVar7 = UnityEngine_Transform__GetChild_3c2f8bc(lVar8,iVar2,0);
            if (lVar7 == 0) goto LAB_02579e74;
            lVar9 = *(long *)(param_4 + 0xb8);
            uVar10 = UnityEngine_Transform__get_position_3c2d540(lVar7,0);
            if (lVar9 == 0) goto LAB_02579e74;
            uStack_5c = uVar10;
            uStack_58 = uVar11;
            uStack_54 = uVar12;
            FUN_02333498(lVar9,&uStack_5c,*(undefined8 *)puVar1);
            iVar2 = iVar2 + 1;
            iVar3 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar8,0);
          } while (iVar2 < iVar3);
        }
        puVar1 = PTR_DAT_049c58f0;
        lVar8 = *(long *)(param_4 + 0xb8);
        uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c58d8);
        System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                  (uVar6,lVar4,*(undefined8 *)puVar1,0);
        if (lVar8 != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                    (lVar8,uVar6,*(undefined8 *)PTR_DAT_049c58e8);
          return;
        }
      }
    }
  }
LAB_02579e74:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

