/* IL2CPP: Extensions$$AddRange<__Il2CppFullySharedGenericType>
void Extensions__AddRange___Il2CppFullySharedGenericType_ (System_Collections_Generic_HashSet_T__o* hashSet, System_Collections_Generic_IEnumerable_T__o* collection, const MethodInfo_25EF224* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026ef524) */
/* WARNING: Removing unreachable block (ram,0x026ef534) */
/* IL2CPP: Extensions$$AddRange<__Il2CppFullySharedGenericType>
   void Extensions__AddRange___Il2CppFullySharedGenericType_
   (System_Collections_Generic_HashSet_T__o* hashSet, System_Collections_Generic_IEnumerable_T__o*
   collection, const MethodInfo_25EF224* method); */

void Extensions__AddRange___Il2CppFullySharedGenericType__25ef224
               (long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long **applStack_70 [3];
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_3 + 0x38);
  if (lVar6 == 0) {
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049b4360);
    lVar6 = *(long *)(param_3 + 0x38);
    if (lVar6 == 0) {
      FUN_02229774(param_3);
      lVar6 = *(long *)(param_3 + 0x38);
    }
  }
                    /* try { // try from 026ef294 to 027ef383 has its CatchHandler @ 026efb78 */
  puVar5 = (undefined8 *)
           ((long)applStack_70 -
           ((ulong)*(uint *)(*(long *)(lVar6 + 0x28) + 0xfc) + 0xf & 0x1fffffff0));
  plStack_58 = (long *)0x0;
  if (param_1 != 0) {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 026ef514 to 027ef51f has its CatchHandler @ 026efa78 */
      if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    else {
      lVar6 = *(long *)(lVar6 + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718(lVar6);
      }
      lVar7 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_026ef314;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(param_2,lVar6,0);
LAB_026ef314:
      plStack_58 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
      puVar2 = PTR_DAT_049b4360;
      applStack_70[2] = (long **)(applStack_70 + 3);
      applStack_70[1] = (long **)0x0;
      while (plVar3 = plStack_58, plStack_58 != (long *)0x0) {
        lVar6 = *plStack_58;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_026ef388;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(plStack_58,*(long *)puVar2,0);
LAB_026ef388:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        plVar3 = plStack_58;
        if ((uVar8 & 1) == 0) {
          if (plStack_58 == (long *)0x0) goto LAB_026ef4c0;
          lVar6 = *plStack_58;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_026ef494;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_026ef47c;
        }
        if (plStack_58 == (long *)0x0) {
          if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_026ef598;
        }
        lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02229718(lVar6);
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
                    /* try { // try from 026ef3fc to 027ef407 has its CatchHandler @ 026efa78 */
              lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
              goto LAB_026ef408;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        lVar6 = FUN_02229a4c(plVar3,lVar6,0);
LAB_026ef408:
        lVar6 = *(long *)(lVar6 + 8);
        plStack_50 = puVar5;
                    /* try { // try from 026ef420 to 027ef42b has its CatchHandler @ 026efb78 */
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar3,applStack_70 + 4,puVar5)
        ;
                    /* try { // try from 026ef430 to 027ef437 has its CatchHandler @ 026efb84 */
        puVar4 = puVar5;
        if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x28)) {
                    /* try { // try from 026ef438 to 027ef513 has its CatchHandler @ 026ef124 */
          puVar4 = (undefined8 *)*puVar5;
        }
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                  (param_1,puVar4,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30));
      }
      if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    goto LAB_026ef598;
  }
  goto LAB_026ef4c0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_026ef47c:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_026ef4b0;
    }
  }
LAB_026ef494:
  puVar5 = (undefined8 *)FUN_02229a4c(plStack_58,*(long *)PTR_DAT_049b3cc8,0);
LAB_026ef4b0:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
LAB_026ef4c0:
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
LAB_026ef598:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

