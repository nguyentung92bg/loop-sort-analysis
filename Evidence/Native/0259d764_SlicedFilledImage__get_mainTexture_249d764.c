/* IL2CPP: SlicedFilledImage$$get_mainTexture
UnityEngine_Texture_o* SlicedFilledImage__get_mainTexture (SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$get_mainTexture
   UnityEngine_Texture_o* SlicedFilledImage__get_mainTexture (SlicedFilledImage_o* __this, const
   MethodInfo* method); */

long SlicedFilledImage__get_mainTexture_249d764(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bad2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bcb90);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bad2 = 1;
  }
  uVar3 = SlicedFilledImage__get_activeSprite_249d660(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
    uVar3 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
LAB_0259d8a8:
      puVar1 = PTR_DAT_049bcb90;
      lVar5 = *(long *)PTR_DAT_049bcb90;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar1;
      }
      return *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    }
    lVar5 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    if (lVar5 != 0) {
      uVar3 = UnityEngine_Material__get_mainTexture_3be6434(lVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar1);
      }
      uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar3,0,0);
      if ((uVar4 & 1) == 0) goto LAB_0259d8a8;
      lVar5 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
      if (lVar5 != 0) {
        if ((bRam0000000004f5731a & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b89f8,0);
          bRam0000000004f5731a = 1;
        }
        iVar2 = UnityEngine_Material__GetFirstPropertyNameIdByAttribute_3be62dc(lVar5,0x80);
        puVar1 = PTR_DAT_049b89f8;
        if (iVar2 < 0) {
          lVar8 = *(long *)PTR_DAT_049b89f8;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            FUN_021f0574();
            lVar8 = *(long *)puVar1;
          }
          iVar2 = *(int *)(*(long *)(lVar8 + 0xb8) + 4);
        }
        if ((bRam0000000004f5735d & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a25ca8);
          FUN_021f03f8(PTR_DAT_049b89f8);
          FUN_021f03f8(PTR_DAT_04a25a88);
          bRam0000000004f5735d = 1;
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar8 = *(long *)(lVar5 + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar5,0);
        }
        if (*(int *)(*(long *)PTR_DAT_049b89f8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        puVar1 = PTR_DAT_04a25a88;
        if (pcRam0000000004f57598 == (code *)0x0) {
          pcRam0000000004f57598 = (code *)FUN_021f03bc(&UNK_013bce69);
        }
        uVar4 = (*pcRam0000000004f57598)(lVar8,iVar2);
        lVar5 = *(long *)puVar1;
        goto FUN_03cba774;
      }
    }
  }
  else {
    lVar5 = SlicedFilledImage__get_activeSprite_249d660(param_1);
    if (lVar5 != 0) {
      if ((bRam0000000004f564e8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a25640,0);
        FUN_021f03f8(PTR_DAT_04a25658);
        bRam0000000004f564e8 = 1;
      }
      puVar1 = PTR_DAT_04a25658;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar5,0);
      }
      if (pcRam0000000004f56570 == (code *)0x0) {
        pcRam0000000004f56570 = (code *)FUN_021f03bc(&UNK_013ccd29);
      }
      uVar4 = (*pcRam0000000004f56570)(lVar8);
      lVar5 = *(long *)puVar1;
FUN_03cba774:
      if (*(long *)(lVar5 + 0x38) == 0) {
        FUN_02229774(lVar5);
      }
      if (uVar4 != 0) {
        if (cRam0000000004f4c36d == '\0') {
          FUN_021f03f8(&DAT_04bdea20);
          cRam0000000004f4c36d = '\x01';
        }
        if ((uVar4 & 1) == 0) {
          plVar6 = (long *)System_IntPtr__op_Explicit_314af64();
          lVar8 = *plVar6;
        }
        else {
          lVar8 = System_Runtime_InteropServices_GCHandle__GetTarget_301d554(uVar4,0);
        }
        lVar5 = **(long **)(lVar5 + 0x38);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02229718(lVar5);
        }
        if (lVar8 != 0) {
          lVar7 = thunk_FUN_0222c938(lVar8,lVar5);
          if (lVar7 != 0) {
            return lVar7;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar8,lVar5);
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

