/* IL2CPP: SubMonitorBase$$Setup
void SubMonitorBase__Setup (SubMonitorBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SubMonitorBase$$Setup
   void SubMonitorBase__Setup (SubMonitorBase_o* __this, const MethodInfo* method); */

void SubMonitorBase__Setup_2481334(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lStack_38;
  
  if ((bRam0000000004f4ba42 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5a50);
    FUN_021f03f8(PTR_DAT_049c5a58);
    FUN_021f03f8(PTR_DAT_049b6750);
    bRam0000000004f4ba42 = 1;
  }
  puVar2 = PTR_DAT_049c5a58;
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (*(long *)(param_1 + 0x28),&lStack_38,*(undefined8 *)PTR_DAT_049c5a50);
    lVar3 = UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c2258
                      (param_1,1,*(undefined8 *)puVar2);
    plVar8 = (long *)(param_1 + 0x38);
    *plVar8 = lVar3;
    thunk_FUN_021f190c(plVar8,lVar3);
    puVar2 = PTR_DAT_049b6750;
    lVar3 = *plVar8;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          if ((lStack_38 == 0) || (plVar8 = *(long **)(lStack_38 + 0x50), plVar8 == (long *)0x0))
          goto LAB_0258149c;
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          plVar9 = *(long **)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                goto LAB_02581454;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar2,7);
LAB_02581454:
          (*(code *)*puVar4)(plVar8,plVar9,puVar4[1]);
          if (plVar9 == (long *)0x0) goto LAB_0258149c;
          (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      return;
    }
  }
LAB_0258149c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

