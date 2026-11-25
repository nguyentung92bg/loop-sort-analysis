/* IL2CPP: LevelSheet$$GetCurrent
LevelSheet_Level_o* LevelSheet__GetCurrent (LevelSheet_o* __this, int32_t maxLevelOffset, int32_t levelOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelSheet$$GetCurrent
   LevelSheet_Level_o* LevelSheet__GetCurrent (LevelSheet_o* __this, int32_t maxLevelOffset, int32_t
   levelOffset, const MethodInfo* method); */

void LevelSheet__GetCurrent_2562700(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4c136 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cba70);
    FUN_021f03f8(PTR_DAT_049cba78);
    FUN_021f03f8(PTR_DAT_049cba80);
    bRam0000000004f4c136 = 1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  iVar3 = CloudPrefsInt__get_Value_24e99c0(&uStack_60,0);
  puVar2 = PTR_DAT_049cba78;
  plVar12 = *(long **)(param_1 + 0x10);
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    iVar3 = iVar3 + param_3;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049cba78) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_026627d0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049cba78,0);
LAB_026627d0:
    iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    if (iVar3 < iVar4) {
      plVar12 = *(long **)(param_1 + 0x10);
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02662890;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar2,0);
LAB_02662890:
        iVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        iVar4 = iVar3;
        if (iVar5 + -1 <= iVar3) {
          iVar4 = iVar5 + -1;
        }
        param_2 = 0;
        if (-1 < iVar3) {
          param_2 = iVar4;
        }
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049cba80) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02662904;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049cba80,0);
LAB_02662904:
        pcVar9 = (code *)*puVar6;
        uVar7 = puVar6[1];
LAB_02662a70:
        (*pcVar9)(plVar12,param_2,uVar7);
        return;
      }
    }
    else {
      if (param_2 < 1) {
        param_2 = 0;
      }
      else {
        plVar12 = *(long **)(param_1 + 0x10);
        if (plVar12 == (long *)0x0) goto LAB_02662a8c;
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02662920;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar2,0);
LAB_02662920:
        iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        if (iVar4 <= param_2) {
          param_2 = 0;
        }
      }
      plVar12 = *(long **)(param_1 + 0x10);
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02662988;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar2,0);
LAB_02662988:
        iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        plVar12 = *(long **)(param_1 + 0x10);
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_026629ec;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar2,0);
LAB_026629ec:
          iVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          plVar12 = *(long **)(param_1 + 0x10);
          if (plVar12 != (long *)0x0) {
            iVar4 = iVar4 - param_2;
            iVar1 = 0;
            if (iVar4 != 0) {
              iVar1 = (iVar3 - iVar5) / iVar4;
            }
            lVar8 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049cba80) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_02662a64;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049cba80,0);
LAB_02662a64:
            pcVar9 = (code *)*puVar6;
            uVar7 = puVar6[1];
            param_2 = ((iVar3 - iVar5) - iVar1 * iVar4) + param_2;
            goto LAB_02662a70;
          }
        }
      }
    }
  }
LAB_02662a8c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02662a8c to 02762b27 has its CatchHandler @ 02662a8c
                       catch() { ... } // from try @ 02662a8c with catch @ 02662a8c
                       catch() { ... } // from try @ 02662bfc with catch @ 02662a8c
                       catch() { ... } // from try @ 02662c34 with catch @ 02662a8c
                       catch() { ... } // from try @ 02662c90 with catch @ 02662a8c
                       catch() { ... } // from try @ 02662cf8 with catch @ 02662a8c */
  FUN_021f06a0();
}

