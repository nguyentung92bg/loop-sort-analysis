/* IL2CPP: LeaderboardSnapshot$$ResetSnapshot
void LeaderboardSnapshot__ResetSnapshot (LeaderboardSnapshot_o* __this, int32_t leaderboardSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardSnapshot$$ResetSnapshot
   void LeaderboardSnapshot__ResetSnapshot (LeaderboardSnapshot_o* __this, int32_t leaderboardSize,
   const MethodInfo* method); */

void LeaderboardSnapshot__ResetSnapshot_2521a70(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puVar10;
  
  if ((bRam0000000004f4be74 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bcd08);
    FUN_021f03f8(PTR_DAT_049c9718);
    FUN_021f03f8(PTR_DAT_049b53e0);
    FUN_021f03f8(PTR_DAT_049c97e8);
    FUN_021f03f8(PTR_DAT_049b5418);
    bRam0000000004f4be74 = 1;
  }
  auVar13 = UniTimer__CreateFromSeconds_3f0f2f4(0x44160000,0);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar13;
  if (*(long *)(param_1 + 0x68) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
              (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_049bcd08);
    puVar3 = PTR_DAT_049c9718;
    puVar10 = PTR_DAT_049b53e0;
    lVar12 = *(long *)(param_1 + 0x60);
    if (999 < param_2) {
      param_2 = 1000;
    }
    if (lVar12 != 0) {
      iVar2 = *(int *)(lVar12 + 0x18) - param_2;
      if (iVar2 != 0 && param_2 <= *(int *)(lVar12 + 0x18)) {
        lVar11 = *(long *)PTR_DAT_049c97e8;
        if (param_2 < 0) {
          System_ThrowHelper__ThrowIndexArgumentOutOfRange_NeedNonNegNumException_3121280(0);
        }
        if (iVar2 < 0) {
          System_ThrowHelper__ThrowArgumentOutOfRangeException_3120ec4(0x10,4,0);
        }
        if (*(int *)(lVar12 + 0x18) - param_2 < iVar2) {
          System_ThrowHelper__ThrowArgumentException_3120a18(0x17,0);
        }
        if (0 < iVar2) {
          iVar1 = *(int *)(lVar12 + 0x18) - iVar2;
          *(int *)(lVar12 + 0x18) = iVar1;
          if (iVar1 - param_2 != 0 && param_2 <= iVar1) {
            System_Array__Copy_3122c7c
                      (*(undefined8 *)(lVar12 + 0x10),iVar2 + param_2,*(undefined8 *)(lVar12 + 0x10)
                       ,param_2,iVar1 - param_2,0);
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0x20) + 0xc0);
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          uVar6 = FUN_021f1190(*(undefined8 *)(lVar11 + 200));
          if ((uVar6 & 1) != 0) {
            puVar7 = *(undefined8 **)(lVar12 + 0x10);
            iVar1 = *(int *)(lVar12 + 0x18);
            if (puVar7 == (undefined8 *)0x0) {
              thunk_FUN_02256840(PTR_DAT_049baa58,iVar1,iVar2,0);
              uVar8 = thunk_FUN_0222ca34();
              uVar9 = thunk_FUN_02256840(PTR_DAT_049bf860);
              System_ArgumentNullException___ctor_30655c4(uVar8,uVar9,0);
            }
            else {
              if (iVar2 < 0) {
                thunk_FUN_02256840(PTR_DAT_049bc690,iVar1,iVar2,0);
                uVar8 = thunk_FUN_0222ca34();
                puVar10 = PTR_DAT_049ee748;
              }
              else {
                iVar4 = FUN_021ff2b0(puVar7,0);
                if (iVar1 < iVar4) {
                  thunk_FUN_02256840(PTR_DAT_049bc690);
                  uVar8 = thunk_FUN_0222ca34();
                  puVar10 = PTR_DAT_049ee750;
                }
                else {
                  iVar5 = System_Array__get_Length_3118750(puVar7);
                  if (iVar1 - iVar4 <= iVar5 - iVar2) {
                    iVar5 = il2cpp_array_element_size(*puVar7);
                    (*(code *)PTR_memset_04a701c8)
                              ((long)puVar7 + (long)iVar5 * (long)(iVar1 - iVar4) + 0x20,0,
                               (long)(iVar5 * iVar2));
                    return;
                  }
                  thunk_FUN_02256840(PTR_DAT_049bc690);
                  uVar8 = thunk_FUN_0222ca34();
                  puVar10 = PTR_DAT_049ee758;
                }
              }
              uVar9 = thunk_FUN_02256840(puVar10);
              System_IndexOutOfRangeException___ctor_30f97dc(uVar8,uVar9,0);
            }
            uVar9 = thunk_FUN_02256840(PTR_DAT_049ee760);
                    /* WARNING: Subroutine does not return */
            FUN_021f0564(uVar8,uVar9);
          }
        }
        return;
      }
      do {
        if (param_2 <= *(int *)(lVar12 + 0x18)) {
          return;
        }
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          FUN_021f0574();
          lVar11 = *(long *)puVar3;
        }
        puVar7 = *(undefined8 **)(lVar11 + 0xb8);
        uStack_48 = puVar7[5];
        uStack_50 = puVar7[4];
        uStack_38 = puVar7[7];
        uStack_40 = puVar7[6];
        uStack_68 = puVar7[1];
        uStack_70 = *puVar7;
        uStack_58 = puVar7[3];
        uStack_60 = puVar7[2];
        FUN_02333498(lVar12,&uStack_70,*(undefined8 *)puVar10);
        lVar12 = *(long *)(param_1 + 0x60);
      } while (lVar12 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

