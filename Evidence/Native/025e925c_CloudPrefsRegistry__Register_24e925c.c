/* IL2CPP: CloudPrefsRegistry$$Register
void CloudPrefsRegistry__Register (ICloudPrefs_o* pref, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsRegistry$$Register
   void CloudPrefsRegistry__Register (ICloudPrefs_o* pref, const MethodInfo* method); */

void CloudPrefsRegistry__Register_24e925c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lStack_28;
  
  puVar1 = PTR_DAT_049c7f20;
  if ((bRam0000000004f4bcab & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
    FUN_021f03f8(PTR_DAT_049b6588);
    FUN_021f03f8(PTR_DAT_049c7f28);
    FUN_021f03f8(PTR_DAT_049c7f30);
    bRam0000000004f4bcab = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c7f28) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025e9328;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(param_1,*(long *)PTR_DAT_049c7f28,0);
LAB_025e9328:
    uVar4 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if (lVar2 != 0) {
      uVar6 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                        (lVar2,uVar4,*(undefined8 *)PTR_DAT_049b6588);
      if ((uVar6 & 1) == 0) {
        return;
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_021f0574();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        FUN_02333498(**(long **)(lVar2 + 0xb8),param_1,*(undefined8 *)PTR_DAT_049c7f30);
        puVar1 = PTR_DAT_049c7f20;
        if ((bRam0000000004f4bcac & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c7f20);
          FUN_021f03f8(PTR_DAT_049c7f38);
          FUN_021f03f8(PTR_DAT_049c7f28);
          bRam0000000004f4bcac = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (cRam0000000004f4bd9b == '\0') {
          FUN_021f03f8(PTR_DAT_049c7f20);
          cRam0000000004f4bd9b = '\x01';
        }
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          FUN_021f0574();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
        if ((lVar2 != 0) &&
           ((**(code **)(lVar2 + 0x18))
                      (*(undefined8 *)(lVar2 + 0x40),&lStack_28,*(undefined8 *)(lVar2 + 0x28)),
           puVar1 = PTR_DAT_049c7f38, lStack_28 != 0)) {
          if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar2 = *param_1;
          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c7f38) {
                puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_025e94c4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_02229a4c(param_1,*(long *)PTR_DAT_049c7f38,0);
LAB_025e94c4:
          uVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
          if ((uVar6 & 1) == 0) {
            lVar2 = *param_1;
            uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c7f28) {
                  puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_025e952c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_02229a4c(param_1,*(long *)PTR_DAT_049c7f28,1);
LAB_025e952c:
            uVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
            if ((uVar6 & 1) != 0) {
              return;
            }
          }
          lVar2 = *param_1;
          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_025e958c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_02229a4c(param_1,*(long *)puVar1,2);
LAB_025e958c:
          (*(code *)*puVar3)(param_1,lStack_28,puVar3[1]);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

