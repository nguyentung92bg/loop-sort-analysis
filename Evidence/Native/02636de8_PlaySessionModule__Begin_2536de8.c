/* IL2CPP: PlaySessionModule$$Begin
void PlaySessionModule__Begin (PlaySessionModule_o* __this, PlaySessionBase_o* session, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlaySessionModule$$Begin
   void PlaySessionModule__Begin (PlaySessionModule_o* __this, PlaySessionBase_o* session, const
   MethodInfo* method); */

void PlaySessionModule__Begin_2536de8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

