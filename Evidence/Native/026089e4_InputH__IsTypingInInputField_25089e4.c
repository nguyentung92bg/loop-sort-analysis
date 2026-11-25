/* IL2CPP: InputH$$IsTypingInInputField
bool InputH__IsTypingInInputField (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InputH$$IsTypingInInputField
   bool InputH__IsTypingInInputField (const MethodInfo* method); */

bool InputH__IsTypingInInputField_25089e4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lStack_18;
  
  puVar1 = PTR_DAT_049bcdb0;
  if ((bRam0000000004f4bdac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bcdb0);
    FUN_021f03f8(PTR_DAT_049c8f30);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bdac = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3b98;
  lVar2 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x40);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    if (lVar2 != 0) {
      UnityEngine_GameObject__GetComponentInParent___Il2CppFullySharedGenericType__261ac2c
                (lVar2,&lStack_18,*(undefined8 *)PTR_DAT_049c8f30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(lStack_18,0,0);
      if ((uVar3 & 1) == 0) {
        return false;
      }
      if (lStack_18 != 0) {
        return *(char *)(lStack_18 + 0x260) != '\0';
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  return false;
}

