/* IL2CPP: ShuffleBoosterSystem$$IsUnitBoundary
bool ShuffleBoosterSystem__IsUnitBoundary (ShuffleBoosterSystem_o* __this, System_Collections_Generic_List_Block__o* blocks, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBoosterSystem$$IsUnitBoundary
   bool ShuffleBoosterSystem__IsUnitBoundary (ShuffleBoosterSystem_o* __this,
   System_Collections_Generic_List_Block__o* blocks, int32_t i, const MethodInfo* method); */

uint ShuffleBoosterSystem__IsUnitBoundary_23feda4(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_48;
  
  if ((bRam0000000004f4b68a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1a48);
    bRam0000000004f4b68a = 1;
  }
  puVar2 = PTR_DAT_049c1558;
  puVar1 = PTR_DAT_049c1410;
  if (param_2 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (param_2,param_3 + 1,&lStack_48,*(undefined8 *)PTR_DAT_049c1558);
    lVar6 = lStack_48;
    lVar7 = *(long *)(param_1 + 0x60);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar3 = PTR_DAT_049c1a48;
    if ((lVar6 != 0) && (lVar7 != 0)) {
      uVar5 = FUN_024f5708(lVar7,*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)PTR_DAT_049c1a48);
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (param_2,param_3,&lStack_48,*(undefined8 *)puVar2);
        if (lStack_48 == 0) goto LAB_024fef00;
        uVar5 = ColorType__op_Inequality_24f9dbc
                          (*(undefined8 *)(lStack_48 + 0xe4),*(undefined8 *)(lVar6 + 0xe4),0);
        if ((uVar5 & 1) == 0) {
          lVar6 = *(long *)(param_1 + 0x60);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (param_2,param_3,&lStack_48,*(undefined8 *)puVar2);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if ((lStack_48 == 0) || (lVar6 == 0)) goto LAB_024fef00;
          uVar4 = FUN_024f5708(lVar6,*(undefined8 *)(lStack_48 + 0x60),*(undefined8 *)puVar3);
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
      return uVar4 & 1;
    }
  }
LAB_024fef00:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

