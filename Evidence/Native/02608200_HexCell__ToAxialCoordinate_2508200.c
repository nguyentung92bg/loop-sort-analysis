/* IL2CPP: HexCell$$ToAxialCoordinate
UnityEngine_Vector3Int_o HexCell__ToAxialCoordinate (HexCell_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HexCell$$ToAxialCoordinate
   UnityEngine_Vector3Int_o HexCell__ToAxialCoordinate (HexCell_o* __this, const MethodInfo*
   method); */

undefined1  [16] HexCell__ToAxialCoordinate_2508200(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = *(ulong *)(param_1 + 0xa8);
  iVar3 = (int)uVar4;
  iVar1 = iVar3;
  if (iVar3 < 0) {
    iVar1 = iVar3 + 1;
  }
                    /* try { // try from 02608210 to 02708363 has its CatchHandler @ 02608210
                       catch() { ... } // from try @ 02608210 with catch @ 02608210
                       catch() { ... } // from try @ 026083d0 with catch @ 02608210
                       catch() { ... } // from try @ 026083fc with catch @ 02608210
                       catch() { ... } // from try @ 02608478 with catch @ 02608210
                       catch() { ... } // from try @ 026084a4 with catch @ 02608210
                       catch() { ... } // from try @ 026084c8 with catch @ 02608210 */
  uVar2 = (int)(uVar4 >> 0x20) - (iVar1 >> 1);
  auVar5._8_4_ = -uVar2 - iVar3;
  auVar5._0_8_ = uVar4 & 0xffffffff | (ulong)uVar2 << 0x20;
  auVar5._12_4_ = 0;
  return auVar5;
}

