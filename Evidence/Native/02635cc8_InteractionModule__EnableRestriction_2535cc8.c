/* IL2CPP: InteractionModule$$EnableRestriction
void InteractionModule__EnableRestriction (InteractionModule_o* __this, Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$EnableRestriction
   void InteractionModule__EnableRestriction (InteractionModule_o* __this, Il2CppObject* owner,
   const MethodInfo* method); */

void InteractionModule__EnableRestriction_2535cc8(long param_1,long param_2)

{
  if ((bRam0000000004f4bf59 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4bf59 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_1 + 0x48),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}

