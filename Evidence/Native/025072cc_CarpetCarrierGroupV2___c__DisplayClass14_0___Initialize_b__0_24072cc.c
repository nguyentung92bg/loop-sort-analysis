/* IL2CPP: CarpetCarrierGroupV2.<>c__DisplayClass14_0$$<Initialize>b__0
int32_t CarpetCarrierGroupV2___c__DisplayClass14_0___Initialize_b__0 (CarpetCarrierGroupV2___c__DisplayClass14_0_o* __this, Carrier_o* left, Carrier_o* right, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupV2.<>c__DisplayClass14_0$$<Initialize>b__0
   int32_t CarpetCarrierGroupV2___c__DisplayClass14_0___Initialize_b__0
   (CarpetCarrierGroupV2___c__DisplayClass14_0_o* __this, Carrier_o* left, Carrier_o* right, const
   MethodInfo* method); */

void CarpetCarrierGroupV2___c__DisplayClass14_0___Initialize_b__0_24072cc
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               long param_6)

{
  float fVar1;
  float fVar2;
  float fStack_14;
  
  fStack_14 = 0.0;
  if ((param_5 != 0) && (*(long *)(param_5 + 0x110) != 0)) {
    fVar1 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(param_5 + 0x110),0);
    fVar2 = param_3 * *(float *)(param_4 + 0x18);
    fStack_14 = fVar2 + fVar1 * *(float *)(param_4 + 0x10) + param_2 * *(float *)(param_4 + 0x14);
    if ((param_6 != 0) && (*(long *)(param_6 + 0x110) != 0)) {
      fVar1 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(param_6 + 0x110),0);
      System_Single__CompareTo_311213c
                (param_3 * *(float *)(param_4 + 0x18) +
                 fVar1 * *(float *)(param_4 + 0x10) + fVar2 * *(float *)(param_4 + 0x14),&fStack_14,
                 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

