/* IL2CPP: KeyBlockGroup$$OnReturn
void KeyBlockGroup__OnReturn (KeyBlockGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: KeyBlockGroup$$OnReturn
   void KeyBlockGroup__OnReturn (KeyBlockGroup_o* __this, const MethodInfo* method); */

void KeyBlockGroup__OnReturn_23eb5ec(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* catch() { ... } // from try @ 024eb5dc with catch @ 024eb5fc */
                    /* try { // try from 024eb600 to 025eb607 has its CatchHandler @ 024eb610 */
  if ((bRam0000000004f4b61e & 1) == 0) {
                    /* try { // try from 024eb608 to 025eb613 has its CatchHandler @ 024eaf70 */
    FUN_021f03f8(PTR_DAT_049c1df0);
                    /* catch() { ... } // from try @ 024eb600 with catch @ 024eb610 */
    bRam0000000004f4b61e = 1;
  }
  GameBehaviourBase__OnReturn_24f6ea8(param_1,0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xc0),0);
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  lVar6 = *(long *)(param_1 + 0xd8);
  uVar7 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 200) = **(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  *(undefined4 *)(param_1 + 0xd0) = uVar7;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *(long *)PTR_DAT_049c1df0;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  uVar3 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(lVar6 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear_31229cc(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
  }
  lVar6 = *(long *)(param_1 + 0xa8);
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  puVar2 = PTR_DAT_049bbf90;
  if (lVar6 != 0) {
    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Transform__set_localPosition_3c2c450(*puVar5,puVar5[1],puVar5[2],lVar6,0);
    lVar6 = *(long *)(param_1 + 0xa8);
    if (cRam0000000004f4a191 == '\0') {
      FUN_021f03f8(PTR_DAT_049bc158);
      cRam0000000004f4a191 = '\x01';
    }
    if (lVar6 != 0) {
      puVar5 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
      UnityEngine_Transform__set_localRotation_3c2d9f0
                (*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar6,0);
      lVar6 = *(long *)(param_1 + 0xa8);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if (lVar6 != 0) {
        uStack_28 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        uStack_24 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14);
        if ((bRam0000000004f58a11 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a11 = 1;
        }
        if (lVar6 != 0) {
          lVar4 = *(long *)(lVar6 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar6,0);
          }
          if (pcRam0000000004f58a78 == (code *)0x0) {
            pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
          }
          (*pcRam0000000004f58a78)(lVar4,auStack_2c);
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

