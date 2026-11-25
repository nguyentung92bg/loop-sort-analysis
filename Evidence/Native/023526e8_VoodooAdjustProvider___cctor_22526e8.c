/* IL2CPP: VoodooAdjustProvider$$.cctor
void VoodooAdjustProvider___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$.cctor
   void VoodooAdjustProvider___cctor (const MethodInfo* method); */

void VoodooAdjustProvider___cctor_22526e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  puVar6 = PTR_DAT_049b6030;
  puVar5 = PTR_DAT_049b6028;
  puVar4 = PTR_DAT_049b6020;
  puVar3 = PTR_DAT_049b6018;
  puVar2 = PTR_DAT_049b6010;
  puVar1 = PTR_DAT_049b5f70;
  if ((bRam0000000004f49ba1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6038);
    FUN_021f03f8(PTR_DAT_049b6030);
    FUN_021f03f8(PTR_DAT_049b6028);
    FUN_021f03f8(PTR_DAT_049b5f70);
    FUN_021f03f8(PTR_DAT_049b6018);
    FUN_021f03f8(PTR_DAT_049b6020);
    FUN_021f03f8(PTR_DAT_049b6010);
    bRam0000000004f49ba1 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  CloudPrefsInt___ctor_24e98a8(&uStack_70,*(undefined8 *)puVar2,0,0,0);
  lVar8 = *(long *)puVar1;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x10) = uStack_68;
  *(undefined8 *)(lVar9 + 8) = uStack_70;
  *(undefined8 *)(lVar9 + 0x20) = uStack_58;
  *(undefined8 *)(lVar9 + 0x18) = uStack_60;
  thunk_FUN_021f190c(*(long *)(lVar8 + 0xb8) + 0x10,0);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  CloudPrefsInt___ctor_24e98a8(&uStack_90,*(undefined8 *)puVar3,0,0,0);
  lVar8 = *(long *)puVar1;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x30) = uStack_88;
  *(undefined8 *)(lVar9 + 0x28) = uStack_90;
  *(undefined8 *)(lVar9 + 0x40) = uStack_78;
  *(undefined8 *)(lVar9 + 0x38) = uStack_80;
  thunk_FUN_021f190c(*(long *)(lVar8 + 0xb8) + 0x30,0);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  CloudPrefsInt___ctor_24e98a8(&uStack_b0,*(undefined8 *)puVar4,0,0,0);
  lVar8 = *(long *)puVar1;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x50) = uStack_a8;
  *(undefined8 *)(lVar9 + 0x48) = uStack_b0;
  *(undefined8 *)(lVar9 + 0x60) = uStack_98;
  *(undefined8 *)(lVar9 + 0x58) = uStack_a0;
  thunk_FUN_021f190c(*(long *)(lVar8 + 0xb8) + 0x50,0);
  lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar8,*(undefined8 *)puVar6);
  puVar2 = PTR_DAT_049b6038;
  if (lVar8 != 0) {
    uStack_44 = 0;
    FUN_02333498(lVar8,&uStack_44,*(undefined8 *)PTR_DAT_049b6038);
    uStack_44 = 3;
    FUN_02333498(lVar8,&uStack_44,*(undefined8 *)puVar2);
    plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
    *plVar7 = lVar8;
    thunk_FUN_021f190c(plVar7,lVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

