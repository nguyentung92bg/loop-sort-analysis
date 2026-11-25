/* IL2CPP: ToggleElement$$Awake
void ToggleElement__Awake (ToggleElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ToggleElement$$Awake
   void ToggleElement__Awake (ToggleElement_o* __this, const MethodInfo* method); */

void ToggleElement__Awake_241ebc4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000004f4b772 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f68);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b772 = 1;
  }
  puVar1 = PTR_DAT_049c2f68;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x100);
    uVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar2,param_1,*(undefined8 *)puVar1,0);
    if (lVar3 != 0) {
      uVar2 = UnityEngine_Events_UnityEvent__GetDelegate_3c32a30(uVar2,uVar2,0);
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if ((bRam0000000004f58b7c & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26d90);
        bRam0000000004f58b7c = 1;
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_02333498(*(long *)(lVar3 + 0x18),uVar2,*(undefined8 *)PTR_DAT_04a26d90);
        *(undefined1 *)(lVar3 + 0x28) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

