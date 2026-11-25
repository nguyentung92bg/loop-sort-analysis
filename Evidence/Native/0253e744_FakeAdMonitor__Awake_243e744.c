/* IL2CPP: FakeAdMonitor$$Awake
void FakeAdMonitor__Awake (FakeAdMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FakeAdMonitor$$Awake
   void FakeAdMonitor__Awake (FakeAdMonitor_o* __this, const MethodInfo* method); */

void FakeAdMonitor__Awake_243e744(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f4b839 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3fd8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b839 = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar2,0,0);
    lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                      (param_1,0xb4ce0c4e,0);
    puVar1 = PTR_DAT_049c3fd8;
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x100);
      uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar3,param_1,*(undefined8 *)puVar1,0);
      if (lVar2 != 0) {
        uVar3 = UnityEngine_Events_UnityEvent__GetDelegate_3c32a30(uVar3,uVar3,0);
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if ((bRam0000000004f58b7c & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26d90);
          bRam0000000004f58b7c = 1;
        }
        if (*(long *)(lVar2 + 0x18) != 0) {
          FUN_02333498(*(long *)(lVar2 + 0x18),uVar3,*(undefined8 *)PTR_DAT_04a26d90);
          *(undefined1 *)(lVar2 + 0x28) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

