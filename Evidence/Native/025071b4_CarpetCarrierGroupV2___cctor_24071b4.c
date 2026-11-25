/* IL2CPP: CarpetCarrierGroupV2$$.cctor
void CarpetCarrierGroupV2___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupV2$$.cctor
   void CarpetCarrierGroupV2___cctor (const MethodInfo* method); */

void CarpetCarrierGroupV2___cctor_24071b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_DAT_049c2828;
  puVar1 = PTR_DAT_049c27d8;
  if ((bRam0000000004f4b6bc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c27d8);
    FUN_021f03f8(PTR_DAT_049c2828);
    bRam0000000004f4b6bc = 1;
  }
  uVar3 = UnityEngine_Shader__PropertyToID_3be0c1c(*(undefined8 *)puVar2,0);
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar3;
  return;
}

