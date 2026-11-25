/* IL2CPP: LockCarrierGroup$$OnReturn
void LockCarrierGroup__OnReturn (LockCarrierGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LockCarrierGroup$$OnReturn
   void LockCarrierGroup__OnReturn (LockCarrierGroup_o* __this, const MethodInfo* method); */

void LockCarrierGroup__OnReturn_24a65ac(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam0000000004f4bb19 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2618);
    bRam0000000004f4bb19 = 1;
  }
  GameBehaviourBase__OnReturn_24f6ea8(param_1,0);
  lVar5 = *(long *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0xf4) = 0;
  if (lVar5 != 0) {
    lVar3 = *(long *)PTR_DAT_049c2618;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    uVar2 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
    }
    else {
      iVar4 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      if (0 < iVar4) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar5 + 0x10),0,iVar4,0);
      }
    }
    lVar5 = UnityEngine_Component__get_transform_3c18724(param_1,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    puVar1 = PTR_DAT_049bbf90;
    if (lVar5 != 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc
                (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                 *(undefined4 *)(lVar3 + 0x14),lVar5,0);
      lVar5 = *(long *)(param_1 + 0xa0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if (lVar5 != 0) {
        lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
        UnityEngine_Transform__set_localScale_3c2ddfc
                  (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                   *(undefined4 *)(lVar3 + 0x14),lVar5,0);
        if (*(long *)(param_1 + 0xc0) != 0) {
          UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c
                    (0,*(long *)(param_1 + 0xc0),0,0);
          iVar4 = 0;
          while (*(long *)(param_1 + 0xb8) != 0) {
            UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c
                      (0,*(long *)(param_1 + 0xb8),iVar4,0);
            iVar4 = iVar4 + 1;
            if (iVar4 == 7) {
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

