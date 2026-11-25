/* IL2CPP: BoosterContainer.<>c__DisplayClass18_0$$<OnRefreshElement>b__0
void BoosterContainer___c__DisplayClass18_0___OnRefreshElement_b__0 (BoosterContainer___c__DisplayClass18_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterContainer.<>c__DisplayClass18_0$$<OnRefreshElement>b__0
   void BoosterContainer___c__DisplayClass18_0___OnRefreshElement_b__0
   (BoosterContainer___c__DisplayClass18_0_o* __this, const MethodInfo* method); */

void BoosterContainer___c__DisplayClass18_0___OnRefreshElement_b__0_256bd88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uStack_14;
  
  if ((bRam0000000004f4c194 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bbda8);
                    /* try { // try from 0266bdb0 to 0276be37 has its CatchHandler @ 0266c340 */
    FUN_021f03f8(PTR_DAT_049bbdb0);
    bRam0000000004f4c194 = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0xb0), lVar3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar3,*(int *)(lVar3 + 0x18) + -1,&uStack_14,*(undefined8 *)PTR_DAT_049bbdb0);
    if (lVar1 != 0) {
      BoosterContainer__OnSelectClicked_256b618(lVar1,uVar2,uStack_14);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

