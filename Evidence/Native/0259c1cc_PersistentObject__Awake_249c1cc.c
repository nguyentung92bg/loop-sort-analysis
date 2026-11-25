/* IL2CPP: PersistentObject$$Awake
void PersistentObject__Awake (PersistentObject_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PersistentObject$$Awake
   void PersistentObject__Awake (PersistentObject_o* __this, const MethodInfo* method); */

void PersistentObject__Awake_249c1cc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4babc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4babc = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  if ((bRam0000000004f584e0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a269a8,0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049cd390);
    bRam0000000004f584e0 = 1;
  }
  puVar1 = PTR_DAT_049b3b98;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    if (lVar3 == 0) {
      UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
                (lVar2,*(undefined8 *)PTR_DAT_049cd390,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (pcRam0000000004f58550 == (code *)0x0) {
      pcRam0000000004f58550 = (code *)FUN_021f03bc(&UNK_013cf604);
    }
                    /* WARNING: Could not recover jumptable at 0x03d24768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f58550)(lVar3);
    return;
  }
  UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
            (0,*(undefined8 *)PTR_DAT_049cd390,0);
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

