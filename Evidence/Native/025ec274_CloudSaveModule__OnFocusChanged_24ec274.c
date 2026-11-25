/* IL2CPP: CloudSaveModule$$OnFocusChanged
void CloudSaveModule__OnFocusChanged (CloudSaveModule_o* __this, bool hasFocus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$OnFocusChanged
   void CloudSaveModule__OnFocusChanged (CloudSaveModule_o* __this, bool hasFocus, const MethodInfo*
   method); */

void CloudSaveModule__OnFocusChanged_24ec274(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 aauStack_50 [2] [16];
  
                    /* try { // try from 025ec280 to 026ec283 has its CatchHandler @ 025ec284 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ec280 with catch @ 025ec284
                       try { // try from 025ec284 to 026ec2a7 has its CatchHandler @ 025ebf00 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ec1c8 with catch @ 025ec288
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ec1e8 with catch @ 025ec28c
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025ec248 with catch @ 025ec28c
                        */
  if ((bRam0000000004f4bcdc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8008);
    bRam0000000004f4bcdc = 1;
  }
                    /* try { // try from 025ec2a8 to 026ec2ab has its CatchHandler @ 025ec2c4 */
                    /* try { // try from 025ec2ac to 026ec2c7 has its CatchHandler @ 025ebf00 */
  if ((param_2 & 1) != 0) {
    CloudSaveModule__TryReconnect_24ec37c(param_1,0);
                    /* catch() { ... } // from try @ 025ec2a8 with catch @ 025ec2c4 */
                    /* try { // try from 025ec2c8 to 026ec2cf has its CatchHandler @ 025ec2d8 */
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(&stack0xffffffffffffffdc,0);
    return;
  }
                    /* try { // try from 025ec2d0 to 026ec2db has its CatchHandler @ 025ebf00 */
  plVar12 = *(long **)(param_1 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ec2c8 with catch @ 025ec2d8
                        */
  lVar7 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_025ec32c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049c8008,0);
LAB_025ec32c:
  lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
  if (lVar7 == 0) {
    return;
  }
  UnityEngine_PlayerPrefs__Save_3c10650(0);
  CloudSaveModule__MarkDirty_24ed184(param_1);
  auVar14 = CloudSaveModule__FlushDirty_24ee1e8(param_1);
  puVar1 = PTR_DAT_049b5138;
  if ((bRam0000000004f53616 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bd380,auVar14._8_8_,0);
    FUN_021f03f8(PTR_DAT_04a119a0);
    FUN_021f03f8(PTR_DAT_04a119a8);
    FUN_021f03f8(PTR_DAT_04a11970);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f53616 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  aauStack_50[0] = auVar14;
  thunk_FUN_021f190c(aauStack_50,0);
  auVar14 = aauStack_50[0];
  uVar4 = aauStack_50[0]._8_8_;
  uVar3 = aauStack_50[0]._0_8_;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  puVar1 = PTR_DAT_049b54e0;
  if ((long *)uVar3 != (long *)0x0) {
    lVar7 = *(long *)uVar3;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_038da3ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(uVar3,*(long *)PTR_DAT_049b54e0,0);
LAB_038da3ac:
    iVar5 = (*(code *)*puVar6)(uVar3,uVar4 & 0xffffffff,puVar6[1]);
    puVar2 = PTR_DAT_04a11970;
    if (iVar5 == 0) {
      lVar7 = *(long *)PTR_DAT_04a11970;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        lVar7 = *(long *)puVar2;
      }
      puVar6 = *(undefined8 **)(lVar7 + 0xb8);
      lVar8 = puVar6[3];
      if (lVar8 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_021f0574();
          puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar13 = *puVar6;
        lVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bd380);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (lVar8,uVar13,*(undefined8 *)PTR_DAT_04a119a8,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
        *plVar12 = lVar8;
        thunk_FUN_021f190c(plVar12,lVar8);
      }
      aauStack_50[0] = auVar14;
      uVar13 = Cysharp_Threading_Tasks_Internal_StateTuple__Create___Il2CppFullySharedGenericType__26cf5fc
                         (aauStack_50,*(undefined8 *)PTR_DAT_04a119a0);
      if (cRam0000000004f4c73c == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f4c73c = '\x01';
      }
      lVar9 = *(long *)uVar3;
      lVar7 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_038da55c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(uVar3,lVar7,1);
LAB_038da55c:
      (*(code *)*puVar6)(uVar3,lVar8,uVar13,uVar4 & 0xffffffff,puVar6[1]);
      return;
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  if ((long *)uVar3 != (long *)0x0) {
    lVar8 = *(long *)uVar3;
    lVar7 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_038da538;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(uVar3,lVar7,2);
LAB_038da538:
    (*(code *)*puVar6)(uVar3,uVar4 & 0xffffffff,puVar6[1]);
  }
  return;
}

