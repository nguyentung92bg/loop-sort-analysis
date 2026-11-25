/* IL2CPP: TagCarrierSystem$$OnCarrierInteractUpdate
void TagCarrierSystem__OnCarrierInteractUpdate (TagCarrierSystem_o* __this, CarrierInteractUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TagCarrierSystem$$OnCarrierInteractUpdate
   void TagCarrierSystem__OnCarrierInteractUpdate (TagCarrierSystem_o* __this,
   CarrierInteractUpdateMessage_o m, const MethodInfo* method); */

ulong TagCarrierSystem__OnCarrierInteractUpdate_24ad0e0(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR_DAT_049c1410;
  if ((bRam0000000004f4bb41 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6960);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c6988);
    FUN_021f03f8(PTR_DAT_049c6990);
    bRam0000000004f4bb41 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if ((param_2 != 0) && (lVar7 != 0)) {
    uVar4 = FUN_024f5708(lVar7,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)PTR_DAT_049c6990);
    if ((uVar4 & 1) == 0) {
      return uVar4;
    }
    lVar7 = *(long *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (lVar7 != 0) {
      puVar5 = (ulong *)FUN_024f6008(lVar7,*(undefined8 *)(param_2 + 0x60),
                                     *(undefined8 *)PTR_DAT_049c6988);
      uVar4 = *puVar5;
      if ((param_3 & 1) == 0) {
        if (uVar4 != 0) {
          if (*(char *)(uVar4 + 0x120) == '\0') {
            return uVar4;
          }
          *(undefined1 *)(uVar4 + 0x120) = 0;
          if ((*(long *)(uVar4 + 0xa0) != 0) &&
             (lVar7 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(uVar4 + 0xa0),0),
             lVar7 != 0)) {
            if ((bRam0000000004f58a0d & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a26ad0,0);
              bRam0000000004f58a0d = 1;
            }
            if (lVar7 != 0) {
              lVar6 = *(long *)(lVar7 + 0x10);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar7,0);
              }
              if (pcRam0000000004f58a58 == (code *)0x0) {
                pcRam0000000004f58a58 = (code *)FUN_021f03bc(&UNK_013b3a78);
              }
              uVar4 = (*pcRam0000000004f58a58)(lVar6,&stack0xffffffffffffffd0);
              return uVar4;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else if (uVar4 != 0) {
        uVar2 = uVar4;
        if ((bRam0000000004f4bb3b & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b6110);
          uVar2 = FUN_021f03f8(PTR_DAT_049c67c0);
          bRam0000000004f4bb3b = 1;
        }
        if (*(char *)(uVar4 + 0x120) != '\0') {
          return uVar2;
        }
        *(undefined1 *)(uVar4 + 0x120) = 1;
        auVar8 = LitMotion_LMotion__Create_2eaa2a0
                           (*(undefined4 *)(uVar4 + 0x110),*(undefined4 *)(uVar4 + 0x114),
                            *(undefined4 *)(uVar4 + 0x118),*(undefined4 *)(uVar4 + 0x11c),
                            *(undefined4 *)(uVar4 + 0x100),*(undefined4 *)(uVar4 + 0x104),
                            *(undefined4 *)(uVar4 + 0x108),*(undefined4 *)(uVar4 + 0x10c),0);
        if (*(long *)(uVar4 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar3 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(uVar4 + 0xa0),0);
        auVar8 = LitMotion_Extensions_LitMotionTransformExtensions__BindToRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26735e8
                           (auVar8._0_8_,auVar8._8_8_,uVar3,*(undefined8 *)PTR_DAT_049c67c0);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (uVar4 != 0) {
          GameBehaviourBase__Register_24f4ce4(uVar4,auVar8._0_8_,auVar8._8_8_ & 0xffffffff,0);
          return auVar8._0_8_;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

