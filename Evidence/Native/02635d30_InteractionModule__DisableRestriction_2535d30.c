/* IL2CPP: InteractionModule$$DisableRestriction
void InteractionModule__DisableRestriction (InteractionModule_o* __this, Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$DisableRestriction
   void InteractionModule__DisableRestriction (InteractionModule_o* __this, Il2CppObject* owner,
   const MethodInfo* method); */

void InteractionModule__DisableRestriction_2535d30(long param_1,long param_2)

{
                    /* try { // try from 02635d44 to 02735d4b has its CatchHandler @ 026364b8 */
  if ((bRam0000000004f4bf5a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4bf5a = 1;
  }
                    /* try { // try from 02635d6c to 02735db7 has its CatchHandler @ 026364bc */
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_02635db0;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x48),param_2,*(undefined8 *)PTR_DAT_049c13f0);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) < 1) {
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
    return;
  }
LAB_02635db0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

