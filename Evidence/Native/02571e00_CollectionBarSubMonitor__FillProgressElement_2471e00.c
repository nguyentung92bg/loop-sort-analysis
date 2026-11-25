/* IL2CPP: CollectionBarSubMonitor$$FillProgressElement
void CollectionBarSubMonitor__FillProgressElement (CollectionBarSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, CollectionBarSheet_Row_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarSubMonitor$$FillProgressElement
   void CollectionBarSubMonitor__FillProgressElement (CollectionBarSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, CollectionBarSheet_Row_o* data, const
   MethodInfo* method); */

void CollectionBarSubMonitor__FillProgressElement_2471e00
               (long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4b9ac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c2d08);
    FUN_021f03f8(PTR_DAT_049c2d10);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4b9ac = 1;
  }
  puVar4 = PTR_DAT_049c2cf0;
  iStack_38 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_3 != 0) {
    plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
    uVar2 = *(undefined4 *)(plVar8[1] + 0xfc);
    uVar6 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar8 + 0x80));
    func_0x04608620(&iStack_b8,uVar6,uVar2);
    iStack_38 = iStack_b8;
    uVar6 = System_Int32__ToString_30fbaa0(&iStack_38,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (param_2,0x6d8b1339,uVar6,0);
    if (*(long *)(param_3 + 0x28) != 0) {
      iVar3 = *(int *)(*(long *)(param_3 + 0x28) + 0x18);
      lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (param_2,0x9927ed9b,0);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar7 + 0x20),iVar3 < 2,0);
        if (iVar3 < 2) {
          if (*(long *)(param_3 + 0x28) == 0) goto LAB_02572180;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(param_3 + 0x28),0,&iStack_b8,*(undefined8 *)PTR_DAT_049c2d10);
          iVar3 = iStack_b8;
          if ((*(long *)(param_1 + 0x58) == 0) ||
             (lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x28), lVar7 == 0)) goto LAB_02572180;
          iStack_34 = iStack_b8;
          GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                    (lVar7,&iStack_34,&iStack_b8,*(undefined8 *)PTR_DAT_049c2d00);
          uStack_c8 = uStack_b0;
          uStack_c0 = uStack_a8;
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                    (param_2,0xbcdc2f95,auStack_d0,0);
          if (*(long *)(param_1 + 0x58) == 0) goto LAB_02572180;
          uVar6 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x58),iVar3,uStack_b4,0);
        }
        else {
                    /* try { // try from 02571fbc to 02671fc3 has its CatchHandler @ 02572370 */
          uStack_58 = *(undefined8 *)(param_1 + 0x40);
          uStack_50 = 0;
          uStack_48 = 0;
          thunk_FUN_021f190c(&uStack_58);
                    /* try { // try from 02571fdc to 02672027 has its CatchHandler @ 02572378 */
          uStack_50 = CONCAT44(uStack_50._4_4_,0x3f800000);
          uStack_90 = uStack_48;
          uStack_98 = uStack_50;
          uStack_a0 = uStack_58;
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                    (param_2,0xbcdc2f95,&uStack_a0,0);
          uVar6 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
        }
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (param_2,0x9927ed9b,uVar6,0);
                    /* try { // try from 02572028 to 02672077 has its CatchHandler @ 02571df8 */
        if (*(long *)(param_1 + 0x70) != 0) {
          plVar8 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
          uVar2 = *(undefined4 *)(plVar8[1] + 0xfc);
          uVar6 = thunk_FUN_0224e54c(*(long *)(param_1 + 0x70),*(undefined8 *)(*plVar8 + 0x80));
          func_0x04608620(&iStack_b8,uVar6,uVar2);
          iVar3 = iStack_b8;
          plVar8 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
                    /* try { // try from 02572078 to 026720bb has its CatchHandler @ 02572368 */
          uVar2 = *(undefined4 *)(plVar8[1] + 0xfc);
          uVar6 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar8 + 0x80));
          func_0x04608620(&iStack_b8,uVar6,uVar2);
          lVar7 = *(long *)(param_1 + 0x70);
          if (lVar7 != 0) {
            uStack_78 = *(undefined8 *)(lVar7 + 0x38);
            uStack_80 = *(undefined8 *)(lVar7 + 0x30);
            uStack_68 = *(undefined8 *)(lVar7 + 0x48);
            uStack_70 = *(undefined8 *)(lVar7 + 0x40);
            bVar1 = iVar3 <= iStack_b8;
            uVar5 = CloudPrefsBool__get_Value_24eb0d0(&uStack_80,0);
                    /* try { // try from 025720bc to 0267210b has its CatchHandler @ 02571df8 */
            uVar2 = 0xcbb1848a;
            if ((uVar5 & 1) == 0 && bVar1) {
              uVar2 = 0x39740faf;
            }
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                      (param_2,uVar2,0);
            if (*(long *)(param_1 + 0x70) != 0) {
              plVar8 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
              uVar2 = *(undefined4 *)(plVar8[1] + 0xfc);
              uVar6 = thunk_FUN_0224e54c(*(long *)(param_1 + 0x70),*(undefined8 *)(*plVar8 + 0x80));
                    /* try { // try from 0257210c to 02672113 has its CatchHandler @ 0257236c */
              func_0x04608620(&iStack_b8,uVar6,uVar2);
              iVar3 = iStack_b8;
              plVar8 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
                    /* try { // try from 0257212c to 02672177 has its CatchHandler @ 02572374 */
              uVar2 = *(undefined4 *)(plVar8[1] + 0xfc);
              uVar6 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar8 + 0x80));
              func_0x04608620(&iStack_b8,uVar6,uVar2);
              if (iVar3 == iStack_b8) {
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                          (param_2,0xa018bd61,0);
              }
                    /* try { // try from 02572178 to 026721bb has its CatchHandler @ 02571df8 */
              return;
            }
          }
        }
      }
    }
  }
LAB_02572180:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

