/* IL2CPP: BlockTrigger$$OnDisable
void BlockTrigger__OnDisable (BlockTrigger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTrigger$$OnDisable
   void BlockTrigger__OnDisable (BlockTrigger_o* __this, const MethodInfo* method); */

void BlockTrigger__OnDisable_23e916c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *puVar1 = 0;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

