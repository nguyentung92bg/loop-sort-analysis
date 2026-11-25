/* IL2CPP: BoosterContainer$$GrantFreeEgp
void BoosterContainer__GrantFreeEgp (BoosterContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterContainer$$GrantFreeEgp
   void BoosterContainer__GrantFreeEgp (BoosterContainer_o* __this, const MethodInfo* method); */

void BoosterContainer__GrantFreeEgp_256a29c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4c192 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4c192 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar2;
  }
  uVar6 = CloudPrefsBool__get_Value_24eb0d0(*(long *)(lVar5 + 0xb8) + 0x790,0);
  if ((uVar6 & 1) == 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    CloudPrefsBool__Set_24eb1bc(*(long *)(lVar5 + 0xb8) + 0x790,1,0);
    iVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(*(long *)puVar2 + 0xb8) + 0x750,0);
    if (0 < iVar3) {
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_0266a42c;
      lVar5 = *(long *)puVar2;
      iVar3 = *(int *)(*(long *)(param_1 + 0x80) + 0x10);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar2;
      }
      iVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar5 + 0xb8) + 0x750,0);
      uVar1 = iVar3 - iVar4;
      lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      iVar3 = CloudPrefsInt__get_Value_24e99c0(lVar5 + 0x770,0);
      CloudPrefsInt__set_Value_24e9a2c
                (lVar5 + 0x770,iVar3 + (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)),0);
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    iVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar5 + 0xb8) + 0x60,0);
    if (iVar3 < 2) {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(lVar5 + 0xb8);
      iVar3 = CloudPrefsInt__get_Value_24e99c0(lVar5 + 0x770,0);
      puVar2 = PTR_DAT_049c5aa8;
      if (*(long *)(param_1 + 0x80) != 0) {
        iVar3 = *(int *)(*(long *)(param_1 + 0x80) + 0x10) + iVar3;
        if ((bRam0000000004f4bcb1 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c5aa8,iVar3,0);
          bRam0000000004f4bcb1 = 1;
        }
        uStack_38 = *(undefined8 *)(lVar5 + 0x778);
        uStack_40 = *(undefined8 *)(lVar5 + 0x770);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        PlayerPrefsInt__Set_3f0dba4(&uStack_40,iVar3,0);
        return;
      }
LAB_0266a42c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

