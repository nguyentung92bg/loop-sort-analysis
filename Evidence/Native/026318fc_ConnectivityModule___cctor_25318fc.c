/* IL2CPP: ConnectivityModule$$.cctor
void ConnectivityModule___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectivityModule$$.cctor
   void ConnectivityModule___cctor (const MethodInfo* method); */

void ConnectivityModule___cctor_25318fc(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_049b4540;
  if ((bRam0000000004f4bf28 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9f68);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049c9f70);
    FUN_021f03f8(PTR_DAT_049c9f78);
    FUN_021f03f8(PTR_DAT_049c9f80);
    bRam0000000004f4bf28 = 1;
  }
  lVar2 = FUN_021f04e4(*(undefined8 *)puVar1,3);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_049c9f70;
      thunk_FUN_021f190c((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_049c9f80;
        thunk_FUN_021f190c((undefined8 *)(lVar2 + 0x28));
        puVar1 = PTR_DAT_049c9f68;
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_049c9f78;
          thunk_FUN_021f190c();
          **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
          uVar3 = *(ulong *)(*(long *)puVar1 + 0xb8);
          if (iRam0000000005174518 != 0) {
            FUN_023118d0(1L << (uVar3 >> 0xc & 0x3f),(uVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

