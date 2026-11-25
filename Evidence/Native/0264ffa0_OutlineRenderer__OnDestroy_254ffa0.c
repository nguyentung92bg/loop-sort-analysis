/* IL2CPP: OutlineRenderer$$OnDestroy
void OutlineRenderer__OnDestroy (OutlineRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineRenderer$$OnDestroy
   void OutlineRenderer__OnDestroy (OutlineRenderer_o* __this, const MethodInfo* method); */

void OutlineRenderer__OnDestroy_254ffa0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  puVar3 = PTR_DAT_049caca8;
  if ((bRam0000000004f4c070 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cace0);
    FUN_021f03f8(PTR_DAT_049cace8);
    FUN_021f03f8(PTR_DAT_049caca8);
    FUN_021f03f8(PTR_DAT_049c2458);
    bRam0000000004f4c070 = 1;
  }
  puVar4 = PTR_DAT_049cace0;
  puVar2 = PTR_DAT_049c2458;
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049cace8;
  UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Release_28045e4
            (uVar12,*(undefined8 *)puVar4);
  ppppuVar11 = *(undefined8 *****)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar7 = *(long *)puVar3;
  lVar8 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718(lVar8);
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar8 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    lVar9 = *(long *)(lVar8 + 0x28);
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
    if (lVar9 != 0) {
      (**(code **)(lVar9 + 0x18))
                (*(undefined8 *)(lVar9 + 0x40),ppppuVar11,*(undefined8 *)(lVar9 + 0x28));
    }
    plVar6 = (long *)(lVar8 + 0x40);
    if (*plVar6 == 0) {
      *plVar6 = (long)ppppuVar11;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)plVar6 >> 0xc & 0x3f),
                     ((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
    iVar5 = UnityEngine_Pool_ObjectPool_object___get_CountInactive_2906160
                      (lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x90));
    if (*(int *)(lVar8 + 0x38) <= iVar5) {
      lVar7 = *(long *)(lVar8 + 0x30);
      *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) + -1;
      if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02904734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),ppppuVar11,*(undefined8 *)(lVar7 + 0x28));
        return;
      }
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 != 0) {
      lVar9 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x98);
      lVar7 = tpidr_el0;
      lStack_68 = *(long *)(lVar7 + 0x28);
      lVar15 = *(long *)(*(long *)(lVar9 + 0x20) + 0xc0);
      uVar13 = (ulong)*(uint *)(*(long *)(lVar15 + 0x48) + 0xfc);
      uVar10 = uVar13 + 0xf & 0x1fffffff0;
      plVar6 = (long *)((long)&pppuStack_70 - uVar10);
      lVar14 = (long)plVar6 - uVar10;
      plVar16 = *(long **)(lVar8 + 0x10);
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      pppuStack_70 = ppppuVar11;
      if (plVar16 == (long *)0x0) {
        if (*(long *)(lVar7 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(plVar16 + 3)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          if (-1 < *(int *)(*(long *)(lVar15 + 0x48) + 0x28)) {
            ppppuVar11 = &pppuStack_70;
          }
          func_0x04608620(plVar6,ppppuVar11,uVar13);
          func_0x04608650((long)plVar16 +
                          (ulong)*(uint *)(*plVar16 + 0x104) * (long)(int)uVar1 + 0x20,ppppuVar11,
                          uVar13);
          lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02229718();
          }
          if (*(uint *)(plVar16 + 3) <= uVar1) {
            if (*(long *)(lVar7 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            goto LAB_0233365c;
          }
          FUN_021f03a8(lVar8,(long)plVar16 +
                             (ulong)*(uint *)(*plVar16 + 0x104) * (long)(int)uVar1 + 0x20,plVar6);
        }
        else {
          iVar5 = *(int *)(*(long *)(lVar15 + 0x48) + 0x28);
          if (-1 < iVar5) {
            ppppuVar11 = &pppuStack_70;
          }
          func_0x04608620(plVar6,ppppuVar11,uVar13);
          if (iVar5 < 0) {
            func_0x04608620(lVar14,ppppuVar11,uVar13);
          }
          else {
            lVar14 = *plVar6;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                    (lVar8,lVar14,*(undefined8 *)(lVar15 + 0x70));
        }
        if (*(long *)(lVar7 + 0x28) == lStack_68) {
          return;
        }
      }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

