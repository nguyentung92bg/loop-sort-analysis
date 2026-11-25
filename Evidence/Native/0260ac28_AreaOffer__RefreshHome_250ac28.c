/* IL2CPP: AreaOffer$$RefreshHome
void AreaOffer__RefreshHome (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$RefreshHome
   void AreaOffer__RefreshHome (const MethodInfo* method); */

void AreaOffer__RefreshHome_250ac28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lStack_18;
  
  puVar1 = PTR_DAT_049c5440;
  if ((bRam0000000004f4bdc4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9080);
                    /* try { // try from 0260ac50 to 0270ac67 has its CatchHandler @ 0260b1c0 */
    FUN_021f03f8(PTR_DAT_049c5440);
    FUN_021f03f8(PTR_DAT_049c2dd0);
    FUN_021f03f8(PTR_DAT_049c4408);
    bRam0000000004f4bdc4 = 1;
  }
  puVar2 = PTR_DAT_049c9080;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 0260ac94 to 0270ac9f has its CatchHandler @ 0260b020 */
  AreaOffer__Resolve___Il2CppFullySharedGenericType__25a6534(&lStack_18,*(undefined8 *)puVar2);
  if (lStack_18 != 0) {
                    /* try { // try from 0260acac to 0270acb3 has its CatchHandler @ 0260b01c */
    uVar3 = Monitors__IsActive_object__2688ab4(lStack_18,*(undefined8 *)PTR_DAT_049c4408);
    if ((uVar3 & 1) != 0) {
      plVar4 = (long *)Monitors__Get_object__26889d0(lStack_18,*(undefined8 *)PTR_DAT_049c2dd0);
      if (plVar4 == (long *)0x0) goto LAB_0260ad0c;
      (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
                    /* try { // try from 0260acf4 to 0270ad23 has its CatchHandler @ 0260b1b0 */
      (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    }
    return;
  }
LAB_0260ad0c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

