/* IL2CPP: AreaSheet$$GetArea
AreaSheet_Row_o* AreaSheet__GetArea (AreaSheet_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet$$GetArea
   AreaSheet_Row_o* AreaSheet__GetArea (AreaSheet_o* __this, int32_t level, const MethodInfo*
   method); */

long AreaSheet__GetArea_25579c0(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000004f4c0ba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb2d0);
    FUN_021f03f8(PTR_DAT_049cb2e8);
    FUN_021f03f8(PTR_DAT_049cb2f0);
    bRam0000000004f4c0ba = 1;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049cb2e8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02657a68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049cb2e8,0);
LAB_02657a68:
    puVar1 = PTR_DAT_049cb2f0;
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    while( true ) {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 0;
      }
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) break;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02657adc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)puVar1,0);
LAB_02657adc:
      lVar4 = (*(code *)*puVar3)(plVar7,iVar2,puVar3[1]);
      if (lVar4 == 0) break;
      if (*(int *)(lVar4 + 0x24) <= param_2) {
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

