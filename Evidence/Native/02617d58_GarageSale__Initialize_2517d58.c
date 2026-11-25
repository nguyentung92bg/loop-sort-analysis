/* IL2CPP: GarageSale$$Initialize
void GarageSale__Initialize (GarageSale_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSale$$Initialize
   void GarageSale__Initialize (GarageSale_o* __this, const MethodInfo* method); */

void GarageSale__Initialize_2517d58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_049c9418;
  puVar1 = PTR_DAT_049c2f50;
  if ((bRam0000000004f4be29 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c9418);
    bRam0000000004f4be29 = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  lVar7 = *(long *)(param_1 + 0x18);
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar3,param_1,*(undefined8 *)puVar2,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02617df4 to 02717e03 has its CatchHandler @ 02617e34 */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c02d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50,0x14,uVar3,0);
    FUN_021f03f8(PTR_DAT_049ca940);
    FUN_021f03f8(PTR_DAT_049ca910);
    FUN_021f03f8(PTR_DAT_049ca948);
    FUN_021f03f8(PTR_DAT_049ca950);
    bRam0000000004f4c02d = 1;
  }
  uStack_40 = 0;
  if (*(long *)(lVar7 + 0x58) != 0) {
    uStack_38 = 0x14;
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(lVar7 + 0x58),&uStack_38,&uStack_40,*(undefined8 *)PTR_DAT_049ca910
                      );
    lVar7 = *(long *)(lVar7 + 0x58);
    if ((uVar4 & 1) == 0) {
      if (lVar7 == 0) goto LAB_0264a76c;
      uStack_38 = 0x14;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar7,&uStack_38,uVar3,*(undefined8 *)PTR_DAT_049ca940);
    }
    else {
      if (lVar7 == 0) goto LAB_0264a76c;
      uStack_24 = 0x14;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar7,&uStack_24,&uStack_38,*(undefined8 *)PTR_DAT_049ca948);
      lVar5 = System_Delegate__Combine_3145640(CONCAT44(uStack_34,uStack_38),uVar3,0);
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        uVar3 = *(undefined8 *)PTR_DAT_049c2f50;
        lVar6 = thunk_FUN_0222c938(lVar5,uVar3);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar5,uVar3);
        }
      }
      uStack_38 = 0x14;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar7,&uStack_38,lVar6,*(undefined8 *)PTR_DAT_049ca950);
    }
    return;
  }
LAB_0264a76c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

