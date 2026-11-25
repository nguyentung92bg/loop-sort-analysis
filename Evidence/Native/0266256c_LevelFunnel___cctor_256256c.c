/* IL2CPP: LevelFunnel$$.cctor
void LevelFunnel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelFunnel$$.cctor
   void LevelFunnel___cctor (const MethodInfo* method); */

void LevelFunnel___cctor_256256c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_049b4540;
  if ((bRam0000000004f4c135 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6270);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049cba50);
    FUN_021f03f8(PTR_DAT_049cba58);
    FUN_021f03f8(PTR_DAT_049cba60);
    FUN_021f03f8(PTR_DAT_049cba68);
    bRam0000000004f4c135 = 1;
  }
  lVar3 = FUN_021f04e4(*(undefined8 *)puVar2,4);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_049cba50;
      thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_049cba58;
        thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_049cba68;
          thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x30));
          puVar2 = PTR_DAT_049b6270;
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)PTR_DAT_049cba60;
            thunk_FUN_021f190c();
            **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
            thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar3);
            puVar1 = PTR_DAT_049b3bd0;
            *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) =
                 **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
            thunk_FUN_021f190c();
            puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
            *puVar4 = **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8);
            if (iRam0000000005174518 != 0) {
              FUN_023118d0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                           ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
            }
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

