/* IL2CPP: LevelFunnel$$get_Requested
System_String_o* LevelFunnel__get_Requested (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelFunnel$$get_Requested
   System_String_o* LevelFunnel__get_Requested (const MethodInfo* method); */

undefined8 LevelFunnel__get_Requested_2561c60(void)

{
  undefined *puVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 02661c38 with catch @ 02661c60 */
  puVar1 = PTR_DAT_049b6270;
  if ((bRam0000000004f4c12e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6270);
    bRam0000000004f4c12e = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
}

