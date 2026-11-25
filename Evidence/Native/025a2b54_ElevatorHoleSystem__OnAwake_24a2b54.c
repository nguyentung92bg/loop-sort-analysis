/* IL2CPP: ElevatorHoleSystem$$OnAwake
void ElevatorHoleSystem__OnAwake (ElevatorHoleSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHoleSystem$$OnAwake
   void ElevatorHoleSystem__OnAwake (ElevatorHoleSystem_o* __this, const MethodInfo* method); */

void ElevatorHoleSystem__OnAwake_24a2b54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_049c6590;
  puVar1 = PTR_DAT_049c1418;
  if ((bRam0000000004f4baf2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6598);
    FUN_021f03f8(PTR_DAT_049c1418);
    FUN_021f03f8(PTR_DAT_049c6590);
    bRam0000000004f4baf2 = 1;
  }
  SystemBase__OnAwake_2555e24(param_1,0);
  uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  thunk_FUN_021f190c();
  uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x80),uVar3);
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar3 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_049c6598);
    puVar4 = (undefined8 *)(param_1 + 0x88);
    *puVar4 = uVar3;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                   ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

