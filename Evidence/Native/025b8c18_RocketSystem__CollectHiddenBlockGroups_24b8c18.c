/* IL2CPP: RocketSystem$$CollectHiddenBlockGroups
void RocketSystem__CollectHiddenBlockGroups (RocketSystem_o* __this, System_Collections_Generic_List_List_Block___o* groups, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$CollectHiddenBlockGroups
   void RocketSystem__CollectHiddenBlockGroups (RocketSystem_o* __this,
   System_Collections_Generic_List_List_Block___o* groups, const MethodInfo* method); */

void RocketSystem__CollectHiddenBlockGroups_24b8c18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
                    /* catch() { ... } // from try @ 025b8c54 with catch @ 025b8c2c
                       catch() { ... } // from try @ 025b8c8c with catch @ 025b8c2c
                       catch() { ... } // from try @ 025b8cb4 with catch @ 025b8c2c */
  if ((bRam0000000004f4bba9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
                    /* try { // try from 025b8c4c to 026b8c53 has its CatchHandler @ 025b8c6c */
    FUN_021f03f8(PTR_DAT_049c22d8);
                    /* try { // try from 025b8c54 to 026b8c87 has its CatchHandler @ 025b8c2c */
    bRam0000000004f4bba9 = 1;
  }
  puVar1 = PTR_DAT_049c22d8;
  lVar5 = *(long *)(param_1 + 0x90);
  uStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  if (lVar5 != 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b8c4c with catch @ 025b8c6c
                        */
    lStack_40 = 0;
                    /* try { // try from 025b8c88 to 026b8c8b has its CatchHandler @ 025b8ca8 */
    lStack_38 = 0;
                    /* try { // try from 025b8c8c to 026b8cab has its CatchHandler @ 025b8c2c */
    lStack_48 = (ulong)*(uint *)(lVar5 + 0x30) << 0x20;
    thunk_FUN_021f190c(&lStack_40,0);
    lStack_38 = *(long *)(lVar5 + 0x28);
    thunk_FUN_021f190c(&lStack_38);
                    /* catch() { ... } // from try @ 025b8c88 with catch @ 025b8ca8 */
                    /* try { // try from 025b8cac to 026b8cb3 has its CatchHandler @ 025b8cbc */
    lStack_58 = lStack_40;
    uStack_60 = lStack_48;
                    /* try { // try from 025b8cb4 to 026b8cbf has its CatchHandler @ 025b8c2c */
    lStack_50 = lStack_38;
    while( true ) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b8cac with catch @ 025b8cbc
                        */
      iVar4 = (int)uStack_60 + -1;
                    /* try { // try from 025b8cc0 to 026b8d4b has its CatchHandler @ 025b8cc0
                       catch() { ... } // from try @ 025b8cc0 with catch @ 025b8cc0
                       catch() { ... } // from try @ 025b8de4 with catch @ 025b8cc0
                       catch() { ... } // from try @ 025b8e60 with catch @ 025b8cc0 */
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar4);
      if (iVar4 < 0) {
        uStack_60._4_4_ = uStack_60._4_4_ - 1;
        if ((int)uStack_60._4_4_ < 0) {
                    /* try { // try from 025b8d4c to 026b8d57 has its CatchHandler @ 025b8e24 */
          return;
        }
        lVar5 = *(long *)(lStack_50 + (ulong)uStack_60._4_4_ * 8 + 0x20);
        lStack_58 = *(long *)(lVar5 + 0x18);
        uStack_60._0_4_ = iVar4;
        thunk_FUN_021f190c((ulong)&uStack_60 | 8);
        iVar4 = *(int *)(lVar5 + 0x30) + -1;
        uStack_60 = CONCAT44(uStack_60._4_4_,iVar4);
      }
      if (*(long *)(param_1 + 0x98) == 0) break;
      plVar2 = (long *)FUN_024f6008(*(long *)(param_1 + 0x98),
                                    *(undefined8 *)(lStack_58 + (long)iVar4 * 8 + 0x20),
                                    *(undefined8 *)puVar1);
      lVar5 = *plVar2;
      if (lVar5 == 0) break;
      uVar3 = Carrier__CanInteract_2408994(lVar5,0);
      if ((uVar3 & 1) != 0) {
        RocketSystem__FindHiddenBlockGroups_24b8fac(param_1,lVar5,param_2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

