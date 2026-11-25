/* IL2CPP: MainPlaySession$$get_LoopCount
int32_t MainPlaySession__get_LoopCount (MainPlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainPlaySession$$get_LoopCount
   int32_t MainPlaySession__get_LoopCount (MainPlaySession_o* __this, const MethodInfo* method); */

int MainPlaySession__get_LoopCount_24fbbc8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
    iVar3 = MainPlaySession__get_MaxLevelOffset_24fba40();
    if (lVar11 != 0) {
      if ((bRam0000000004f4c137 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049cba70,iVar3,0);
        FUN_021f03f8(PTR_DAT_049cba78);
        bRam0000000004f4c137 = 1;
      }
      uStack_48 = *(undefined8 *)(lVar11 + 0x50);
      uStack_50 = *(undefined8 *)(lVar11 + 0x48);
      uStack_38 = *(undefined8 *)(lVar11 + 0x60);
      uStack_40 = *(undefined8 *)(lVar11 + 0x58);
      iVar4 = CloudPrefsInt__get_Value_24e99c0(&uStack_50,0);
      puVar2 = PTR_DAT_049cba78;
      plVar12 = *(long **)(lVar11 + 0x10);
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049cba78) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02662bbc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049cba78,0);
LAB_02662bbc:
        iVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        if (iVar4 < iVar5) {
          return 1;
        }
        if (iVar3 < 1) {
          iVar3 = 0;
        }
        else {
          plVar12 = *(long **)(lVar11 + 0x10);
          if (plVar12 == (long *)0x0) goto LAB_02662d38;
          lVar8 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02662c3c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar2,0);
LAB_02662c3c:
          iVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
          if (iVar5 <= iVar3) {
            iVar3 = 0;
          }
        }
        plVar12 = *(long **)(lVar11 + 0x10);
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02662ca4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar2,0);
LAB_02662ca4:
          iVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
          plVar12 = *(long **)(lVar11 + 0x10);
          if (plVar12 != (long *)0x0) {
            lVar11 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_02662d08;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar2,0);
LAB_02662d08:
            iVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
            iVar1 = 0;
            if (iVar6 - iVar3 != 0) {
              iVar1 = (iVar4 - iVar5) / (iVar6 - iVar3);
            }
            return iVar1 + 2;
          }
        }
      }
LAB_02662d38:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

