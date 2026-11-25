/* IL2CPP: NakamaServices$$TryGetApi
bool NakamaServices__TryGetApi (Voodoo_Nakama_Services_INakamaApiService_o** s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaServices$$TryGetApi
   bool NakamaServices__TryGetApi (Voodoo_Nakama_Services_INakamaApiService_o** s, const MethodInfo*
   method); */

uint NakamaServices__TryGetApi_2243784(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_049b55a0;
  if ((bRam0000000004f49b88 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b55a0);
    bRam0000000004f49b88 = 1;
  }
  uVar3 = Voodoo_Sauce_Core_VoodooSauceServices__TryGet_object__272d778
                    (param_1,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_049b5578;
  if ((uVar3 & 1) != 0) {
    plVar8 = (long *)*param_1;
    if (plVar8 == (long *)0x0) {
LAB_023439a0:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar8;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02343830;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b5578,0);
LAB_02343830:
    uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if ((uVar3 & 1) != 0) {
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) goto LAB_023439a0;
      lVar6 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_02343898;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar1,2);
LAB_02343898:
      uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((uVar3 & 1) != 0) {
        plVar8 = (long *)*param_1;
        if (plVar8 == (long *)0x0) goto LAB_023439a0;
        lVar6 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_02343900;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar1,3);
LAB_02343900:
        uVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        uVar3 = System_String__IsNullOrEmpty_2f7c924(uVar5,0);
        if ((uVar3 & 1) == 0) {
          plVar8 = (long *)*param_1;
          if (plVar8 == (long *)0x0) goto LAB_023439a0;
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                goto LAB_02343984;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar1,5);
LAB_02343984:
          uVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
          uVar2 = System_String__IsNullOrEmpty_2f7c924(uVar5,0);
          uVar2 = uVar2 ^ 1;
          goto LAB_0234391c;
        }
      }
    }
  }
  uVar2 = 0;
LAB_0234391c:
  return uVar2 & 1;
}

