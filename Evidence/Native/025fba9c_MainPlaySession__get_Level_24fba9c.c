/* IL2CPP: MainPlaySession$$get_Level
LevelSheet_Level_o* MainPlaySession__get_Level (MainPlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainPlaySession$$get_Level
   LevelSheet_Level_o* MainPlaySession__get_Level (MainPlaySession_o* __this, const MethodInfo*
   method); */

void MainPlaySession__get_Level_24fba9c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
    iVar3 = MainPlaySession__get_MaxLevelOffset_24fba40();
    if (lVar13 != 0) {
      if ((bRam0000000004f4c136 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049cba70,iVar3,0,0);
        FUN_021f03f8(PTR_DAT_049cba78);
        FUN_021f03f8(PTR_DAT_049cba80);
        bRam0000000004f4c136 = 1;
      }
      uStack_58 = *(undefined8 *)(lVar13 + 0x50);
      uStack_60 = *(undefined8 *)(lVar13 + 0x48);
      uStack_48 = *(undefined8 *)(lVar13 + 0x60);
      uStack_50 = *(undefined8 *)(lVar13 + 0x58);
      iVar4 = CloudPrefsInt__get_Value_24e99c0(&uStack_60,0);
      puVar2 = PTR_DAT_049cba78;
      plVar14 = *(long **)(lVar13 + 0x10);
      if (plVar14 != (long *)0x0) {
        lVar9 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049cba78) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_026627d0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049cba78,0);
LAB_026627d0:
        iVar5 = (*(code *)*puVar7)(plVar14,puVar7[1]);
        if (iVar4 < iVar5) {
          plVar14 = *(long **)(lVar13 + 0x10);
          if (plVar14 != (long *)0x0) {
            lVar13 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02662890;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)puVar2,0);
LAB_02662890:
            iVar3 = (*(code *)*puVar7)(plVar14,puVar7[1]);
            lVar13 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
            iVar5 = iVar4;
            if (iVar3 + -1 <= iVar4) {
              iVar5 = iVar3 + -1;
            }
            iVar3 = 0;
            if (-1 < iVar4) {
              iVar3 = iVar5;
            }
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049cba80) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02662904;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049cba80,0);
LAB_02662904:
            pcVar10 = (code *)*puVar7;
            uVar8 = puVar7[1];
LAB_02662a70:
            (*pcVar10)(plVar14,iVar3,uVar8);
            return;
          }
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          else {
            plVar14 = *(long **)(lVar13 + 0x10);
            if (plVar14 == (long *)0x0) goto LAB_02662a8c;
            lVar9 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02662920;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)puVar2,0);
LAB_02662920:
            iVar5 = (*(code *)*puVar7)(plVar14,puVar7[1]);
            if (iVar5 <= iVar3) {
              iVar3 = 0;
            }
          }
          plVar14 = *(long **)(lVar13 + 0x10);
          if (plVar14 != (long *)0x0) {
            lVar9 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02662988;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)puVar2,0);
LAB_02662988:
            iVar5 = (*(code *)*puVar7)(plVar14,puVar7[1]);
            plVar14 = *(long **)(lVar13 + 0x10);
            if (plVar14 != (long *)0x0) {
              lVar9 = *plVar14;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_026629ec;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)puVar2,0);
LAB_026629ec:
              iVar6 = (*(code *)*puVar7)(plVar14,puVar7[1]);
              plVar14 = *(long **)(lVar13 + 0x10);
              if (plVar14 != (long *)0x0) {
                iVar5 = iVar5 - iVar3;
                iVar1 = 0;
                if (iVar5 != 0) {
                  iVar1 = (iVar4 - iVar6) / iVar5;
                }
                lVar13 = *plVar14;
                uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049cba80) {
                      puVar7 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_02662a64;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049cba80,0);
LAB_02662a64:
                pcVar10 = (code *)*puVar7;
                uVar8 = puVar7[1];
                iVar3 = ((iVar4 - iVar6) - iVar1 * iVar5) + iVar3;
                goto LAB_02662a70;
              }
            }
          }
        }
      }
LAB_02662a8c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

