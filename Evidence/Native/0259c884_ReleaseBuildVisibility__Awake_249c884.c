/* IL2CPP: ReleaseBuildVisibility$$Awake
void ReleaseBuildVisibility__Awake (ReleaseBuildVisibility_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReleaseBuildVisibility$$Awake
   void ReleaseBuildVisibility__Awake (ReleaseBuildVisibility_o* __this, const MethodInfo* method);
    */

void ReleaseBuildVisibility__Awake_249c884(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  
  if ((bRam0000000004f4bac0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bac0 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 2) {
    lVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b3b98);
    }
    puVar2 = PTR_DAT_049b3b98;
    uVar5 = 0;
    if ((bRam0000000004f584c3 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b3b98,0);
      bRam0000000004f584c3 = 1;
      uVar5 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
      uVar5 = extraout_x1_00;
    }
    puVar2 = PTR_DAT_04a258d0;
    if ((bRam0000000004f584c2 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a258d0,uVar5);
      FUN_021f03f8(PTR_DAT_049b3b98);
      bRam0000000004f584c2 = 1;
    }
    if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
      FUN_02229774();
    }
    uVar5 = 0;
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (pcRam0000000004f58540 == (code *)0x0) {
      pcRam0000000004f58540 = (code *)FUN_021f03bc(&UNK_013bf2e5);
    }
                    /* WARNING: Could not recover jumptable at 0x03d24330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f58540)(0,uVar5);
    return;
  }
  if (iVar1 == 1) {
    lVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar3 == 0) goto LAB_0259c944;
    uVar5 = 0;
  }
  else {
    if (iVar1 != 0) {
      thunk_FUN_02256840(PTR_DAT_049b5000);
      uVar5 = thunk_FUN_0222ca34();
      System_ArgumentOutOfRangeException___ctor_306d788(uVar5,0);
      uVar4 = thunk_FUN_02256840(PTR_DAT_049c63b0);
                    /* WARNING: Subroutine does not return */
      FUN_021f0564(uVar5,uVar4);
    }
    lVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar3 == 0) {
LAB_0259c944:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = 1;
  }
  if ((bRam0000000004f581f8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a251b8,uVar5,0);
    bRam0000000004f581f8 = 1;
  }
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
    }
    if (pcRam0000000004f582c8 == (code *)0x0) {
      pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
    }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f582c8)(lVar6,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

