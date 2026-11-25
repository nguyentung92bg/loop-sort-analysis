/* IL2CPP: HexCell$$AxialToOffset
UnityEngine_Vector2Int_o HexCell__AxialToOffset (UnityEngine_Vector3Int_o axial, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HexCell$$AxialToOffset
   UnityEngine_Vector2Int_o HexCell__AxialToOffset (UnityEngine_Vector3Int_o axial, const
   MethodInfo* method); */

ulong HexCell__AxialToOffset_2508224(ulong param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  return param_1 & 0xffffffff | (ulong)(uint)((int)(param_1 >> 0x20) + (iVar1 >> 1)) << 0x20;
}

