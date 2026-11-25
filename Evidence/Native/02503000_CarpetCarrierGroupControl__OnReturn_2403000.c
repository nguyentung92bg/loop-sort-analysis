/* IL2CPP: CarpetCarrierGroupControl$$OnReturn
void CarpetCarrierGroupControl__OnReturn (CarpetCarrierGroupControl_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupControl$$OnReturn
   void CarpetCarrierGroupControl__OnReturn (CarpetCarrierGroupControl_o* __this, const MethodInfo*
   method); */

void CarpetCarrierGroupControl__OnReturn_2403000(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f4b6a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2618);
    bRam0000000004f4b6a2 = 1;
  }
  GameBehaviourBase__OnReturn_24f6ea8(param_1,0);
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 != 0) {
    lVar3 = *(long *)PTR_DAT_049c2618;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    uVar2 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(lVar4 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
    }
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

