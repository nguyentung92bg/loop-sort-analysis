/* IL2CPP: MonitorBase$$Setup
void MonitorBase__Setup (MonitorBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$Setup
   void MonitorBase__Setup (MonitorBase_o* __this, const MethodInfo* method); */

void MonitorBase__Setup_256c4e8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lStack_48;
  
                    /* try { // try from 0266c4e8 to 0276c4eb has its CatchHandler @ 0266c7c8 */
  puVar3 = PTR_DAT_049cbef8;
                    /* try { // try from 0266c4f0 to 0276c4fb has its CatchHandler @ 0266c7c4 */
                    /* try { // try from 0266c4fc to 0276c503 has its CatchHandler @ 0266c7c0 */
  if ((bRam0000000004f4c19a & 1) == 0) {
                    /* try { // try from 0266c51c to 0276c51f has its CatchHandler @ 0266c7b0 */
    FUN_021f03f8(PTR_DAT_049cbf00);
                    /* try { // try from 0266c520 to 0276c53b has its CatchHandler @ 0266c7bc */
    FUN_021f03f8(PTR_DAT_049cbef8);
    FUN_021f03f8(PTR_DAT_049c5a50);
                    /* try { // try from 0266c540 to 0276c54b has its CatchHandler @ 0266c7b8 */
    FUN_021f03f8(PTR_DAT_049cbf08);
    FUN_021f03f8(PTR_DAT_049cbf10);
    FUN_021f03f8(PTR_DAT_049c5a58);
                    /* try { // try from 0266c560 to 0276c62b has its CatchHandler @ 0266c7dc */
    FUN_021f03f8(PTR_DAT_049b6750);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4c19a = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&lStack_48,*(undefined8 *)puVar3);
  plVar10 = (long *)(param_1 + 0x48);
  *plVar10 = lStack_48;
  thunk_FUN_021f190c(plVar10);
  if (*plVar10 != 0) {
    UnityEngine_Canvas__set_worldCamera_3ec8164(*plVar10,*(undefined8 *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x48) != 0) {
      UnityEngine_Canvas__set_planeDistance_3ec74d8(0x3f800000,*(long *)(param_1 + 0x48),0);
      puVar3 = PTR_DAT_049cbf00;
      if (*plVar10 != 0) {
        UnityEngine_Canvas__set_renderMode_3ec6d70(*plVar10,1,0);
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                  (param_1,&lStack_48,*(undefined8 *)puVar3);
        *(long *)(param_1 + 0x50) = lStack_48;
        thunk_FUN_021f190c((long *)(param_1 + 0x50));
        *(undefined1 *)(param_1 + 0x58) = 1;
        puVar3 = PTR_DAT_049cbf10;
        if (*(long *)(param_1 + 0x30) != 0) {
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (*(long *)(param_1 + 0x30),&lStack_48,*(undefined8 *)PTR_DAT_049c5a50);
          lVar7 = lStack_48;
                    /* try { // try from 0266c63c to 0276c6c3 has its CatchHandler @ 0266c7d8 */
          lVar4 = UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c2258
                            (param_1,1,*(undefined8 *)puVar3);
          plVar10 = (long *)(param_1 + 0x68);
          *plVar10 = lVar4;
          thunk_FUN_021f190c(plVar10,lVar4);
          puVar3 = PTR_DAT_049b6750;
          lVar4 = *plVar10;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (0 < (int)uVar1) {
              uVar12 = 0;
              do {
                if (uVar1 <= uVar12) goto LAB_0266c8f8;
                if ((lVar7 == 0) || (plVar10 = *(long **)(lVar7 + 0x50), plVar10 == (long *)0x0))
                goto LAB_0266c8f4;
                lVar6 = *plVar10;
                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                plVar11 = *(long **)(lVar4 + (long)(int)uVar12 * 8 + 0x20);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                      puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                      goto LAB_0266c6e8;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                    /* try { // try from 0266c6c4 to 0276c767 has its CatchHandler @ 0266c3f0 */
                  } while (uVar8 != 0);
                }
                puVar5 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)puVar3,7);
LAB_0266c6e8:
                (*(code *)*puVar5)(plVar10,plVar11,puVar5[1]);
                if (plVar11 == (long *)0x0) goto LAB_0266c8f4;
                (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
                uVar1 = *(uint *)(lVar4 + 0x18);
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (int)uVar1);
            }
            lVar4 = UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c2258
                              (param_1,1,*(undefined8 *)PTR_DAT_049c5a58);
            plVar10 = (long *)(param_1 + 0x70);
            *plVar10 = lVar4;
            thunk_FUN_021f190c(plVar10,lVar4);
            lVar4 = *plVar10;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (0 < (int)uVar1) {
                uVar12 = 0;
                do {
                  if (uVar1 <= uVar12) {
LAB_0266c8f8:
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a8();
                  }
                    /* try { // try from 0266c768 to 0276c773 has its CatchHandler @ 0266c7ac */
                  if ((lVar7 == 0) || (plVar10 = *(long **)(lVar7 + 0x50), plVar10 == (long *)0x0))
                  goto LAB_0266c8f4;
                  lVar6 = *plVar10;
                    /* try { // try from 0266c780 to 0276c78f has its CatchHandler @ 0266c7a8 */
                  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  plVar11 = *(long **)(lVar4 + (long)(int)uVar12 * 8 + 0x20);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                    /* catch() { ... } // from try @ 0266c520 with catch @ 0266c7bc */
                    /* catch() { ... } // from try @ 0266c4fc with catch @ 0266c7c0 */
                    /* catch() { ... } // from try @ 0266c4f0 with catch @ 0266c7c4 */
                    /* catch() { ... } // from try @ 0266c4e8 with catch @ 0266c7c8 */
                        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                        goto LAB_0266c7cc;
                      }
                      uVar8 = uVar8 - 1;
                    /* try { // try from 0266c7a4 to 0276c7a7 has its CatchHandler @ 0266c7d4 */
                      piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 0266c780 with catch @ 0266c7a8
                       try { // try from 0266c7a8 to 0276c7f3 has its CatchHandler @ 0266c3f0 */
                    } while (uVar8 != 0);
                  }
                    /* catch() { ... } // from try @ 0266c768 with catch @ 0266c7ac */
                    /* catch() { ... } // from try @ 0266c51c with catch @ 0266c7b0 */
                    /* catch() { ... } // from try @ 0266c4b4 with catch @ 0266c7b4 */
                  puVar5 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)puVar3,7);
                    /* catch() { ... } // from try @ 0266c540 with catch @ 0266c7b8 */
