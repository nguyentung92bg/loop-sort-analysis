/* IL2CPP: HopEffect$$Awake
void HopEffect__Awake (HopEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HopEffect$$Awake
   void HopEffect__Awake (HopEffect_o* __this, const MethodInfo* method); */

void HopEffect__Awake_2571e9c(long param_1)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000004f4c1e0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc138);
    bRam0000000004f4c1e0 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (*(long *)(param_1 + 0x28),&uStack_18,*(undefined8 *)PTR_DAT_049bc138);
    *(undefined8 *)(param_1 + 0x60) = uStack_18;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x60));
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x28),0),
       lVar1 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar1,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

