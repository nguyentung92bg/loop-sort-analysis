/* IL2CPP: AreasMonitor$$SetState
void AreasMonitor__SetState (AreasMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t state, bool animate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AreasMonitor$$SetState
   void AreasMonitor__SetState (AreasMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o*
   view, int32_t state, bool animate, const MethodInfo* method); */

void AreasMonitor__SetState_24373c8(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 auStack_3c [4];
  int iStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4b801 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3be8);
    FUN_021f03f8(PTR_DAT_049c3bf0);
    bRam0000000004f4b801 = 1;
  }
  iStack_38 = 0;
  auStack_3c[0] = 0;
  if (*(long *)(param_1 + 200) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 200),param_2,&iStack_38,*(undefined8 *)PTR_DAT_049c3be8);
    if (((uVar1 & 1) == 0) || (iStack_38 != param_3)) {
      if (*(long *)(param_1 + 200) == 0) goto LAB_025374f0;
      iStack_34 = param_3;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 200),param_2,&iStack_34,*(undefined8 *)PTR_DAT_049c3bf0);
      if ((param_3 == -0x344e7b76) && ((param_4 & 1) != 0)) {
        auStack_3c[0] = AreasMonitor__PlayUnlock_24376fc(param_1,param_2);
        Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_3c,0);
      }
      else {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (param_2,param_3,0);
        if ((param_3 == -0x6c2414ab) && ((param_4 & 1) != 0)) {
          AreasMonitor__PlayComplete_24377ac(_UNK_013aa848,param_1,param_2);
        }
      }
    }
    return;
  }
LAB_025374f0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

