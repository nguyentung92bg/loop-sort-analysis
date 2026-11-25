/* IL2CPP: InteractionModule$$OnFingerUpdate
void InteractionModule__OnFingerUpdate (InteractionModule_o* __this, Lean_Touch_LeanFinger_o* finger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$OnFingerUpdate
   void InteractionModule__OnFingerUpdate (InteractionModule_o* __this, Lean_Touch_LeanFinger_o*
   finger, const MethodInfo* method); */

void InteractionModule__OnFingerUpdate_2535b30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_049ca1a0;
  if ((bRam0000000004f4bf57 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca1a0);
    bRam0000000004f4bf57 = 1;
  }
  plVar2 = (long *)thunk_FUN_0222c938(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1);
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar2;
  lVar4 = *(long *)puVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_02635be0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar2,lVar4,1);
LAB_02635be0:
                    /* WARNING: Could not recover jumptable at 0x02635bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
  return;
}

