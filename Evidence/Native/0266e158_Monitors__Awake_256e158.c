/* IL2CPP: Monitors$$Awake
void Monitors__Awake (Monitors_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$Awake
   void Monitors__Awake (Monitors_o* __this, const MethodInfo* method); */

void Monitors__Awake_256e158(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049c2d48;
  puVar1 = PTR_DAT_049bcdb0;
  if ((bRam0000000004f4c1a7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d48);
    FUN_021f03f8(PTR_DAT_049bcdb0);
    bRam0000000004f4c1a7 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x48) = uStack_28;
  thunk_FUN_021f190c();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = UnityEngine_EventSystems_EventSystem__get_current_3ef3f20(0);
  plVar4 = (long *)(param_1 + 0x50);
  *plVar4 = lVar3;
  thunk_FUN_021f190c(plVar4,lVar3);
  if (*plVar4 != 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*plVar4 + 0x3c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

