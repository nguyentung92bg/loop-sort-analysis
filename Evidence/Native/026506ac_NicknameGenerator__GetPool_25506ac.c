/* IL2CPP: NicknameGenerator$$GetPool
System_Collections_Generic_List_string__o* NicknameGenerator__GetPool (NicknameGenerator_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NicknameGenerator$$GetPool
   System_Collections_Generic_List_string__o* NicknameGenerator__GetPool (NicknameGenerator_o*
   __this, System_String_o* id, const MethodInfo* method); */

long NicknameGenerator__GetPool_25506ac(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000004f4c078 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cad18);
    bRam0000000004f4c078 = 1;
  }
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x140), lVar3 == 0)) ||
     (lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar3,param_2,*(undefined8 *)PTR_DAT_049cad18), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c14c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4138,0);
    FUN_021f03f8(PTR_DAT_049b4120);
    FUN_021f03f8(PTR_DAT_049b4118);
    bRam0000000004f4c14c = 1;
  }
  plVar7 = (long *)(lVar3 + 0x28);
  lVar4 = *plVar7;
  if (lVar4 == 0) {
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4118);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (uVar5,*(undefined8 *)PTR_DAT_049b4120);
    *(undefined8 *)(lVar3 + 0x28) = uVar5;
    thunk_FUN_021f190c(plVar7,uVar5);
    uVar6 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(lVar3 + 0x20),0);
    if ((uVar6 & 1) == 0) {
      if ((*(long *)(lVar3 + 0x20) == 0) ||
         (auVar9 = System_String__Split_2f802dc(*(long *)(lVar3 + 0x20),0x2c,0,0),
         puVar2 = PTR_DAT_049b4138, lVar3 = auVar9._0_8_, lVar3 == 0)) {
LAB_02664e60:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8(auVar9._0_8_,auVar9._8_8_);
          }
          lVar4 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
          if ((lVar4 == 0) ||
             (lVar4 = System_String__Trim_2f8204c(lVar4,0), auVar9._8_8_ = lVar4,
             auVar9._0_8_ = lVar4, lVar4 == 0)) goto LAB_02664e60;
          if (0 < *(int *)(lVar4 + 0x10)) {
            if (*plVar7 == 0) goto LAB_02664e60;
            auVar9 = FUN_02333498(*plVar7,lVar4,*(undefined8 *)puVar2);
          }
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
    }
    lVar4 = *plVar7;
  }
  return lVar4;
}

