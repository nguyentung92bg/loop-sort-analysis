/* IL2CPP: Block$$IsCompatibleWith
bool Block__IsCompatibleWith (Block_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$IsCompatibleWith
   bool Block__IsCompatibleWith (Block_o* __this, Block_o* block, const MethodInfo* method); */

uint Block__IsCompatibleWith_23dcb80(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4b5bf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13b8);
    FUN_021f03f8(PTR_DAT_049c13c0);
    FUN_021f03f8(PTR_DAT_049c13c8);
    FUN_021f03f8(PTR_DAT_049c13e0);
    FUN_021f03f8(PTR_DAT_049c13d8);
    FUN_021f03f8(PTR_DAT_049c13e8);
    bRam0000000004f4b5bf = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_2 == 0) {
LAB_024dcd9c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = ColorType__op_Equality_24f9db0
                    (*(undefined8 *)(param_1 + 0xe4),*(undefined8 *)(param_2 + 0xe4),0);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(param_1 + 0xf0) == 0) goto LAB_024dcd9c;
    if ((*(int *)(*(long *)(param_1 + 0xf0) + 0x18) == 0) || (*(long *)(param_1 + 0x150) == 0)) {
      uVar6 = 0;
    }
    else {
      if (*(long *)(param_2 + 0xf0) == 0) goto LAB_024dcd9c;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_2 + 0xf0),auStack_90,*(undefined8 *)PTR_DAT_049c13d8);
      puVar5 = PTR_DAT_049c13e0;
      puVar4 = PTR_DAT_049c13c8;
      puVar3 = PTR_DAT_049c13c0;
      uStack_58 = uStack_88;
      uStack_48 = uStack_78;
      uStack_50 = uStack_80;
      do {
        do {
          uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_60,*(undefined8 *)puVar3);
          if ((uVar6 & 1) == 0) goto LAB_024dcd80;
          lVar13 = *(long *)puVar4;
          lVar8 = *(long *)(lVar13 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x135);
          lVar9 = lVar8;
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_02229718();
            lVar8 = *(long *)(lVar13 + 0x20);
            uVar2 = *(ushort *)(lVar8 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar8 = FUN_02229718();
          }
          uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                      *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(auStack_90,uVar10,uVar1);
          uVar7 = Block__TryGetFeature_23dc908(param_1,auStack_90[0],&uStack_70);
        } while ((uVar7 & 1) == 0);
        plVar14 = *(long **)(param_1 + 0x150);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar9 = *plVar14;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_024dcd6c;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)puVar5,0);
LAB_024dcd6c:
        uVar7 = (*(code *)*puVar11)(plVar14,param_1,puVar11[1]);
      } while ((uVar7 & 1) == 0);
LAB_024dcd80:
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)PTR_DAT_049c13b8);
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6 & 1;
}

