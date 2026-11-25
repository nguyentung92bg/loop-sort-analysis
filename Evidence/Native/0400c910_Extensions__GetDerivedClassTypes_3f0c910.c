/* IL2CPP: Extensions$$GetDerivedClassTypes
UnityEngine_Pool_PooledObject_List_Type___o Extensions__GetDerivedClassTypes (System_Type_o* baseClassType, System_Collections_Generic_List_Type__o** result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$GetDerivedClassTypes
   UnityEngine_Pool_PooledObject_List_Type___o Extensions__GetDerivedClassTypes (System_Type_o*
   baseClassType, System_Collections_Generic_List_Type__o** result, const MethodInfo* method); */

undefined1  [16] Extensions__GetDerivedClassTypes_3f0c910(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  long lStack_68;
  
  if ((bRam0000000004f5c3cf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a39b40);
    FUN_021f03f8(PTR_DAT_04a39b48);
    FUN_021f03f8(PTR_DAT_04a39b50);
    FUN_021f03f8(PTR_DAT_04a39b58);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049ce170);
    bRam0000000004f5c3cf = 1;
  }
  lStack_68 = 0;
  *param_2 = 0;
  thunk_FUN_021f190c(param_2,0);
  puVar2 = PTR_DAT_049b3bd0;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_Type__op_Equality_3117e14(param_1,0,0);
  auVar11 = ZEXT816(0);
  if ((uVar5 & 1) == 0) {
    if (param_1 == 0) {
LAB_0400cc68:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = System_Type__get_IsClass_3119ce0(param_1,0);
    auVar11 = ZEXT816(0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04a39b48 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar11 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                          (param_2,*(undefined8 *)PTR_DAT_04a39b40);
      lVar6 = System_AppDomain__get_CurrentDomain_31446a8(0);
      if ((lVar6 == 0) ||
         (lVar6 = System_AppDomain__GetAssemblies_31446b0(lVar6,0), puVar4 = PTR_DAT_049ce170,
         puVar3 = PTR_DAT_049b5480, lVar6 == 0)) goto LAB_0400cc68;
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar5 = 0;
        uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar5) {
LAB_0400cc64:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar7 = *(long *)puVar3;
          plVar10 = *(long **)(lVar6 + uVar5 * 8 + 0x20);
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_021f0574();
            lVar7 = *(long *)puVar3;
          }
          if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_0400cc68;
          uVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                            (**(long **)(lVar7 + 0xb8),plVar10,&lStack_68,
                             *(undefined8 *)PTR_DAT_04a39b50);
          if ((uVar8 & 1) == 0) {
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lStack_68 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              FUN_021f0574();
              lVar7 = *(long *)puVar3;
            }
            if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_0400cc68;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                      (**(long **)(lVar7 + 0xb8),plVar10,lStack_68,*(undefined8 *)PTR_DAT_04a39b58);
          }
          lVar7 = lStack_68;
          if ((lStack_68 != 0) && (0 < (int)*(ulong *)(lStack_68 + 0x18))) {
            uVar8 = 0;
            uVar9 = *(ulong *)(lStack_68 + 0x18) & 0xffffffff;
            lVar1 = lStack_68 + 0x20;
            do {
              if (uVar9 <= uVar8) goto LAB_0400cc64;
              plVar10 = *(long **)(lVar1 + uVar8 * 8);
              if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar9 = System_Type__op_Inequality_3118ac4(plVar10,0,0);
              if ((uVar9 & 1) != 0) {
                if (plVar10 == (long *)0x0) goto LAB_0400cc68;
                uVar9 = System_Type__get_IsClass_3119ce0(plVar10,0);
                if (((uVar9 & 1) != 0) &&
                   (uVar9 = (**(code **)(*plVar10 + 0x2a8))
                                      (plVar10,param_1,*(undefined8 *)(*plVar10 + 0x2b0)),
                   (uVar9 & 1) != 0)) {
                  if (*param_2 == 0) goto LAB_0400cc68;
                  FUN_02333498(*param_2,plVar10,*(undefined8 *)puVar4);
                }
              }
              uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
    }
  }
  return auVar11;
}

