/* IL2CPP: Carrier$$CoordinateToIndex
int32_t Carrier__CoordinateToIndex (Carrier_o* __this, UnityEngine_Vector3Int_o coordinate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$CoordinateToIndex
   int32_t Carrier__CoordinateToIndex (Carrier_o* __this, UnityEngine_Vector3Int_o coordinate, const
   MethodInfo* method); */

int Carrier__CoordinateToIndex_2408b80(undefined8 param_1,ulong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = Carrier__get_BlockSize_240813c();
  uVar1 = (uint)param_2;
  if ((param_2 >> 0x20 & 1) != 0) {
    uVar1 = (int)uVar2 + ~(uint)param_2;
  }
                    /* try { // try from 02508bbc to 02608bbf has its CatchHandler @ 02508c38 */
  return uVar1 + ((int)(param_2 >> 0x20) + (int)((ulong)uVar2 >> 0x20) * param_3) * (int)uVar2;
}

