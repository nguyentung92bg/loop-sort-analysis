/* IL2CPP: HopEffect$$OnDisable
void HopEffect__OnDisable (HopEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HopEffect$$OnDisable
   void HopEffect__OnDisable (HopEffect_o* __this, const MethodInfo* method); */

void HopEffect__OnDisable_2571f24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x28),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar1,0,0);
    uVar2 = NEON_fmov(0xbf800000,4);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

