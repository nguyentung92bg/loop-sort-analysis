/* IL2CPP: AreaOffer$$Initialize
void AreaOffer__Initialize (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$Initialize
   void AreaOffer__Initialize (AreaOffer_o* __this, const MethodInfo* method); */

void AreaOffer__Initialize_2509c1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bdb9 & 1) == 0) {
                    /* try { // try from 02609c40 to 02709c43 has its CatchHandler @ 02609c48 */
    FUN_021f03f8(PTR_DAT_049c2f50);
                    /* try { // try from 02609c44 to 02709c6f has its CatchHandler @ 02609a44 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02609c40 with catch @ 02609c48
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02609b24 with catch @ 02609c4c
                        */
    FUN_021f03f8(PTR_DAT_049c9000);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02609bd8 with catch @ 02609c50
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02609b48 with catch @ 02609c54
                        */
    FUN_021f03f8(PTR_DAT_049c9008);
    bRam0000000004f4bdb9 = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  puVar2 = PTR_DAT_049c9000;
  puVar1 = PTR_DAT_049c2f50;
                    /* try { // try from 02609c70 to 02709c73 has its CatchHandler @ 02609c94 */
                    /* try { // try from 02609c74 to 02709c97 has its CatchHandler @ 02609a44 */
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 02609c70 with catch @ 02609c94 */
    uVar3 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c9008);
                    /* try { // try from 02609c98 to 02709c9f has its CatchHandler @ 02609ca8 */
                    /* try { // try from 02609ca0 to 02709cab has its CatchHandler @ 02609a44 */
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    thunk_FUN_021f190c();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02609c98 with catch @ 02609ca8
                        */
    lVar8 = *(long *)(param_1 + 0x28);
    uVar3 = AreaOffer__get_ProductId_2509624(param_1);
    uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar4,param_1,*(undefined8 *)puVar2,0);
    if (lVar8 != 0) {
      if ((bRam0000000004f4c02b & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c2f50,uVar3,uVar4,0);
        FUN_021f03f8(PTR_DAT_049ca918);
        FUN_021f03f8(PTR_DAT_049ca908);
        FUN_021f03f8(PTR_DAT_049ca920);
        FUN_021f03f8(PTR_DAT_049ca928);
        bRam0000000004f4c02b = 1;
      }
      uStack_38 = 0;
      if (*(long *)(lVar8 + 0x50) != 0) {
        uVar5 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                          (*(long *)(lVar8 + 0x50),uVar3,&uStack_38,*(undefined8 *)PTR_DAT_049ca908)
        ;
        lVar8 = *(long *)(lVar8 + 0x50);
        if ((uVar5 & 1) == 0) {
          if (lVar8 == 0) goto LAB_0264a4ac;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                    (lVar8,uVar3,uVar4,*(undefined8 *)PTR_DAT_049ca918);
        }
        else {
          if (lVar8 == 0) goto LAB_0264a4ac;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                    (lVar8,uVar3,&uStack_28,*(undefined8 *)PTR_DAT_049ca920);
          lVar6 = System_Delegate__Combine_3145640(uStack_28,uVar4,0);
          if (lVar6 == 0) {
            lVar7 = 0;
          }
          else {
            uVar4 = *(undefined8 *)PTR_DAT_049c2f50;
            lVar7 = thunk_FUN_0222c938(lVar6,uVar4);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f0a20(lVar6,uVar4);
            }
          }
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (lVar8,uVar3,lVar7,*(undefined8 *)PTR_DAT_049ca928);
        }
        return;
      }
LAB_0264a4ac:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

