/* IL2CPP: NicknameGenerator$$BuildCandidate
System_String_o* NicknameGenerator__BuildCandidate (NicknameGenerator_o* __this, System_Collections_Generic_List_string__o* adjectives, System_Collections_Generic_List_string__o* nouns, System_Collections_Generic_List_string__o* prefixes, System_Collections_Generic_List_string__o* suffixes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: NicknameGenerator$$BuildCandidate
   System_String_o* NicknameGenerator__BuildCandidate (NicknameGenerator_o* __this,
   System_Collections_Generic_List_string__o* adjectives, System_Collections_Generic_List_string__o*
   nouns, System_Collections_Generic_List_string__o* prefixes,
   System_Collections_Generic_List_string__o* suffixes, const MethodInfo* method); */

long NicknameGenerator__BuildCandidate_2550718
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined2 uStack_68;
  undefined6 uStack_66;
  
  puVar3 = PTR_DAT_049cad20;
  if ((bRam0000000004f4c074 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9318);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049cad20);
    FUN_021f03f8(PTR_DAT_049ba8a8);
    FUN_021f03f8(PTR_DAT_049cad28);
    FUN_021f03f8(PTR_DAT_049cad30);
    bRam0000000004f4c074 = 1;
  }
  puVar5 = PTR_DAT_049cad30;
  puVar1 = PTR_DAT_049b5480;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049cad28;
  puVar2 = PTR_DAT_049c9318;
  uVar6 = NicknameGenerator__PickLocale_2550c18();
  uVar7 = System_String__Concat_2f72b28(*(undefined8 *)puVar5,uVar6,0);
  uVar7 = NicknameGenerator__GetPool_25506ac(param_1,uVar7);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
            (uVar7,&uStack_68,*(undefined8 *)puVar2);
  lVar9 = CONCAT62(uStack_66,uStack_68);
  uVar6 = System_String__Concat_2f72b28(*(undefined8 *)puVar4,uVar6,0);
  uVar6 = NicknameGenerator__GetPool_25506ac(param_1,uVar6);
  Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
            (uVar6,&uStack_68,*(undefined8 *)puVar2);
  lVar8 = CONCAT62(uStack_66,uStack_68);
  fVar11 = (float)UnityEngine_Random__get_value_3c11d1c(0);
  if (fVar11 < _UNK_013aa5f0) {
    return lVar9;
  }
  lVar10 = lVar9;
  if (_UNK_013aa838 <= fVar11) {
    if (_UNK_013aa4fc <= fVar11) {
      if (fVar11 < _UNK_013aa394) goto LAB_026508a0;
      if (_UNK_013aa5a4 <= fVar11) {
        if (fVar11 < _UNK_013aa974) {
          if (lVar8 != 0) {
            uStack_68 = System_String__get_Chars_2f7736c(lVar8,0,0);
            lVar8 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x88),&uStack_68);
LAB_02650a38:
            lVar9 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049ba8a8,lVar9,lVar8,0);
            return lVar9;
          }
          goto LAB_02650c14;
        }
        if (fVar11 < _UNK_013aa770) {
          if (lVar9 != 0) {
            uStack_68 = System_String__get_Chars_2f7736c(lVar9,0,0);
            lVar9 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x88),&uStack_68);
            goto LAB_02650a38;
          }
          goto LAB_02650c14;
        }
        if (_UNK_013aa59c <= fVar11) {
          if (fVar11 < _UNK_013aa3a4) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar6 = *(undefined8 *)puVar2;
            param_4 = param_2;
LAB_02650ab0:
            Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4(param_4,&uStack_68,uVar6);
            uVar6 = *(undefined8 *)puVar2;
            param_5 = param_3;
            lVar10 = CONCAT62(uStack_66,uStack_68);
LAB_02650ac4:
            Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4(param_5,&uStack_68,uVar6);
            lVar8 = CONCAT62(uStack_66,uStack_68);
          }
          else {
            if (fVar11 < _UNK_013aa444) {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                FUN_021f0574();
              }
              Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
                        (param_2,&uStack_68,*(undefined8 *)puVar2);
              lVar9 = CONCAT62(uStack_66,uStack_68);
              Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
                        (param_3,&uStack_68,*(undefined8 *)puVar2);
              lVar10 = CONCAT62(uStack_66,uStack_68);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar6 = NicknameGenerator__Number_2550d58();
              goto LAB_026508fc;
            }
            if (_UNK_013aa92c <= fVar11) {
              if (_UNK_013aa7bc <= fVar11) {
                if (_UNK_013aa8c0 <= fVar11) {
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar6 = *(undefined8 *)puVar2;
                  goto LAB_02650ab0;
                }
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar6 = *(undefined8 *)puVar2;
                goto LAB_02650ac4;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                FUN_021f0574();
              }
              Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
                        (param_4,&uStack_68,*(undefined8 *)puVar2);
              lVar10 = CONCAT62(uStack_66,uStack_68);
              lVar8 = lVar9;
            }
            else {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                FUN_021f0574();
              }
              Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
                        (param_3,&uStack_68,*(undefined8 *)puVar2);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                FUN_021f0574();
              }
              lVar8 = NicknameGenerator__Number_2550d58();
              lVar10 = CONCAT62(uStack_66,uStack_68);
            }
          }
          goto LAB_026508a0;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar6 = NicknameGenerator__Number_2550d58();
        lVar10 = lVar8;
      }
      else {
        if (lVar9 == 0) {
LAB_02650c14:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar9 = System_String__ToLowerInvariant_2f81e54(lVar9,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar3);
        }
        lVar10 = NicknameGenerator__Sep_2550eac();
        if (lVar8 == 0) goto LAB_02650c14;
        uVar6 = System_String__ToLowerInvariant_2f81e54(lVar8,0);
      }
    }
    else {
      if (lVar9 == 0) goto LAB_02650c14;
      lVar9 = System_String__ToLowerInvariant_2f81e54(lVar9,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar3);
      }
      lVar10 = NicknameGenerator__Sep_2550eac();
      uVar6 = NicknameGenerator__Number_2550d58();
    }
LAB_026508fc:
    lVar9 = System_String__Concat_2f7d424(lVar9,lVar10,uVar6,0);
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar8 = NicknameGenerator__Number_2550d58();
LAB_026508a0:
    lVar9 = System_String__Concat_2f72b28(lVar10,lVar8,0);
  }
  return lVar9;
}

