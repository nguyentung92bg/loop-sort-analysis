/* IL2CPP: TutorialBase$$GetSaveKey
System_String_o* TutorialBase__GetSaveKey (TutorialBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03d2338c) */
/* WARNING: Removing unreachable block (ram,0x03d233ac) */
/* IL2CPP: TutorialBase$$GetSaveKey
   System_String_o* TutorialBase__GetSaveKey (TutorialBase_o* __this, const MethodInfo* method); */

undefined8 TutorialBase__GetSaveKey_2490f8c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  lVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f58519 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a269a8,0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f58519 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
    if (lVar3 != 0) {
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (pcRam0000000004f585b0 == (code *)0x0) {
        pcRam0000000004f585b0 = (code *)FUN_021f03bc(&UNK_013ad7c1);
      }
      (*pcRam0000000004f585b0)(lVar3,&uStack_40);
      uVar2 = UnityEngine_Bindings_OutStringMarshaller__GetStringAndDispose_3c33030
                        (uStack_40,uStack_38,0);
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

