/* IL2CPP: CarpetCarrierGroupControl.<>c$$<Initialize>b__7_0
int32_t CarpetCarrierGroupControl___c___Initialize_b__7_0 (CarpetCarrierGroupControl___c_o* __this, Carrier_o* left, Carrier_o* right, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupControl.<>c$$<Initialize>b__7_0
   int32_t CarpetCarrierGroupControl___c___Initialize_b__7_0 (CarpetCarrierGroupControl___c_o*
   __this, Carrier_o* left, Carrier_o* right, const MethodInfo* method); */

void CarpetCarrierGroupControl___c___Initialize_b__7_0_2404598
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
               long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fStack_24;
  
  fStack_24 = 0.0;
  if (((param_5 != 0) && (param_6 != 0)) && (lVar2 = *(long *)(param_5 + 0x110), lVar2 != 0)) {
    lVar1 = *(long *)(param_6 + 0x110);
    fVar3 = (float)UnityEngine_Transform__get_position_3c2d540(lVar2,0);
    UnityEngine_Transform__get_position_3c2d540(lVar2,0);
    fStack_24 = fVar3 + param_3;
    if (lVar1 != 0) {
      fVar3 = (float)UnityEngine_Transform__get_position_3c2d540(lVar1,0);
      UnityEngine_Transform__get_position_3c2d540(lVar1,0);
      System_Single__CompareTo_311213c(fVar3 + param_3,&fStack_24,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

