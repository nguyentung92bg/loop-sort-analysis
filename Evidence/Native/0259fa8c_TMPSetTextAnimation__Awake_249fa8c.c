/* IL2CPP: TMPSetTextAnimation$$Awake
void TMPSetTextAnimation__Awake (TMPSetTextAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TMPSetTextAnimation$$Awake
   void TMPSetTextAnimation__Awake (TMPSetTextAnimation_o* __this, const MethodInfo* method); */

void TMPSetTextAnimation__Awake_249fa8c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x548))(plVar1,*(undefined8 *)(*plVar1 + 0x550));
    puVar3 = (undefined8 *)(param_1 + 0x28);
    *puVar3 = uVar2;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                   ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

