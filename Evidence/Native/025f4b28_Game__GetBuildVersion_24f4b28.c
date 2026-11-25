/* IL2CPP: Game$$GetBuildVersion
System_String_o* Game__GetBuildVersion (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Game$$GetBuildVersion
   System_String_o* Game__GetBuildVersion (const MethodInfo* method); */

undefined8 Game__GetBuildVersion_24f4b28(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  lVar1 = Game__GetBuildInfo_24f4a0c();
  uVar2 = System_String__IsNullOrEmpty_2f7c924(lVar1,0);
  if ((uVar2 & 1) == 0) {
    if ((lVar1 == 0) || (lVar1 = System_String__Split_2f802dc(lVar1,0x20,0,0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    puVar3 = (undefined8 *)(lVar1 + 0x20);
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  return *puVar3;
}

