/* IL2CPP: RaycastBlockerMonitor$$Block
void RaycastBlockerMonitor__Block (RaycastBlockerMonitor_o* __this, Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RaycastBlockerMonitor$$Block
   void RaycastBlockerMonitor__Block (RaycastBlockerMonitor_o* __this, Il2CppObject* owner, const
   MethodInfo* method); */

void RaycastBlockerMonitor__Block_245bbe0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000004f4b913 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b913 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0255bc54;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_1 + 0xa0),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
  }
  lVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar1 != 0) {
    if ((bRam0000000004f581f8 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a251b8,1,0);
      bRam0000000004f581f8 = 1;
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
      }
      if (pcRam0000000004f582c8 == (code *)0x0) {
        pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
      }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f582c8)(lVar2,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_0255bc54:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

