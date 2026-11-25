/* IL2CPP: InteractionModule$$SetRestrictedInteractable
void InteractionModule__SetRestrictedInteractable (InteractionModule_o* __this, IInteractable_o* interactable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$SetRestrictedInteractable
   void InteractionModule__SetRestrictedInteractable (InteractionModule_o* __this, IInteractable_o*
   interactable, const MethodInfo* method); */

void InteractionModule__SetRestrictedInteractable_2535db4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *puVar1 = param_2;
                    /* try { // try from 02635db8 to 02735ddf has its CatchHandler @ 02635a6c */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