LAB_0266c7cc:
                    /* catch() { ... } // from try @ 0266c4d0 with catch @ 0266c7cc */
                    /* catch() { ... } // from try @ 0266c47c with catch @ 0266c7d0 */
                    /* catch() { ... } // from try @ 0266c7a4 with catch @ 0266c7d4 */
                    /* catch() { ... } // from try @ 0266c63c with catch @ 0266c7d8 */
                  (*(code *)*puVar5)(plVar10,plVar11,puVar5[1]);
                    /* catch() { ... } // from try @ 0266c560 with catch @ 0266c7dc */
                  if (plVar11 == (long *)0x0) goto LAB_0266c8f4;
                  (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
                  uVar1 = *(uint *)(lVar4 + 0x18);
                    /* try { // try from 0266c7f4 to 0276c80b has its CatchHandler @ 0266c86c */
                  uVar12 = uVar12 + 1;
                } while ((int)uVar12 < (int)uVar1);
              }
              puVar2 = PTR_DAT_049b3b98;
                    /* try { // try from 0266c80c to 0276c85b has its CatchHandler @ 0266c3f0 */
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                        (param_1,&lStack_48,*(undefined8 *)PTR_DAT_049cbf08);
              plVar10 = (long *)(param_1 + 0x60);
              *plVar10 = lStack_48;
              thunk_FUN_021f190c(plVar10);
              lVar4 = *plVar10;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(lVar4,0,0);
              if ((uVar8 & 1) != 0) {
                return;
              }
                    /* try { // try from 0266c85c to 0276c86b has its CatchHandler @ 0266c86c */
              if ((lVar7 != 0) && (plVar11 = *(long **)(lVar7 + 0x50), plVar11 != (long *)0x0)) {
                lVar7 = *plVar11;
                lVar4 = *plVar10;
                    /* catch() { ... } // from try @ 0266c7f4 with catch @ 0266c86c
                       catch() { ... } // from try @ 0266c85c with catch @ 0266c86c */
                    /* try { // try from 0266c870 to 0276c873 has its CatchHandler @ 0266c87c */
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 0266c874 to 0276c87f has its CatchHandler @ 0266c3f0 */
                if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 0266c870 with catch @ 0266c87c */
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                      goto LAB_0266c8b8;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar5 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)puVar3,7);
LAB_0266c8b8:
                (*(code *)*puVar5)(plVar11,lVar4,puVar5[1]);
                plVar10 = (long *)*plVar10;
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0266c8f4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

