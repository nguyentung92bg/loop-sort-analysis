/* IL2CPP: GlassCarrier$$OnRent
void GlassCarrier__OnRent (GlassCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GlassCarrier$$OnRent
   void GlassCarrier__OnRent (GlassCarrier_o* __this, const MethodInfo* method); */

void GlassCarrier__OnRent_24a4814(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c6678;
  if ((bRam0000000004f4bafd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6680);
    FUN_021f03f8(PTR_DAT_049c6678);
    bRam0000000004f4bafd = 1;
  }
  GameBehaviourBase__OnRent_24f6c1c(param_1,0);
  GameBehaviourBase__RegisterView_object__261a35c(param_1,*(undefined8 *)puVar1);
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 == 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c6680);
    *(undefined8 *)(param_1 + 0xa8) = uStack_28;
    thunk_FUN_021f190c((long *)(param_1 + 0xa8));
    lVar2 = *(long *)(param_1 + 0xa8);
    if (lVar2 == 0) goto LAB_025a48dc;
  }
  if ((*(long *)(lVar2 + 0x110) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar2 + 0x110),0), lVar2 != 0)
     ) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar2,1,0);
    return;
  }
LAB_025a48dc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

