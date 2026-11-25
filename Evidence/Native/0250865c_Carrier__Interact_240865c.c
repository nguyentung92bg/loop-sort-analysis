/* IL2CPP: Carrier$$Interact
void Carrier__Interact (Carrier_o* __this, Lean_Touch_LeanFinger_o* finger, UnityEngine_RaycastHit_o hitInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$Interact
   void Carrier__Interact (Carrier_o* __this, Lean_Touch_LeanFinger_o* finger,
   UnityEngine_RaycastHit_o hitInfo, const MethodInfo* method); */

void Carrier__Interact_240865c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lStack_18;
  
  if ((bRam0000000004f4b6c8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2880);
    bRam0000000004f4b6c8 = 1;
  }
  if (*(char *)(param_1 + 0x1b2) == '\0') {
    plVar6 = *(long **)(param_1 + 0x178);
    lStack_18 = param_1;
    thunk_FUN_021f190c(&lStack_18,param_1);
    lVar1 = lStack_18;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c2880) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02508704;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c2880,0);
LAB_02508704:
    (*(code *)*puVar2)(plVar6,lVar1,puVar2[1]);
  }
  return;
}

