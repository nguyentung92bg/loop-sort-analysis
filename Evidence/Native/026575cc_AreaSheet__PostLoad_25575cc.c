/* IL2CPP: AreaSheet$$PostLoad
void AreaSheet__PostLoad (AreaSheet_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet$$PostLoad
   void AreaSheet__PostLoad (AreaSheet_o* __this, Cathei_BakingSheet_SheetConvertingContext_o*
   context, const MethodInfo* method); */

void AreaSheet__PostLoad_25575cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  long *plVar17;
  undefined8 uStack_68;
  undefined4 uStack_54;
  
                    /* try { // try from 026575cc to 027575cf has its CatchHandler @ 026575d8 */
  puVar1 = PTR_DAT_049cb2c8;
                    /* try { // try from 026575d0 to 027575db has its CatchHandler @ 026574f0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026575cc with catch @ 026575d8
                        */
  if ((bRam0000000004f4c0b8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb2d0);
    FUN_021f03f8(PTR_DAT_049cb2d8);
    FUN_021f03f8(PTR_DAT_049cb2e0);
    FUN_021f03f8(PTR_DAT_049cb2e8);
    FUN_021f03f8(PTR_DAT_049cb2f0);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049cb2c8);
    FUN_021f03f8(PTR_DAT_049cb2f8);
    FUN_021f03f8(PTR_DAT_049cb300);
    bRam0000000004f4c0b8 = 1;
  }
  Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___PostLoad_2987db4
            (param_1,param_2,*(undefined8 *)puVar1);
  puVar5 = PTR_DAT_049cb300;
  puVar4 = PTR_DAT_049cb2f0;
  puVar3 = PTR_DAT_049cb2e8;
  puVar2 = PTR_DAT_049cb2d8;
  puVar1 = PTR_DAT_049b3c20;
  plVar17 = *(long **)(param_1 + 0x10);
  if (plVar17 != (long *)0x0) {
    iVar16 = 0;
    do {
      lVar11 = *plVar17;
      lVar10 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0265770c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plVar17,lVar10,0);
LAB_0265770c:
      iVar7 = (*(code *)*puVar8)(plVar17,puVar8[1]);
      plVar17 = *(long **)(param_1 + 0x10);
      if (iVar7 <= iVar16) {
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          FUN_021f0574();
          lVar10 = *(long *)puVar5;
        }
        puVar8 = *(undefined8 **)(lVar10 + 0xb8);
        lVar11 = puVar8[1];
        if (lVar11 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            FUN_021f0574();
            puVar8 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
          }
          uVar13 = *puVar8;
          lVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb2e0);
          System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                    (lVar11,uVar13,*(undefined8 *)PTR_DAT_049cb2f8,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
          *plVar9 = lVar11;
          thunk_FUN_021f190c(plVar9,lVar11);
        }
        bVar6 = System_Linq_Enumerable__Any___Il2CppFullySharedGenericType__25da460
                          (plVar17,lVar11,*(undefined8 *)puVar2);
        *(byte *)(param_1 + 0x48) = bVar6 & 1;
        return;
      }
      if (plVar17 == (long *)0x0) break;
      lVar11 = *plVar17;
      lVar10 = *(long *)puVar4;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02657774;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plVar17,lVar10,0);
LAB_02657774:
      lVar10 = (*(code *)*puVar8)(plVar17,iVar16,puVar8[1]);
      plVar17 = *(long **)(param_1 + 0x10);
      if (plVar17 == (long *)0x0) break;
      lVar12 = *plVar17;
      lVar11 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_026577dc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plVar17,lVar11,0);
LAB_026577dc:
      iVar7 = (*(code *)*puVar8)(plVar17,puVar8[1]);
      iVar16 = iVar16 + 1;
      if (iVar16 < iVar7) {
        plVar17 = *(long **)(param_1 + 0x10);
        if (plVar17 == (long *)0x0) break;
        lVar12 = *plVar17;
        lVar11 = *(long *)puVar4;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar11) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02657854;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(plVar17,lVar11,0);
LAB_02657854:
        lVar11 = (*(code *)*puVar8)(plVar17,iVar16,puVar8[1]);
        if (lVar11 == 0) break;
        uStack_54 = *(undefined4 *)(lVar11 + 0x24);
        uStack_68 = 0;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_68,&uStack_54,*(undefined8 *)puVar1);
        uVar13 = uStack_68;
      }
      else {
        uVar13 = 0;
      }
      if (lVar10 == 0) break;
      *(undefined8 *)(lVar10 + 0x28) = uVar13;
      plVar17 = *(long **)(param_1 + 0x10);
    } while (plVar17 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

