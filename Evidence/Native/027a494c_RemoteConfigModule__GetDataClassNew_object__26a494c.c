/* IL2CPP: RemoteConfigModule$$GetDataClassNew<object>
Il2CppObject* RemoteConfigModule__GetDataClassNew_object_ (RemoteConfigModule_o* __this, const MethodInfo_26A494C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RemoteConfigModule$$GetDataClassNew<object>
   Il2CppObject* RemoteConfigModule__GetDataClassNew_object_ (RemoteConfigModule_o* __this, const
   MethodInfo_26A494C* method); */

void RemoteConfigModule__GetDataClassNew_object__26a494c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02229774(param_2);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar1 = *plVar4;
  lVar5 = **(long **)(param_2 + 0x38);
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *(long *)(lVar5 + 0x20)) {
        lVar1 = lVar1 + (long)(int)(*piVar3 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
        goto LAB_027a49cc;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  lVar1 = FUN_02229a4c(plVar4);
LAB_027a49cc:
  lVar1 = thunk_FUN_0220ec70(*(undefined8 *)(lVar1 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x027a49ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(plVar4);
  return;
}

