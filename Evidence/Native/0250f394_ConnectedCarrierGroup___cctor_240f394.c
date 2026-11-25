/* IL2CPP: ConnectedCarrierGroup$$.cctor
void ConnectedCarrierGroup___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectedCarrierGroup$$.cctor
   void ConnectedCarrierGroup___cctor (const MethodInfo* method); */

void ConnectedCarrierGroup___cctor_240f394(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_DAT_049c2aa0;
  puVar1 = PTR_DAT_049c2828;
  if ((bRam0000000004f4b711 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2aa0);
    FUN_021f03f8(PTR_DAT_049c2828);
    bRam0000000004f4b711 = 1;
  }
  uVar3 = UnityEngine_Shader__PropertyToID_3be0c1c(*(undefined8 *)puVar1,0);
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = uVar3;
  return;
}

