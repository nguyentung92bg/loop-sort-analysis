/* IL2CPP: DriftEffect$$Awake
void DriftEffect__Awake (DriftEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DriftEffect$$Awake
   void DriftEffect__Awake (DriftEffect_o* __this, const MethodInfo* method); */

void DriftEffect__Awake_2571484(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam0000000004f4c1dd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4c1dd = 1;
  }
  puVar2 = PTR_DAT_049bc0c8;
  plVar3 = (long *)UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar4 = *(long *)puVar2;
    plVar1 = plVar3;
    if (*plVar3 != lVar4) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x28) = plVar1;
    if (*plVar3 != lVar4) {
      plVar3 = (long *)0x0;
    }
  }
  thunk_FUN_021f190c((long *)(param_1 + 0x28),plVar3);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar3 = (long *)UnityEngine_Transform__get_parent_3c2d470(lVar4,0);
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    if (*plVar3 != *(long *)puVar2) {
      plVar3 = (long *)0x0;
    }
    *(long **)(param_1 + 0x30) = plVar3;
  }
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x30U >> 0xc & 0x3f),
                 (param_1 + 0x30U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

