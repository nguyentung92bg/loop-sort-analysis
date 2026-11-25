/* IL2CPP: BootstrapScope$$<>n__0
void BootstrapScope____n__0 (BootstrapScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BootstrapScope$$<>n__0
   void BootstrapScope____n__0 (BootstrapScope_o* __this, const MethodInfo* method); */

void BootstrapScope____n__0_24f0b00(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uStack_24;
  
                    /* try { // try from 025f0b00 to 026f0b03 has its CatchHandler @ 025f0ca8 */
                    /* try { // try from 025f0b04 to 026f0b07 has its CatchHandler @ 025f0ce8 */
  if ((bRam0000000004f5c50f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b7168,0);
    bRam0000000004f5c50f = 1;
  }
  uVar1 = VContainer_Unity_VContainerSettings__get_DiagnosticsEnabled_3f2bee8();
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x48);
    uVar1 = System_String__IsNullOrEmpty_2f7c924(*puVar5,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = UnityEngine_Object__get_name_3c232a8(param_1,0);
      lVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_24 = UnityEngine_Object__GetInstanceID_3c22f1c(lVar3,0);
      uVar4 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
      uVar2 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049b7168,uVar2,uVar4,0);
      *puVar5 = uVar2;
      thunk_FUN_021f190c(puVar5,uVar2);
    }
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    VContainer_Unity_LifetimeScope__Build_3f2bfc0(param_1);
  }
  return;
}

