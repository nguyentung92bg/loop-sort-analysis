/* IL2CPP: TagCarrierSystem$$OnCarrierComplete
void TagCarrierSystem__OnCarrierComplete (TagCarrierSystem_o* __this, CarrierCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TagCarrierSystem$$OnCarrierComplete
   void TagCarrierSystem__OnCarrierComplete (TagCarrierSystem_o* __this, CarrierCompleteMessage_o m,
   const MethodInfo* method); */

void TagCarrierSystem__OnCarrierComplete_24ad1f0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_70 [16];
  
  puVar2 = PTR_DAT_049c1410;
  if ((bRam0000000004f4bb42 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6960);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c6988);
                    /* try { // try from 025ad244 to 026ad2cf has its CatchHandler @ 025ad244
                       catch() { ... } // from try @ 025ad244 with catch @ 025ad244
                       catch() { ... } // from try @ 025ad374 with catch @ 025ad244
                       catch() { ... } // from try @ 025ad3e0 with catch @ 025ad244
                       catch() { ... } // from try @ 025ad42c with catch @ 025ad244 */
    FUN_021f03f8(PTR_DAT_049c6990);
    bRam0000000004f4bb42 = 1;
  }
  lVar12 = *(long *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if ((param_2 != 0) && (lVar12 != 0)) {
    uVar8 = FUN_024f5708(lVar12,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)PTR_DAT_049c6990);
    if ((uVar8 & 1) == 0) {
                    /* try { // try from 025ad2d0 to 026ad2eb has its CatchHandler @ 025ad3f4 */
      return;
    }
    lVar12 = *(long *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (lVar12 != 0) {
      plVar9 = (long *)FUN_024f6008(lVar12,*(undefined8 *)(param_2 + 0x60),
                                    *(undefined8 *)PTR_DAT_049c6988);
      lVar12 = *plVar9;
      if (lVar12 != 0) {
        if ((bRam0000000004f4bb3c & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b6110);
          FUN_021f03f8(PTR_DAT_049c1670);
          FUN_021f03f8(PTR_DAT_049c2808);
          FUN_021f03f8(PTR_DAT_049c1680);
          FUN_021f03f8(PTR_DAT_049c1690);
          bRam0000000004f4bb3c = 1;
        }
        puVar2 = PTR_DAT_049c1690;
        auStack_70._0_8_ = 0;
        auStack_70._8_8_ = 0;
        if (*(long *)(lVar12 + 0xa0) != 0) {
          uVar6 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(lVar12 + 0xa0),0);
          if (cRam0000000004f4a190 == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a190 = '\x01';
          }
          puVar5 = PTR_DAT_049c2808;
          puVar4 = PTR_DAT_049c1680;
          puVar3 = PTR_DAT_049c1670;
          puVar1 = PTR_DAT_049b6110;
          lVar7 = *(long *)puVar2;
          lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          uVar13 = *(undefined4 *)(lVar10 + 0xc);
          uVar14 = *(undefined4 *)(lVar10 + 0x10);
          uVar15 = *(undefined4 *)(lVar10 + 0x14);
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_021f0574();
            lVar7 = *(long *)puVar2;
          }
          puVar11 = *(undefined4 **)(lVar7 + 0xb8);
          auStack_70 = LitMotion_LMotion__Create_2eaa1b4
                                 (uVar13,uVar14,uVar15,*puVar11,puVar11[1],puVar11[2],0x3f000000,0);
          auVar16 = FUN_024f6e90(0x3e800000,auStack_70,0,1,*(undefined8 *)puVar5);
          auStack_70 = auVar16;
          auVar16 = FUN_024f4e50(auStack_70,0x19,*(undefined8 *)puVar4);
          auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                              (auVar16._0_8_,auVar16._8_8_,uVar6,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,lVar12,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

