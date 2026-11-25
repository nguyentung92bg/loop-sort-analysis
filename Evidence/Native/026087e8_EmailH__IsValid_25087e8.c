/* IL2CPP: EmailH$$IsValid
bool EmailH__IsValid (System_String_o* email, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailH$$IsValid
   bool EmailH__IsValid (System_String_o* email, const MethodInfo* method); */

bool EmailH__IsValid_25087e8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x30;
  
  if ((bRam0000000004f4bda9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3f70);
    bRam0000000004f4bda9 = 1;
  }
  uVar2 = System_String__IsNullOrWhiteSpace_2f7c940(param_1,0);
  if ((uVar2 & 1) != 0) {
    return false;
  }
  if ((param_1 != 0) &&
     (lVar3 = System_String__Trim_2f8204c(param_1,0), puVar1 = PTR_DAT_049c3f70, lVar3 != 0)) {
    if (0xfe < *(int *)(lVar3 + 0x10)) {
      return false;
    }
    lVar4 = *(long *)PTR_DAT_049c3f70;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 != 0) {
      if (lVar3 == 0) {
        thunk_FUN_02256840(PTR_DAT_049baa58,0,0);
        uVar5 = thunk_FUN_0222ca34();
        uVar6 = thunk_FUN_02256840(PTR_DAT_049d8940);
        System_ArgumentNullException___ctor_30655c4(uVar5,uVar6,0);
        uVar6 = thunk_FUN_02256840(PTR_DAT_04a0b958);
                    /* WARNING: Subroutine does not return */
        FUN_021f0564(uVar5,uVar6);
      }
      if ((*(byte *)(lVar4 + 0x20) >> 6 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(lVar3 + 0x10);
      }
      if (lVar3 == 0) {
        thunk_FUN_02256840(PTR_DAT_049baa58,0,uVar7);
        uVar5 = thunk_FUN_0222ca34();
        uVar6 = thunk_FUN_02256840(PTR_DAT_049d8940);
        System_ArgumentNullException___ctor_30655c4(uVar5,uVar6,0);
        uVar6 = thunk_FUN_02256840(PTR_DAT_04a0b960);
                    /* WARNING: Subroutine does not return */
        FUN_021f0564(uVar5,uVar6);
      }
      lVar3 = System_Text_RegularExpressions_Regex__Run_36efc90
                        (lVar4,1,0xffffffff,lVar3,0,*(undefined4 *)(lVar3 + 0x10),uVar7,in_x7,
                         unaff_x30,unaff_x19);
      return lVar3 == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

