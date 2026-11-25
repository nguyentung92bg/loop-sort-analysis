/* IL2CPP: InteractionModule$$OnFingerUp
void InteractionModule__OnFingerUp (InteractionModule_o* __this, Lean_Touch_LeanFinger_o* finger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$OnFingerUp
   void InteractionModule__OnFingerUp (InteractionModule_o* __this, Lean_Touch_LeanFinger_o* finger,
   const MethodInfo* method); */

void InteractionModule__OnFingerUp_2535bfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  puVar1 = PTR_DAT_049ca1a0;
  if ((bRam0000000004f4bf58 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca1a0);
    bRam0000000004f4bf58 = 1;
  }
  puVar8 = (undefined8 *)(param_1 + 0x20);
  plVar2 = (long *)thunk_FUN_0222c938(*puVar8,*(undefined8 *)puVar1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    lVar4 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_02635c9c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar2,lVar4,2);
LAB_02635c9c:
    (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
  }
  *puVar8 = 0;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                 ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

