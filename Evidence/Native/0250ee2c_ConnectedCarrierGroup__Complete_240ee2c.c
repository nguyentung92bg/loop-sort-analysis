/* IL2CPP: ConnectedCarrierGroup$$Complete
void ConnectedCarrierGroup__Complete (ConnectedCarrierGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectedCarrierGroup$$Complete
   void ConnectedCarrierGroup__Complete (ConnectedCarrierGroup_o* __this, const MethodInfo* method);
    */

void ConnectedCarrierGroup__Complete_240ee2c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  puVar7 = PTR_DAT_049c2ac0;
  puVar6 = PTR_DAT_049c2ab8;
  puVar5 = PTR_DAT_049c2240;
  puVar4 = PTR_DAT_049b6110;
  puVar3 = PTR_DAT_049b4308;
  if ((bRam0000000004f4b70e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c2ab8);
    FUN_021f03f8(PTR_DAT_049c2628);
    FUN_021f03f8(PTR_DAT_049c2630);
    FUN_021f03f8(PTR_DAT_049c2638);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2640);
    FUN_021f03f8(PTR_DAT_049c2ac0);
    FUN_021f03f8(PTR_DAT_049c2240);
    bRam0000000004f4b70e = 1;
  }
  auStack_58._0_8_ = 0;
  auStack_58._8_8_ = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  auStack_58 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,0x3e800000,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___ctor_306b98c(uVar8,param_1,*(undefined8 *)puVar6,0);
  auVar13 = FUN_024f6b84(auStack_58,uVar8,*(undefined8 *)puVar5);
  uVar8 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  auVar13 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672670
                      (auVar13._0_8_,auVar13._8_8_,uVar8,*(undefined8 *)puVar7);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar13 = Extensions__AddTo_24d83f4(auVar13._0_8_,auVar13._8_8_ & 0xffffffff,param_1,0);
  LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
            (auVar13._0_8_,auVar13._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0x98),0);
  puVar5 = PTR_DAT_049c2638;
  puVar4 = PTR_DAT_049c2630;
  puVar3 = PTR_DAT_049c2628;
  if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 200),&uStack_70,*(undefined8 *)PTR_DAT_049c2640);
  while( true ) {
    uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar3);
      return;
    }
    lVar12 = *(long *)puVar5;
    lVar10 = *(long *)(lVar12 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar11 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar10 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar8 = thunk_FUN_0224e54c(&uStack_70,
                               *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_48,uVar8,uVar1);
    lVar11 = lStack_48;
    uVar8 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar11 == 0) break;
    Carrier__EnableInteraction_2404130(lVar11);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(uVar8,uVar8);
}

