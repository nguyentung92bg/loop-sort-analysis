/* IL2CPP: LiveOpsModule$$Initialize
void LiveOpsModule__Initialize (LiveOpsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$Initialize
   void LiveOpsModule__Initialize (LiveOpsModule_o* __this, const MethodInfo* method); */

void LiveOpsModule__Initialize_2546638(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((bRam0000000004f4c00e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca788);
    FUN_021f03f8(PTR_DAT_049ca790);
    FUN_021f03f8(PTR_DAT_049ca798);
    FUN_021f03f8(PTR_DAT_049ca7a0);
    FUN_021f03f8(PTR_DAT_049ca7a8);
    FUN_021f03f8(PTR_DAT_049ca7b0);
    FUN_021f03f8(PTR_DAT_049ca7b8);
    FUN_021f03f8(PTR_DAT_049ca7c0);
    FUN_021f03f8(PTR_DAT_049c42c0);
    FUN_021f03f8(PTR_DAT_049ca7c8);
    FUN_021f03f8(PTR_DAT_049ca7d0);
    bRam0000000004f4c00e = 1;
  }
  puVar3 = PTR_DAT_049ca7b8;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_049c42c0);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38),uVar4);
    puVar2 = PTR_DAT_049b3bd0;
    lVar8 = *(long *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar3 = PTR_DAT_049ca790;
    uVar4 = System_Type__GetTypeFromHandle_310ebfc(uVar4,0);
    if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
      FUN_021f0574(*(long *)(puVar2 + 0x98));
    }
    uVar4 = System_Enum__GetValues_3134724(uVar4,0);
    uVar4 = System_Linq_Enumerable__Cast___Il2CppFullySharedGenericType__25daab4
                      (uVar4,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_049ca7d0;
    if (lVar8 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                (lVar8,uVar4,*(undefined8 *)PTR_DAT_049ca798);
      lVar8 = *(long *)puVar3;
      lVar9 = *(long *)(param_1 + 0x30);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar3;
      }
      puVar7 = *(undefined8 **)(lVar8 + 0xb8);
      lVar10 = puVar7[1];
      if (lVar10 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_021f0574();
          puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar4 = *puVar7;
        lVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049ca7c0);
        System_Predicate___Il2CppFullySharedGenericType____ctor_29189c0
                  (lVar10,uVar4,*(undefined8 *)PTR_DAT_049ca7c8,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar5 = lVar10;
        thunk_FUN_021f190c(plVar5,lVar10);
      }
      puVar2 = PTR_DAT_049ca7b0;
      puVar3 = PTR_DAT_049ca788;
      if (lVar9 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAll_28d0344
                  (lVar9,lVar10,*(undefined8 *)PTR_DAT_049ca7a0);
        lVar9 = *(long *)(param_1 + 0x30);
        lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
        System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                  (lVar8,param_1,*(undefined8 *)puVar2,0);
        if (lVar9 != 0) {
          lVar10 = *(long *)PTR_DAT_049ca7a8;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentNullException_3111684(0x22);
          }
          iVar1 = *(int *)(lVar9 + 0x18);
          if (1 < iVar1) {
            uVar4 = *(undefined8 *)(lVar9 + 0x10);
            lVar6 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x1b8);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02229718();
            }
            if (*(int *)(lVar6 + 0xe4) == 0) {
              FUN_021f0574();
            }
            System_Collections_Generic_ArraySortHelper___Il2CppFullySharedGenericType___Sort_27b68c4
                      (uVar4,0,iVar1,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x1b0));
          }
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

