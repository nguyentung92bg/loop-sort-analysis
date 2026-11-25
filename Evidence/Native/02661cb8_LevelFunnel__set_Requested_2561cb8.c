/* IL2CPP: LevelFunnel$$set_Requested
void LevelFunnel__set_Requested (System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelFunnel$$set_Requested
   void LevelFunnel__set_Requested (System_String_o* value, const MethodInfo* method); */

void LevelFunnel__set_Requested_2561cb8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_049b6270;
  if ((bRam0000000004f4c12f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6270);
    bRam0000000004f4c12f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  *puVar3 = param_1;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

