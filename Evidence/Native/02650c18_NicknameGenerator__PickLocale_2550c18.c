/* IL2CPP: NicknameGenerator$$PickLocale
System_String_o* NicknameGenerator__PickLocale (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NicknameGenerator$$PickLocale
   System_String_o* NicknameGenerator__PickLocale (const MethodInfo* method); */

undefined8 NicknameGenerator__PickLocale_2550c18(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_049cad20;
  if ((bRam0000000004f4c075 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cad20);
    bRam0000000004f4c075 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (lVar4 != 0) {
    uVar6 = (uint)*(ulong *)(lVar4 + 0x18);
    if ((int)uVar6 < 1) {
      iVar3 = 0;
    }
    else {
      uVar5 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
      iVar3 = 0;
      uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      piVar9 = (int *)(lVar4 + 0x28);
      do {
        if (uVar7 == 0) goto LAB_02650d50;
        uVar5 = uVar5 - 1;
        uVar7 = uVar7 - 1;
        iVar3 = iVar3 + *piVar9;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    iVar3 = UnityEngine_Random__Range_3c11c94(0,iVar3,0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
      lVar4 = *(long *)puVar2;
    }
    lVar8 = **(long **)(lVar4 + 0xb8);
    if (lVar8 != 0) {
      uVar6 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar6) {
        uVar10 = 0;
        do {
          if (uVar6 == uVar10) goto LAB_02650d50;
          lVar1 = lVar8 + (long)(int)uVar10 * 0x10;
          iVar3 = iVar3 - *(int *)(lVar1 + 0x28);
          if (iVar3 < 0) {
            return *(undefined8 *)(lVar1 + 0x20);
          }
          uVar10 = uVar10 + 1;
        } while ((uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) != uVar10);
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574(lVar4);
        lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar8 == 0) goto LAB_02650d54;
      }
      if (*(int *)(lVar8 + 0x18) != 0) {
        return *(undefined8 *)(lVar8 + 0x20);
      }
LAB_02650d50:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
  }
LAB_02650d54:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

