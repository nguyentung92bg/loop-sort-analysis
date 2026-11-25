/* IL2CPP: CloudSaveModule$$StoreLevel
int32_t CloudSaveModule__StoreLevel (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$StoreLevel
   int32_t CloudSaveModule__StoreLevel (CloudSaveModule_o* __this, const MethodInfo* method); */

undefined8 CloudSaveModule__StoreLevel_24ecb08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025eca30 with catch @ 025ecb08
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ec9a0 with catch @ 025ecb0c
                        */
                    /* try { // try from 025ecb20 to 026ecb23 has its CatchHandler @ 025ecb3c */
  if ((bRam0000000004f4bce2 & 1) == 0) {
                    /* try { // try from 025ecb24 to 026ecb3f has its CatchHandler @ 025ec88c */
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049c8008);
                    /* catch() { ... } // from try @ 025ecb20 with catch @ 025ecb3c */
                    /* try { // try from 025ecb40 to 026ecb47 has its CatchHandler @ 025ecb50 */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 025ecb48 to 026ecb53 has its CatchHandler @ 025ec88c */
    bRam0000000004f4bce2 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ecb40 with catch @ 025ecb50
                        */
  plVar9 = *(long **)(param_1 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_025ecbac;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c8008,0);
LAB_025ecbac:
  plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
  puVar2 = PTR_DAT_049c3da0;
  puVar1 = PTR_DAT_049b5310;
  if (plVar9 != (long *)0x0) {
    lVar5 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
    lVar6 = *plVar9;
    lVar4 = *(long *)puVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x78);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_025ecc38;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar9,lVar4,0);
LAB_025ecc38:
    uVar7 = (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
    if ((uVar7 & 1) != 0) {
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar1;
      }
      lVar6 = *plVar9;
      lVar4 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x78);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_025ecccc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar9,lVar4,4);
LAB_025ecccc:
                    /* WARNING: Could not recover jumptable at 0x025ecce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
      return uVar10;
    }
  }
  return 0;
}

