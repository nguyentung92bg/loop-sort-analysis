/* IL2CPP: GridContainer$$Awake
void GridContainer__Awake (GridContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GridContainer$$Awake
   void GridContainer__Awake (GridContainer_o* __this, const MethodInfo* method); */

void GridContainer__Awake_2507fdc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = PTR_DAT_049c8ed8;
  if ((bRam0000000004f4bda0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8ed8);
    bRam0000000004f4bda0 = 1;
  }
  GameBehaviourBase__Awake_24f68a8(param_1,0);
  lVar4 = UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c221c
                    (param_1,*(undefined8 *)puVar2);
  if ((bRam0000000004f4bda1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8ee0);
    FUN_021f03f8(PTR_DAT_049c8ee8);
    bRam0000000004f4bda1 = 1;
  }
  puVar3 = PTR_DAT_049c8ee8;
  puVar2 = PTR_DAT_049c8ee0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar6 = *(long *)(param_1 + 0xa8);
        if (lVar6 == 0) goto LAB_02608144;
        uStack_58 = *(undefined8 *)(lVar6 + 0x28);
        uStack_60 = *(undefined8 *)(lVar6 + 0x20);
        uStack_50 = *(undefined8 *)(lVar6 + 0x30);
        lVar7 = *(long *)(lVar4 + 0x20 + lVar8 * 8);
        lVar6 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                          (&uStack_60,*(undefined8 *)puVar3);
        if ((lVar7 == 0) || (lVar6 == 0)) goto LAB_02608144;
        uVar5 = GridSheet_Layouts__GetLayout_2560de8(lVar6,*(undefined4 *)(lVar7 + 0xa0),0);
        Grid__Initialize_25067a4(lVar7,uVar5,0);
        if (*(long *)(param_1 + 0xb0) == 0) goto LAB_02608144;
        FUN_02333498(*(long *)(param_1 + 0xb0),lVar7,*(undefined8 *)puVar2);
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    return;
  }
LAB_02608144:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

