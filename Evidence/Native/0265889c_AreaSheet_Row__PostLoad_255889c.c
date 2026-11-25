/* IL2CPP: AreaSheet.Row$$PostLoad
void AreaSheet_Row__PostLoad (AreaSheet_Row_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Row$$PostLoad
   void AreaSheet_Row__PostLoad (AreaSheet_Row_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void AreaSheet_Row__PostLoad_255889c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_049cb390;
  puVar1 = PTR_DAT_049cb388;
  if ((bRam0000000004f4c0c3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb398);
    FUN_021f03f8(PTR_DAT_049cb3a0);
    FUN_021f03f8(PTR_DAT_049cb3a8);
    FUN_021f03f8(PTR_DAT_049cb3b0);
    FUN_021f03f8(PTR_DAT_049cb3b8);
    FUN_021f03f8(PTR_DAT_049cb3c0);
    FUN_021f03f8(PTR_DAT_049cb3c8);
    FUN_021f03f8(PTR_DAT_049c3c10);
    FUN_021f03f8(PTR_DAT_049cb3d0);
    FUN_021f03f8(PTR_DAT_049cb3d8);
    FUN_021f03f8(PTR_DAT_049cb388);
    FUN_021f03f8(PTR_DAT_049c39c8);
    FUN_021f03f8(PTR_DAT_049cb3e0);
    FUN_021f03f8(PTR_DAT_049cb3e8);
    FUN_021f03f8(PTR_DAT_049cb3f0);
    FUN_021f03f8(PTR_DAT_049cb3f8);
    FUN_021f03f8(PTR_DAT_049cb390);
    FUN_021f03f8(PTR_DAT_049cb400);
    FUN_021f03f8(PTR_DAT_049cb408);
    bRam0000000004f4c0c3 = 1;
  }
  uStack_54 = 0;
  plVar8 = (long *)thunk_FUN_0224e54c(param_1,*(undefined8 *)
                                               (**(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0
                                                           ) + 0x80));
  lVar9 = *(long *)puVar2;
  lVar13 = *plVar8;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
    lVar9 = *(long *)puVar2;
  }
  puVar12 = *(undefined8 **)(lVar9 + 0xb8);
  lVar14 = puVar12[1];
  if (lVar14 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574();
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar16 = *puVar12;
    lVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb3d0);
    System_Predicate___Il2CppFullySharedGenericType____ctor_29189c0
              (lVar14,uVar16,*(undefined8 *)PTR_DAT_049cb3e0,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = lVar14;
    thunk_FUN_021f190c(plVar8,lVar14);
  }
  puVar3 = PTR_DAT_049cb3d8;
  if (lVar13 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAll_28d0344
              (lVar13,lVar14,*(undefined8 *)PTR_DAT_049cb3c8);
    Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___PostLoad_2985810
              (param_1,param_2,*(undefined8 *)puVar3);
    plVar8 = (long *)thunk_FUN_0224e54c(param_1,*(undefined8 *)
                                                 (**(long **)(*(long *)(*(long *)puVar1 + 0x20) +
                                                             0xc0) + 0x80));
    if (*plVar8 != 0) {
      if (*(int *)(*plVar8 + 0x18) == 0) {
        uVar7 = 0;
      }
      else {
        puVar12 = (undefined8 *)
                  thunk_FUN_0224e54c(param_1,*(undefined8 *)
                                              (**(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0)
                                              + 0x80));
        lVar9 = *(long *)puVar2;
        uVar16 = *puVar12;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          FUN_021f0574();
          lVar9 = *(long *)puVar2;
        }
        puVar3 = PTR_DAT_049cb398;
        puVar12 = *(undefined8 **)(lVar9 + 0xb8);
        lVar13 = puVar12[2];
        if (lVar13 == 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            FUN_021f0574();
            puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar15 = *puVar12;
          lVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb3c0);
          System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                    (lVar13,uVar15,*(undefined8 *)PTR_DAT_049cb3e8,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *plVar8 = lVar13;
          thunk_FUN_021f190c(plVar8,lVar13);
        }
        uVar7 = System_Linq_Enumerable__Min___Il2CppFullySharedGenericType__25de9f0
                          (uVar16,lVar13,*(undefined8 *)puVar3);
      }
      if (param_1 != 0) {
        lVar9 = *(long *)puVar1;
        *(undefined4 *)(param_1 + 0x24) = uVar7;
        puVar12 = (undefined8 *)
                  thunk_FUN_0224e54c(param_1,*(undefined8 *)
                                              (**(long **)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x80));
        lVar9 = *(long *)puVar2;
        uVar16 = *puVar12;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          FUN_021f0574();
          lVar9 = *(long *)puVar2;
        }
        puVar1 = PTR_DAT_049cb3b0;
        puVar12 = *(undefined8 **)(lVar9 + 0xb8);
        lVar13 = puVar12[3];
        if (lVar13 == 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            FUN_021f0574();
            puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar15 = *puVar12;
          lVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb3b8);
          System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                    (lVar13,uVar15,*(undefined8 *)PTR_DAT_049cb3f0,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
          *plVar8 = lVar13;
          thunk_FUN_021f190c(plVar8,lVar13);
        }
        uVar16 = System_Linq_Enumerable__Where___Il2CppFullySharedGenericType__25e3de4
                           (uVar16,lVar13,*(undefined8 *)puVar1);
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          FUN_021f0574(lVar9);
          lVar9 = *(long *)puVar2;
        }
        puVar6 = PTR_DAT_049cb408;
        puVar5 = PTR_DAT_049cb400;
        puVar4 = PTR_DAT_049cb3a8;
        puVar3 = PTR_DAT_049cb3a0;
        puVar1 = PTR_DAT_049c39c8;
        puVar12 = *(undefined8 **)(lVar9 + 0xb8);
        lVar13 = puVar12[4];
        if (lVar13 == 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            FUN_021f0574(lVar9);
            puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar15 = *puVar12;
          lVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb3c0);
          System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                    (lVar13,uVar15,*(undefined8 *)PTR_DAT_049cb3f8,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
          *plVar8 = lVar13;
          thunk_FUN_021f190c(plVar8,lVar13);
        }
        uVar16 = System_Linq_Enumerable__OrderByDescending___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25dec00
                           (uVar16,lVar13,*(undefined8 *)puVar3);
        uVar16 = System_Linq_Enumerable__ToList___Il2CppFullySharedGenericType__25e3b7c
                           (uVar16,*(undefined8 *)puVar4);
        *(undefined8 *)(param_1 + 0x30) = uVar16;
        thunk_FUN_021f190c();
                    /* try { // try from 02658d20 to 02758e37 has its CatchHandler @ 02658d20
                       catch() { ... } // from try @ 02658d20 with catch @ 02658d20
                       catch() { ... } // from try @ 026592a0 with catch @ 02658d20
                       catch() { ... } // from try @ 02659358 with catch @ 02658d20
                       catch() { ... } // from try @ 026593fc with catch @ 02658d20
                       catch() { ... } // from try @ 026594c8 with catch @ 02658d20
                       catch() { ... } // from try @ 02659588 with catch @ 02658d20
                       catch() { ... } // from try @ 026595e8 with catch @ 02658d20
                       catch() { ... } // from try @ 02659620 with catch @ 02658d20
                       catch() { ... } // from try @ 0265967c with catch @ 02658d20
                       catch() { ... } // from try @ 026596a8 with catch @ 02658d20
                       catch() { ... } // from try @ 02659738 with catch @ 02658d20 */
        puVar10 = (undefined4 *)
                  thunk_FUN_0224e54c(param_1,*(long *)(**(long **)(*(long *)(*(long *)puVar1 + 0x20)
                                                                  + 0xc0) + 0x80) + 0x20);
        uStack_54 = *puVar10;
        uVar16 = System_Int32__ToString_30fbaa0(&uStack_54,0);
        uVar16 = System_String__Concat_2f7d424(*(undefined8 *)puVar5,uVar16,*(undefined8 *)puVar6,0)
        ;
        piVar11 = (int *)thunk_FUN_0224e54c(param_1,*(long *)(**(long **)(*(long *)(*(long *)puVar1
                                                                                   + 0x20) + 0xc0) +
                                                             0x80) + 0x20);
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        CloudPrefsBool___ctor_24eafb8(&uStack_80,uVar16,*piVar11 == 0,0,0);
        *(undefined8 *)(param_1 + 0x40) = uStack_78;
        *(undefined8 *)(param_1 + 0x38) = uStack_80;
        *(undefined8 *)(param_1 + 0x50) = uStack_68;
        *(undefined8 *)(param_1 + 0x48) = uStack_70;
        thunk_FUN_021f190c(param_1 + 0x40,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

